params["_unit","_type"];

switch (_type) do {
	case "Generic":
	{
		_content = parseSimpleArray (missionNamespace getVariable ["Bandolier", []]);

		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _content;

		if !(false in _check) then {
			_unit removeItem "LNX_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _content;
		} else {
			hint "Not enough space for bandolier contents";
		};
	};

	case "AR":
	{
		_contentAR = parseSimpleArray (missionNamespace getVariable ["AR_Bandolier", []]);
		
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentAR;
		
		if !(false in _check) then {
			_unit removeItem "LNX_AR_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _contentAR;
		} else {
			hint "Not enough space for AR bandolier contents";
		};
	};

	case "UGL":
	{
		_contentUGL = parseSimpleArray (missionNamespace getVariable ["UGL_Bandolier", []]);
		
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentUGL;
		
		if !(false in _check) then {
			_unit removeItem "LNX_UGL_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _contentUGL;
		} else {
			hint "Not enough space for UGL bandolier contents";
		};
	};

	case "LMG":
	{
		_contentLMG = parseSimpleArray (missionNamespace getVariable ["LMG_Bandolier", []]);
		
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentLMG;
		
		if !(false in _check) then {
			_unit removeItem "LNX_LMG_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _contentLMG;
		} else {
			hint "Not enough space for LMG bandolier contents";
		};
	};

	case "GPMG":
	{
		_contentGPMG = parseSimpleArray (missionNamespace getVariable ["GPMG_Bandolier", []]);
		
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentGPMG;
		
		if !(false in _check) then {
			_unit removeItem "LNX_GPMG_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _contentGPMG;
		} else {
			hint "Not enough space for GPMG bandolier contents";
		};
	};

	case "DMR":
	{
		_contentDMR = parseSimpleArray (missionNamespace getVariable ["DMR_Bandolier", []]);
		
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentDMR;
		
		if !(false in _check) then {
			_unit removeItem "LNX_DMR_Bandolier";
			{
				for "_i" from 1 to (_x select 1) do 
				{
					_unit addItem (_x select 0);
				};
			} forEach _contentDMR;
		} else {
			hint "Not enough space for DMR bandolier contents";
		};
	};

	default {
		hint "You have broken the bandolier function. Congratulations.";
	};
};