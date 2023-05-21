class CfgPatches
{
	class LNX_Bandoliers
	{
		author = "Lynx";
		name = "LNX - Bandoliers";
		requiredVersion = 2.0;
		requiredAddons[] = 
		{ 
			"cba_settings",
			"ace_interaction"
		};
		units[] = {};
		weapons[] = 
		{ 
			"LNX_Basic_Bandolier", 
			"LNX_Support_Bandolier" 
		};
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
				class LNX_Bandoliers
				{
					displayName = "Bandoliers";
					condition = "[_player, (isKindOf 'LNX_Bandolier')] call BIS_fnc_hasItem";
					class LNX_Bandolier_Open
					{
						displayName = "Open Bandolier";
						condition = "[_player, 'LNX_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""Generic""] call LNX_fnc_openBandolier";
					};
					class LNX_ARBandolier_Open
					{
						displayName = "Open AR Bandolier";
						condition = "[_player, 'LNX_AR_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""AR""] call LNX_fnc_openBandolier";
					};
					class LNX_UGLBandolier_Open
					{
						displayName = "Open UGL Bandolier";
						condition = "[_player, 'LNX_UGL_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""UGL""] call LNX_fnc_openBandolier";
					};
					class LNX_LMGBandolier_Open
					{
						displayName = "Open LMG Bandolier";
						condition = "[_player, 'LNX_LMG_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""LMG""] call LNX_fnc_openBandolier";
					};
					class LNX_GPMGBandolier_Open
					{
						displayName = "Open GPMG Bandolier";
						condition = "[_player, 'LNX_GPMG_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""GPMG""] call LNX_fnc_openBandolier";
					};
					class LNX_DMRBandolier_Open
					{
						displayName = "Open DMR Bandolier";
						condition = "[_player, 'LNX_DMR_Bandolier'] call BIS_fnc_hasItem";
						statement = "[_player, ""DMR""] call LNX_fnc_openBandolier";
					};
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
	
	class LNX_Bandolier : CBA_MiscItem
	{
		author = "Lynx";
		scope = 2;
		displayName = "Bandolier";
		model = "\A3\Weapons_F\ammo\mag_univ.p3d";
		picture = "\LNX_Bandoliers\data\Bandolier.paa";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
	};
	class LNX_AR_Bandolier : LNX_Bandolier
	{
		displayName = "Bandolier (AR)";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
	};
	class LNX_UGL_Bandolier : LNX_Bandolier
	{
		displayName = "Bandolier (UGL)";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
	};
	class LNX_LMG_Bandolier : LNX_Bandolier
	{
		displayName = "Bandolier (LMG)";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 60;
		};
	};
	class LNX_GPMG_Bandolier : LNX_Bandolier
	{
		displayName = "Bandolier (GPMG)";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 100;
		};
	};
	class LNX_DMR_Bandolier : LNX_Bandolier 
	{
		displayName = "Bandolier (DMR)";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 36;
		};
	};
};