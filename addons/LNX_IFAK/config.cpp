class CfgPatches
{
	class LNX_IFAK
	{
		author = "Lynx";
		name = "LNX - Individual First Aid Kit";
		requiredVersion = 2.0;
		requiredAddons[] = 
		{
			"cba_common",
			"cba_settings",
			"ace_common", 
			"ace_medical_treatment",
			"kat_main"
		};
		units[] = {};
		weapons[] = { "LNX_IFAK" };
	};
};

class CfgFunctions
{
	class LNX
	{
		class IFAK
		{
			class initIFAK { file = "\LNX_IFAK\IFAK\fn_initIFAK.sqf"; postInit = 1; };
			class openIFAK { file = "\LNX_IFAK\IFAK\fn_openIFAK.sqf"; };
		};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	
	class LNX_IFAK : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "IFAK - Individual First Aid Kit";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		picture = "\LNX_IFAK\data\IFAK.paa";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
};