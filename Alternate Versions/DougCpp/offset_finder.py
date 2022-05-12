"""
Script that is responsible for looking through our SDK and determining
all of the offsets we specify automatically. Can that pass the output file
into the SoT ESP Framework
@Author https://github.com/DougTheDruid
@Source https://github.com/DougTheDruid/SoT-Python-Offset-Finder
@Framework https://github.com/DougTheDruid/SoT-ESP-Framework
For community support, please contact me on Discord: DougTheDruid#2784
"""
import json
import re


ATHENA = "SDK\\Athena_Classes.h"
ENGINE = "SDK\\Engine_Classes.h"
ATHENA_AI = "SDK\\AthenaAI_Classes.h"
ENGINE_STRUCT = "SDK\\Engine_Structs.h"
ATHENA_STRUCT = "SDK\\Athena_structs.h"


def get_offset(file_name, title, memory_object):
    """
    Opens the file the offset lives within, then reads through the lines within
    the file until we find the offset in hex.
    :param file_name: The file name where the offset lives within
    :param title: The title of the primary object which contains the value we
    want to pull data from
    :param memory_object: The data name from a parent object we want to pull
    the offset from
    :return: The int-converted version of the offset for a specific data field
    out of a parent object
    """
    past_header = False
    with open(file_name) as file_to_check:
        for line in file_to_check.readlines():
            if title == line.replace("\n", ""):
                past_header = True
            if past_header:
                #  This regex looks for a leading space, our property name,
                #  and a trailing semicolon
                if re.search(f"\s{memory_object};", line):
                    offset = line.split("// ")[1].split("(")[0]
                    return int(offset, 0)
            if past_header and line == '\n':  # reached end of property list
                raise ValueError(
                    f"Unable to find property {memory_object} in {title[3:]}."
                    f" Check your property name is correct."
                )

        raise ValueError(
            f'Unable to find header {title} in {file_name}. '
            'Check your header line is correct.'
        )


if __name__ == '__main__':
    """
    We build a dictionary which contains all offset data, then save the 
    information into an offset file.
    """

    output = {
        "AActor.actorId": 24,
        "AActor.rootComponent": get_offset(ENGINE, "// Class Engine.Actor", "RootComponent"),
        "APlayerState.PlayerName": get_offset(ENGINE, "// Class Engine.PlayerState", "PlayerName"),
        "UGameInstance.LocalPlayers": get_offset(ENGINE, "// Class Engine.GameInstance", "LocalPlayers"),
        "ULocalPlayer.PlayerController": get_offset(ENGINE, "// Class Engine.Player", "PlayerController"),
        "UWorld.OwningGameInstance": get_offset(ENGINE, "// Class Engine.World", "OwningGameInstance"),
        "UWorld.PersistentLevel": get_offset(ENGINE, "// Class Engine.World", "PersistentLevel"),
        "APlayerController.CameraManager": get_offset(ENGINE, "// Class Engine.PlayerController", "PlayerCameraManager"),
        "APlayerCameraManager.CameraCache": get_offset(ENGINE, "// Class Engine.PlayerCameraManager", "CameraCache"),
        "FCameraCacheEntry.FMinimalViewInfo": get_offset(ENGINE_STRUCT, "// ScriptStruct Engine.CameraCacheEntry", "POV"),
    }
    with open("../../offsets.json", "w+") as outfile:
        outfile.write(json.dumps(output, indent=2, sort_keys=True))