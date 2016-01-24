/*
	File: fn_combineMags.sqf
	Author: Jesse Schultz
*/

private["_equippedMagazines","_repackedMagazines"];
_equippedMagazines = magazines player;
_repackedMagazines = [];
{
	if !(_x in _repackedMagazines) then
	{
		[player, _x, 0] call life_fnc_repackMags;
		_repackedMagazines pushBack _x;
	};
}
forEach _equippedMagazines;
true