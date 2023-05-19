[
	"LNX_Bandolier", 
	"EDITBOX", 
	["Bandolier", "Specify an array of items to be contained in the generic bandolier."], 
	["LNX - Logistics", "Bandoliers"],
	"[""ACE_Banana""]",
	1,
	{
		missionNamespace setVariable ["Bandolier", LNX_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_AR_Bandolier", 
	"EDITBOX", 
	["Bandolier (AR)", "Specify an array of items to be contained in Bandolier (AR)."], 
	["LNX - Logistics", "Bandoliers"],
	"[""30Rnd_556x45_Stanag_red"",""30Rnd_556x45_Stanag_red"",""30Rnd_556x45_Stanag_red"",""30Rnd_556x45_Stanag_Tracer_Red""]",
	1,
	{
		missionNamespace setVariable ["AR_Bandolier", LNX_AR_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_UGL_Bandolier", 
	"EDITBOX", 
	["Bandolier (UGL)", "Specify an array of items to be contained in Bandolier (UGL)."], 
	["LNX - Logistics", "Bandoliers"],
	"[""1Rnd_HE_Grenade_shell"",""1Rnd_HE_Grenade_shell"",""1Rnd_HE_Grenade_shell"",""1Rnd_SmokeRed_Grenade_shell""]",
	1,
	{
		missionNamespace setVariable ["UGL_Bandolier", LNX_UGL_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_LMG_Bandolier", 
	"EDITBOX", 
	["Bandolier (LMG)", "Specify an array of items to be contained in Bandolier (LMG)."], 
	["LNX - Logistics", "Bandoliers"],
	"[""200Rnd_556x45_Box_Red_F"",""200Rnd_556x45_Box_Red_F"",""200Rnd_556x45_Box_Tracer_Red_F""]",
	1,
	{
		missionNamespace setVariable ["LMG_Bandolier", LNX_LMG_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_GPMG_Bandolier", 
	"EDITBOX", 
	["Bandolier (GPMG)", "Specify an array of items to be contained in Bandolier (GPMG)."], 
	["LNX - Logistics", "Bandoliers"],
	"[""130Rnd_338_Mag"",""130Rnd_338_Mag""]",
	1,
	{
		missionNamespace setVariable ["GPMG_Bandolier", LNX_GPMG_Bandolier];
	}
] call CBA_fnc_addSetting;

[
	"LNX_DMR_Bandolier", 
	"EDITBOX", 
	["Bandolier (DMR)", "Specify an array of items to be contained in Bandolier (DMR)."], 
	["LNX - Logistics", "Bandoliers"],
	"[""20Rnd_762x51_Mag"",""20Rnd_762x51_Mag"",""ACE_20Rnd_762x51_Mag_Tracer"",""ACE_20Rnd_762x51_Mag_Tracer""]",
	1,
	{
		missionNamespace setVariable ["DMR_Bandolier", LNX_DMR_Bandolier];
	}
] call CBA_fnc_addSetting;