#include "script_component.hpp"
#include "macros_local.hpp"

class CfgPatches
{
    #include "cfgPatches.hpp"
};

class CfgEditorCategories
{
    #include "cfgEditorCategories.hpp"
};

class CfgVehicles
{
    #include "cfgVehicles_basicDefines.hpp"
    #include "def_const.hpp"

#include "macroveh_define_blufor.hpp"
#include "macroveh_define_indfor.hpp"
#include "macroveh_define_opfor.hpp"

    #include "undef_const.hpp"
};

// Boxer squads in the GAF2 "Mechanized" groups (gaf2_units is in requiredAddons, so this merges into it)
class CfgGroups
{
    #include "cfgGroups.hpp"
};
