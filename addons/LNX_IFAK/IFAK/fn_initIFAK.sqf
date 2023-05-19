[
	"LNX_IFAK_Contents", 
	"EDITBOX" , 
	["IFAK Content", "Specify an array of items to be contained in the IFAK."], 
	"LNX - Logistics", 
	"[""ACE_elasticBandage"",""ACE_elasticBandage"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_quikclot"",""ACE_quikclot"",""kat_chestSeal"",""kat_guedel"",""ACE_tourniquet"",""ACE_tourniquet""]",
	1,
	{
		missionNamespace setVariable ["IFAK_Contents", LNX_IFAK_Contents];
	}
] call CBA_fnc_addSetting;