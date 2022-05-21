"""
Alternative version of offset finder with support for a special offset config.
Also, this version supports searching over other SDK dumps that have a slightly different format.

Requirements:
- python 3.6+ (tested on 3.9.10)
- pyyaml (tested on 6.0)
"""
__author__ = 'Cavybox'
__version__ = 'v1.1.1'

import json
import logging
import re
import sys
from collections import Counter
from pathlib import Path  # excellent replacement of os.path
from typing import Dict

import yaml  # pip install pyyaml

search_dir = Path(r'../../SDKs/CPP-SDK')  # You can redefine SDK path.
config_file = Path(r'config.yaml')
# The default save syntax is yaml, but if you specify '.json' postfix, the serialization will automatically be json
output_file = Path('output', 'offsets.json')  # ./output/offsets.json (you can set own)

# If fields with the repeated names are found in the class dump, you will see a message about this,
# and the class will not be processed. You can set False, but be careful: the finder may get the wrong values.
enable_unique_class_field_names_check = True

log = logging.getLogger(__name__)
# It is assumed that the text of the class fields will be located before the first occurrence of "\n\n".
class_find_pattern = r'^[\w ]*\b(?:class|struct) \w?{class_name}\b.*(?:\n.*)+?\n\n'
# ".{0, 10}" is used to filter out sequences e.g. " : 1" or "[0x10]" after field name.
class_field_regex = re.compile(r'(\w+)(?:|\[.+]| : \d+);?\s+// ([x0-9a-fA-F]+)')

# Different SDK dumps have different naming style of files (e.g. athena_struct.h vs athena_structs.h)
structs_dump_file_regex = re.compile(r'(\w+)_(structs?)\.h', re.IGNORECASE)

# Load config dict from yaml-serialized str
find_this_offsets: Dict[str, Dict[str, Dict[str, str]]] = yaml.load(
    config_file.read_text(encoding='utf-8'), Loader=yaml.FullLoader
)


def get_repeated_fields_error(raw_fields, class_text: str):
    """Gives information about which fields of which class have been repeated."""
    count_repeated_names = Counter(i[0] for i in raw_fields)
    repeated = '\n'.join(
        f"{count} times: {name}" for name, count in count_repeated_names.most_common() if count > 1)
    return (f"The SDK dump class contains fields with the same names.\n"
            f"{class_text.splitlines(keepends=False)[0]}\n"
            f"Repeated fields:\n{repeated}\n")


def get_class_offsets(class_text: str) -> Dict[str, int]:
    """Extracts class field offsets from the SDK dump of this class."""
    raw_fields = class_field_regex.findall(class_text)
    class_fields = {field_name: int(hex_offset, 0) for field_name, hex_offset in raw_fields}
    if enable_unique_class_field_names_check:
        assert len(raw_fields) == len(class_fields), get_repeated_fields_error(raw_fields, class_text)
    return class_fields


def get_sdk_file_path(filename):
    """Get dump file path or look for its alternatives if applicable"""
    file_path = search_dir / filename
    if file_path.exists():
        return file_path

    # We can find an alternative filename if it is a struct dump.
    struct_match = structs_dump_file_regex.match(filename)
    if struct_match is None:
        return None

    # e.g. athena_structs.h -> athena_struct.h or athena_struct.h -> athena_structs.h
    alt_filename = f"{struct_match.group(1)}_struct{'' if struct_match.group(2).endswith('s') else 's'}.h"
    file_path = search_dir / alt_filename

    return file_path if file_path.exists() else None


def get_sdk_file_offsets(filename):
    """Extracts offsets from the SDK dump file according to the general configuration."""
    file_path = get_sdk_file_path(filename)
    if file_path is None:
        log.warning(f'Cannot find {filename}')
        return {}

    file_text = file_path.read_text()
    to_find = find_this_offsets[filename]
    output_offsets = {}

    for class_anchor, fields_config in to_find.items():
        # Find the text of the class in the file according to the pattern.
        class_text = re.findall(class_find_pattern.format(class_name=re.escape(class_anchor)), file_text, re.MULTILINE)
        if not class_text:
            log.warning(f"Cannot find '{class_anchor}' in {file_path}")
            continue
        assert len(class_text) == 1, 'Only one class is expected to be found.'

        try:
            class_offsets = get_class_offsets(class_text[0])
        except AssertionError as err:
            print(err, file=sys.stderr)
            # If enable_unique_class_field_names_check set to true, skip class processing with non-unique field names.
            continue
        prefix = fields_config.get('_prefix')
        for offset_key, field_name in fields_config.items():
            if isinstance(offset_key, str) and offset_key.startswith('_'):
                # We have reserved the underscore prefix for internal use (e.g. for the _prefix field)
                continue
            if prefix is not None:
                # If we specified a class "_prefix" field, then all offset keys will be in this format.
                offset_key = prefix + field_name
            try:
                output_offsets[offset_key] = class_offsets[field_name]
            except KeyError:
                log.warning(f'Cannot find {field_name} offset in {class_anchor}')

    return output_offsets


if __name__ == '__main__':
    print(f'Finder version: {__version__}')
    # SDK Generator is incapable of pulling this automatically, may need to fix if you have issues
    global_offsets = {
        "Actor.actorId": 24,  # The ID number associated with an actor type
        "SceneComponent.ActorCoordinates": 0x12c,  # Currently located at SceneComponent.RelativeScale3D+0xC
    }

    for f_name in find_this_offsets.keys():
        file_offsets = get_sdk_file_offsets(f_name)
        expected_len = len(global_offsets) + len(file_offsets)
        global_offsets.update(file_offsets)

        if len(global_offsets) != expected_len:
            log.warning(
                f'Some offsets from {f_name} {list(file_offsets.keys())} have an existing offset key!'
                f'It will be redefined. Known keys: {list(global_offsets.keys())}'
            )

    # Create output dir if it doesn't exist.
    output_file.parent.mkdir(parents=True, exist_ok=True)

    # Use json serializer if '.json' file format is specified
    dump_func = json.dumps if output_file.name.endswith('.json') else yaml.dump
    output_file.write_text(dump_func(global_offsets, indent=2, sort_keys=True), encoding='utf-8')

    print(f'Successfully found {len(global_offsets)} offsets.')
