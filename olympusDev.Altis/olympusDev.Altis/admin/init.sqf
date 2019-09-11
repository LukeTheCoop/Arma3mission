_player = player;

_admin = adminGuy;
_glitchGuy = glitchGuy;
//disableAI
_admin disableAI "MOVE";
_admin disableAI "WEAPONAIM";
_admin disableAI "PATH";
_admin disableAI "TARGET";
_admin disableAI "COVER";
_admin disableAI "ANIM";
_admin disableAI "AUTOTARGET";
_admin allowDamage false;

waituntil {!(IsNull (findDisplay 46))};
_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 199) then {[] call LuC_fnc_adminDialog}"];
_admin addAction ["Talk to me",{
	hint "Hello! I am Admin. I have something to show you. If you flex your 'HOME' muscle you will get somthing very special... enjoy.";
	sleep 8;
	hint "";
}];


