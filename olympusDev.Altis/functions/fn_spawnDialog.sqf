
createDialog "playerSpawn";

	_ctrl = (findDisplay 9997) displayCtrl 3;

	spawnArray = ["Kavala", "Air", "Sofia"];

	{
		_name = _x;
		lbAdd [3, _name];
	} forEach spawnArray;
