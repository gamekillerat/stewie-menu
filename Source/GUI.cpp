#include "stdafx.h"
void Menu::Drawing::Text(const char * text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center, bool rightAlign, bool outline)
{
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
	UI::SET_TEXT_FONT(rgbaf.f);
	UI::SET_TEXT_SCALE(size.w, size.h);
	if (outline && Menu::Settings::DrawTextOutline) {
		UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
		UI::SET_TEXT_OUTLINE();
	}
	if (rightAlign) {
		UI::SET_TEXT_RIGHT_JUSTIFY(TRUE);
		UI::SET_TEXT_WRAP(Menu::Settings::menuX, Menu::Settings::menuX + 0.085f);//0.078f);
	}
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((char*)text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
}

void Menu::Drawing::Spriter(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a)
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)Streamedtexture.c_str()))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((char*)Streamedtexture.c_str(), false);
	}
	else
	{
		GRAPHICS::DRAW_SPRITE((char*)Streamedtexture.c_str(), (char*)textureName.c_str(), x, y, width, height, rotation, r, g, b, a);
	}
}
float gGlareDir;
float conv360(float base, float min, float max)
{
	float fVar0;
	if (min == max) return min;
	fVar0 = max - min;
	base -= SYSTEM::ROUND(base - min / fVar0) * fVar0;
	if (base < min) base += fVar0;
	return base;
}
static fpFileRegister file_register = (fpFileRegister)(Memory::pattern("48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 54 41 56 41 57 48 83 EC 50 48 8B EA 4C 8B FA 48 8B D9 4D 85 C9").count(1).get(0).get<decltype(file_register)>());

bool FileExists(const std::string& fileName)
{
	struct stat buffer;
	return (stat(fileName.c_str(), &buffer) == 0);
}
void Menu::render_globe(const float x, const float y, const float sx, const float sy, const int r, const int g,const int b)

