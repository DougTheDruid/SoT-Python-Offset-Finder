"""
@Author https://github.com/DougTheDruid
@Source https://github.com/DougTheDruid/SoT-Python-Offset-Finder
For community support, please join our Discord: https://discord.gg/2rRvQjhg7n
"""

import json

ATHENA = "SDK\\SoT_Athena_classes.hpp"
ENGINE = "SDK\\SoT_Engine_classes.hpp"
ATHENA_AI = "SDK\\SoT_AthenaAI_classes.hpp"


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
            if title in line:
                past_header = True
            if past_header:
                if memory_object in line:
                    offset = line.split("// ")[1].split("(")[0]
                    return int(offset, 0)


if __name__ == '__main__':
    """
    We build a dictionary which containts all offset data 
    """
    
    output = {
        "AActor.actorId": 24,
        "AActor.rootComponent": get_offset(ENGINE, "// Class Engine.Actor", "RootComponent"),
        "APlayerState.PlayerName": get_offset(ENGINE, "// Class Engine.PlayerState", "PlayerName"),
        "UGameInstance.LocalPlayers": get_offset(ENGINE, "// Class Engine.GameInstance", "LocalPlayers"),
        "ULocalPlayer.PlayerController": get_offset(ENGINE, "// Class Engine.Player", "PlayerController"),
        "UWorld.OwningGameInstance": get_offset(ENGINE, "// Class Engine.World", "OwningGameInstance"),
        "UWorld.PersistentLevel": get_offset(ENGINE, "// Class Engine.World", "PersistentLevel")
    }
    with open("offsets.json", "w+") as outfile:
        outfile.write(json.dumps(output, indent=2, sort_keys=True))