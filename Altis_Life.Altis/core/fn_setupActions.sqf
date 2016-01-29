/*
	File: fn_setupActions.sqf

	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
	};
	case west:
	{
		//Seize Ground Objects
		life_actions = life_actions + [player addAction[localize "STR_pAct_SeizeObj",life_fnc_seizeObj,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']];
	};
};

life_actions = life_actions + [player addAction["Punch Balls",life_fnc_punchBallsAction,"",0,false,false,"",'!isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"]']];

/*
*
* Will add into later...
//Bloodbag Self
life_actions = life_actions + [player addAction["<t color='#FF0000'>Self Bloodbag</t>",life_fnc_bloodbagself,"",0,false,false,"",' player isKindOf "Man" && alive player && (damage player) > 0.05 && (life_inv_bloodbag > 0)']];

//Bloodbag Others
life_actions = life_actions + [player addAction["<t color='#FF0000'>Give Bloodbag</t>",life_fnc_bloodbag,"",2,false,false,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && (damage cursorTarget) > 0.05 && cursorTarget distance player < 3.5 && (life_inv_bloodbag > 0)']];
*
*/