{

	float g_glare_dir = 0;

	auto g_glare_handle = GRAPHICS::REQUEST_SCALEFORM_MOVIE(static_cast<char*>("MP_MENU_GLARE"));

	const auto rot = CAM::_GET_GAMEPLAY_CAM_ROT(2);

	const auto dir = conv360(rot.z, 0, 360);

	if ((g_glare_dir == 0 || g_glare_dir - dir > 0.5) || g_glare_dir - dir < -0.5)

	{

		g_glare_dir = dir;

		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(g_glare_handle, static_cast<char*>("SET_DATA_SLOT"));

		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(g_glare_dir);

		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	}

	GRAPHICS::DRAW_SCALEFORM_MOVIE(g_glare_handle, x, y, sx, sy, r, g, b, 20, 0);

	GRAPHICS::_SCREEN_DRAW_POSITION_END();

	//GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&g_glare_handle);

}
void Menu::YTD()
{
	std::string path = "Stewie/";
	std::string name = "StewiesMenu.ytd";
	const std::string fullPath = path + name;

	int textureID;
	if (FileExists(fullPath))
		file_register(&textureID, fullPath.c_str(), true, name.c_str(), false);
}
void Menu::Drawing::Rect(RGBA rgba, VECTOR2 position, VECTOR2_2 size)
{
	GRAPHICS::DRAW_RECT(position.x, position.y, size.w, size.h, rgba.r, rgba.g, rgba.b, rgba.a);
}
bool Menu::Settings::DrawTextOutline = true;
float Menu::Settings::checkBoxPos = 0.949f;
float Menu::Settings::menuX = 0.16f;
float Menu::Settings::menuXscale = 0.23f;
bool Menu::Settings::selectPressed = false;
bool Menu::Settings::GlareOnOff = true;
bool Menu::Settings::displayEnd = true;
bool Menu::Settings::DrawGradientRect = false;
bool Menu::Settings::leftPressed = false;
bool Menu::Settings::rightPressed = false;
bool firstopen = true;
int Menu::Settings::maxVisOptions = 16;
int Menu::Settings::currentOption = 1;
int Menu::Settings::optionCount = 0;
int Menu::Settings::CurrentBackgroundScroll = 0;
SubMenus Menu::Settings::currentMenu;
int Menu::Settings::menuLevel = 0;
int Menu::Settings::optionsArray[1000];
SubMenus Menu::Settings::menusArray[1000];
float Menu::Settings::GlareXPos = 0.285f;
int Menu::Settings::titleRectTexture = 0;
int Menu::Settings::Toggle = 0;
RGBAF Menu::Settings::count{ 255, 255, 255, 255, 0 };
RGBAF Menu::Settings::speedotext{ 255, 0, 0, 255, 6 };
RGBAF Menu::Settings::PremiumTitle{ 255, 255, 255, 255, 1 };
RGBAF Menu::Settings::titleText{ 255, 255, 255, 255, 7 };
RGBAF Menu::Settings::MenuNameAndVersionTEXT{ 145, 0, 255, 255, 0 };
RGBAF Menu::Settings::arrow2{ 255, 255, 255, 255, 3 };
RGBA Menu::Settings::titleRect{ 255, 0, 0, 120 };
RGBA Menu::Settings::headerRect{ 255, 0, 255, 255 };
RGBAF Menu::Settings::optionText{ 255, 255, 255, 255, 6 };
RGBAF Menu::Settings::arrowfontt{ 255, 255, 255, 255, 7 };
RGBAF Menu::Settings::breakText{ 255, 255, 255, 255, 0 };
RGBAF Menu::Settings::Title2text{ 255, 255, 255, 255, 7 };
RGBAF Menu::Settings::arrow{ 255, 255, 255, 255, 3 };
RGBA Menu::Settings::optionRect{ 0, 0, 0, 150 };
RGBA Menu::Settings::breakrect{ 0, 0, 0, 255 };
RGBA Menu::Settings::Endrect{ 0, 0, 0, 200 };
RGBA Menu::Settings::titleEnd{ 255, 0, 0, 255 };
RGBA Menu::Settings::scroller{ 255, 255, 255, 200 };
RGBAF Menu::Settings::integre{ 255, 255, 255, 255, 2 };
RGBA Menu::Settings::line{ 255, 255, 255, 255 };
RGBA Menu::Settings::primary{ 0, 0, 0 };
RGBA Menu::Settings::secondary{ 255, 255, 255 };
RGBAF Menu::Settings::selectedTextClrs{ 255, 255, 255, 255, 0 };
float titlebox = 0.17f;
float fx = 0.516999f;
float fxx = 0.481000f;
float fxxx = 1.088999f;
float fxxxx = 0.902000f;
void Menu::MenuNameAndVersion(char* text)
{
	Drawing::Text(text, Settings::MenuNameAndVersionTEXT, { Settings::menuX + 0.670f, 0.004f }, { 0.425f, 0.425f }, true);
}

