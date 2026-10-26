class gaf2_air_typhoon_compat
{
    units[] =
    {
        "B_GAF2_Typhoon_flk",
        "B_GAF2_Typhoon_mlt",
        "B_GAF2_Typhoon_trp",
        "I_GAF2_Typhoon_flk",
        "I_GAF2_Typhoon_mlt",
        "I_GAF2_Typhoon_trp",
        "O_GAF2_Typhoon_flk",
        "O_GAF2_Typhoon_mlt",
        "O_GAF2_Typhoon_trp"
    };
    weapons[] = {};
    requiredVersion = 2.20;
    requiredAddons[] =
    {
        "gaf2_air",
        "pf_typhoon"
    };
    skipWhenMissingDependencies = 1; // addon silently stays off when the source mod is not loaded
    author = "braun";
};
