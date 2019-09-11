params ["_player", "_JIP"];

//Calling scripts
0 = [_player] execVM "cars\init.sqf";
0 = [_player] execVM "weapons\init.sqf";
0 = [_player] execVM "medic\init.sqf";
0 = [_player] execVM "spawn\init.sqf";
0 = [_player] execVM "admin\init.sqf";
0 = [_player] execVM "guide\init.sqf";
0 = [_player] execVM "teleport\init.sqf";
0 = [_player] execVM "warzone\init.sqf";
//join no group
_player addEventHandler ["InventoryOpened", 
{
        if (_this select 1 isKindOf "Man") then 
		{
			hint "You cant look through others inventorys!"; closeDialog 602; true
		};
}];


_player addEventHandler ["Dammaged", 
{
	hint "You are damaged! Go find the docter near the office building to be healed!";
}];

_player setPos (getPos spawner); 


//hinting the welcome message 
