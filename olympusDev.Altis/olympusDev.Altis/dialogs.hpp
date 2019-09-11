class gunShop
{
	idd = 9998;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Dehyly)
		////////////////////////////////////////////////////////
		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class gunFrame: RscFrame
		{
			idc = 1800;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class gunBackground: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.462 * safezoneH;
			colorText[] = {1,1,1,0.5};
		};
		class gunList: RscListbox
		{
			idc = 1500;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.33 * safezoneH;
		};
		class gunPicture: RscPicture
		{
			idc = 1201;
			text = "";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.187 * safezoneH;
		};
		class gunClose: RscButton
		{
			idc = 1600;
			text = "Close"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 0";
		};
		class gunGet: RscButton
		{
			idc = 1601;
			text = "Get Weapon"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			action = "execVM 'weapons\takeWeapon.sqf'";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};

};
class carVendor
{
	idd = 9999;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Cimipu)
		////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Hehoki)
		////////////////////////////////////////////////////////

		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class LuC_background_2: IGUIBack
		{
			idc = 2;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_3: IGUIBack
		{
			idc = 3;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_4: IGUIBack
		{
			idc = 4;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_background_5: IGUIBack
		{
			idc = 5;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_picture_1: RscPicture
		{
			idc = 6;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.154 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class LuC_buttonSpawn: RscButton
		{
			idc = 7;
			text = "Spawn"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "execVM 'cars\spawnVehicle.sqf'";
		};
		class LuC_buttonClose: RscButton
		{
			idc = 8;
			text = "Close"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "closeDialog 0";
		};
		class LuC_text_1: RscText
		{
			idc = 9;
			text = "Select which vehicle you will like to spawn..."; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_listbox_1: RscListbox
		{
			idc = 10;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.308 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};
class playerSpawn
{
	idd = 9997;
	movingEnabled = false;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 1)) then {true};""];";

	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Rukyro)
		////////////////////////////////////////////////////////

		class LuC_background: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class LuC_listbox: RscListbox
		{
			idc = 3;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class LuC_background_2: IGUIBack
		{
			idc = 2;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.345469 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0.5,0,0.8};
		};
		class LuC_backGround_3: IGUIBack
		{
			idc = 4;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.231 * safezoneH;
			colorBackground[] = {0,0.5,0,0.8};
		};
		class LuC_background_4: IGUIBack
		{
			idc = 5;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0,0.5,0,0.8};
		};
		class LuC_button: RscButton
		{
			idc = 6;
			text = "Spawn"; //--- ToDo: Localize;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {1,1,1,1};
			action = "execVM 'spawn\selectSpawn.sqf'"; 
		};
		class LuC_text: RscText
		{
			idc = 7;
			text = "Select where you would like to spawn "; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////


	};
};

class adminMenu {
	idd = 1996;
	movingEnabled = false;

	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Jejuto)
		////////////////////////////////////////////////////////

		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class LuC_background_2: IGUIBack
		{
			idc = 2;
			x = 0.417501 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.33 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_text_1: RscText
		{
			idc = 3;
			text = "Admin Menu"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0.5,0,1};
			colorBackground[] = {0.694118,0.2,0.223529,1};
		};
		class LuC_listBox: RscListbox
		{
			idc = 4;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.143 * safezoneH;
			colorText[] = {0.941176,0.509804,0.192157,1};
		};
		class LuC_killButton: RscButton
		{
			idc = 5;
			text = "Kill"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.694118,0.2,0.223529,1};
			action = "execVM 'admin\killPlayer.sqf'";
		};
		class LuC_teleButton: RscButton
		{
			idc = 6;
			text = "Teleport"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.694118,0.2,0.223529,1};
			action = "execVM 'admin\telePlayer.sqf'";
		};
		class LuC_closeButton: RscButton
		{
			idc = 7;
			text = "Close"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.941176,0.509804,0.192157,1};
			action = "closeDialog 0";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};
