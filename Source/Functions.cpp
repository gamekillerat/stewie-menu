#include "stdafx.h"

std::set<Ped> lastSeenPeds;

//=================
// PED FUNCTIONS
//=================

Ped ClonePed(Ped ped)
{
	if (ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		return PED::CLONE_PED(ped, ENTITY::GET_ENTITY_HEADING(ped), 1, 1);
	}

	return 0;
}

Ped CreatePed(char* PedName, Vector3 SpawnCoordinates, int ped_type, bool network_handle)
{
	Ped NewPed;
	int PedHash = $(PedName);
	if (STREAMING::IS_MODEL_IN_CDIMAGE(PedHash))
	{
		if (STREAMING::IS_MODEL_VALID(PedHash))
		{
			STREAMING::REQUEST_MODEL(PedHash);
			while (!STREAMING::HAS_MODEL_LOADED(PedHash)) WAIT(0);

			NewPed = PED::CREATE_PED(ped_type, PedHash, SpawnCoordinates.x, SpawnCoordinates.y, SpawnCoordinates.z, 0, network_handle, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(PedHash);
			return NewPed;
		}
	}

	return -1;
}

//Animations
void LoadAnim(char * dict)
{
	int tick = 0;
	STREAMING::REQUEST_ANIM_DICT(dict);
	while (tick < 100 && !STREAMING::HAS_ANIM_DICT_LOADED(dict))
	{
		tick++;
		WAIT(0);
	}
}

void playAnimation(Ped ped, bool loop, char * dict, char * anim)
{
	LoadAnim(dict);
	int a = -1;
	int b = 1;

	if (!loop)
	{
		a = 1;
		b = 0;
	}

	AI::TASK_PLAY_ANIM(ped, dict, anim, 10000.0f, -1.5f, a, b, 0.445f, false, false, false);

}

//Skins
bool applyChosenSkin(DWORD model)
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(model) && STREAMING::IS_MODEL_VALID(model))
	{
		STREAMING::REQUEST_MODEL(model);
		while (!STREAMING::HAS_MODEL_LOADED(model))
		{
			WAIT(0);
		}

		Vehicle veh = NULL;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		}

		PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
		//PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), FALSE);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
		WAIT(0);

		if (veh != NULL)
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
		}

		WAIT(100);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);

		return true;
	}
	return false;
}

bool applyChosenSkin(std::string skinName)
{
	DWORD model = $((char *)skinName.c_str());
	return applyChosenSkin(model);
}

//CONTROL
void RequestControlOfid(Entity netid)
{
	int tick = 0;

	while (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(netid) && tick <= 25)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(netid);
		tick++;
	}
}



//FORCE
void ApplyForceToEntity(Entity e, float x, float y, float z)
{
	if (e != PLAYER::PLAYER_PED_ID() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(e) == FALSE)
	{
		RequestControlOfEnt(e);
	}

	ENTITY::APPLY_FORCE_TO_ENTITY(e, 1, x, y, z, 0, 0, 0, 0, 1, 1, 1, 0, 1);

}

//GOD MODE
void GodMode(bool toggle)
{
	static int armour_player = 0;
	Player player = PLAYER::PLAYER_ID();
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	if (armour_player == 0)
	{
		armour_player = PED::GET_PED_ARMOUR(playerPed);
	}

	if (toggle)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(player, true);
		ENTITY::SET_ENTITY_PROOFS(playerPed, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE);
		PED::SET_PED_CAN_RAGDOLL(playerPed, FALSE);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(playerPed, FALSE);
		PED::ADD_ARMOUR_TO_PED(playerPed, PLAYER::GET_PLAYER_MAX_ARMOUR(player) - PED::GET_PED_ARMOUR(playerPed));
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(player, false);
		ENTITY::SET_ENTITY_PROOFS(playerPed, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE);
		PED::SET_PED_CAN_RAGDOLL(playerPed, TRUE);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(playerPed, TRUE);
		if (armour_player != 0)
		{
			PED::SET_PED_ARMOUR(playerPed, armour_player);
			armour_player = 0;
		}
	}
}

//NEARBY PEDS
std::set<Ped> getNearbyPeds()
{
	return lastSeenPeds;
}

