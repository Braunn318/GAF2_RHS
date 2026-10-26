class B_PF_Typhoon_F;

// Eurofighter Typhoon - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Typhoon_base : B_PF_Typhoon_F
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "Eurofighter Typhoon";
    crew = "B_GAF2_Jetpilot_flk";
    typicalCargo[] = {"B_GAF2_Jetpilot_flk"};
    hiddenSelectionsTextures[] = {"\PF\pf_typhoon\data\Airframe_co.paa"};
    textureList[] = {"Luftwaffe", 1};
};
