_player = player;
_medic = medic;

//disableAI
	_vendor disableAI "MOVE";
	_vendor disableAI "WEAPONAIM";
	_vendor disableAI "PATH";
	_vendor disableAI "TARGET";
	_vendor disableAI "COVER";
	_vendor disableAI "ANIM";
	_vendor disableAI "AUTOTARGET";
	_vendor allowDamage false;
	_vendor disableAI "AUTOCOMBAT";
	_vendor disableAI "SUPPRESSION";
	_vendor disableAI "ANIM";
	_vednor disableAi "NVG";


//action
_medic addAction ["Heal player", {execVM "medic\heal.sqf";}, [], 6, false, true, "", "", 10];