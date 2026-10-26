////////////////////////////////////////////////////////////////////
//DeRap: Heads\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Sep 02 23:16:06 2025 : 'file' last modified on Tue Apr 01 13:35:14 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Characters_F_Heads
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		class Custom: Custom
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_CFG_FACES_CUSTOM";
			texture = "#(argb,8,8,3)color(0.596,0.412,0.365,1)";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class PersianHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_TakistaniMen_LastNames11";
			texture = "\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK"};
			material = "\A3\Characters_F\Heads\Data\m_persian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class PersianHead_A3_02: PersianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_TakistaniMen_LastNames27";
			texture = "\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_persian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
		};
		class PersianHead_A3_03: PersianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_TakistaniMen_LastNames46";
			texture = "\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_persian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
		};
		class PersianHead_A3_04_a: PersianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_a0";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_3_co.paa";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK_camo_arid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			DLC = "Mark";
		};
		class PersianHead_A3_04_l: PersianHead_A3_04_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_l0";
			identityTypes[] = {"Head_TK_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
		};
		class PersianHead_A3_04_sa: PersianHead_A3_04_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_sa0";
			identityTypes[] = {"Head_TK_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
		};
		class WhiteHead_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames90";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class WhiteHead_02: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames91";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
		};
		class WhiteHead_03: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames92";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_02_bald_muscular.rvmat";
		};
		class WhiteHead_04: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames93";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
		};
		class WhiteHead_05: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames94";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
		};
		class WhiteHead_06: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames95";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_3_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
		};
		class WhiteHead_07: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames96";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_07.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
		};
		class WhiteHead_08: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames97";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_08.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
		};
		class WhiteHead_09: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames98";
			texture = "\A3\Characters_F\Heads\Data\m_White_09_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_09.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_3_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
		};
		class WhiteHead_10: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames103";
			texture = "\A3\Characters_F\Heads\Data\m_White_10_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_10.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
		};
		class WhiteHead_11: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames100";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_11.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
		};
		class WhiteHead_12: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames106";
			texture = "\A3\Characters_F\Heads\Data\m_White_12_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_12.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
		};
		class WhiteHead_13: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames107";
			texture = "\A3\Characters_F\Heads\Data\m_White_13_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_13.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
		};
		class WhiteHead_14: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames108";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_14.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_02_bald_muscular.rvmat";
		};
		class WhiteHead_15: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames109";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_15.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
		};
		class WhiteHead_16: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames83";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_16_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class WhiteHead_17: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames89";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
		};
		class WhiteHead_18: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames87";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_18_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
		};
		class WhiteHead_19: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames86";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_19_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_co.paa";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
		};
		class WhiteHead_20: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames85";
			identityTypes[] = {"Head_NATO","Head_Euro","Tanker"};
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_20_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
		};
		class WhiteHead_21: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames84";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_21_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
		};
		class WhiteHead_22_a: WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_WhiteHead_22_a0";
			identityTypes[] = {"Head_NATO_camo_arid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			DLC = "Mark";
		};
		class WhiteHead_22_l: WhiteHead_22_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_WhiteHead_22_l0";
			identityTypes[] = {"Head_NATO_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_L.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
		};
		class WhiteHead_22_sa: WhiteHead_22_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_WhiteHead_22_sa0";
			identityTypes[] = {"Head_NATO_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
		};
		class AfricanHead_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames112";
			texture = "\A3\Characters_F\Heads\Data\m_african_01_co.paa";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			material = "\A3\Characters_F\Heads\Data\m_african_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
		};
		class AfricanHead_02: AfricanHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AFROMEN_FIRSTNAMES9";
			texture = "\A3\Characters_F\Heads\Data\m_african_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_african_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
		};
		class AfricanHead_03: AfricanHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CivMen_FirstNames26";
			texture = "\A3\Characters_F\Heads\Data\m_african_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_african_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
		};
		class GreekHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames0";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_Greek_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class GreekHead_A3_02: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames3";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
		};
		class GreekHead_A3_03: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames5";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			identityTypes[] = {"Head_Greek","Head_Rangemaster"};
		};
		class GreekHead_A3_04: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames7";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_old.rvmat";
		};
		class GreekHead_A3_05: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames11";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			identityTypes[] = {"Head_NATO","Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
		};
		class GreekHead_A3_06: GreekHead_A3_05
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames15";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
		};
		class GreekHead_A3_07: GreekHead_A3_05
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames17";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
		};
		class GreekHead_A3_08: GreekHead_A3_05
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames21";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
		};
		class GreekHead_A3_09: GreekHead_A3_05
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames53";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			identityTypes[] = {"Head_NATO","Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
		};
		class GreekHead_A3_10_a: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_GreekHead_A3_10_a0";
			identityTypes[] = {"Head_Greek_camo_arid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			DLC = "Mark";
		};
		class GreekHead_A3_10_l: GreekHead_A3_10_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_GreekHead_A3_10_l0";
			identityTypes[] = {"Head_Greek_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
		};
		class GreekHead_A3_10_sa: GreekHead_A3_10_a
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_cfgFaces_Man_A3_GreekHead_A3_10_sa0";
			identityTypes[] = {"Head_Greek_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
		};
		class AsianHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames24";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
			head = "AsianHead_A3";
			identityTypes[] = {"Head_Asian"};
			material = "\A3\Characters_F\Heads\Data\m_Asian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
		};
		class AsianHead_A3_02: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames7";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
		};
		class AsianHead_A3_03: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames21";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
		};
		class Nikos: GreekHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Nikos0";
			head = "Nikos";
			texture = "\A3\Characters_F\Heads\Data\m_nikos_co.paa";
			identityTypes[] = {"Nikos"};
			material = "\A3\Characters_F\Heads\Data\m_nikos.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			disabled = 1;
		};
		class Miller: Default
		{
			displayname = "$STR_A3_CfgFaces_Man_A3_Miller0";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry: Default
		{
			head = "KerryHead_A3";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry_A_F: Kerry
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Kerry
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
		};
		class kerry_B2_F: Kerry
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL2 = "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
		};
		class Kerry_C_F: Kerry
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
		};
		class IG_Leader: Default
		{
			displayname = "$STR_A3_I_G_resistanceLeader_F0";
			head = "IG_Leader";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL2 = "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			disabled = 1;
		};
		class O_Colonel: Default
		{
			displayname = "$STR_A3_O_STORY_COLONEL_F0";
			head = "PersianHead_A3";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			disabled = 1;
		};
		class Jay: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Jay0";
			head = "Jay";
			texture = "\A3\Characters_F\Heads\Data\m_Jay_co.paa";
			identityTypes[] = {"Jay"};
			material = "\A3\Characters_F\Heads\Data\m_Jay.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Jay_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Jay_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Ivan: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Ivan0";
			head = "Ivan";
			texture = "\A3\Characters_F\Heads\Data\m_Ivan_co.paa";
			identityTypes[] = {"Ivan"};
			material = "\A3\Characters_F\Heads\Data\m_Ivan.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Ivan_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Ivan_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Pettka: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Pettka0";
			head = "Pettka";
			texture = "\A3\Characters_F\Heads\Data\m_Pettka_co.paa";
			identityTypes[] = {"Pettka"};
			material = "\A3\Characters_F\Heads\Data\m_Pettka.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Pettka_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Pettka_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Dwarden: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Dwarden0";
			head = "Dwarden";
			texture = "\A3\Characters_F\Heads\Data\m_Dwarden_co.paa";
			identityTypes[] = {"Dwarden"};
			material = "\A3\Characters_F\Heads\Data\m_Dwarden.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Dwarden_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Dwarden_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Hladas: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Hladas0";
			head = "Hladas";
			texture = "\A3\Characters_F\Heads\Data\m_Hladas_co.paa";
			identityTypes[] = {"Hladas"};
			material = "\A3\Characters_F\Heads\Data\m_Hladas.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Hladas_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Hladas_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
	};
	class Miller
	{
		class Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Miller0";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Miller: Default{};
	};
	class Kerry
	{
		class Default
		{
			head = "KerryHead_A3";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry: Default{};
		class Kerry_A_F: Default
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Default
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
		};
		class kerry_B2_F: Default
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL2 = "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
		};
		class Kerry_C_F: Default
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
		};
	};
	class IG_Leader
	{
		class Default
		{
			displayname = "$STR_A3_I_G_resistanceLeader_F0";
			head = "IG_Leader";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL2 = "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			disabled = 1;
		};
		class IG_Leader: Default{};
	};
	class O_Colonel
	{
		class Default
		{
			displayname = "$STR_A3_O_STORY_COLONEL_F0";
			head = "PersianHead_A3";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			disabled = 1;
		};
		class O_Colonel: Default{};
	};
	class AnimalHead
	{
		class Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_FN_AnimalHead_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
		};
		class Animal: Default{};
	};
	class WomanHead_A3
	{
		class Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_CFG_FACES_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "WomanHead_A3";
			identityTypes[] = {"Woman"};
			material = "";
			disabled = 1;
		};
		class Woman_A3: Default{};
	};
};
class CfgGlasses
{
	class None
	{
		displayname = "$STR_A3_cfgglasses_g_None";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
		identityTypes[] = {"NoGlasses",1000,"G_NATO_default",300,"G_NATO_casual",550,"G_NATO_pilot",1000,"G_NATO_recon",595,"G_NATO_SF",300,"G_NATO_sniper",1000,"G_NATO_diver",0,"G_IRAN_default",1000,"G_IRAN_diver",0,"G_GUERIL_default",595,"G_HAF_default",595,"G_CIVIL_female",655,"G_CIVIL_male",670,"g_Rangemaster",0,"G_IRAN_officer",500};
		mass = 1;
		scope = 2;
	};
	class G_Diving
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Diving";
		displayname = "$STR_A3_CfgGlasses_G_Diving0";
		descriptionUse = "$str_a3_cfgglasses_g_diving1";
		model = "\A3\characters_f\Heads\glasses\g_diving";
		picture = "\A3\characters_F\data\ui\icon_G_Diving_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_diving_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",1000,"G_IRAN_default",0,"G_IRAN_diver",1000,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mode = 1;
		mass = 3;
		scope = 2;
	};
	class G_Shades_Black: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Shades_Black";
		displayname = "$STR_A3_CfgGlasses_G_Shades_Black0";
		model = "\A3\characters_f\Heads\glasses\g_shades_black";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_black_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",10,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",20,"G_HAF_default",20,"G_CIVIL_female",10,"G_CIVIL_male",20};
	};
	class G_Shades_Blue: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Shades_Blue";
		displayname = "$STR_A3_CfgGlasses_G_Shades_Blue0";
		model = "\A3\characters_f\heads\glasses\g_shades_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_blue_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",10,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",20,"G_HAF_default",20,"G_CIVIL_female",10,"G_CIVIL_male",20};
	};
	class G_Sport_Blackred: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_Blackred";
		displayname = "$STR_A3_CfgGlasses_G_Sport_Blackred0";
		model = "\A3\characters_f\heads\glasses\g_sport_blackred";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackred_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
	};
	class G_Tactical_Clear: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Tactical_Clear";
		displayname = "$STR_A3_CfgGlasses_G_Tactical_Clear0";
		model = "\A3\characters_f\heads\glasses\g_tactical_clear";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",250,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",250,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0,"G_Rangemaster",1};
	};
};
class CfgNonAIVehicles
{
	class ProxyBysta
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		simulation = "ProxySubpart";
	};
};
class MaskFace_A3
{
	mask[] = {"face_hub",1,"face_jawbone",1,"face_jowl",1,"face_chopright",1,"face_chopleft",1,"face_liplowermiddle",1,"face_liplowerright",1,"face_liplowerleft",1,"face_chin",1,"face_tongue",1,"face_cornerright",1,"face_cheeksideright",1,"face_cornerleft",1,"face_cheeksideleft",1,"face_cheekfrontright",1,"face_cheekfrontleft",1,"face_cheekupperright",1,"face_cheekupperleft",1,"face_lipuppermiddle",1,"face_lipupperright",1,"face_lipupperleft",1,"face_nostrilright",1,"face_nostrilleft",1,"face_forehead",1,"face_browfrontright",1,"face_browfrontleft",1,"face_browmiddle",1,"face_browsideright",1,"face_browsideleft",1,"face_eyelids",1,"face_eyelidupperright",1,"face_eyelidupperleft",1,"face_eyelidlowerright",1,"face_eyelidlowerleft",1,"eyeleft",1,"eyeright",1,"neck",1,"neck1",1,"head",1};
};
class MaskFaceWoman_A3
{
	mask[] = {"face_hub",1,"face_jawbone",1,"face_jowl",1,"face_chopright",1,"face_chopleft",1,"face_liplowermiddle",1,"face_liplowerright",1,"face_liplowerleft",1,"face_chin",1,"face_tongue",1,"face_cornerright",1,"face_cheeksideright",1,"face_cornerleft",1,"face_cheeksideleft",1,"face_cheekfrontright",1,"face_cheekfrontleft",1,"face_cheekupperright",1,"face_cheekupperleft",1,"face_lipuppermiddle",1,"face_lipupperright",1,"face_lipupperleft",1,"face_nostrilright",1,"face_nostrilleft",1,"face_forehead",1,"face_browfrontright",1,"face_browfrontleft",1,"face_browmiddle",1,"face_browsideright",1,"face_browsideleft",1,"face_eyelids",1,"face_eyelidupperright",1,"face_eyelidupperleft",1,"face_eyelidlowerright",1,"face_eyelidlowerleft",1,"eyeleft",1,"eyeright",1,"neck",1,"neck1",1,"head",1};
};
class LipMask_A3
{
	mask[] = {"face_hub",1,"face_jawbone",1,"face_jowl",1,"face_chopright",1,"face_chopleft",1,"face_liplowermiddle",1,"face_liplowerright",1,"face_liplowerleft",1,"face_chin",1,"face_tongue",1,"face_cornerright",1,"face_cheeksideright",1,"face_cornerleft",1,"face_cheeksideleft",1,"face_cheekfrontright",1,"face_cheekfrontleft",1,"face_cheekupperright",1,"face_cheekupperleft",1,"face_lipuppermiddle",1,"face_lipupperright",1,"face_lipupperleft",1,"face_nostrilright",1,"face_nostrilleft",1,"face_forehead",1,"face_browfrontright",1,"face_browfrontleft",1,"face_browmiddle",1,"face_browsideright",1,"face_browsideleft",1,"face_eyelids",1,"face_eyelidupperright",1,"face_eyelidupperleft",1,"face_eyelidlowerright",1,"face_eyelidlowerleft",1};
};
class CfgHeads
{
	class Default_A3
	{
		model = "\A3\characters_f\Heads\m_white_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat","A3\characters_f\Heads\Data\m_white_01_injury.rvmat","A3\characters_f\Heads\Data\m_white_01_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.26;
				eyelidUpStartAngle = 0.0;
				eyelidUpMaxAngle = 3.14;
				eyelidDownStartAngle = 0.0;
				eyelidDownMaxAngle = 3.14;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm","A3\Characters_F\Heads\Anim\male\vizem\a.rtm","A3\Characters_F\Heads\Anim\male\vizem\e2.rtm","A3\Characters_F\Heads\Anim\male\vizem\f.rtm","A3\Characters_F\Heads\Anim\male\vizem\m.rtm","A3\Characters_F\Heads\Anim\male\vizem\y.rtm","A3\Characters_F\Heads\Anim\male\vizem\v.rtm","A3\Characters_F\Heads\Anim\male\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "A3\Characters_F\Heads\Anim\male\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm",1};
			};
			class NeutralFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
			};
			class DeadFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm",1};
			};
			class UnconsciousFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm",1};
			};
			class DangerFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
			};
			class HurtFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm",3.0};
			};
			class AwareFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
			};
			class SafeFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still2_09.rtm",4.6,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm",5,"A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm",3,"A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm",6,"A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm",8,"A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm",3,"A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm",4,"A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm",5,"A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm",5,"A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm",6,"A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm",6,"A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm",2.5,"A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm",5,"A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm",4,"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still2_09.rtm",4.6,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
			};
			class CombatFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still1_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still1_06.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still1_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still1_09.rtm",3.6,"A3\Characters_F\Heads\Anim\male\still2_01.rtm",2.6,"A3\Characters_F\Heads\Anim\male\still2_05.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still2_07.rtm",3.0,"A3\Characters_F\Heads\Anim\male\still2_08.rtm",3.3,"A3\Characters_F\Heads\Anim\male\still4_01.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_02.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_03.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_04.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_05.rtm",5.0,"A3\Characters_F\Heads\Anim\male\still4_06.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_07.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_08.rtm",6.0,"A3\Characters_F\Heads\Anim\male\still4_09.rtm",4.0,"A3\Characters_F\Heads\Anim\male\still4_10.rtm",6.0};
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFace_A3{};
				};
			};
			class Unconscious
			{
				type = "compound";
				class Items
				{
					class UnconsciousFace: MaskFace_A3{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFace_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
		};
	};
	class DefaultHead_A3: Default_A3
	{
		model = "\A3\characters_f\Heads\m_white_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat","A3\characters_f\Heads\Data\m_white_01_injury.rvmat","A3\characters_f\Heads\Data\m_white_01_injury.rvmat","A3\Characters_F\Heads\Data\m_white_02.rvmat","A3\characters_f\Heads\Data\m_white_02_injury.rvmat","A3\characters_f\Heads\Data\m_white_02_injury.rvmat","A3\Characters_F\Heads\Data\m_white_03.rvmat","A3\characters_f\Heads\Data\m_white_03_injury.rvmat","A3\characters_f\Heads\Data\m_white_03_injury.rvmat","A3\Characters_F\Heads\Data\m_white_04.rvmat","A3\characters_f\Heads\Data\m_white_04_injury.rvmat","A3\characters_f\Heads\Data\m_white_04_injury.rvmat","A3\Characters_F\Heads\Data\m_white_05.rvmat","A3\characters_f\Heads\Data\m_white_05_injury.rvmat","A3\characters_f\Heads\Data\m_white_05_injury.rvmat","A3\Characters_F\Heads\Data\m_white_06.rvmat","A3\characters_f\Heads\Data\m_white_06_injury.rvmat","A3\characters_f\Heads\Data\m_white_06_injury.rvmat","A3\Characters_F\Heads\Data\m_white_07.rvmat","A3\characters_f\Heads\Data\m_white_07_injury.rvmat","A3\characters_f\Heads\Data\m_white_07_injury.rvmat","A3\Characters_F\Heads\Data\m_white_08.rvmat","A3\characters_f\Heads\Data\m_white_08_injury.rvmat","A3\characters_f\Heads\Data\m_white_08_injury.rvmat","A3\Characters_F\Heads\Data\m_white_09.rvmat","A3\characters_f\Heads\Data\m_white_09_injury.rvmat","A3\characters_f\Heads\Data\m_white_09_injury.rvmat","A3\Characters_F\Heads\Data\m_white_10.rvmat","A3\characters_f\Heads\Data\m_white_10_injury.rvmat","A3\characters_f\Heads\Data\m_white_10_injury.rvmat","A3\Characters_F\Heads\Data\m_white_11.rvmat","A3\characters_f\Heads\Data\m_white_11_injury.rvmat","A3\characters_f\Heads\Data\m_white_11_injury.rvmat","A3\Characters_F\Heads\Data\m_white_12.rvmat","A3\characters_f\Heads\Data\m_white_12_injury.rvmat","A3\characters_f\Heads\Data\m_white_12_injury.rvmat","A3\Characters_F\Heads\Data\m_white_13.rvmat","A3\characters_f\Heads\Data\m_white_13_injury.rvmat","A3\characters_f\Heads\Data\m_white_13_injury.rvmat","A3\Characters_F\Heads\Data\m_white_14.rvmat","A3\characters_f\Heads\Data\m_white_14_injury.rvmat","A3\characters_f\Heads\Data\m_white_14_injury.rvmat","A3\Characters_F\Heads\Data\m_white_15.rvmat","A3\characters_f\Heads\Data\m_white_15_injury.rvmat","A3\characters_f\Heads\Data\m_white_15_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white.rvmat","A3\Characters_F\Heads\Data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
		};
	};
	class WomanHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0;
				eyelidUpMaxAngle = 0;
				eyelidDownStartAngle = 0;
				eyelidDownMaxAngle = 0;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"A3\A3\Characters_F\Heads\Anim\female\Neutral.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\a.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\e2.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\f.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\m.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\y.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\v.rtm","A3\A3\Characters_F\Heads\Anim\female\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "A3\Characters_F\Heads\Anim\female\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm",1};
			};
			class NeutralFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm",1};
			};
			class DeadFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm",1};
			};
			class UnconsciousFace: DeadFace{};
			class DangerFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm",1};
			};
			class HurtFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm",1};
			};
			class AwareFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm",1};
			};
			class SafeFace: RTM_Face{};
			class CombatFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm",1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm",1};
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFaceWoman_A3{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Unconscious
			{
				type = "compound";
				class Items
				{
					class UnconsciousFace: MaskFaceWoman_A3{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFaceWoman_A3{};
					class Lipsync: LipMask_A3{};
				};
			};
		};
	};
	class MaskHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_Black: MaskHead_A3
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat","A3\characters_f\heads\data\m_african_01_injury.rvmat","A3\characters_f\heads\data\m_african_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_1: MaskHead_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_1_Black: MaskHead_A3_1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_B: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_B_Black: MaskHead_A3_B
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat","A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class Cooper_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat","A3\characters_f\heads\data\m_african_01_injury.rvmat","A3\characters_f\heads\data\m_african_01_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
	};
	class BlackHead_A3: Cooper_A3
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_african_01.rvmat","A3\Characters_F\Heads\Data\m_african_01_injury.rvmat","A3\Characters_F\Heads\Data\m_african_01_injury.rvmat","A3\Characters_F\Heads\Data\m_african_02.rvmat","A3\Characters_F\Heads\Data\m_african_02_injury.rvmat","A3\Characters_F\Heads\Data\m_african_02_injury.rvmat","A3\Characters_F\Heads\Data\m_african_03.rvmat","A3\Characters_F\Heads\Data\m_african_03_injury.rvmat","A3\Characters_F\Heads\Data\m_african_03_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class PersianHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_persian_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_persian_01.rvmat","A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat","A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat","A3\Characters_F\Heads\Data\m_persian_02.rvmat","A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat","A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat","A3\Characters_F\Heads\Data\m_persian_03.rvmat","A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat","A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white.rvmat","A3\Characters_F\Heads\Data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class AsianHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_asian_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_asian_01.rvmat","A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat","A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat","A3\Characters_F\Heads\Data\m_asian_02.rvmat","A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat","A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat","A3\Characters_F\Heads\Data\m_asian_03.rvmat","A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat","A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class GreekHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_greek_01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_greek_01.rvmat","A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_02.rvmat","A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_03.rvmat","A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_04.rvmat","A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat","A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class NATOHead_A3: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class Nikos: GreekHead_A3
	{
		model = "\A3\Characters_F\Heads\m_nikos";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_nikos.rvmat","A3\Characters_F\Heads\Data\m_nikos_injury.rvmat","A3\Characters_F\Heads\Data\m_nikos_injury.rvmat"};
		};
	};
	class IG_Leader: GreekHead_A3
	{
		model = "\A3\Characters_F_EPB\Heads\m_IG_leader.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat","A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat","A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat","A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat","A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat","A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat"};
		};
	};
	class KerryHead_A3: DefaultHead_A3
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat","A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat","A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat","A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat","A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat"};
		};
	};
	class Miller: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_miller";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_miller.rvmat","A3\Characters_F\Heads\Data\m_miller_injury.rvmat","A3\Characters_F\Heads\Data\m_miller_injury.rvmat"};
		};
	};
	class Kerry: Miller{};
	class Jay: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_jay";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
	class Ivan: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_ivan";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_ivan.rvmat","A3\Characters_F\Heads\Data\m_ivan_injury.rvmat","A3\Characters_F\Heads\Data\m_ivan_injury.rvmat"};
		};
	};
	class Pettka: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_pettka";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_pettka.rvmat","A3\Characters_F\Heads\Data\m_pettka_injury.rvmat","A3\Characters_F\Heads\Data\m_pettka_injury.rvmat"};
		};
	};
	class Dwarden: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_dwarden";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_dwarden.rvmat","A3\Characters_F\Heads\Data\m_dwarden_injury.rvmat","A3\Characters_F\Heads\Data\m_dwarden_injury.rvmat"};
		};
	};
	class Hladas: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_hladas";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_hladas.rvmat","A3\Characters_F\Heads\Data\m_hladas_injury.rvmat","A3\Characters_F\Heads\Data\m_hladas_injury.rvmat"};
		};
	};
};
