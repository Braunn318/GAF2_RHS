@echo off
ECHO Starting texHeaders.bin generation for GAF2 addons...

:: Change to Arma 3 Tools Binarize directory
cd /d "E:\SteamLibrary\steamapps\common\Arma 3 Tools\Binarize"

:: Run binarize -texheaders for each addon
ECHO Processing air...
binarize -texheaders P:\z\gaf2\addons\air "P:\z\gaf2\addons\air" *.paa

ECHO Processing air_ec135_compat...
binarize -texheaders P:\z\gaf2\addons\air_ec135_compat "P:\z\gaf2\addons\air_ec135_compat" *.paa

ECHO Processing air_f35_compat...
binarize -texheaders P:\z\gaf2\addons\air_f35_compat "P:\z\gaf2\addons\air_f35_compat" *.paa

ECHO Processing armored...
binarize -texheaders P:\z\gaf2\addons\armored "P:\z\gaf2\addons\armored" *.paa

ECHO Processing avs...
binarize -texheaders P:\z\gaf2 "P:\z\gaf2" *.paa

ECHO Processing cars...
binarize -texheaders P:\z\gaf2\addons\cars "P:\z\gaf2\addons\cars" *.paa

ECHO Processing gear...
binarize -texheaders P:\z\gaf2\addons\gear "P:\z\gaf2\addons\gear" *.paa

ECHO Processing main...
binarize -texheaders P:\z\gaf2\addons\main "P:\z\gaf2\addons\main" *.paa

ECHO texHeaders.bin generation complete.
pause