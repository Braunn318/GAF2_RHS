//class EventHandlers;
class B_Soldier_F;
class B_soldier_UAV_F;
class B_Soldier_GL_F;
class B_medic_F;
class B_Soldier_AR_F;  
class B_Soldier_M_F;
class B_engineer_F;
class B_soldier_exp_F;
class B_soldier_AT_F;
class B_soldier_AA_F;
class B_Soldier_TL_F;
class B_Soldier_SL_F;
class B_officer_F;
class B_crew_F;
class B_Helipilot_F;
class B_Pilot_F;



// Rifleman base (inherits from vanilla rifleman)
class B_GAF2_Rifleman_Base : B_Soldier_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

//UAV Operator base
class B_GAF2_UAV_Base : B_soldier_UAV_F
{
    scope = 0;
    scopeCurator = 0;
    class EventHandlers;
};

// Grenadier base
class B_GAF2_Grenadier_Base : B_Soldier_GL_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Medic base (inherits medical abilities, ACE medic)
class B_GAF2_CLS_Base : B_medic_F 
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
    attendant = 1;
    ace_medical_medicClass = 1; // ACE advanced medic
};
/*
// Medic base (inherits medical abilities, ACE medic)
class B_GAF2_Medic_Base : B_medic_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
    attendant = 1;
    ace_medical_medicClass = 2; // ACE advanced medic
};
*/
// MachineGunner base
class B_GAF2_MachineGunner_Base : B_Soldier_AR_F 
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Marksman base
class B_GAF2_Marksman_Base : B_Soldier_M_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Engineer base (ACE engineer)
class B_GAF2_Engineer_Base : B_engineer_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
    ace_isEngineer = 1;
    ace_repair_engineer = 1;
};

// EXplosive Specialist base (ACE engineer)
class B_GAF2_exp_Base : B_soldier_exp_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
    ace_isEngineer = 1;
    ace_repair_engineer = 1;
};


// AT Soldier base
class B_GAF2_AT_Base : B_soldier_AT_F
{
class EventHandlers;
scope = 0;
scopeCurator = 0;
};

// AA Soldier base
class B_GAF2_AA_Base : B_soldier_AA_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Teamleader base
class B_GAF2_Teamleader_Base : B_Soldier_TL_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Squadleader base
class B_GAF2_Squadleader_Base : B_Soldier_SL_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

// Officer base
class B_GAF2_Officer_Base : B_officer_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

//Crewman Base
class B_GAF2_Crew_Base : B_crew_F
{
 //   class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

//Helipilot Base
class B_GAF2_HeliPilot_Base : B_Helipilot_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

//Jetpilot Base
class B_GAF2_JetPilot_Base : B_Pilot_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};

//KSK

class B_Diver_F;
class B_diver_TL_F;
class B_diver_exp_F;
class B_recon_F;
class B_recon_LAT_F;
class B_recon_TL_F;
class B_Recon_Sharpshooter_F;
class B_recon_medic_F;
class B_recon_exp_F;
class B_sniper_F;
class B_spotter_F;

class B_GAF2_Diver_Base : B_Diver_F
{
 //   class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_DiverTL_Base : B_diver_TL_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_DiverEXP_Base : B_diver_exp_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_recon_Base : B_recon_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_reconAT_Base : B_recon_LAT_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_reconTL_Base : B_recon_TL_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_recon_Marksman_Base : B_Recon_Sharpshooter_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_reconCLS_Base : B_recon_medic_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
    attendant = 1;
    ace_medical_medicClass = 2; // ACE advanced medic
};
class B_GAF2_reconEXP_Base : B_recon_exp_F
{
    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_reconSniper_Base : B_sniper_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
class B_GAF2_reconSpotter_Base : B_spotter_F
{
//    class EventHandlers;
    scope = 0;
    scopeCurator = 0;
};
