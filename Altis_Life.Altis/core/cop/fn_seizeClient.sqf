#include "..\..\script_macros.hpp"
/*
	File: fn_seizeClient.sqf
	Author: Skalicon

	Description:
	Removes the players weapons client side
*/
private ["_exempt"];
_exempt = ["Binocular","ItemWatch","ItemCompass","ItemGPS","ItemMap","NVGoggles","FirstAidKit","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange","optic_ACO_grn","optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_Holosight","optic_Holosight_smg","optic_Hamr","optic_MRCO","optic_Arco"];
{
	if(!(_x in _exempt)) then
	{
		player removeWeapon _x;
	};
} foreach weapons player;

{
	if(!(_x in _exempt)) then
	{
		player removeItemFromUniform _x;
	};
} foreach uniformItems player;

{
	if(!(_x in _exempt)) then
	{
		player removeItemFromVest _x;
	};
} foreach vestItems player;

{
	if(!(_x in _exempt)) then
	{
		player removeItemFromBackpack _x;
	};
} foreach backpackItems player;

{
    if(!(_x in _exempt)) then
    {
            player removeMagazine _x;
    };
} foreach magazines player;

if (uniform player in ["U_Competitor","U_Rangemaster","U_B_CombatUniform_mcam_worn"]) then {removeUniform player;};
if (vest player in ["V_HarnessOGL_brn","V_TacVest_blk_POLICE"]) then {removeVest player;};
if (headgear player in ["H_CrewHelmetHeli_B", "H_Cap_police"]) then {removeHeadgear player;};

[] call life_fnc_sessionUpdate;
titleText[localize "STR_NOTF_SeizeIllegals","PLAIN"];