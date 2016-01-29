#include "..\..\script_macros.hpp"
/*
	File: fn_seizePlayerAction.sqf
	Author: Jesse Schultz

	Description:
	Starts the seize process..
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint localize "STR_NOTF_CannotSeizePerson"};
[player] remoteExec ["life_fnc_seizeClient",_unit];
life_action_inUse = false;