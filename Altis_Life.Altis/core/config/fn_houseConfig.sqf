/*
	File: fn_houseConfig.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master config file for buyable houses

	Return Format:
	[price,# of containers allowed]
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if(_house == "") exitWith {[]};

switch (true) do {
	case (_house in ["Land_i_Shed_Ind_F"]): {[50000,3]};
	case (_house in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]): {[50000,0]};
	case (_house in ["Land_i_House_Big_02_V3_F"]): {[500,11]};
	case (_house in ["Land_i_House_Big_02_V2_F"]): {[600,12]};
	case (_house in ["Land_i_House_Big_02_V1_F"]): {[700,13]};
	case (_house in ["Land_i_House_Big_01_V3_F"]): {[700,14]};
	case (_house in ["Land_i_House_Big_01_V2_F"]): {[700,15]};
	case (_house in ["Land_i_House_Small_01_V3_F"]): {[700,16]};
	case (_house in ["Land_i_House_Small_01_V2_F"]): {[700,17]};
	case (_house in ["Land_i_House_Small_02_V2_F"]): {[700,18]};
	case (_house in ["Land_i_House_Small_02_V3_F"]): {[700,19]};
	case (_house in ["Land_i_House_Big_01_V1_F"]): {[800,20]};
	case (_house in ["Land_i_House_Small_01_V1_F"]): {[900,21]};
	case (_house in ["Land_i_House_Small_02_V1_F"]): {[10000,22]};
	case (_house in ["Land_i_House_Small_03_V1_F"]): {[1010,23]};
	case (_house in ["Land_i_Stone_HouseSmall_V1_F"]): {[1020,24]};
	case (_house in ["Land_i_Stone_HouseSmall_V3_F"]): {[1030,25]};
	case (_house in ["Land_i_Stone_HouseSmall_V2_F"]): {[1040,26]};
	case (_house in ["Land_i_Addon_02_V1_F"]): {[1050,27]};
	case (_house in ["Land_i_Stone_Shed_V1_F"]): {[1060,28]};
	case (_house in ["Land_i_Stone_Shed_V2_F"]): {[1070,29]};
	case (_house in ["	Land_i_Stone_Shed_V3_F"]): {[1080,30]};
	case (_house in ["Land_i_Stone_HouseSmall_V2_F"]): {[1040,26]};
	case (_house in ["Land_i_Stone_HouseSmall_V2_F"]): {[1040,26]};
	default {[]};
};