void update_nearby_peds(Ped playerPed, int count)
{
	const int numElements = count;
	const int arrSize = numElements * 2 + 2;

	Ped *peds = new Ped[arrSize];
	peds[0] = numElements;
	int found = PED::GET_PED_NEARBY_PEDS(playerPed, peds, -1);

	for (int i = 0; i < found; i++)
	{
		int offsettedID = i * 2 + 2;

		if (!ENTITY::DOES_ENTITY_EXIST(peds[offsettedID]))
		{
			continue;
		}

		Ped xped = peds[offsettedID];

		bool inSet = lastSeenPeds.find(xped) != lastSeenPeds.end();
		if (!inSet)
		{
			lastSeenPeds.insert(xped);
		}
	}

	std::set<Ped>::iterator it;
	for (it = lastSeenPeds.begin(); it != lastSeenPeds.end();)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*it))
		{
			lastSeenPeds.erase(it++);
		}
		else
		{
			++it;
		}
	}

	delete peds;
}

//CALM PEDS
void set_all_nearby_peds_to_calm()
{
	for each (Ped xped in lastSeenPeds)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(xped, true);
		PED::SET_PED_FLEE_ATTRIBUTES(xped, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(xped, 17, 1);
	}
}

//Converts Radians to Degrees
float degToRad(float degs)
{
	return degs*3.141592653589793f / 180.f;
}

//little one-line function called '$' to convert $TRING into a hash-key:
Hash $(std::string str) {
	return GAMEPLAY::GET_HASH_KEY(&str[0u]);
}

// quick function to get - coords - of - entity:
Vector3 coordsOf(Entity entity) {
	return ENTITY::GET_ENTITY_COORDS(entity, 1);
}

//quick function to get distance between 2 points: eg - if (distanceBetween(coordsOf(player), targetCoords) < 50)
float distanceBetween(Vector3 A, Vector3 B) {
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(A.x, A.y, A.z, B.x, B.y, B.z, 1);
}

//quick "get random int in range 0-x" function:
int rndInt(int start, int end) {
	return GAMEPLAY::GET_RANDOM_INT_IN_RANGE(start, end);
}

//TELEPORTATION
void teleport_to_coords(Entity e, Vector3 coords)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(e, coords.x, coords.y, coords.z, 0, 0, 1);
	WAIT(0);
}

Vector3 get_blip_marker()
{
	static Vector3 zero;
	Vector3 coords;

	bool blipFound = false;
	// search for marker blip
	int blipIterator = UI::_GET_BLIP_INFO_ID_ITERATOR();
	for (Blip i = UI::GET_FIRST_BLIP_INFO_ID(blipIterator); UI::DOES_BLIP_EXIST(i) != 0; i = UI::GET_NEXT_BLIP_INFO_ID(blipIterator))
	{
		if (UI::GET_BLIP_INFO_ID_TYPE(i) == 4)
		{
			coords = UI::GET_BLIP_INFO_ID_COORD(i);
			blipFound = true;
			break;
		}
	}
	if (blipFound)
	{
		return coords;
	}

	return zero;
}

void teleport_to_marker()
{
	Vector3 coords = get_blip_marker();

	if (coords.x == 0 && coords.y == 0)
	{
		notifyMap("~y~No Waypoint Has Been Set!", 0);
		return;
	}

	// get entity to teleport
	Entity e = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(e, 0))
	{
		e = PED::GET_VEHICLE_PED_IS_USING(e);
	}

	// load needed map region and check height levels for ground existence
	bool groundFound = false;
	static float groundCheckHeight[] =
	{ 100.0, 150.0, 50.0, 0.0, 200.0, 250.0, 300.0, 350.0, 400.0, 450.0, 500.0, 550.0, 600.0, 650.0, 700.0, 750.0, 800.0 };
	for (int i = 0; i < sizeof(groundCheckHeight) / sizeof(float); i++)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(e, coords.x, coords.y, groundCheckHeight[i], 0, 0, 1);
		WAIT(100);
		if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(coords.x, coords.y, groundCheckHeight[i], &coords.z, 0))
		{
			groundFound = true;
			coords.z += 3.0;
			break;
		}
	}
	// if ground not found then set Z in air and give player a parachute
	if (!groundFound)
	{
		coords.z = 1000.0;
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 0xFBAB5776, 1, 0);
	}
	//do it
	teleport_to_coords(e, coords);
}

void teleport_to_objective()
{
	Vector3 coords;
	Entity e;
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, FALSE))
		e = PED::GET_VEHICLE_PED_IS_USING(playerPed);
	else e = playerPed;

	bool blipFound = false;

	if (ENTITY::IS_ENTITY_A_VEHICLE(e)) RequestControlOfEnt(e);
	for (int i = 0; i <= 1000; i++)
	{
		/*Blip_t* blip = Hooking::GetBlipList()->m_Blips[i];
		if (blip)
		{
			if ((blip->dwColor == ColorYellowMission && blip->iIcon == SpriteStandard) || (blip->dwColor == ColorYellow && blip->iIcon == SpriteStandard) ||
				(blip->dwColor == ColorWhite && blip->iIcon == SpriteRaceFinish) || (blip->dwColor == ColorGreen && blip->iIcon == SpriteStandard) || (blip->iIcon == SpriteCrateDrop)) {
				coords = blip->coords;
				blipFound = true;
				break; //During a race there's sometimes 2 yellow markers. We want the first one.
			}
		}*/
	}

	blipFound ? teleport_to_coords(e, coords) : notifyMap("Objective not found!", 0);

}

