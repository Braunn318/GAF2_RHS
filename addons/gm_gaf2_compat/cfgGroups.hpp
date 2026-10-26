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
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
    };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
    };


    #undef CAMO
    #define CAMO trp
       class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
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
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        };

    #undef CAMO
    #define CAMO trp
        class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
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
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        };

#undef CAMO
#define CAMO mlt

    class CLASSNAME(SIDEPRFX,CAMO) {
        name = "[Germany] (Multitarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
        };

    #undef CAMO
    #define CAMO trp
        class CLASSNAME(SIDEPRFX,CAMO) {
            name = "[Germany] (Tropentarn)";
        #include "CfgGroups_Motorized.hpp"
        #include "CfgGroups_Mechanized.hpp"
         };
    };

#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG
