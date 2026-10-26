#include "script_component.hpp"

class CfgPatches
{
#include "cfgPatches.hpp"
};

//Weapons//

class CfgWeapons
{	

class SMA_ELCAN_SPECTER_TAN_RDS;

    class gaf2_optic_Elcan: SMA_ELCAN_SPECTER_TAN_RDS {
        displayName = "G95A1 Elcan Optic";
        author = "braun";
        scope = 2;
        // CBA Joint Rails compatibility (references the asdg_OpticRail slot)
        class asdg_offset {
            offset[] = {0, 0, 0}; // Default zero offset; adjust if your model needs positioning tweaks (e.g., {0.1, 0.05, 0})
            // No compatibleItems needed here—it's for the attachment declaring slot support
        };
    };

};
