"""
@Author https://github.com/DougTheDruid
@Source https://github.com/DougTheDruid/SoT-Python-Offset-Finder
For community support, please contact me on Discord: DougTheDruid#2784
"""

import json


ATHENA = "SDK/Athena_classes.json"
ENGINE = "SDK/Engine_classes.json"
ATHENA_AI = "SDK/AthenaAI_classes.json"


def get_offset(file_name, title, memory_object):
    """
    Opens the file the offset lives within, then reads through the lines within
    the file until we find the offset.
    :param file_name: The file name where the offset lives within
    :param title: The title of the primary object which contains the value we
    want to pull data from
    :param memory_object: The data name from a parent object we want to pull
    the offset from
    :return: The offset for a specific data field out of a parent object
    """
    with open(file_name) as file_to_check:
        sdk_file = json.load(file_to_check)
        class_item = sdk_file.get(title)
        object_info = class_item.get('Objects').get(memory_object)
        return object_info.get('Offset')


if __name__ == '__main__':
    """
    We build a dictionary which containts all offset data
    """
    
    output = {
        "AActor.actorId": 24,
        "AActor.rootComponent": get_offset(ENGINE, "Class Engine.Actor", "RootComponent"),
        "APlayerState.PlayerName": get_offset(ENGINE, "Class Engine.PlayerState", "PlayerName"),
        "UGameInstance.LocalPlayers": get_offset(ENGINE, "Class Engine.GameInstance", "LocalPlayers"),
        "ULocalPlayer.PlayerController": get_offset(ENGINE, "Class Engine.Player", "PlayerController"),
        "UWorld.OwningGameInstance": get_offset(ENGINE, "Class Engine.World", "OwningGameInstance"),
        "UWorld.PersistentLevel": get_offset(ENGINE, "Class Engine.World", "PersistentLevel")
    }
    with open("offsets.json", "w+") as outfile:
        outfile.write(json.dumps(output, indent=2, sort_keys=True))