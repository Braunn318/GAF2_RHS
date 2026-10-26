#define CLASSNAME(prefix,camo) prefix##_##camo
#define GLUE2(a,b) a##b
#define GLUE3(a,b,c) a##b##c
#define STRINGIFY(s) #s
#define EXPAND_AND_QUOTE(x) STRINGIFY(x)
#define FACTION_ID QUOTE(SIDEPRFX##_##CAMO)
#define CLASS_GROUP(name) SIDEPRFX##_##CAMO##_##name
#define VEH(name) QUOTE(SIDEPRFX##_##name##_##CAMO)

class West {
#define SIDEPRFX B_GAF2
#define SIDE_TAG 1
#define CAMO flk



    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Flecktarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
    };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
    };


    #undef CAMO
    #define CAMO trp
       class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
        };
    };
#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG

class Indep {
#define SIDEPRFX I_GAF2
#define SIDE_TAG 2
#define CAMO flk
    class CLASSNAME(SIDEPRFX,CAMO) {
       name = "[Germany] (Flecktarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
        };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
        };

    #undef CAMO
    #define CAMO trp
        class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
         };
    };
#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG

class East {
#define SIDEPRFX O_GAF2
#define SIDE_TAG 0
#define CAMO flk

    class CLASSNAME(SIDEPRFX,CAMO) {
       name = "[Germany] (Flecktarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
        };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
        };

    #undef CAMO
    #define CAMO trp
        class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";

        #include "CfgGroups_Infantry.hpp"
        #include "CfgGroups_KSK.hpp"
        #include "CfgGroups_Support.hpp"
        #include "CfgGroups_Naval.hpp"
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        #include "CfgGroups_Armored.hpp"
        #include "CfgGroups_Artillery.hpp"
         };
    };

#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG




    /*

#undef SIDEPRFX##_##CAMO
#define SIDEPRFX##_##CAMO SIDEPRFX##_##CAMO
    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";

        #include "CfgGroups_Infantry_mlt.hpp"
        #include "CfgGroups_KSK_mlt.hpp"
        #include "CfgGroups_Support_mlt.hpp"
        #include "CfgGroups_Naval_mlt.hpp"
        #include "CfgGroups_Motorized_mlt.hpp"
        #include "CfgGroups_Mechanized_mlt.hpp"
        #include "CfgGroups_Armored_mlt.hpp"
        #include "CfgGroups_Artillery_mlt.hpp"
    };

  };
*/