void Menu::Title(const char * title)
{
	Drawing::Text(title, Settings::titleText, { Settings::menuX, 0.095f }, { 0.85f, 0.85f }, true);
	Drawing::Spriter("timerbars", "all_white_bg", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::headerRect.r, Settings::headerRect.g, Settings::headerRect.b, 255);
	Drawing::Spriter("timerbars", "all_white_bg", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::headerRect.r, Settings::headerRect.g, Settings::headerRect.b, 255);
	Drawing::Spriter("timerbars", "all_white_bg", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::headerRect.r, Settings::headerRect.g, Settings::headerRect.b, 255);
	Drawing::Spriter("timerbars", "all_white_bg", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::headerRect.r, Settings::headerRect.g, Settings::headerRect.b, 255);


	if (Menu::Settings::titleRectTexture == 0) {
		Drawing::Rect(Settings::titleRect, { Settings::menuX, 0.1175f }, { Menu::Settings::menuXscale, 0.085f });
	}
	else if (Menu::Settings::titleRectTexture == 1) {
		Drawing::Spriter("shopui_title_gr_gunmod", "shopui_title_gr_gunmod", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 2) {
		Drawing::Spriter("shopui_title_ie_modgarage", "shopui_title_ie_modgarage", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 3) {
		Drawing::Spriter("shopui_title_sm_hangar", "shopui_title_sm_hangar", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 4) {
		Drawing::Spriter("shopui_title_gasstation", "shopui_title_gasstation", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 5) {
		Drawing::Spriter("shopui_title_clubhousemod", "shopui_title_clubhousemod", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 6) {
		Drawing::Spriter("pm_tt_12", "ttshot12", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 7) {
		Drawing::Spriter("timerbars", "tpbar", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 8) {
		Drawing::Spriter("digitaloverlay", "signal1", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 9) {
		Drawing::Spriter("digitaloverlay", "nscuzz3", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 10) {
		Drawing::Spriter("digitaloverlay", "static3", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 11) {
		Drawing::Spriter("ar_prop_ar_start_01a", "prop_track_stars_l1", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}
	else if (Menu::Settings::titleRectTexture == 12) {
		Drawing::Spriter("bkr_biker_cash_pile_props", "gz_dlc_cash_pile", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 255);
	}

	if (Menu::Settings::DrawGradientRect) {
		Drawing::Spriter("commonmenu", " gradient_nav", Settings::menuX, 0.1175f, Menu::Settings::menuXscale, 0.085f, 0, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, 100);
	}

	if (Menu::Settings::GlareOnOff == true) {
		render_globe(fx, fxx, fxxx, fxxxx, 255, 255, 255); //globe
	}



	UI::HIDE_HELP_TEXT_THIS_FRAME();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_NEXT_CAMERA, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_CHARACTER_WHEEL, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MULTIPLAYER_INFO, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_ALTERNATE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_CIN_CAM, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MAP_POI, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_RADIO_WHEEL, true);
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_HEADLIGHT, true);
}
bool Menu::Option(const char * option)
{
	Settings::optionCount++;
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		Drawing::Text(option, Settings::optionText, { Settings::menuX - 0.1f, (Settings::optionCount)*0.035f + 0.122f }, { 0.5f, 0.5f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.23f, 0.035f });
		onThis ? Drawing::Rect(Settings::scroller, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { 0.23f, 0.035f }) : NULL;
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		Drawing::Text(option, Settings::optionText, { Settings::menuX - 0.1f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.122f }, { 0.5f, 0.5f }, false);
		Drawing::Rect(Settings::optionRect, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.23f, 0.035f });
		onThis ? Drawing::Rect(Settings::scroller, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { 0.23f, 0.035f }) : NULL;
	}
	if (Settings::currentOption == Settings::optionCount)
	{
		if (Settings::selectPressed)
		{
			return true;
		}
	}
	return false;
}
bool Menu::Option(const char * option, std::function<void()> function)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
float SmoothScroll(float destinationCoord, float currentCoord)
{
	float newCoord = destinationCoord;
	if (!(currentCoord == 0))
	{
		if (destinationCoord < currentCoord)
		{
			if (!(currentCoord - destinationCoord < 0.007f))
			{
				newCoord = currentCoord - (currentCoord - destinationCoord) / 1.7f;
			}
		}
		if (destinationCoord > currentCoord)
		{
			if (!(destinationCoord - currentCoord < 0.007f))
			{
				newCoord = currentCoord + (destinationCoord - currentCoord) / 1.7f;
			}
		}
	}
	return newCoord;
}
bool Menu::Break(const char * title)
{
	Settings::optionCount++;
	bool onThis = Settings::currentOption == Settings::optionCount ? true : false;
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		Drawing::Text(title, Settings::breakText, { Settings::menuX - 0.10f, (Settings::optionCount)*0.035f + 0.125f }, { 0.40f, 0.40f }, false);
		Drawing::Rect(Settings::breakrect, { Settings::menuX, (Settings::optionCount)*0.035f + 0.1415f }, { Menu::Settings::menuXscale, 0.035f });
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		Drawing::Text(title, Settings::breakText, { Settings::menuX - 0.10f, (Settings::optionCount)*0.035f + 0.125f }, { 0.40f, 0.40f }, false);
		Drawing::Rect(Settings::breakrect, { Settings::menuX,  (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1415f }, { Menu::Settings::menuXscale, 0.035f });
	}
	return false;
}
bool Menu::MenuOption(const char * option, SubMenus newSub)
{
	Option(option);

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(">>", Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(">>", Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		MenuLevelHandler::MoveMenu(newSub);
		return true;
	}
	return false;
}
bool Menu::MenuOption(const char * option, SubMenus newSub, std::function<void()> function)
{
	MenuOption(option, newSub);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::Toggle(const char * option, bool & b00l)
{
	Option(option);
	if (b00l)
	{
		if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
			Drawing::Spriter("commonmenu", "common_medal", Settings::menuX + 0.095f, (Settings::optionCount * 0.035f + 0.141f), 0.02f, 0.03f, 0, 0, 255, 0, 255);
		else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
			Drawing::Spriter("commonmenu", "common_medal", Settings::menuX + 0.095f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.02f, 0.03f, 0, 0, 255, 0, 255);
	}
	else
	{
		if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
			Drawing::Spriter("commonmenu", "common_medal", Settings::menuX + 0.095f, (Settings::optionCount * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 0, 70, 255);
		else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
			Drawing::Spriter("commonmenu", "common_medal", Settings::menuX + 0.095f, ((Settings::optionCount - (Settings::currentOption - 16)) * 0.035f + 0.141f), 0.02f, 0.03f, 0, 255, 0, 70, 255);
	}
	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		b00l ^= 1;
		return true;
	}
	return false;
}
bool Menu::Toggle(const char * option, bool & b00l, std::function<void()> function)
{
	Toggle(option, b00l);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
int NumInput() {
	WAIT(50);
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(1, "", "", "", "", "", "", 10);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return 0;
	return atof(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
}

bool Menu::Int(const char * option, int & _int, int min, int max)
{
	return Menu::Int(option, _int, min, max, 1);
}
bool Menu::Int(const char * option, int & _int, int min, int max, int step)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::leftPressed) {
			_int < max ? _int += step : _int = min;
		}
		if (Settings::rightPressed) {
			_int >= min ? _int -= step : _int = max;
		}

		_int < min ? _int = max : _int > max ? _int = min : NULL;

		if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
			int number = NumInput();
			if (number > max || number < min) { _int = max; }
			else { _int = number; }
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar("~c~" + std::to_string(_int) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, Settings::optionCount * 0.035f + 0.125f }, { 0.40f, 0.40f }, true, true, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar("~c~" + std::to_string(_int) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.125f }, { 0.40f, 0.40f }, true, true, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::Int(const char * option, int & _int, int min, int max, std::function<void()> function)
{
	Int(option, _int, min, max);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::Int(const char * option, int & _int, int min, int max, int step, std::function<void()> function)
{
	Int(option, _int, min, max, step);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
#pragma warning(disable: 4244)
bool Menu::Float(const char * option, float & _float, int min, int max)
{
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::rightPressed) {
			_float <= min ? _float = max : _float -= 0.1f;
		}
		if (Settings::leftPressed) {
			_float >= max ? _float = min : _float += 0.1f;
		}
		_float < min ? _float = max : _float > max ? _float = min : NULL;
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("~c~" + currStr.substr(0, (currStr2.length() + 3)) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, Settings::optionCount * 0.035f + 0.13f }, { 0.40f, 0.40f }, true, true, true);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("~c~" + currStr.substr(0, (currStr2.length() + 3)) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.13f }, { 0.40f, 0.40f }, true, true, true);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::Float(const char * option, float & _float, int min, int max, float step)
{
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		if (Settings::rightPressed) {
			_float <= min ? _float = max : _float -= step;
		}
		if (Settings::leftPressed) {
			_float >= max ? _float = min : _float += step;
		}
		_float < min ? _float = max : _float > max ? _float = min : NULL;
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("~c~" + currStr.substr(0, (currStr2.length() + 6)) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, Settings::optionCount * 0.035f + 0.13f }, { 0.40f, 0.40f }, true, true, true);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string currStr = std::to_string(_float);
		std::string currStr2(currStr.begin(), std::find(currStr.begin(), currStr.end(), '.'));
		Drawing::Text(Tools::StringToChar("~c~" + currStr.substr(0, (currStr2.length() + 6)) + "~c~/" + std::to_string(max)), Menu::Settings::optionText, { Settings::menuX + 0.113f, (Settings::optionCount - (Settings::currentOption - 10))*0.035f + 0.13f }, { 0.40f, 0.40f }, true, true, true);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}

#pragma warning(default: 4244)

#pragma warning(disable: 4267)
bool Menu::IntVector(const char * option, std::vector<int> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		int max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::IntVector(const char * option, std::vector<int> Vector, int & position, std::function<void()> function)
{
	IntVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::FloatVector(const char * option, std::vector<float> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar(std::to_string(Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::FloatVector(const char * option, std::vector<float> Vector, int & position, std::function<void()> function)
{
	FloatVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::StringVector(const char * option, std::vector<std::string> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(Tools::StringToChar((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(Tools::StringToChar((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
bool Menu::StringVector(const char * option, std::vector<std::string> Vector, int & position, std::function<void()> function)
{
	StringVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}
bool Menu::StringVector(const char * option, std::vector<char*> Vector, int & position)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::leftPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::rightPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions)
		Drawing::Text(((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, Settings::optionCount * 0.035f + 0.125f }, { 0.5f, 0.5f }, true);
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption)
		Drawing::Text(((Vector[position])), Settings::optionText, { Settings::menuX + 0.068f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.12f }, { 0.5f, 0.5f }, true);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return true;
	return false;
}
#pragma warning(default: 4267)
bool Menu::StringVector(const char * option, std::vector<char*> Vector, int & position, std::function<void()> function)
{
	StringVector(option, Vector, position);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) {
		function();
		return true;
	}
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) {
		function();
		return true;
	}
	return false;
}

bool Menu::ListVector(const char * option, std::vector<char*> Vector, int & position)
{
	constexpr static const VECTOR2_2 textSize = { 0.35f, 0.35f };
	bool onThis = Settings::currentOption == Settings::optionCount + 1 ? true : false;
	Option("");

	if (Settings::optionCount == Settings::currentOption) {
		size_t max = Vector.size() - 1;
		int min = 0;
		if (Settings::rightPressed) {
			position >= 1 ? position-- : position = max;
		}
		if (Settings::leftPressed) {
			position < max ? position++ : position = min;
		}
	}

	if (Settings::currentOption <= Settings::maxVisOptions && Settings::optionCount <= Settings::maxVisOptions) {
		std::string SelectedChar
			= UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL($(Vector[position])));
		if (SelectedChar == "NULL") SelectedChar = Vector[position];

		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_FONT(0);
		UI::SET_TEXT_SCALE(textSize.w, textSize.h);
		UI::SET_TEXT_CENTRE(false);
		if (Menu::Settings::DrawTextOutline) {
			UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
			UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
			UI::SET_TEXT_OUTLINE();
		}
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		std::string s = option;
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Tools::StringToChar(s + " <" + SelectedChar + ">"));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(Settings::menuX - 0.09f, Settings::optionCount * 0.035f + 0.125f);
	}
	else if (Settings::optionCount > Settings::currentOption - Settings::maxVisOptions && Settings::optionCount <= Settings::currentOption) {
		std::string SelectedChar
			= UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL($(Vector[position])));
		if (SelectedChar == "NULL") SelectedChar = Vector[position];

		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_FONT(0);
		UI::SET_TEXT_SCALE(textSize.w, textSize.h);
		UI::SET_TEXT_CENTRE(false);
		UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
		UI::SET_TEXT_OUTLINE();
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		std::string s = option;
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Tools::StringToChar(s + " <" + SelectedChar + ">"));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(Settings::menuX - 0.09f, (Settings::optionCount - (Settings::currentOption - Settings::maxVisOptions))*0.035f + 0.125f);
	}

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) return true;
	else if (Settings::optionCount == Settings::currentOption && Settings::leftPressed) return false;
	else if (Settings::optionCount == Settings::currentOption && Settings::rightPressed) return false;
	return false;
}

bool Menu::Teleport(const char * option, Vector3 coords)
{
	Option(option);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		Entity handle;
		PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) ? handle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) : PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(handle, coords.x, coords.y, coords.z, false, false, false, false);
		return true;
	}
	return false;
}
bool Menu::Teleport(const char * option, Vector3 coords, std::function<void()> function)
{
	Teleport(option, coords);

	if (Settings::optionCount == Settings::currentOption && Settings::selectPressed) {
		function();
		return true;
	}
	return false;
}
void Menu::info(const char * info)
{
	if (Settings::currentOption <= 16 && Settings::optionCount <= 16)
	{
		if (bool onThis = true) { Drawing::Text(info, Settings::optionText, { Settings::menuX - 0.100f, 17 * 0.035f + 0.1600f }, { 0.25f, 0.25f }, false); }
	}
	else if (Settings::optionCount > (Settings::currentOption - 16) && Settings::optionCount <= Settings::currentOption)
	{
		if (bool onThis = true) { Drawing::Text(info, Settings::optionText, { Settings::menuX - 0.100f, (Settings::optionCount - (Settings::currentOption - 16))*0.035f + 0.1300f }, { 0.25f, 0.25f }, false); }
	}
}
void Menu::End()
{
	if (Menu::Settings::displayEnd) {
		int opcount = Settings::optionCount;
		int currop = Settings::currentOption;
		if (opcount >= 16) {
			Drawing::Text(Tools::StringToChar(std::to_string(currop) + " / " + std::to_string(opcount)), Settings::count, { Settings::menuX + 0.078f, 17 * 0.035f + 0.125f }, { 0.35f, 0.35f }, true);
			Drawing::Rect(Settings::Endrect, { Settings::menuX, 17 * 0.035f + 0.1400f }, { Menu::Settings::menuXscale, 0.032f }); //0.1365f
			Drawing::Spriter("commonmenu", "shop_arrows_upanddown", Settings::menuX, ((16 + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
		else if (opcount > 0) {
			Drawing::Text(Tools::StringToChar(std::to_string(currop) + " / " + std::to_string(opcount)), Settings::count, { Settings::menuX + 0.078f, (Settings::optionCount + 1) * 0.035f + 0.125f }, { 0.35f, 0.35f }, true);
			Drawing::Rect(Settings::Endrect, { Settings::menuX, (Settings::optionCount + 1) * 0.035f + 0.1400f }, { Menu::Settings::menuXscale, 0.032f });
			Drawing::Spriter("commonmenu", "shop_arrows_upanddown", Settings::menuX, ((Settings::optionCount + 1) * 0.035f + 0.140f), 0.020f, 0.035f, 180, Settings::line.r, Settings::line.g, Settings::line.b, Settings::line.a);
		}
	}
}
void PlaySoundFrontend_default(char* sound_name)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sound_name, "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}
void PlaySoundFrontend_default2(char* sound_name)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sound_name, "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 0);
}

int Menu::Settings::keyPressDelay = 200;
int Menu::Settings::keyPressPreviousTick = GetTickCount();
int Menu::Settings::keyPressDelay2 = 100;
int Menu::Settings::keyPressPreviousTick2 = GetTickCount();
int Menu::Settings::keyPressDelay3 = 140;
int Menu::Settings::keyPressPreviousTick3 = GetTickCount();
int Menu::Settings::openKey = VK_MULTIPLY;
int Menu::Settings::backKey = VK_NUMPAD0;
int Menu::Settings::upKey = VK_NUMPAD8;
int Menu::Settings::downKey = VK_NUMPAD2;
int Menu::Settings::leftKey = VK_NUMPAD4;
int Menu::Settings::rightKey = VK_NUMPAD6;
int Menu::Settings::selectKey = VK_NUMPAD5;
int Menu::Settings::arrowupKey = VK_UP;
int Menu::Settings::arrowdownKey = VK_DOWN;
int Menu::Settings::arrowleftKey = VK_LEFT;
int Menu::Settings::arrowrightKey = VK_RIGHT;
int Menu::Settings::enterKey = VK_RETURN;
int Menu::Settings::deleteKey = VK_BACK;

#pragma endregion

bool Menu::Settings::controllerinput = true;
void Menu::Checks::Controlls()
{
	Settings::selectPressed = false;
	Settings::leftPressed = false;
	Settings::rightPressed = false;
	if (GetTickCount() - Settings::keyPressPreviousTick > Settings::keyPressDelay) {
		if (GetTickCount() - Settings::keyPressPreviousTick2 > Settings::keyPressDelay2) {
			if (GetTickCount() - Settings::keyPressPreviousTick3 > Settings::keyPressDelay3) {
				if (IsKeyPressed(VK_MULTIPLY) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlScriptRB) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && Settings::controllerinput) {
					Settings::menuLevel == 0 ? MenuLevelHandler::MoveMenu(SubMenus::mainmenu) : Settings::menuLevel == 1 ? MenuLevelHandler::BackMenu() : NULL;
					Settings::keyPressPreviousTick = GetTickCount();
				}
			    if (IsKeyPressed(VK_F4) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlScriptRB) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && Settings::controllerinput) {
					Settings::menuLevel == 0 ? MenuLevelHandler::MoveMenu(SubMenus::mainmenu) : Settings::menuLevel == 1 ? MenuLevelHandler::BackMenu() : NULL;
					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD0) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel) && Settings::controllerinput) {
					Settings::menuLevel > 0 ? MenuLevelHandler::BackMenu() : NULL;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD8) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp) && Settings::controllerinput) {
					Settings::currentOption > 1 ? Settings::currentOption-- : Settings::currentOption = Settings::optionCount;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick2 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD2) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendDown) && Settings::controllerinput) {
					Settings::currentOption < Settings::optionCount ? Settings::currentOption++ : Settings::currentOption = 1;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick2 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD6) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && Settings::controllerinput) {
					Settings::leftPressed = true;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick3 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD4) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneLeft) && Settings::controllerinput) {
					Settings::rightPressed = true;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick3 = GetTickCount();
				}
				else if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept) && Settings::controllerinput) {
					Settings::selectPressed = true;
					if (Settings::menuLevel > 0)

					Settings::keyPressPreviousTick = GetTickCount();
				}
			}
		}
	}
	Settings::optionCount = 0;
}
#pragma warning(default : 4018)
void Menu::MenuLevelHandler::MoveMenu(SubMenus menu)
{
	Settings::menusArray[Settings::menuLevel] = Settings::currentMenu;
	Settings::optionsArray[Settings::menuLevel] = Settings::currentOption;
	Settings::menuLevel++;
	Settings::currentMenu = menu;
	Settings::currentOption = 1;
}

