_player = player;

_index = lbCurSel 3;
_spawn = spawnArray select _index;

_player setPos (getMarkerPos "kavala");
	_player setDir 70;
if (_spawn == "Kavala") then 
{

	_player setPos (getMarkerPos "kavala");
	_player setDir 70;
};
if (_spawn == "Air") then {

	_player setPos (getMarkerPos "air");
	_player setDir 150;
};
if (_spawn == "Sofia") then {
	_player setPos (getMarkerPos "sofia");
	_player setDir 9;
};


closeDialog 9997;