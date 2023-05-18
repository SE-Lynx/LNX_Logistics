class CfgPatches
{
	class LNX_Bandoliers
	{
		author = "Lynx";
		name = "LNX - Bandoliers";
		requiredVersion = 2.0;
		requiredAddons[] = 
		{ 
			"ace_common"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	
	class LNX_Bandolier_Base : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Bandolier";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
	};
};