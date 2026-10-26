
//Define OPFOR FACTION
#define SIDEPRFX O_GAF2
#define SIDE_TAG 0
//DEFINE CAMO to Flecktarn
#define CAMO flk//pick flk,mlt or trp
#define ID_WDL_DES Wdl//pick WDL or DES, modifies Identity and cfgGlasses (green or tan goggles,shemaghs,facemasks etc.)
#define CLR_OLI_TAN Olive//pick Olive or Tan
#define CLR_BAG rgr//pick rgr, cbr or sgg
#define CLR_WEAP Blk//pick Blk or Tan
#define CLR_MAG PMAG//pick PMAG or PMAG_Tan
#define BWA_CAMO Fleck//pick Fleck, Tropen or Multi

#include "def_camo.hpp" //Defines all the items, which need to change camo or colour


#include "cfgVehicles_soldiers.hpp" //All defined values are run on all units here

//UNDEFINE CAMO from Flecktarn, so it can be defined again to other camo
#include "undef_camo.hpp"
//DEFINE CAMO AGAIN to Multitarn
#define CAMO mlt
#define ID_WDL_DES Wdl
#define CLR_OLI_TAN Olive
#define CLR_BAG sgg
#define CLR_WEAP Tan
#define CLR_MAG PMAG_Tan
#define BWA_CAMO Fleck

#include "def_camo.hpp" //Redefines all the items, which need to change camo or colour, now to different camo
#include "cfgVehicles_soldiers.hpp" //All newly defined values are run on all units here

#include "undef_camo.hpp"

//DEFINE CAMO AGAIN to Tropentarn
#define CAMO trp
#define ID_WDL_DES Des
#define CLR_OLI_TAN Tan
#define CLR_BAG cbr
#define CLR_WEAP Tan
#define CLR_MAG PMAG_Tan
#define BWA_CAMO Tropen

#include "def_camo.hpp"
#include "cfgVehicles_soldiers.hpp"

#include "undef_camo.hpp"

#undef SIDEPRFX
#undef SIDE_TAG
