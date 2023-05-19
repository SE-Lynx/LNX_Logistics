params["_unit"];

_contentIFAK = parseSimpleArray (missionNamespace getVariable ["IFAK_Contents", []]);

_check = [];

{
	_bool = _unit canAdd _x;
	_check pushBack _bool;
} forEach _contentIFAK;

if !(false in _check) then {
	_unit removeItem "LNX_IFAK";
	{
		_unit addItem _x;
	} forEach _contentIFAK;
} else {
	hint "Not enough space for IFAK contents";
};