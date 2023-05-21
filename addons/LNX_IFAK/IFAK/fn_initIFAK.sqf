[
	"LNX_IFAK_Contents", 
	"EDITBOX" , 
	["IFAK Content", "Specify an array of items and quantity to be contained in the IFAK."], 
	["LNX - Logistics", "IFAK"], 
	"[[""ACE_elasticBandage"",2],[""ACE_packingBandage"",6],[""ACE_quikclot"",2],[""ACE_tourniquet"",2]]",
	1,
	{
		missionNamespace setVariable ["IFAK_Contents", LNX_IFAK_Contents];
	}
] call CBA_fnc_addSetting;