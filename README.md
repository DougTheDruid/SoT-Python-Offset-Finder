# SoT-Python-Offset-Finder
https://github.com/DougTheDruid/SoT-ESP-Framework relies on an "offset.json" file to determine the 
memory offsets to pull data from memory. The memory offsets are stored within the SoT SDK files under
their respective parent objects. So instead of hard-coding them or trying to build them outselves, we 
utilize this helper program to build the file for us, given we have an up-to-date SDK dump for the game.
This program simply offers a more simple structure to keep our hack working as expected. If you need 
assistance with the code, **please contact me on Discord: DougTheDruid#2784**

## How to Use
Clone this repo, then within the folder created, load in the current SoT SDK into an "SDK" folder if it is not
up to date,  ensure the `offset_finder.py` global variables are pointing to the correct paths (at the top 
of the file), and simply "run" the offset finder script.

As you develop your version of the framework further, you can update the dictionary being built in this
file to automatically pull the offsets you are utilizing. You will primarily utilize the three SDK files 
highlighted in the global variables.

## Where to get the latest SDK dump
I have personally used two external providers to get the latest SDK dump:
https://github.com/pubgsdk/SoT-SDK

https://github.com/MadCatzAno/Sot-SDK

Note: The above files are "C++" versions of the SDK dump, this offset finder utilizes a slightly modified JSON SDK dump
to organize the data in a clean fashion. I personally am able to create full SDK dumps for the moment, 
and will try to update the major three as I have time. For logic to parse C++ SDK dumps, look at the history of this
repo.

