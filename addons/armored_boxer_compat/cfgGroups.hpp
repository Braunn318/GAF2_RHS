// Same structure and macros as addons\units\cfgGroups.hpp: every side x camo faction gets the Boxer squads.
#define CLASSNAME(prefix,camo) prefix##_##camo
#define FACTION_ID QUOTE(SIDEPRFX##_##CAMO)
#define CLASS_GROUP(name) SIDEPRFX##_##CAMO##_##name
#define VEH(name) QUOTE(SIDEPRFX##_##name##_##CAMO)

class West {
#define SIDEPRFX B_GAF2
#define SIDE_TAG 1
#define CAMO flk
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO mlt
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO trp
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG
};

class Indep {
#define SIDEPRFX I_GAF2
#define SIDE_TAG 2
#define CAMO flk
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO mlt
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO trp
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG
};

class East {
#define SIDEPRFX O_GAF2
#define SIDE_TAG 0
#define CAMO flk
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO mlt
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#define CAMO trp
    class CLASSNAME(SIDEPRFX,CAMO) {
        #include "cfgGroups_Mechanized_Boxer.hpp"
    };
#undef CAMO
#undef SIDEPRFX
#undef SIDE_TAG
};

#undef CLASSNAME
#undef FACTION_ID
#undef CLASS_GROUP
#undef VEH
