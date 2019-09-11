_guy = warzoneGuy;
_player = player;

_guy disableAI "MOVE";
	_guy disableAI "WEAPONAIM";
	_guy disableAI "PATH";
	_guy disableAI "TARGET";
	_guy disableAI "COVER";
	_guy disableAI "ANIM";
	_guy disableAI "AUTOTARGET";
	_guy allowDamage false;
	_guy disableAI "AUTOCOMBAT";
	_guy disableAI "SUPPRESSION";
	_guy disableAI "ANIM";
	_guy disableAi "NVG";

_guy addAction ["Get Weapons", "[] call LuC_fnc_arWeapons"];