//In Game KEYBOARD
std::string show_keyboard(char* title_id, char* prepopulated_text)
{
	DWORD time = GetTickCount() + 400;
	while (GetTickCount() < time)
	{
		WAIT(0);
	}

	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, (title_id == NULL ? "HUD_TITLE" : title_id), "", (prepopulated_text == NULL ? "" : prepopulated_text), "", "", "", 64);

	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0)
	{
		WAIT(0);
	}

	std::stringstream ss;
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT())
	{
		return std::string("");
	}
	else
	{
		return std::string(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
	}
}

//VEHICLE
static std::string lastvehmodel("");
bool get_vehicle_keyboard_result(uint* outModel)
{
	std::string result = show_keyboard("FMMC_KEY_TIP", &lastvehmodel[0]);
	if (!result.empty())
	{
		uint model = $(result);
		if (!STREAMING::IS_MODEL_IN_CDIMAGE(model) || !STREAMING::IS_MODEL_A_VEHICLE(model))
		{
			lastvehmodel = "";
			notifyBottom("~HUD_COLOUR_RED~Not A Valid Model!");
			return false;
		}

		else
		{
			STREAMING::REQUEST_MODEL(model);
			DWORD now = GetTickCount();
			while (!STREAMING::HAS_MODEL_LOADED(model) && GetTickCount() < now + 5000)
			{
				WAIT(0);
			}

			if (!STREAMING::HAS_MODEL_LOADED(model))
			{
				lastvehmodel = "";
				std::ostringstream ss2;
				ss2 << "~HUD_COLOUR_RED~ Timed out requesting  " << result << " : 0x" << model;
				notifyBottom(ss2.str());
				return false;
			}

			lastvehmodel = result;
			*outModel = model;
			return true;
		}

	}

	return false;
}

//VECTOR AND FLOAT FUNCTIONS
Vector3 rot_to_direction(Vector3*rot) {
	float radiansZ = rot->z*0.0174532924f;
	float radiansX = rot->x*0.0174532924f;
	float num = abs((float)cos((double)radiansX));
	Vector3 dir;
	dir.x = (float)((double)((float)(-(float)sin((double)radiansZ)))*(double)num);
	dir.y = (float)((double)((float)cos((double)radiansZ))*(double)num);
	dir.z = (float)sin((double)radiansX);
	return dir;
}

Vector3 add(Vector3*vectorA, Vector3*vectorB) {
	Vector3 result;
	result.x = vectorA->x;
	result.y = vectorA->y;
	result.z = vectorA->z;
	result.x += vectorB->x;
	result.y += vectorB->y;
	result.z += vectorB->z;
	return result;
}

Vector3 multiply(Vector3*vector, float x) {
	Vector3 result;
	result.x = vector->x;
	result.y = vector->y;
	result.z = vector->z;
	result.x *= x;
	result.y *= x;
	result.z *= x;
	return result;
}

float get_distance(Vector3*pointA, Vector3*pointB) {
	float a_x = pointA->x;
	float a_y = pointA->y;
	float a_z = pointA->z;
	float b_x = pointB->x;
	float b_y = pointB->y;
	float b_z = pointB->z;
	double x_ba = (double)(b_x - a_x);
	double y_ba = (double)(b_y - a_y);
	double z_ba = (double)(b_z - a_z);
	double y_2 = y_ba*y_ba;
	double x_2 = x_ba*x_ba;
	double sum_2 = y_2 + x_2;
	return(float)sqrt(sum_2 + z_ba);
}

float get_vector_length(Vector3*vector) {
	double x = (double)vector->x;
	double y = (double)vector->y;
	double z = (double)vector->z;
	return(float)sqrt(x*x + y*y + z*z);
}

//NOTIFICATIONS
/*
Colours:
~r~ = Red
~b~ = Blue
~g~ = Green
~y~ = Yellow
~p~ = Purple
~o~ = Orange
~c~ = Grey
~m~ = Dark Grey
~u~ = Black
~n~ = Skip Line
~s~ = White
~d~ = dark blue
~f~ = light blue
~l~ = black
~t~ = gray
~v~ = black

Fonts:
~italic~ = italic font
~bold~ = bold font
*/

