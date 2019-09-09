_player = player;
_medic = medic;

//disableAI
	_medic disableAI "MOVE";
	_medic disableAI "WEAPONAIM";
	_medic disableAI "PATH";
	_medic disableAI "TARGET";
	_medic disableAI "COVER";
	_medic disableAI "ANIM";
	_medic disableAI "AUTOTARGET";
	_medic allowDamage false;
	_medic disableAI "AUTOCOMBAT";
	_medic disableAI "SUPPRESSION";
	_medic disableAI "ANIM";
	_medic disableAi "NVG";


//action
_medic addAction ["Heal player", {execVM "medic\heal.sqf";}, [], 6, false, true, "", "", 10];