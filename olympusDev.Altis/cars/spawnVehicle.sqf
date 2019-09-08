_index = lbCurSel 10;
_vehicle = vehicleArray select _index;
_carSpawn = getMarkerPos "carSpawn_1";



if (_vehicle == "Quadbike") then 
{
	_quad = "B_G_Quadbike_01_F" createVehicle getMarkerPos "carSpawn_1";
	_quad setDir 269;
	hint str _vehicle;
};
if (_vehicle == "Offroad") then {
	_offroad = "B_G_Offroad_01_F" createVehicle getMarkerPos "carSpawn_2";
	_offroad setDir 269;
	hint str _vehicle;
};
if (_vehicle == "SUV") then {
	hint str _vehicle;
	_suv = "C_SUV_01_F" createVehicle getMarkerPos "carSpawn_3";
	_suv setDir 269;
};
