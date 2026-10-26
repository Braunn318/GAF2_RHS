#define IDENT1 \
QUOTE(Language_GAF2), \
QUOTE(Head_Euro), \
QUOTE(GAF2_##ID_WDL_DES)

#define UNIFORMSTD1 QUOTE(gaf2_Unif_std_##CAMO)
#define UNIFORMSTD2 QUOTE(gaf2_Unif_std_rld_##CAMO)
#define UNIFORMCOM1 QUOTE(gaf2_Unif_CombatFatigues_##CAMO)
#define UNIFORMCOM2 QUOTE(gaf2_Unif_CombatFatigues_rld_##CAMO)
#define UNIFORMLFAT QUOTE(gaf2_Unif_LFatigues_##CAMO)
#define UNIFORMLCFAT QUOTE(gaf2_Unif_L_Fatigues_##CAMO)
#define UNIFORMOFF QUOTE(gaf2_Unif_L_Officer_##CAMO)
#define UNIFORMSF1 QUOTE(gaf2_Unif_L_NatoFatigues_##CAMO)
#define UNIFORMSF2 QUOTE(gaf2_Unif_L_NatoFatigues_rld_##CAMO)
#define UNIFORMGHL QUOTE(gaf2_Unif_FullGhillie_##CAMO)

#define HL_BV \
QUOTE(gaf2_BaVi_H_HelmetB_Solid_##CLR_OLI_TAN), \
0.4, \
QUOTE(gaf2_BaVi_H_HelmetB_camo_Solid_##CLR_OLI_TAN), \
0.2, \
QUOTE(gaf2_BaVi_H_HelmetSpecB_Solid_##CLR_OLI_TAN), \
0.4

#define HL_OPS \
QUOTE(gaf2_helmet_opscore_pelt_##CAMO), \
0.8, \
QUOTE(gaf2_helmet_opscore_##CAMO), \
0.2

#define VEST1 QUOTE(gaf2_vest_Mobast_1_##CAMO)
#define VEST2 QUOTE(gaf2_vest_Mobast_2_##CAMO)
#define VEST3 QUOTE(gaf2_vest_Mobast_3_##CAMO)
#define VEST4 QUOTE(gaf2_vest_Mobast_4_##CAMO)
#define VEST5 QUOTE(gaf2_vest_Mobast_5_##CAMO)
#define VESTB1 QUOTE(V_BandollierB_##CLR_BAG##)

#define HELMETBV QUOTE(gaf2_BaVi_H_HelmetB_Solid_##CLR_OLI_TAN)
#define HELMETOPS QUOTE(gaf2_helmet_opscore_pelt_##CAMO)
#define HELMETCRW QUOTE(BWA3_CrewmanKSK_##BWA_CAMO##_Headset)

#define BAG_AssPack_R QUOTE(gaf2_AssaultPack_##CAMO##_R)
#define BAG_Kit_R QUOTE(gaf2_Kitbag_##CAMO##_R)
#define BAG_Carr_Ammo QUOTE(gaf2_Carryall_##CAMO##_Ammo)
#define BAG_Carr_MG3 QUOTE(gaf2_Carryall_##CAMO##_MG5)
#define BAG_Carr_MG4 QUOTE(gaf2_Carryall_##CLR_BAG##_MG4)
#define BAG_Carr_MG5 QUOTE(gaf2_Carryall_##CAMO##_MG5)
#define BAG_Kit_EXP QUOTE(gaf2_Kitbag_##CLR_BAG##_EXP)
#define BAG_Kit_Mraws QUOTE(gaf2_Kitbag_##CLR_BAG##_LAT)
#define BAG_Kit_AA QUOTE(gaf2_Kitbag_##CAMO##_AA)

#define BAG_Tac_R QUOTE(gaf2_TacticalPack_##CAMO##_R)
#define BAG_Tac_CLS QUOTE(gaf2_TacticalPack_##CAMO##_CLS)

#define BAG_Carr_Engineer QUOTE(gaf2_Carryall_##CLR_BAG##_Engineer)

#define WEAPON_RIFLE_HK416 QUOTE(gaf2_HK416_Arco_##CLR_WEAP)
#define WEAPON_RIFLE_HK416_LDR QUOTE(gaf2_HK416_Arco_##CLR_WEAP), \
QUOTE(BWA3_Vector)

#define WEAPON_RIFLE_HK416_KSK QUOTE(gaf2_HK416_Arco_KSK_##CLR_WEAP)
#define WEAPON_RIFLE_HK416_KSK_LDR QUOTE(gaf2_HK416_Arco_KSK_##CLR_WEAP), \
QUOTE(BWA3_Vector)

#define WEAPON_RIFLE_HK416_GL QUOTE(gaf2_HK416_Arco_GL_##CLR_WEAP)
#define WEAPON_RIFLE_G27 QUOTE(GAF2_G27_C_##CLR_WEAP)
#define WEAPON_RIFLE_G27_GL QUOTE(GAF2_G27_AG36_##CLR_WEAP)
#define WEAPON_MG5 QUOTE(GAF2_MG5_G33_##CLR_WEAP)
#define WEAPON_G82 QUOTE(GAF2_G82_##CLR_WEAP)

#define MAG_RIFLE_HK416 QUOTE(gaf2_mag_30Rnd_556x45_G95)

#define MAG_RIFLE_HK416_8 \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95)

#define MAG_RIFLE_HK416_8_GL \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(gaf2_mag_30Rnd_556x45_G95), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(rhs_mag_M433_HEDP), \
QUOTE(1Rnd_Smoke_Grenade_shell), \
QUOTE(1Rnd_Smoke_Grenade_shell), \
QUOTE(1Rnd_Smoke_Grenade_shell)
