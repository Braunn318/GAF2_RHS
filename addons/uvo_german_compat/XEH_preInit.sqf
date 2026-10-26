#include "script_component.hpp"

// Add the GAF2 factions to the German Voice Pack's voice ("GermanVoice", registered by uvo_german as
// GERMANVOICE). This is Unit Voice's own API for extra factions - UVO_fnc_register [voiceName, factions] -
// so the pack's config and its own faction list stay untouched.
// Units of these factions get the German lines when they spawn (UVO compares factions case-insensitively).
["GERMANVOICE", [
    "B_GAF2_flk", "B_GAF2_mlt", "B_GAF2_trp",
    "I_GAF2_flk", "I_GAF2_mlt", "I_GAF2_trp",
    "O_GAF2_flk", "O_GAF2_mlt", "O_GAF2_trp"
]] call UVO_fnc_register;
