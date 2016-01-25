#include "..\..\script_macros.hpp"
/*
	File: fn_clothingMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and initializes the clothing store menu.
	Started clean, finished messy.
*/
private["_list","_clothes","_filter","_flag","_shopTitle","_license","_shopSide","_exit"];
if(player != vehicle player) exitWith {titleText[localize "STR_NOTF_ActionInVehicle","PLAIN"];};
_exit = false;

/* License check & config validation */
if(!isClass(missionConfigFile >> "Clothing" >> (SEL(_this,3)))) exitWith {}; //Bad config entry.
_shopTitle = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"title");
_shopSide = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"side");
_license = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"license");

if(!(EQUAL(_shopSide,""))) then
{
	_flag = switch(playerSide) do {case west: {"cop"}; case independent: {"med"}; default {"civ"};};
	if(!(EQUAL(_flag,_shopSide))) then {_exit = true;};
};
if(_exit) exitWith {};

if(!(EQUAL(_license,""))) then
{
	_flag = M_CONFIG(getText,"Licenses",_license,"side");
	if(!(LICENSE_VALUE(_license,_flag))) exitWith {hint localize "STR_Shop_Veh_NoLicense"; _exit = true;};
};
if(_exit) exitWith {};

ctrlSetText [3103,localize _shopTitle];
/* Open up the menu */
createDialog "Life_Clothing";
disableSerialization;

(findDisplay 3100) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {closeDialog 0; [] call life_fnc_playerSkins;}"]; //Fix Custom Skin after ESC

//Cop / Civ Pre Check
if((SEL(_this,3) in ["bruce","dive","reb","kart"] && playerSide != civilian)) exitWith {hint localize "STR_Shop_NotaCiv"; closeDialog 0;};
if((SEL(_this,3) == "reb" && !license_civ_rebel)) exitWith {hint localize "STR_Shop_NotaReb"; closeDialog 0;};
if((SEL(_this,3) in ["cop"] && playerSide != west)) exitWith {hint localize "STR_Shop_NotaCop"; closeDialog 0;};
if((SEL(_this,3) in ["dive"] && !license_civ_dive)) exitWith { hint localize "STR_Shop_NotaDive"; closeDialog 0;};

player setBehaviour "SAFE";
player switchMove "";

life_clothing_store = SEL(_this,3);

/* Store license check */
if(isClass(missionConfigFile >> "Licenses" >> life_clothing_store)) then
{
	_flag = M_CONFIG(getText,"Licenses",life_clothing_store,"side");
	_displayName = M_CONFIG(getText,"Licenses",life_clothing_store,"displayName");
	if(!(LICENSE_VALUE(life_clothing_store,_flag))) exitWith
	{
		hint format[localize "STR_Shop_YouNeed",localize _displayName];
		closeDialog 0;
	};
};

//initialize camera view
life_shop_cam = "CAMERA" camCreate getPos player;
showCinemaBorder false;
life_shop_cam cameraEffect ["Internal", "Back"];
life_shop_cam camSetTarget (player modelToWorld [0,0,1]);
_camDistance = 4;
while {_camDistance > 1} do
{
	if (!lineIntersects [ATLToASL (player modelToWorld [1,_camDistance,2]), ATLToASL (player modelToWorld [0,0,1]), player]) exitWith {};
	_camDistance = _camDistance - 0.5;
};

life_shop_cam camSetPos (player modelToWorld [1,_camDistance,2]);
life_shop_cam camSetFOV .33;
life_shop_cam camSetFocus [50, 0];
life_shop_cam camCommit 0;

if(isNull (findDisplay 3100)) exitWith {};
_list = (findDisplay 3100) displayCtrl 3101;
_filter = (findDisplay 3100) displayCtrl 3105;
lbClear _filter;
lbClear _list;

_filter lbAdd localize "STR_Shop_UI_Clothing";
_filter lbAdd localize "STR_Shop_UI_Hats";
_filter lbAdd localize "STR_Shop_UI_Glasses";
_filter lbAdd localize "STR_Shop_UI_Vests";
_filter lbAdd localize "STR_Shop_UI_Backpack";

_filter lbSetCurSel 0;

life_oldClothes = uniform player;
life_olduniformItems = uniformItems player;
life_oldBackpack = backpack player;
life_oldVest = vest player;
life_oldVestItems = vestItems player;
life_oldBackpackItems = backpackItems player;
life_oldGlasses = goggles player;
life_oldHat = headgear player;

[] call life_fnc_playerSkins;

waitUntil {isNull (findDisplay 3100)};
detach player;
life_shop_cam cameraEffect ["TERMINATE","BACK"];
camDestroy life_shop_cam;
life_clothing_filter = 0;

if(isNil "life_clothesPurchased") exitWith
{
	life_clothing_purchase = [-1,-1,-1,-1,-1];
	if(life_oldClothes != "") then {player addUniform life_oldClothes;} else {removeUniform player};
	if(life_oldHat != "") then {player addHeadgear life_oldHat} else {removeHeadgear player;};
	if(life_oldGlasses != "") then {player addGoggles life_oldGlasses;} else {removeGoggles player};
	if(backpack player != "") then {
		if(life_oldBackpack == "") then
		{
			removeBackpack player;
		}
		else
		{
			removeBackpack player;
			player addBackpack life_oldBackpack;
			clearAllItemsFromBackpack player;
			if(count life_oldBackpackItems > 0) then
			{
				{
					[_x,true,true] call life_fnc_handleItem;
				} foreach life_oldBackpackItems;
			};
		};
	};

	if(count life_oldUniformItems > 0) then
	{
		{[_x,true,false,false,true] call life_fnc_handleItem;} foreach life_oldUniformItems;
	};

	if(vest player != "") then
	{
		if(life_oldVest == "") then
		{
			removeVest player;
		}
		else
		{
			player addVest life_oldVest;
			if(count life_oldVestItems > 0) then
			{
				{[_x,true,false,false,true] call life_fnc_handleItem;} foreach life_oldVestItems;
			};
		};
	};
	[] call life_fnc_playerSkins;
};
life_clothesPurchased = nil;

//Check uniform purchase.
if((life_clothing_purchase select 0) == -1) then
{
	if(life_oldClothes != uniform player) then {player addUniform life_oldClothes;};
};
//Check hat
if((life_clothing_purchase select 1) == -1) then
{
	if(life_oldHat != headgear player) then {if(life_oldHat == "") then {removeHeadGear player;} else {player addHeadGear life_oldHat;};};
};
//Check glasses
if((life_clothing_purchase select 2) == -1) then
{
	if(life_oldGlasses != goggles player) then
	{
		if(life_oldGlasses == "") then
		{
			removeGoggles player;
		}
		else
		{
			player addGoggles life_oldGlasses;
		};
	};
};
//Check Vest
if((life_clothing_purchase select 3) == -1) then
{
	if(life_oldVest != vest player) then
	{
		if(life_oldVest == "") then {removeVest player;} else
		{
			player addVest life_oldVest;
			{
				[_x,true,false,false,true] call life_fnc_handleItem;
			} foreach life_oldVestItems;
		};
	};
};

//Check Backpack
if((life_clothing_purchase select 4) == -1) then
{
	if(life_oldBackpack != backpack player) then
	{
		if(life_oldBackpack == "") then
		{
			removeBackpack player;
		}
		else
		{
			removeBackpack player;
			player addBackpack life_oldBackpack;
			{[_x,true,true] call life_fnc_handleItem;} foreach life_oldBackpackItems;
		};
	};
};

life_clothing_purchase = [-1,-1,-1,-1,-1];
[] call life_fnc_saveGear;