void Menu::MenuLevelHandler::BackMenu()
{
	Settings::menuLevel--;
	Settings::currentMenu = Settings::menusArray[Settings::menuLevel];
	Settings::currentOption = Settings::optionsArray[Settings::menuLevel];
}

char * Menu::Tools::StringToChar(std::string string)
{
	return _strdup(string.c_str());
}

void Menu::Files::WriteStringToIni(std::string string, std::string file, std::string app, std::string key)
{
	WritePrivateProfileStringA(app.c_str(), key.c_str(), string.c_str(), file.c_str());
}

std::string Menu::Files::ReadStringFromIni(std::string file, std::string app, std::string key)
{
	char buf[100];
	GetPrivateProfileStringA(app.c_str(), key.c_str(), "NULL", buf, 100, file.c_str());
	return (std::string)buf;
}

void Menu::Files::WriteIntToIni(int intValue, std::string file, std::string app, std::string key)
{
	WriteStringToIni(std::to_string(intValue), file, app, key);
}

int Menu::Files::ReadIntFromIni(std::string file, std::string app, std::string key)
{
	return std::stoi(ReadStringFromIni(file, app, key));
}

void Menu::Files::WriteFloatToIni(float floatValue, std::string file, std::string app, std::string key)
{
	WriteStringToIni((std::to_string(floatValue)), file, app, key);
}

