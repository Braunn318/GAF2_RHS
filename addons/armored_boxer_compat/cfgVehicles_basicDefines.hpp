class Hawks_GTK_Boxer_RCH155_Sand;
class Hawks_GTK_Boxer_RCH155;
class Hawks_GTK_Boxer_Medical_Sand;
class Hawks_GTK_Boxer_Medical;
class Hawks_GTK_Boxer_IFV_Sand;
class Hawks_GTK_Boxer_IFV;
class Hawks_GTK_Boxer_GMG_Sand;
class Hawks_GTK_Boxer_GMG;
class Hawks_GTK_Boxer_HMG;
class Hawks_GTK_Boxer_HMG_Sand;

// GTK Boxer (HMG) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_HMG_base_Fleck : Hawks_GTK_Boxer_HMG
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "GTK Boxer (HMG)";
    crew = "B_GAF2_Crew_flk";
    typicalCargo[] = {"B_GAF2_Crew_flk"};
};

// GTK Boxer (HMG) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_HMG_base_Tropen : Hawks_GTK_Boxer_HMG_Sand
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_TRP";
    displayName = "GTK Boxer (HMG)";
    crew = "B_GAF2_Crew_trp";
    typicalCargo[] = {"B_GAF2_Crew_trp"};
};

// GTK Boxer (GMG) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_GMG_base_Fleck : Hawks_GTK_Boxer_GMG
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "GTK Boxer (GMG)";
    crew = "B_GAF2_Crew_flk";
    typicalCargo[] = {"B_GAF2_Crew_flk"};
};

// GTK Boxer (GMG) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_GMG_base_Tropen : Hawks_GTK_Boxer_GMG_Sand
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_TRP";
    displayName = "GTK Boxer (GMG)";
    crew = "B_GAF2_Crew_trp";
    typicalCargo[] = {"B_GAF2_Crew_trp"};
};

// GTK Boxer (IFV) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_IFV_base_Fleck : Hawks_GTK_Boxer_IFV
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "GTK Boxer (IFV)";
    crew = "B_GAF2_Crew_flk";
    typicalCargo[] = {"B_GAF2_Crew_flk"};
};

// GTK Boxer (IFV) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_IFV_base_Tropen : Hawks_GTK_Boxer_IFV_Sand
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_TRP";
    displayName = "GTK Boxer (IFV)";
    crew = "B_GAF2_Crew_trp";
    typicalCargo[] = {"B_GAF2_Crew_trp"};
};

// Exposes the source vehicle's Turrets so the GAF2 versions can set their own gunners.
class B_GAF2_Boxer_Medical_base_Fleck_import : Hawks_GTK_Boxer_Medical
{
    scope = 0;
    scopeCurator = 0;
    class Turrets;
};
// GTK Boxer (Medical) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_Medical_base_Fleck : B_GAF2_Boxer_Medical_base_Fleck_import
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "GTK Boxer (Medical)";
    crew = "B_GAF2_Crew_flk";
    typicalCargo[] = {"B_GAF2_Crew_flk"};
    class Turrets : Turrets
    {
        class MedicTurret;
    };
};

// Exposes the source vehicle's Turrets so the GAF2 versions can set their own gunners.
class B_GAF2_Boxer_Medical_base_Tropen_import : Hawks_GTK_Boxer_Medical_Sand
{
    scope = 0;
    scopeCurator = 0;
    class Turrets;
};
// GTK Boxer (Medical) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_Medical_base_Tropen : B_GAF2_Boxer_Medical_base_Tropen_import
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_TRP";
    displayName = "GTK Boxer (Medical)";
    crew = "B_GAF2_Crew_trp";
    typicalCargo[] = {"B_GAF2_Crew_trp"};
    class Turrets : Turrets
    {
        class MedicTurret;
    };
};

// GTK Boxer (RCH 155) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_RCH155_base_Fleck : Hawks_GTK_Boxer_RCH155
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = "GTK Boxer (RCH 155)";
    crew = "B_GAF2_Crew_flk";
    typicalCargo[] = {"B_GAF2_Crew_flk"};
};

// GTK Boxer (RCH 155) - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class B_GAF2_Boxer_RCH155_base_Tropen : Hawks_GTK_Boxer_RCH155_Sand
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_TRP";
    displayName = "GTK Boxer (RCH 155)";
    crew = "B_GAF2_Crew_trp";
    typicalCargo[] = {"B_GAF2_Crew_trp"};
};