char status_text[2048] = { 0 };
void update_status_text()
{
	if (GetTickCount() < 2500)
	{
		UI::SET_TEXT_FONT(0);
		UI::SET_TEXT_SCALE(0.55f, 0.55f);
		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_WRAP(0.0f, 1.0f);
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(1, 0, 0, 0, 205);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(status_text);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(0.5, 0.5);
	}
}

void notifyBottom(char * fmt, ...)
{
	char buf[2048] = { 0 };
	va_list va_alist;

	va_start(va_alist, fmt);
	vsprintf_s(buf, fmt, va_alist);
	va_end(va_alist);

	char buff2[2048] = { 0 };
	sprintf_s(buff2, "%s", buf);

	UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
	UI::END_TEXT_COMMAND_PRINT(4000, 1);
}	void notifyBottom(std::string str) { notifyBottom(&str[0]); }

void notifyMap(char * fmt, ...)
{
	char buf[2048] = { 0 };
	va_list va_alist;

	va_start(va_alist, fmt);
	vsprintf_s(buf, fmt, va_alist);
	va_end(va_alist);

	char buff2[2048] = { 0 };
	sprintf_s(buff2, "%s", buf);

	UI::SET_TEXT_OUTLINE();
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
	UI::_DRAW_NOTIFICATION(FALSE, FALSE);
}	void notifyMap(std::string str) { notifyMap(&str[0]); }

void notifyCenter(char * fmt, ...)
{
	char buf[2048] = { 0 };
	va_list va_alist;

	va_start(va_alist, fmt);
	vsprintf_s(buf, fmt, va_alist);
	va_end(va_alist);

	sprintf_s(status_text, "%s", buf);
}	void notifyCenter(std::string str) { notifyCenter(&str[0]); }

//DRAWING FUNCTIONS
void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7)
{
	GRAPHICS::DRAW_RECT((A_0 + (A_2 * 0.5f)), (A_1 + (A_3 * 0.5f)), A_2, A_3, A_4, A_5, A_6, A_7);
}

void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText)
{
	// default values
	int text_col[4] = { 255, 255, 255, 255 },
		rect_col[4] = { 0, 0, 0, 80 };
	float text_scale = 0.30f;
	int font = 0;
	bool outline = true;
	bool dropshadow = true;

	// correcting values for active line
	if (active)
	{

		outline = false;
		dropshadow = true;
		text_col[0] = 0;
		text_col[1] = 0;
		text_col[2] = 0;
		text_col[3] = 255;

		rect_col[0] = 255;
		rect_col[1] = 255;
		rect_col[2] = 255;
		rect_col[3] = 80;

		if (rescaleText)text_scale = 0.30f;
	}

	if (title)
	{
		outline = true;
		dropshadow = true;
		text_col[0] = 255;
		text_col[1] = 255;
		text_col[2] = 255;
		text_col[3] = 255;

		rect_col[0] = 93;
		rect_col[1] = 182;
		rect_col[2] = 229;
		rect_col[2] = 255;

		if (rescaleText)text_scale = 0.36f;
		font = 0;
	}

	int screen_w, screen_h;
	GRAPHICS::GET_SCREEN_RESOLUTION(&screen_w, &screen_h);

	textLeft += lineLeft;

	float lineWidthScaled = lineWidth / (float)screen_w; // line width
	float lineTopScaled = lineTop / (float)screen_h; // line top offset
	float textLeftScaled = textLeft / (float)screen_w; // text left offset
	float lineHeightScaled = lineHeight / (float)screen_h; // line height

	float lineLeftScaled = lineLeft / (float)screen_w;

	// this is how it's done in original scripts

	// text upper part
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(0.0, text_scale);
	UI::SET_TEXT_COLOUR(text_col[0], text_col[1], text_col[2], text_col[3]);
	UI::SET_TEXT_CENTRE(0);
	if (outline)
	{
		UI::SET_TEXT_EDGE(1, 255, 215, 0, 255); //UI::SET_TEXT_OUTLINE();
	}

	if (dropshadow)
	{
		UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
	}
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((LPSTR)caption.c_str());
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(textLeftScaled, (((lineTopScaled + 0.00278f) + lineHeightScaled) - 0.005f));

	// text lower part
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(0.0, text_scale);
	UI::SET_TEXT_COLOUR(text_col[0], text_col[1], text_col[2], text_col[3]);
	UI::SET_TEXT_CENTRE(0);
	if (outline)
	{
		UI::SET_TEXT_EDGE(1, 255, 215, 0, 255); //UI::SET_TEXT_OUTLINE();
	}

	if (dropshadow)
	{
		UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
	}
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	UI::_BEGIN_TEXT_COMMAND_LINE_COUNT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((LPSTR)caption.c_str());
	int num25 = UI::_GET_TEXT_SCREEN_LINE_COUNT(textLeftScaled, (((lineTopScaled + 0.00278f) + lineHeightScaled) - 0.005f));

	// rect
	draw_rect(lineLeftScaled, lineTopScaled + (0.00278f),
		lineWidthScaled, ((((float)(num25)* UI::_GET_TEXT_SCALE_HEIGHT(text_scale, 0)) + (lineHeightScaled * 1.0f)) + 0.005f),
		rect_col[0], rect_col[1], rect_col[2], rect_col[3]);
}
Object mapMods[250];
int mapModsIndex = 0;
void Features::PlaceObjectByHash(Hash hash, float x, float y, float z, float pitch, float roll, float yaw, float heading, int id)
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(hash)) {
		STREAMING::REQUEST_MODEL(hash);
		while (!STREAMING::HAS_MODEL_LOADED(hash)) WAIT(0);
		Object obj = OBJECT::CREATE_OBJECT_NO_OFFSET(hash, x, y, z, 1, 0, 0);
		//SET_ENTITY_HEADING(obj, heading);
		//SET_ENTITY_ROTATION(obj, pitch, roll, yaw, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(obj, 696969);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(obj);
		ENTITY::FREEZE_ENTITY_POSITION(obj, 1);
		ENTITY::SET_ENTITY_ROTATION(obj, pitch, roll, yaw, 0, 1);
		mapMods[mapModsIndex] = obj;
		if (mapModsIndex <= 250) mapModsIndex++;
		WAIT(25);
	}
}
//Object SpawnObject(char* name, Vector3 coords) {
	//Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	//    Object obj = CREATE_OBJECT_NO_OFFSET(GET_HASH_KEY(name), coords.x, coords.y, coords.z, 1, 0, 0);
	//Object obj = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY(name), pos.x, pos.y, pos.z, true, 1, 0);
	//return obj;
