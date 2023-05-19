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

class CfgVehicles
{
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions 
		{
			class ACE_Equipment
			{
				class LNX_BasicBandolier_Open
				{
					displayName = "Open Basic Bandolier";
					condition = "[_player, 'LNX_Basic_Bandolier'] call BIS_fnc_hasItem";
					statement = "[_player, ""Basic""] call LNX_fnc_openBandolier";
				};
				class LNX_SupportBandolier_Open
				{
					displayName = "Open Support Bandolier";
					condition = "[_player, 'LNX_Support_Bandolier'] call BIS_fnc_hasItem";
					statement = "[_player, ""Support""] call LNX_fnc_openBandolier";
				};
			};
		};
	};
};

class CfgFunctions
{
	class LNX
	{
		class Bandolier
		{
			class initBandolier { file = "\LNX_Bandoliers\Bandolier\fn_initBandolier.sqf"; postInit = 1; };
			class openBandolier { file = "\LNX_Bandoliers\Bandolier\fn_openBandolier.sqf"; };
		};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	
	class LNX_Basic_Bandolier : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Basic Bandolier";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		picture = "\LNX_Bandoliers\data\Bandolier.paa";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
	};
	class LNX_Support_Bandolier : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Support Bandolier";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		picture = "\LNX_Bandoliers\data\Bandolier.paa";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 60;
		};
	};
};