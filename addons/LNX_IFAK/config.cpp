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
			"ace_interaction", 
			"ace_medical_treatment",
			"kat_main"
		};
		units[] = {};
		weapons[] = { "LNX_IFAK" };
	};
};

class CfgVehicles
{
	class Man;
    class CAManBase: Man 
	{
		class ACE_SelfActions 
		{
			class ACE_Medical
			{
				class LNX_IFAK_Open
				{
					displayName = "Open IFAK";
					condition = "[_player, 'LNX_IFAK'] call BIS_fnc_hasItem";
					statement = "[_player] call LNX_fnc_openIFAK";
				};
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class LNX_PatientIFAK
				{
					displayName = "Open patient IFAK";
					condition = "[_target, 'LNX_IFAK'] call BIS_fnc_hasItem";
					statement = "[_target] call LNX_fnc_openIFAK";
				};
			};
		};
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