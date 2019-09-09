params ["_player"];
_glitch = glitchRock;
_spawn = getMarkerPos "respawn_cilivian";
_kav = getMarkerPos "kavala";
_glitchGuy = glitchGuy;
_spawns = spawner;

//If player is 500 m from spawn dialog will pop up
_player addAction ["show", "[] spawn LuC_fnc_spawnDialog"];



if((_player distance _glitch) <= 50) then 
{
	hint "What did you do to get over here? Go talk to that guy to get teleported to Kavala!";
};

_glitchGuy addAction ["Teleport back!", {
	_player setPos [getMarkerPos kavala];
}];


