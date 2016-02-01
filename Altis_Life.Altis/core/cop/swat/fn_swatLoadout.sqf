#include "..\..\..\script_macros.hpp"
/*
	File: fn_swatLoadout.sqf
	Author: Jesse Schultz

	Based of Tonics crap.

	Description:
	Loads the swat out with the default gear and doesn't save the gear...
*/
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;

{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);

if(hmd player != "") then {	player unlinkItem (hmd player); };

/* Swat Commander Loadout */
if(life_swat_commander) then
{
	player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "hgun_P07_F";
	player addMagazine "30Rnd_9x21_Mag";
};

/* Swat Recon Loadout */
if(life_swat_recon) then
{
	player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "hgun_P07_F";
	player addMagazine "30Rnd_9x21_Mag";
};

/* Swat Assault Loadout */
if(life_swat_assault) then
{
	player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "hgun_P07_F";
	player addMagazine "30Rnd_9x21_Mag";
};

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_playerSkins;