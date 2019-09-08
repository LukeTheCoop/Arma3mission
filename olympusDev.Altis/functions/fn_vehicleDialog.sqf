_unit = player;
_vendor = vehicleVendor;

createDialog "carVendor";


_ctrl = (findDisplay 9999) displayCtrl 10;

vehicleArray = ["Quadbike", "Offroad", "SUV"];

{
	_name = str _x;
	lbAdd [10, _name];
} forEach vehicleArray;


/* WORK IN PROGRESS 
_vehicleArray = "getText (_x >> 'textSingular') == 'car' && getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgVehicles");
_carArray = [];
//"textSingular" = "car"
createDialog "carVendor";
hint str _vehicleArray;
{
	_car = configName _x;
	_carClass = getText (configFile >> "CfgVehicles" >> _car);
	if (_carClass != "") then 
	{
		_carArray pushBack _car;
	};
}forEach _vehicleArray;

{
	_carName = getText (configFile >> "CfgVehicles" >> _x >> "displayname");
	lbAdd[10, _carName];
	lbSetData [10, _forEachIndex, _x];
}forEach _carArray;
*/