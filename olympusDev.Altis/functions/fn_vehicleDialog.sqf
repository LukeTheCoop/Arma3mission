
/*
_unit = player;
_vendor = vehicleVendor;

createDialog "carVendor";


_ctrl = (findDisplay 9999) displayCtrl 10;

vehicleArray = ["Quadbike", "Offroad", "SUV"];

{
	_name = str _x;
	lbAdd [10, _name];
} forEach vehicleArray;
*/

/* WORK IN PROGRESS */
_vehicleArray = "getText (_x >> 'textSingular') == 'car' && getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgVehicles");
_carArray = [];
//"textSingular" = "car"
createDialog "carVendor";

_sortVehicles = 
{
	_array = (_this select 0);
	{
	_array deleteAt (_array find _x);
	}forEach _array;
	_array;
};

{
	_car = configName _x;
	_carClass = getText (configFile >> "CfgVehicles" >> _car >> "_generalMacro");

	_carArray pushBack _car;

}forEach _vehicleArray;

_vehicleArray = [_vehicleArray] call _sortVehicles;

{
	_carName = getText (configFile >> "CfgVehicles" >> _x >> "displayname");
	lbAdd[10, _carName];
	lbSetData [10, _forEachIndex, _x];
}forEach _carArray;

while {true} do 
{
	_index = lbCurSel 10;
	_weapon = lbData [10, _index];
	_picture = getText (configFile >> "CfgVehicles" >> _weapon >> "picture");
	ctrlSetText [6, _picture];
	sleep 0.1;
};