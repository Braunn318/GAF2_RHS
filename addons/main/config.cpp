#include "script_component.hpp"

//Subcategories//

class CfgEditorSubcategories
{	class ArtilleryVanilla // Category class, you point to it in editorSubcategory property
	{
	displayName = "Artillery (Fictional A3)"; // Name visible in the list
	};
	class MyArtyGM // Category class, you point to it in editorSubcategory property
	{
	displayName = "Artillery (GM)"; // Name visible in the list
	};
	class MyKSK // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (KSK SF)"; // Name visible in the list
	};
	class MySupplies
	{
		displayName = "German Armed Forces RHS"; //Name visible in the list
	};
	class MyRSV // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (Reservists)"; // Name visible in the list
	};
	class MyGMAPC // Category class, you point to it in editorSubcategory property
	{
		displayName = "APC (GM)"; // Name visible in the list
	};
	class MyTrucksGM // Category class, you point to it in editorSubcategory property
	{
		displayName = "Trucks (GM)"; // Name visible in the list
	};
	class MyTrucks // Category class, you point to it in editorSubcategory property
	{
		displayName = "Trucks"; // Name visible in the list
	};
	class MyMP // Category class, you point to it in editorSubcategory property
	{
		displayName = "Cars (Military police)"; // Name visible in the list
	};
	class HelisVanilla // Category class, you point to it in editorSubcategory property
	{
		displayName = "Helicopters (Fictional A3)"; // Name visible in the list
	};
	class PlanesVanilla // Category class, you point to it in editorSubcategory property
	{
		displayName = "Planes (Fictional A3)"; // Name visible in the list
	};
		class MyTanksGM // Category class, you point to it in editorSubcategory property
	{
		displayName = "Tanks (GM)"; // Name visible in the list
	};
			class MyAAGM // Category class, you point to it in editorSubcategory property
	{
		displayName = "Anti-Air (GM)"; // Name visible in the list
	};
};

//config.cpp GAF//
class CfgPatches

{
#include "cfgPatches.hpp"
};
/////////////Faction////

class CfgFactionClasses

{
#include "cfgFactionClasses.hpp"
};
//Mags
class CfgMagazines
{
#include "cfgMagazines.hpp"
};

class CfgMagazineWells  
{
#include "cfgMagazineWells.hpp"
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		gaf2_optic_Elcan = 1;
	};
};

//Weapons//

class CfgWeapons
{
#include "cfgWeapons1.hpp"
#include "cfgWeaponsHK416_RHS.hpp"
#include "cfgWeaponsG36_BWMod.hpp"
#include "cfgWeapons_Rest.hpp"
};
 class CfgVehicles 
 {
#include "cfgVehicles.hpp"
 };
class CfgVoice
{
#include "cfgVoice.hpp"
};

#include "cfgGlasses.hpp"
