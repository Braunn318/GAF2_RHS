class CfgPatches
{
#include "CfgPatches.hpp"
};

#include "script_component.hpp"

class CfgVehicles 
{
//#include "cfgVehicles_soldiersOLD.hpp"
//#include "cfgVehicles_soldiers_KSK.hpp"

//Macroed soldiers. Macros keep everything clean and easy to edit
#include "def_const.hpp" //Defines equipment which cas constant value and does not change with camo
#include "cfgVehicles_soldiers_basicDefines.hpp"

#include "macro_define_blufor.hpp"
#include "macro_define_indfor.hpp"
#include "macro_define_opfor.hpp"

#include "undef_const.hpp" //Undefines equipment which cas constant value and does not change with camo

};

class cfgGroups
{
#include "cfgGroups.hpp"
};
