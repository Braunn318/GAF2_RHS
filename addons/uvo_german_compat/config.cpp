#include "script_component.hpp"

// German Voice Pack (Workshop 3789849590, patch uvo_german) for the Unit Voice-Overs mod:
// gives all GAF2 factions the German voice lines. Skipped when the voice pack is not loaded.
class CfgPatches
{
    class gaf2_uvo_german_compat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.20;
        requiredAddons[] =
        {
            "gaf2_main",
            "uvo_main",
            "uvo_german"
        };
        skipWhenMissingDependencies = 1;
        author = "braun";
    };
};

#include "CfgEventHandlers.hpp"