float Menu::Files::ReadFloatFromIni(std::string file, std::string app, std::string key)
{
	return std::stof(ReadStringFromIni(file, app, key));
}

void Menu::Files::WriteBoolToIni(bool b00l, std::string file, std::string app, std::string key)
{
	WriteStringToIni(b00l ? "true" : "false", file, app, key);
}

bool Menu::Files::ReadBoolFromIni(std::string file, std::string app, std::string key)
{
	return ReadStringFromIni(file, app, key) == "true" ? true : false;
}

void Menu::Vehicle(std::string texture1, std::string texture2)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX + 0.24f, 0.2f, 0.11f, 0.11f, 0, 255, 255, 255, 255); }
	}
	else { if (Menu::Settings::optionCount == Menu::Settings::currentOption) { Menu::Drawing::Spriter(texture1, texture2, Menu::Settings::menuX - 0.24f, 0.2f, 0.11f, 0.11f, 0, 255, 255, 255, 255); } }
}
void Menu::Speedometer(char* text, short line)
{
	if (line == 1) {
		Drawing::Rect(Settings::optionRect, { 0.815f, 0.875f }, { 0.115f, 13 * 0.035f + -0.193f });
	}
	Drawing::Text(text, Settings::speedotext, { 0.815f, 0.870f }, { 0.75f, 0.75f }, false);
}
void Menu::fps(char* text)
{
	Drawing::Text(text, Settings::optionText, { 0.84f, 0.050f }, { 0.70f, 0.70f }, false);
}
//-----------Player Info-----------
void Menu::AddSmallTitle(char* text)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.175f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Spriter("CommonMenu", "interaction_bgd", Settings::menuX + 0.175f, 0.1175f - 0.019f, 0.115f, 0.045f, 180, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, Settings::titleRect.a);
	}
	else
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX - 0.175f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Spriter("CommonMenu", "interaction_bgd", Settings::menuX - 0.175f, 0.1175f - 0.019f, 0.115f, 0.045f, 180, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, Settings::titleRect.a);
	}
}
void Menu::AddSmallInfo(char* text, short line)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.175f, ((16 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 16 * 0.035f + -0.193f });
		}
		Drawing::Text(text, Settings::count, { Settings::menuX + 0.120f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
	else
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX - 0.175f, ((16 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 16 * 0.035f + -0.193f });
		}
		Drawing::Text(text, Settings::count, { Settings::menuX - 0.228f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
}
void Menu::AddSmallTitle2(char* text)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.175f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Spriter("CommonMenu", "header_gradient_script", Settings::menuX + 0.175f, 0.1175f - 0.019f, 0.115f, 0.045f, 180, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, Settings::titleRect.a);
	}
	else
	{
		Drawing::Text(text, Settings::titleText, { Settings::menuX - 0.175f, 0.090f }, { 0.425f, 0.425f }, true);
		Drawing::Spriter("CommonMenu", "header_gradient_script", Settings::menuX - 0.175f, 0.1175f - 0.019f, 0.115f, 0.045f, 180, Settings::titleRect.r, Settings::titleRect.g, Settings::titleRect.b, Settings::titleRect.a);
	}
}

