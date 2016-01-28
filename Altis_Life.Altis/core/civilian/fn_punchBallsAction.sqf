#include "..\..\script_macros.hpp"
/*
	File: fn_punchBallsAction.sqf

    Modified knockout action
    By Dr. Dank
*/
private["_target"];
_target = cursorTarget;
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};
if(player distance _target > 5) exitWith {};

life_knockout = true;
[player,"AwopPercMstpSgthWrflDnon_End1"] remoteExecCall ["life_fnc_animSync",RCLIENT];
sleep 0.08;
[_target,profileName] remoteExec ["life_fnc_punchBalls",_target];
sleep 3;
life_knockout = false;