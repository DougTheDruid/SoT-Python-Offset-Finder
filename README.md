# SoT-Python-Offset-Finder
Python-version to pull SoT Offsets from SDK files with notes

## What is this?
https://github.com/DougTheDruid/SoT-ESP-Framework relies on an "offset.json" file to determine the 
memory offsets to pull data from memory. The memory offsets are stored within the SoT SDK files under
their respective parent objects. So instead of hard-coding them or trying to build them outselves, we 
utilize this helper program to build the file for us, given we have an up-to-date SDK dump for the game.
This program simply offers a more simple structure to keep our hack working as expected. If you need 
assistance with the code, please reach out at the below discord community server.

## How to Use
Clone this repo, then within the folder created, load in the current SoT SDK into an "SDK" folder,
ensure the `offset_finder.py` global variables are pointing to the correct paths (at the top of the file),
and simply "run" the offset finder script.

## Where to get the latest SDK dump
I have personally used two external providers to get the latest SDK dump:
https://github.com/pubgsdk/SoT-SDK

https://github.com/MadCatzAno/Sot-SDK

I am currently investigating how to create a dump of my own, so it can be maintained with the rest of these
repositories. If you may be able to help, please contact me via our community discord server: 
https://discord.com/invite/2rRvQjhg7n