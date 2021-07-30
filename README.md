# PAKPatch
PAKPatch is a plugin which alters Rockstar Games vision of loading configuration files.

Manhunt uses ManHunt.pak (only on PC) to load all configuration data, this is a binary file with simple
XOR encryption. Extracting this file will not make the game load raw files, instead, they will be loaded
from the archive. A workaround for this is to have an empty file, which forces the game to look 
for any extracted files.

This plugin changes the order of loading .ini files, if a file exists in a raw state - it will be loaded first,
then .pak will be checked second.

# Installation

PAKPatch requires [Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader/releases).

Download **Ultimate-ASI-Loader.zip** and extract it to your game folder.
Rename dinput8.dll to ddraw.dll.

Download PAKPatch.zip from Releases section and extract it to your game folder.
