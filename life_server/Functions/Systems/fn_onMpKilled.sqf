/*
	File: fn_onMpKilled.sqf
	Author: Jesse Schultz
*/

private["_deadPlayer","_source","_deadPlayerPos","_thread","_query"];
if(!isServer OR hasInterface) exitWith {};
_deadPlayer = _this select 0;
_source = _this	select 1;
if(isNull _deadPlayer) exitWith {};
if!(isPlayer _deadPlayer) exitWith {};
_deadPlayerPos = getPos _deadPlayer;

_query = format["INSERT INTO player_history SET account_uid ='%1', name='%2', position_x='%3', position_y='%4', position_z='%5', killer='%6'", getPlayerUID _deadPlayer, name _deadPlayer, _deadPlayerPos select 0, _deadPlayerPos select 1, _deadPlayerPos select 2, name _source];
_thread = [_query,1] call DB_fnc_asyncCall;

true