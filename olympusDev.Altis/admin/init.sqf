params ["_player"];

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
	hint format ["Hello %1", _player];
	hint "I have something for you. A power... flex your 'HOME' muscle to use it. I recmend you get a friend online for this... Have fun";
	sleep 4;
	hint "I am going to go now... no one else must know!";
	_admin setPosASL [getPosASL _glitchGuy select 0, getPosASL _glitchGuy select 1, getPosASL _glitchGuy select 2];
	hint 5;
	_admin setDamage 1;
}];


