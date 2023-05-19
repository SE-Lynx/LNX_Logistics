[
	"LNX_Basic_Bandolier", 
	"EDITBOX" , 
	["Basic Bandolier", "Specify an array of items to be contained in the basic bandolier."], 
	"LNX - Logistics", 
	"[""30Rnd_65x39_caseless_mag"",""30Rnd_65x39_caseless_mag"",""30Rnd_65x39_caseless_mag"",""30Rnd_65x39_caseless_mag_Tracer""]",
	1,
	{
		missionNamespace setVariable ["Basic_Bandolier", LNX_Basic_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_Support_Bandolier", 
	"EDITBOX" , 
	["Support Bandolier", "Specify an array of items to be contained in the basic bandolier."], 
	"LNX - Logistics", 
	"[""100Rnd_65x39_caseless_mag"",""100Rnd_65x39_caseless_mag_Tracer""]",
	1,
	{
		missionNamespace setVariable ["Support_Bandolier", LNX_Support_Bandolier];
	}
] call CBA_fnc_addSetting;