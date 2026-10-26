//Define BLUFOR SIDE
#define SIDEPRFX I_GAF2
#define SIDE_TAG 2
//DEFINE CAMO to Flecktarn

//Defines camo values
#define CAMO flk//pick flk,mlt or trp
#define CLR_WEAP Blk//pick Blk or Tan
#define CLR_MAG PMAG//pick PMAG or PMAG_Tan
#define BWA_CAMO Fleck//pick Fleck, Tropen or Multi

#include "def_camo.hpp" //Defines all the items, which need to change camo or colour

#include "cfgVehicles_macrounits.hpp" //All defined values are run on all units here

//UNDEFINE CAMO from Flecktarn, so it can be defined again to other camo
#include "undef_camo.hpp"
//DEFINE CAMO AGAIN to Multitarn
#define CAMO mlt
#define CLR_WEAP Tan
#define CLR_MAG PMAG_Tan
#define BWA_CAMO Tropen

#include "def_camo.hpp" //Redefines all the items, which need to change camo or colour, now to different camo
#include "cfgVehicles_macrounits.hpp" //All defined values are run on all units here

#include "undef_camo.hpp"

//DEFINE CAMO AGAIN to Tropentarn
#define CAMO trp
#define CLR_WEAP Tan
#define CLR_MAG PMAG_Tan
#define BWA_CAMO Tropen

#include "def_camo.hpp"
#include "cfgVehicles_macrounits.hpp" //All defined values are run on all units here

#include "undef_camo.hpp"
#undef SIDEPRFX
#undef SIDE_TAG
