#include "..\..\script_macros.hpp"
/*
	File: fn_seizeObjects.sqf
	Author: Skalicon

	Description:
*/
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["GroundWeaponHolder"],3];
_clear = _clear + nearestObjects [player,["WeaponHolderSimulated"],3];
_del = 0;

for "_i" from 0 to count _clear - 1

do
{
	_del = _del + 1;
	deleteVehicle (_clear select _i);
};

titleText[format[localize "STR_NOTF_SeizeXobjects",_del],"PLAIN"];