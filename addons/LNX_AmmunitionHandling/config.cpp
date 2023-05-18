class CfgPatches
{
	class LNX_AmmunitionHandling
	{
		author = "Lynx";
		name = "LNX - Ammunition Handling";
		requiredVersion = 2.0;
		requiredAddons[] = 
		{ 
			"ace_common", 
			"ace_magazinerepack" 
		};
		units[] = {};
		weapons[] = 
		{ 
			"LNX_Package_Base", 
			"LNX_Cartridge_Base"
		};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	
	class LNX_Package_Base : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Ammunition Package";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 5.4; // 20x 5.56 M855
		};
	};
	class LNX_Cartridge_Base : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Cartridge";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 0.27; // 1x 5.56 M855
		};
	};
};