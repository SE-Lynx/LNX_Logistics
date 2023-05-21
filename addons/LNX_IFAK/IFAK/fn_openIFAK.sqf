params["_unit"];

_contentIFAK = parseSimpleArray (missionNamespace getVariable ["IFAK_Contents", []]);

_check = [];

{
	_bool = _unit canAdd [_x select 0, _x select 1];
	_check pushBack _bool;
} forEach _contentIFAK;

if !(false in _check) then {
	_unit removeItem "LNX_IFAK";
	{
		for "_i" from 1 to (_x select 1) do 
		{
			_unit addItem (_x select 0);
		};
	} forEach _contentIFAK;
} else {
	hint "Not enough space for IFAK contents";
};