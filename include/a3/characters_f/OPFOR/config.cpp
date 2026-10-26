////////////////////////////////////////////////////////////////////
//DeRap: OPFOR\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Sep 02 23:16:35 2025 : 'file' last modified on Tue Apr 01 13:35:14 2025
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
	class A3_Characters_F_OPFOR
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
