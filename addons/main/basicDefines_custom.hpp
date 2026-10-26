#define DEFAULT_SOLDAT_WEAPONS \
QUOTE(Throw), \
QUOTE(Put), \
QUOTE(rhsusf_weap_glock17g4)

#define DEFAULT_SOLDAT_LINKED_ITEMS \
QUOTE(ItemMap), \
QUOTE(ItemCompass), \
QUOTE(ItemWatch), \
QUOTE(ItemRadio), \
QUOTE(NVGoggles_GAF2_INV_OPF)

#define DEFAULT_SOLDAT_MAGS_GRENADES \
QUOTE(BWA3_DM51A1), \
QUOTE(BWA3_DM51A1), \
QUOTE(BWA3_DM25), \
QUOTE(BWA3_DM25), \
QUOTE(BWA3_DM32_Green), \
QUOTE(Chemlight_green)

#define DEFAULT_SOLDAT_MAGS \
QUOTE(rhsusf_mag_17Rnd_9x19_FMJ), \
QUOTE(rhsusf_mag_17Rnd_9x19_FMJ


#define DEFAULT_SOLDAT_UNIFORM_ITEMS \
QUOTE(ACE_EarPlugs), \
QUOTE(FirstAidKit), \
QUOTE(BWA3_G_Combat_black), \
QUOTE(ACE_Flashlight_XL50), \
QUOTE(ACE_CableTie), \
QUOTE(ACE_MapTools)

#define DEFAULT_SOLDAT_UNIFORM_WEAPONS \
QUOTE(BWA3_DM25), \
QUOTE(BWA3_DM32_Green), \
QUOTE(Chemlight_green)

#define DEFAULT_LEADER_LINKED_ITEMS \
QUOTE(BWA3_ItemNaviPad), \
QUOTE(ItemMap), \
QUOTE(ItemCompass), \
QUOTE(ItemWatch), \
QUOTE(ItemRadio), \
QUOTE(BWA3_Vector), \
QUOTE(NVGoggles_GAF2_INV_OPF)

#define DEFAULT_MAN_RANGEMASTER_LINKED_ITEMS \
QUOTE(ItemSmartPhone), \
QUOTE(ItemWatch) \

#define MAG_XX(a,b) class _xx_##a {magazine = #a; count = b;}
#define WEAP_XX(a,b) class _xx_##a {weapon = #a; count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = #a; count = b;}
/*
#define SMAG_1(smag) { QUOTE(smag) }
#define SMAG_2(smag) { QUOTE(smag), QUOTE(smag) }
#define SMAG_3(smag) { QUOTE(smag), QUOTE(smag), QUOTE(smag) }
#define SMAG_4(smag) { QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag) }
#define SMAG_5(smag) { QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag) }
#define SMAG_6(smag) { QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag) }
#define SMAG_7(smag) { QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag), QUOTE(smag) }
*/
