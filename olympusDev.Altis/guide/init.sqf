params ["_player"];

_guide = guide;

//DISABLE AI
	_guide disableAI "WEAPONAIM";
	_guide disableAI "PATH";
	_guide disableAI "TARGET";
	_guide disableAI "COVER";
	_guide disableAI "ANIM";
	_guide disableAI "AUTOTARGET";
	_guide allowDamage false;
	_guide disableAI "AUTOCOMBAT";
	_guide disableAI "SUPPRESSION";
	_guide disableAI "ANIM";
	_guide disableAi "NVG";