class heliVendor
{
	idd = 9995;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Cimipu)
		////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Hehoki)
		////////////////////////////////////////////////////////

		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class LuC_background_2: IGUIBack
		{
			idc = 2;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_3: IGUIBack
		{
			idc = 3;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_4: IGUIBack
		{
			idc = 4;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_background_5: IGUIBack
		{
			idc = 5;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_picture_1: RscPicture
		{
			idc = 6;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.154 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class LuC_buttonSpawn: RscButton
		{
			idc = 7;
			text = "Spawn"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "execVM 'cars\spawnHeli.sqf'";
		};
		class LuC_buttonClose: RscButton
		{
			idc = 8;
			text = "Close"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "closeDialog 0";
		};
		class LuC_text_1: RscText
		{
			idc = 9;
			text = "Select which helicopter you will like to spawn..."; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_listbox_2: RscListbox
		{
			idc = 10;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.308 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};

class openGame {
	idd = 9993;
	movingEnabled = false;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 1)) then {true};""];";
	class controls {
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Qydama)
	////////////////////////////////////////////////////////

	class LuC_background_1: IGUIBack
	{
		idc = 1;
		x = -0.551875 * safezoneW + safezoneX;
		y = 0.918 * safezoneH + safezoneY;
		w = 0.469219 * safezoneW;
		h = 0.198 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class LuC_background_2: IGUIBack
	{
		idc = 2;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.495 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class LuC_picture_1: RscPicture
	{
		idc = 3;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.22 * safezoneH;
	};
	class LuC_text_1: RscStructuredText
	{
		idc = 4;
		text = "                                Welcome to LukeTheCoop's mission file!"; //--- ToDo: Localize;
		x = 0.324687 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.340312 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.6 * GUI_GRID_H;
	};
	class LuC_nextButton: RscButton
	{
		idc = 5;
		text = "Next"; //--- ToDo: Localize;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "[] call LuC_fnc_gameOpen2";
	};
	class LuC_textMain: RscStructuredText
	{
		idc = 6;
		text = "Hello and welcome to LukeTheCoop's mission! There is a lot to do here! Go ahead and press 'Next' to learn about how things work. Press 'Skip' if you would like to get straight into the fun!"; //--- ToDo: Localize;
		x = 0.314375 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.20625 * safezoneW;
		h = 0.352 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	class LuC_skipButton: RscButton
	{
		idc = 7;
		text = "Skip"; //--- ToDo: Localize;
		x = 0.649531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "execVM 'spawn\haveFun.sqf'";
	};
	class LuC_pictureText: RscStructuredText
	{
		idc = 8;
		text = "Press skip to get into the game right away. Press next to learn what is in store for you."; //--- ToDo: Localize;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.11 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

	};
};
class openGame2 {
	idd = 9992;
	movingEnabled = false;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 1)) then {true};""];";
	class controls {
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Qydama)
	////////////////////////////////////////////////////////

	class LuC_background_1: IGUIBack
	{
		idc = 1;
		x = -0.551875 * safezoneW + safezoneX;
		y = 0.918 * safezoneH + safezoneY;
		w = 0.469219 * safezoneW;
		h = 0.198 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class LuC_background_2: IGUIBack
	{
		idc = 2;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.495 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class LuC_picture_1: RscPicture
	{
		idc = 3;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.22 * safezoneH;
	};
	class LuC_text_1: RscStructuredText
	{
		idc = 4;
		text = "                                Spawning Vehicles"; //--- ToDo: Localize;
		x = 0.324687 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.340312 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.6 * GUI_GRID_H;
	};
	class LuC_nextButton: RscButton
	{
		idc = 5;
		text = "Next"; //--- ToDo: Localize;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "[] call LuC_fnc_gameOpen3";
	};
	class LuC_textMain: RscStructuredText
	{
		idc = 6;
		text = "You are able to get multiple diffrent types of vehicles located at the diffrent vendors around the map. Car vendors can be found in Kavala... while the helicopter and plane vendors can be found at Athira airport. To pull out a vehicle go to the vendor, scroll wheel 'Get vehicle' and select the vehicle you would like to spawn. Remember to clear the spawn points, or else the vehicle wont spawn!"; //--- ToDo: Localize;
		x = 0.314375 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.20625 * safezoneW;
		h = 0.352 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	class LuC_skipButton: RscButton
	{
		idc = 7;
		text = "Skip"; //--- ToDo: Localize;
		x = 0.649531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "execVM 'spawn\haveFun.sqf'";
	};
	class LuC_pictureText: RscStructuredText
	{
		idc = 8;
		text = "Here you can see the kavala car vendor. He is able to spawn a variety of vehicles. I achieved this by using the vehicle configs."; //--- ToDo: Localize;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.11 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

	};
};
class openGame3 {
	idd = 9991;
	movingEnabled = false;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 1)) then {true};""];";
	class controls {
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Qydama)
	////////////////////////////////////////////////////////

	class LuC_background_1: IGUIBack
	{
		idc = 1;
		x = -0.551875 * safezoneW + safezoneX;
		y = 0.918 * safezoneH + safezoneY;
		w = 0.469219 * safezoneW;
		h = 0.198 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class LuC_background_2: IGUIBack
	{
		idc = 2;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.495 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class LuC_picture_1: RscPicture
	{
		idc = 3;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.22 * safezoneH;
	};
	class LuC_text_1: RscStructuredText
	{
		idc = 4;
		text = "                                Getting Weapons"; //--- ToDo: Localize;
		x = 0.324687 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.340312 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.6 * GUI_GRID_H;
	};
	class LuC_nextButton: RscButton
	{
		idc = 5;
		text = "Next"; //--- ToDo: Localize;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "[] call LuC_fnc_gameOpen4";
	};
	class LuC_textMain: RscStructuredText
	{
		idc = 6;
		text = "Here comes the fun part. Weapons. You are able to acquire pistols at kavala. You want bigger guns? Well you can go to warzone to get Assualt rifles. Warzone is filled with enemies which you can try to kill... or not thats up to you. Go ahead and talk to the guy with pilot overalls in Kavala to get teleported to warzone!"; //--- ToDo: Localize;
		x = 0.314375 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.20625 * safezoneW;
		h = 0.352 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	class LuC_skipButton: RscButton
	{
		idc = 7;
		text = "Skip"; //--- ToDo: Localize;
		x = 0.649531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "execVM 'spawn\haveFun.sqf'";
	};
	class LuC_pictureText: RscStructuredText
	{
		idc = 8;
		text = "Here you can see the warzone. There are many enemies here. Good luck!"; //--- ToDo: Localize;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.11 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

	};
};
class arShop
{
	idd = 9990;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Dehyly)
		////////////////////////////////////////////////////////
		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class gunFrame: RscFrame
		{
			idc = 1800;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class gunBackground: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.462 * safezoneH;
			colorText[] = {1,1,1,0.5};
		};
		class gunList: RscListbox
		{
			idc = 1500;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.33 * safezoneH;
		};
		class gunPicture: RscPicture
		{
			idc = 1201;
			text = "";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.187 * safezoneH;
		};
		class gunClose: RscButton
		{
			idc = 1600;
			text = "Close"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 0";
		};
		class gunGet: RscButton
		{
			idc = 1601;
			text = "Get Weapon"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			action = "execVM 'weapons\takeWeapon.sqf'";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};

};
class openGame4 {
	idd = 9989;
	movingEnabled = false;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 1)) then {true};""];";
	class controls {
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Qydama)
	////////////////////////////////////////////////////////

	class LuC_background_1: IGUIBack
	{
		idc = 1;
		x = -0.551875 * safezoneW + safezoneX;
		y = 0.918 * safezoneH + safezoneY;
		w = 0.469219 * safezoneW;
		h = 0.198 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class LuC_background_2: IGUIBack
	{
		idc = 2;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.495 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class LuC_picture_1: RscPicture
	{
		idc = 3;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.22 * safezoneH;
	};
	class LuC_text_1: RscStructuredText
	{
		idc = 4;
		text = "                                                   Have fun!"; //--- ToDo: Localize;
		x = 0.324687 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.340312 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.6 * GUI_GRID_H;
	};
	class LuC_textMain: RscStructuredText
	{
		idc = 6;
		text = "Have fun blowing up cars, flying helicopters and planes, killing ai, and finding easter eggs! Oh I forgot... there is this weird guy in sofia, I dont recommend you talk to him."; //--- ToDo: Localize;
		x = 0.314375 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.20625 * safezoneW;
		h = 0.352 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	class LuC_skipButton: RscButton
	{
		idc = 7;
		text = "Close"; //--- ToDo: Localize;
		x = 0.649531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		action = "execVM 'spawn\closeAll.sqf'";
	};
	class LuC_pictureText: RscStructuredText
	{
		idc = 8;
		text = "???"; //--- ToDo: Localize;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.11 * safezoneH;
		colorBackground[] = {0.403922,0.545098,0.607843,1};
		sizeEx = 1.3 * GUI_GRID_H;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

	};
};
class planeVendor
{
	idd = 9988;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Cimipu)
		////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by [Sr. Medic] LukeTheCoop, v1.063, #Hehoki)
		////////////////////////////////////////////////////////

		class LuC_background_1: IGUIBack
		{
			idc = 1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class LuC_background_2: IGUIBack
		{
			idc = 2;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_3: IGUIBack
		{
			idc = 3;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class LuC_background_4: IGUIBack
		{
			idc = 4;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_background_5: IGUIBack
		{
			idc = 5;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_picture_1: RscPicture
		{
			idc = 6;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.154 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class LuC_buttonSpawn: RscButton
		{
			idc = 7;
			text = "Spawn"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "execVM 'cars\spawnPlane.sqf'";
		};
		class LuC_buttonClose: RscButton
		{
			idc = 8;
			text = "Close"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			action = "closeDialog 0";
		};
		class LuC_text_1: RscText
		{
			idc = 9;
			text = "Select which plane you will like to spawn..."; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
			colorBackground[] = {0.5,0.6,0.4,1};
		};
		class LuC_listbox_2: RscListbox
		{
			idc = 10;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.308 * safezoneH;
			colorText[] = {0.5,0.25,0,1};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};