void Menu::PlayerInfoTitle(char* text)
{
	Drawing::Rect(Settings::titleRect, { Settings::menuX + 0.230f,  0.1250f }, { 0.165f, 0.045f });
	Drawing::Text(text, Settings::titleText, { Settings::menuX + 0.230f, 0.1097f }, { 0.425f, 0.425f }, true);
}

void Menu::PlayerInfoLine(char* text, short line)
{
	if (line == 1) {
		Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.230f, 0.3335f }, { 0.165f, 13 * 0.045f + -0.213f });
		//Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.1385f, 0.2520f }, { 0.019f, 0.085f });
	}
	Drawing::Text(text, Settings::optionText, { Settings::menuX + 0.230f, (line * 0.030f) + 0.155f }, { 0.35f, 0.35f }, true);
}

void Menu::AddSmallInfo3(char* text, short line)
{
	if (Menu::Settings::menuX < 0.78f)
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX + 0.175f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 13 * 0.035f + -0.193f });
		}
		Drawing::Text(text, Settings::count, { Settings::menuX + 0.120f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
	else
	{
		if (line == 1) {
			Drawing::Rect(Settings::optionRect, { Settings::menuX - 0.175f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f }, { 0.115f, 13 * 0.035f + -0.193f });
		}
		Drawing::Text(text, Settings::count, { Settings::menuX - 0.228f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, false);
	}
}