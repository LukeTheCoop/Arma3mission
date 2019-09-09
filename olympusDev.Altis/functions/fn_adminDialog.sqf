createDialog "adminMenu";


	_ctrl = (findDisplay 9996) displayCtrl 4;

	playerArray = [];

	{
		playerArray pushBack _x;
		_name = name _x;
		lbAdd [4, _name];
	} forEach allUnits;
