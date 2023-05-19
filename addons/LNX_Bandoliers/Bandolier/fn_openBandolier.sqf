params["_unit","_type"];

switch (_type) do {
	case "Basic":
	{
		_contentBasic = parseSimpleArray (missionNamespace getVariable ["Basic_Bandolier", []]);
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentBasic;
		if !(false in _check) then {
			_unit removeItem "LNX_Basic_Bandolier";
			{
				_unit addMagazine _x;
			} forEach _contentBasic;
		} else {
			hint "Not enough space for basic bandolier contents";
		};
	};
	case "Support":
	{
		_contentSupport = parseSimpleArray (missionNamespace getVariable ["Support_Bandolier", []]);
		_check = [];
		{
			_canAdd = _unit canAdd _x;
			_check pushBack _canAdd;
		} forEach _contentSupport;
		if !(false in _check) then {
			_unit removeItem "LNX_Support_Bandolier";
			{
				_unit addMagazine _x;
			} forEach _contentSupport;
		} else {
			hint "Not enough space for basic bandolier contents";
		};
	};
	default {
		hint "You have broken the bandolier function. Congratulations.";
	};
};