#include "\life_server\script_macros.hpp"
/*
	File: fn_insertRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something with inserting... Don't have time for
	descriptions... Need to write it...
*/
private["_handler","_thread","_queryResult","_query","_alias"];
params [
	"_uid",
	"_name",
	["_money",0],
	["_bank",10000],
	["_returnToSender",objNull,[objNull]]
];

//Error checks
if((_uid == "") OR (_name == "")) exitWith {systemChat "Bad UID or name";}; //Let the client be 'lost' in 'transaction'
if(isNull _returnToSender) exitWith {systemChat "ReturnToSender is Null!";}; //No one to send this to!

_query = format["SELECT playerid, name FROM players WHERE playerid='%1'",_uid];

_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

diag_log "------------- Insert Query Request -------------";
diag_log format["QUERY: %1",_query];
diag_log format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)];
diag_log format["Result: %1",_queryResult];
diag_log "------------------------------------------------";

//Double check to make sure the client isn't in the database...
if(typeName _queryResult == "STRING") exitWith {[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];}; //There was an entry!
if(count _queryResult != 0) exitWith {[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];};

//Clense and prepare some information.
_name = [_name] call DB_fnc_mresString; //Clense the name of bad chars.
_alias = [[_name]] call DB_fnc_mresArray;
_money = [_money] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

//Prepare the query statement..
_query = format["INSERT INTO players (playerid, name, cash, bankacc, aliases, cop_licenses, med_licenses, civ_licenses, civ_gear, cop_gear, med_gear, undercover_gear) VALUES('%1', '%2', '%3', '%4', '%5','""[]""','""[]""','""[]""','""[]""','""[`U_Competitor`,`V_TacVest_blk_POLICE`,``,``,`H_Cap_police`,[`ItemMap`,`ItemCompass`,`ItemWatch`,`ItemGPS`,`NVGoggles_OPFOR`,`Binocular`],`arifle_TRG21_F`,`hgun_P07_F`,[],[`30Rnd_9x21_Mag`,`30Rnd_9x21_Mag`],[],[],[`NVGoggles_OPFOR`],[`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`,`30Rnd_556x45_Stanag_Tracer_Green`],[``,``,`optic_ACO_grn`,``],[`muzzle_snds_L`,``,``,``],[]]""','""[]""','""[]""')",
	_uid,
	_name,
	_money,
	_bank,
	_alias
];

[_query,1] call DB_fnc_asyncCall;
[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];