//}
void AttachThingToThing(Any p0, Any p1, float x = 0, float y = 0, float z = 0, float rx = 0, float ry = 0, float rz = 0) {
	//ATTACH_ENTITY_TO_ENTITY(p0, p1, 0, -0.5f, -0.2f, -0.1f, 0.0f, 0.0f, 180.0f, 1, 0, 0, 2, 1, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(p0, p1, 0, x, y, z, rx, ry, rz, 1, 0, 0, 2, 1, 1);
}
bool cstrcmp(const char* s1, const char* s2)
{
	while (*s1 && (*s1 == *s2))
		s1++, s2++;
	if (*(const unsigned char*)s1 - *(const unsigned char*)s2 == 0)
		return true;
	else
		return false;
}
int fam;
void changeAppearance(char* family, int model, int texture)
{
	if (cstrcmp(family, "HATS") || cstrcmp(family, "GLASSES") || cstrcmp(family, "EARS"))
	{
		if (cstrcmp(family, "HATS"))
			fam = 0;
		else if (cstrcmp(family, "GLASSES"))
			fam = 1;
		else if (cstrcmp(family, "EARS"))
			fam = 2;
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), fam, model - 1, texture, 1);
	}
	else
	{
		if (cstrcmp(family, "FACE"))
			fam = 0;
		else if (cstrcmp(family, "MASK"))
			fam = 1;
		else if (cstrcmp(family, "HAIR"))
			fam = 2;
		else if (cstrcmp(family, "TORSO"))
			fam = 3;
		else if (cstrcmp(family, "LEGS"))
			fam = 4;
		else if (cstrcmp(family, "HANDS"))
			fam = 5;
		else if (cstrcmp(family, "SHOES"))
			fam = 6;
		else if (cstrcmp(family, "SPECIAL1"))
			fam = 7;
		else if (cstrcmp(family, "SPECIAL2"))
			fam = 8;
		else if (cstrcmp(family, "SPECIAL3"))
			fam = 9;
		else if (cstrcmp(family, "TEXTURE"))
			fam = 10;
		else if (cstrcmp(family, "TORSO2"))
			fam = 11;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), fam, model, texture, 0);
	}
}
void ResetAppearance()
{
	PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
}
void EXTRASUNNY() {
	Hooking::set_lobby_weather(1, 0, 76, 0);
}
void CLEAR() {
    Hooking::set_lobby_weather(1, 1, 76, 0);
}
void CLOUDS() {
	Hooking::set_lobby_weather(1, 2, 76, 0);
}
void SMOG() {
	Hooking::set_lobby_weather(1, 3, 76, 0);
}
void FOGGY() {
	Hooking::set_lobby_weather(1, 4, 76, 0);
}
void OVERCAST() {
	Hooking::set_lobby_weather(1, 5, 76, 0);
}
void RAIN() {
	Hooking::set_lobby_weather(1, 6, 76, 0);
}
void THUNDER() {
	Hooking::set_lobby_weather(1, 7, 76, 0);
}
void CLEARING() {
	Hooking::set_lobby_weather(1, 8, 76, 0);
}
void NEUTRAL() {
	Hooking::set_lobby_weather(1, 9, 76, 0);
}
void SNOW() {
	Hooking::set_lobby_weather(1, 10, 76, 0);
}
void BLIZZARD() {
	Hooking::set_lobby_weather(1, 11, 76, 0);
}
void SNOWLIGHT() {
	Hooking::set_lobby_weather(1, 12, 76, 0);
}
void XMAS() {
	Hooking::set_lobby_weather(1, 13, 76, 0);
}
void HALLOWEEN() {
	Hooking::set_lobby_weather(1, 14, 76, 0);
}
//==============================================================
//===================== MEN OUTFITS ==========================
//==============================================================
void Swat() {
	ResetAppearance();
	changeAppearance("TORSO", 17, 0);
	changeAppearance("MASK", 56, 1);
	changeAppearance("HATS", 40, 0);
	changeAppearance("HAIR", 0, 0);
	changeAppearance("TORSO", 19, 0);
	changeAppearance("GLASSES", 0, 1);
	changeAppearance("LEGS", 34, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL", 0, 0);
	changeAppearance("SPECIAL2", 58, 0);
	changeAppearance("SPECIAL3", 4, 1);
	changeAppearance("TORSO2", 55, 0);
	changeAppearance("HANDS", 0, 0);
}
int index = 0;
void rlogo()
{

	PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
	switch (index)
	{
	case 0:
		PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("mphipster_overlays"), GAMEPLAY::GET_HASH_KEY("fm_rstar_m_tshirt_000"));
		break;
	case 1:
		PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("mphipster_overlays"), GAMEPLAY::GET_HASH_KEY("fm_rstar_m_tshirt_001"));
		break;
	case 2:
		PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("mphipster_overlays"), GAMEPLAY::GET_HASH_KEY("fm_rstar_m_tshirt_002"));
		break;
	}
	STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("TSHIRT_DECAL_HASH"), GAMEPLAY::GET_HASH_KEY("fm_rstar_m_tshirt_000"), 1);
	index++;
	if (index > 2)
		index = 0;
}
void ghost() {
	ResetAppearance();
	changeAppearance("TORSO", 17, 0);
	changeAppearance("MASK", 29, 0);
	changeAppearance("HATS", 28, 0);
	changeAppearance("HAIR", 0, 0);
	changeAppearance("GLASSES", 0, 1);
	changeAppearance("LEGS", 31, 0);
	changeAppearance("SHOES", 24, 0);
	changeAppearance("SPECIAL", 30, 2);
	changeAppearance("SPECIAL2", 15, 0);
	changeAppearance("TORSO2", 50, 0);
	changeAppearance("HANDS", 0, 0);
}
void Penguin() {
	ResetAppearance();
	changeAppearance("TORSO", 0, 0);
	changeAppearance("MASK", 31, 0);
	changeAppearance("HATS", 0, 0);
	changeAppearance("HAIR", 0, 0);
	changeAppearance("GLASSES", 0, 0);
	changeAppearance("LEGS", 32, 0);
	changeAppearance("SHOES", 17, 0);
	changeAppearance("SPECIAL1", 0, 0);
	changeAppearance("SPECIAL2", 57, 0);
	//changeAppearance("SPECIAL3", 0, 0);
	changeAppearance("TEXTURES", 0, 0);
	changeAppearance("TORSO2", 51, 0);
	changeAppearance("HANDS", 0, 0);
}
void Splinter() {
	ResetAppearance();
	changeAppearance("TORSO", 96, 0);
	changeAppearance("MASK", 57, 0);
	changeAppearance("HATS", 0, 0);
	changeAppearance("HAIR", 23, 0);
	changeAppearance("GLASSES", 0, 1);
	changeAppearance("LEGS", 31, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL1", 0, 0);
	changeAppearance("SPECIAL2", 58, 0);
	//changeAppearance("SPECIAL3", 0, 0);
	changeAppearance("TEXTURES", 3, 0);
	changeAppearance("TORSO2", 50, 0);
	changeAppearance("HANDS", 0, 0);
}
void Pilot() { //The Pilot
	ResetAppearance();
	changeAppearance("HATS", 20, 0);
	changeAppearance("GLASSES", 6, 0);
	changeAppearance("TORSO", 16, 0);
	changeAppearance("LEGS", 30, 0);
	changeAppearance("HANDS", 39, 4);
	changeAppearance("SHOES", 24, 0);
	changeAppearance("SPECIAL2", 15, 0);
	changeAppearance("TORSO2", 48, 0);
}
void TheSecurityMen() { //The Security
	ResetAppearance();
	changeAppearance("HATS", 7, 1);
	changeAppearance("GLASSES", 9, 6);
	changeAppearance("EARS", 1, 0);
	changeAppearance("TORSO", 4, 0);
	changeAppearance("LEGS", 26, 0);
	changeAppearance("SHOES", 24, 0);
	changeAppearance("SPECIAL2", 58, 0);
	changeAppearance("TORSO2", 53, 0);
}
void Special() {
	ResetAppearance();
	changeAppearance("TORSO", 96, 0);
	changeAppearance("HATS", 40, 0);
	changeAppearance("MASK", 54, 0);
	changeAppearance("GLASSES", 0, 1);
	changeAppearance("LEGS", 34, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL1", 0, 0);
	changeAppearance("SPECIAL2", 15, 0);
	changeAppearance("TORSO2", 53, 0);
	changeAppearance("HANDS", 51, 0);
}
void Special2() { // The Strength
	ResetAppearance();
	changeAppearance("HATS", 40, 0);
	changeAppearance("MASK", 28, 0);
	changeAppearance("TORSO", 44, 0);
	changeAppearance("LEGS", 34, 0);
	changeAppearance("HANDS", 45, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL2", 56, 1);
	changeAppearance("TORSO2", 53, 0);
}
void Balla() {
	ResetAppearance();
	changeAppearance("HATS", 10, 7);
	changeAppearance("GLASSES", 17, 6);
	changeAppearance("MASK", 51, 6);
	changeAppearance("TORSO", 14, 0);
	changeAppearance("LEGS", 5, 9);
	changeAppearance("SHOES", 9, 5);
	changeAppearance("SPECIAL2", 23, 0);
	changeAppearance("TORSO2", 7, 9);
}
void Elf() {
	ResetAppearance();
	changeAppearance("MASK", 34, 0);
	changeAppearance("TORSO", 4, 0);
	changeAppearance("LEGS", 19, 1);
	changeAppearance("SHOES", 22, 1);
	changeAppearance("SPECIAL1", 18, 0);
	changeAppearance("SPECIAL2", 28, 8);
	changeAppearance("TORSO2", 19, 1);
}
void Thug() {
	ResetAppearance();
	changeAppearance("HATS", 46, 1);
	changeAppearance("GLASSES", 17, 6);
	changeAppearance("MASK", 51, 7);
	changeAppearance("TORSO", 22, 0);
	changeAppearance("LEGS", 7, 0);
	changeAppearance("HANDS", 44, 0);
	changeAppearance("SHOES", 12, 6);
	changeAppearance("SPECIAL2", 15, 0);
	changeAppearance("TORSO2", 14, 7);
}
void Santa() {
	ResetAppearance();
	changeAppearance("MASK", 8, 0);
	changeAppearance("TORSO", 12, 0);
	changeAppearance("LEGS", 19, 0);
	changeAppearance("SHOES", 4, 4);
	changeAppearance("SPECIAL1", 10, 0);
	changeAppearance("SPECIAL2", 21, 2);
	changeAppearance("TORSO2", 19, 0);
}
void Snowman() {
	ResetAppearance();
	changeAppearance("MASK", 10, 0);
	changeAppearance("TORSO", 12, 0);
	changeAppearance("LEGS", 20, 0);
	changeAppearance("SHOES", 18, 1);
	changeAppearance("SPECIAL1", 24, 2);
	changeAppearance("SPECIAL2", 22, 4);
	changeAppearance("TORSO2", 25, 7);
}
void TheFamilies() {
	ResetAppearance();
	changeAppearance("HATS", 10, 5);
	changeAppearance("GLASSES", 17, 5);
	changeAppearance("MASK", 51, 5);
	changeAppearance("TORSO", 14, 0);
	changeAppearance("LEGS", 5, 6);
	changeAppearance("SHOES", 9, 10);
	changeAppearance("SPECIAL2", 23, 0);
	changeAppearance("TORSO2", 7, 6);
}
void MenCop() {
	ResetAppearance();
	changeAppearance("TORSO", 0, 0);
	changeAppearance("GLASSES", 6, 1);
	changeAppearance("LEGS", 35, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL2", 58, 0);
	changeAppearance("TORSO2", 55, 0);
}
//==============================================================
//===================== WOMEN OUTFITS ==========================
//==============================================================
void WomenPilot() { // The Pilot
	ResetAppearance();
	changeAppearance("HATS", 20, 0);
	changeAppearance("GLASSES", 12, 1);
	changeAppearance("TORSO", 17, 0);
	changeAppearance("LEGS", 29, 0);
	changeAppearance("HANDS", 39, 4);
	changeAppearance("SHOES", 24, 0);
	changeAppearance("SPECIAL2", 2, 0);
	changeAppearance("TORSO2", 41, 0);
}
void WomenTheStrength() { // The Strength
	ResetAppearance();
	changeAppearance("HATS", 39, 0);
	changeAppearance("MASK", 28, 0);
	changeAppearance("TORSO", 36, 0);
	changeAppearance("LEGS", 33, 0);
	changeAppearance("HANDS", 45, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL2", 33, 1);
	changeAppearance("TORSO2", 46, 0);
}
void TheSecurity() { // The Security
	ResetAppearance();
	changeAppearance("HATS", 15, 0);
	changeAppearance("GLASSES", 12, 3);
	changeAppearance("EARS", 1, 0);
	changeAppearance("TORSO", 36, 0);
	changeAppearance("LEGS", 30, 0);
	changeAppearance("SHOES", 24, 0);
	changeAppearance("SPECIAL2", 35, 0);
	changeAppearance("TORSO2", 46, 0);
}
void TheBiker() { // The Biker
	ResetAppearance();
	changeAppearance("HATS", 7, 0);
	changeAppearance("GLASSES", 12, 1);
	changeAppearance("TORSO", 23, 0);
	changeAppearance("LEGS", 27, 0);
	changeAppearance("SHOES", 7, 0);
	changeAppearance("SPECIAL2", 14, 0);
	changeAppearance("TORSO2", 55, 0);
}
void TheBusiness() { // The Business
	ResetAppearance();
	changeAppearance("GLASSES", 8, 5);
	changeAppearance("TORSO", 5, 0);
	changeAppearance("LEGS", 23, 0);
	changeAppearance("SHOES", 7, 3);
	changeAppearance("SPECIAL1", 6, 1);
	changeAppearance("SPECIAL2", 3, 0);
	changeAppearance("TORSO2", 57, 7);
}
void WomenCop() { // The Cop
	ResetAppearance();
	changeAppearance("TORSO", 14, 0);
	changeAppearance("GLASSES", 12, 1);
	changeAppearance("LEGS", 34, 0);
	changeAppearance("SHOES", 25, 0);
	changeAppearance("SPECIAL2", 35, 0);
	changeAppearance("TORSO2", 48, 0);
}
void TheWhore() { // The Whore
	ResetAppearance();
	changeAppearance("TORSO", 15, 0);
	changeAppearance("LEGS", 22, 2);
	changeAppearance("HAIRS", 4, 0);
	changeAppearance("SHOES", 14, 0);
	changeAppearance("SPECIAL1", 2, 0);
	changeAppearance("SPECIAL2", 2, 0);
	changeAppearance("TORSO2", 0, 16);
}
void kicknigga() {
	if (kicknigga)
	{
		NETWORK::NETWORK_SESSION_KICK_PLAYER(Features::Online::selectedPlayer);
	}
}
void JoinCrew(Player player)
{
	int clanId;
	int desc;
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&desc, 35, &clanId);
	if (NETWORK::NETWORK_CLAN_JOIN(clanId));
}
void RestrictedArea(Player Ped) {
	int args[5] = { 526, 0, Features::Online::selectedPlayer, 0, Features::Online::selectedPlayer };
	int playerId;
	GAMEPLAY::SET_BIT(&playerId, Features::Online::selectedPlayer);
	SCRIPT::TRIGGER_SCRIPT_EVENT(0x0, args, 5, playerId);
	GAMEPLAY::CLEAR_BIT(&playerId, Features::Online::selectedPlayer);
}
void spawnRamp()
{
	Vector3 ourCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
	float forward = 5.f;
	float heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	float xVector = forward * sin(degToRad(heading)) * -1.f;
	float yVector = forward * cos(degToRad(heading));
	Object obj = OBJECT::CREATE_OBJECT($("PROP_MP_RAMP_01"), ourCoords.x + xVector, ourCoords.y + yVector, ourCoords.z, heading, true, false);

}