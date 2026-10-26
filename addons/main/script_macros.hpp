#include "/x/cba/addons/main/script_macros_common.hpp"
#include "/z/gaf2/addons/main/basicDefines_A3.hpp"
#include "/z/gaf2/addons/main/basicDefines_custom.hpp"
#include "/z/gaf2/addons/main/macros_units.hpp"
#include "/z/gaf2/addons/main/macros_vehicles.hpp"
#include "/z/gaf2/addons/main/macros_ace_compat.hpp"


#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
