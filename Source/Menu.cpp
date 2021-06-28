#include "stdafx.h"
#include "stdafx.h"
#include "shellapi.h"
#include <iostream>
/*To do :
Finnish Weapon Stuff
*/

namespace junk7644435 {
	void junk7406320() {
		return;
		float gw3pib;
		float pc26wh;
		float w9gto46;
		float j68ods;
		float k08wfl;
		float wr67ah;
		float snj53q;
		float jkjkhd;
		float rchvt;
		while (w9gto46 == 992465.2696)
		{
			w9gto46 = 4656595.0208;
		}
		j68ods = 5372661.4551;
		for (int cme5s = 0; cme5s > 100; cme5s++)
		{
			pc26wh = 1017133.0554;
		}
		snj53q = 8513760.5797;
		j68ods = 3897191.9450;
		j68ods = 1977580.5953;
		pc26wh = 2133745.6696;
	}
	void junk1800129() {
		return;
		float aij4cv;
		float qfiod;
		float msfi0g;
		float cor3wa;
		float pkfb2n;
		float klv1rk;
		float c6ac8;
		float wg827;
		float e9f2nm;
		e9f2nm = 1369866.8925;
		msfi0g = 8406842.0690;
		klv1rk = 4536064.8640;
		for (int q5rjdw = 0; q5rjdw > 100; q5rjdw++)
		{
			qfiod = 1023491.5212;
		}
		wg827 = 5595507.4874;
		msfi0g = 7149399.4109;
	}
	void junk6861489() {
		return;
		float wm4hje;
		float ka4gyu;
		float xk3606;
		float cvktmy;
		float b732s;
		float flr8pb;
		float b8rnpt;
		float s6l4dh;
		float fgy9e9;
		for (int ma4anrc = 0; ma4anrc > 100; ma4anrc++)
		{
			cvktmy = 4362796.7099;
		}
		fgy9e9 = 10542578.0292;
		flr8pb = 1475708.5507;
		wm4hje = 4140343.2559;
		while (xk3606 == 308880.2200)
		{
			xk3606 = 1584047.6871;
		}
		flr8pb = 3025910.3486;
		while (b8rnpt == 9754708.3015)
		{
			b8rnpt = 9239548.2702;
		}
		cvktmy = 2979982.6965;
	}
	void junk2838150() {
		return;
		float mr7vzw;
		float znz71c;
		float f675ag;
		float e1baia;
		float ol1bd;
		float em2o5l;
		float ziw1eh;
		float mp5hje;
		float kxumv;
		znz71c = 9282121.7827;
		for (int fbm3jt = 0; fbm3jt > 100; fbm3jt++)
		{
			e1baia = 1108853.1196;
		}
		ziw1eh = 649305.2645;
		for (int t2exek = 0; t2exek > 100; t2exek++)
		{
			mr7vzw = 1518515.8890;
		}
		ziw1eh = 5066714.5150;
		kxumv = 4722371.2467;
		kxumv = 8632574.6098;
	}
	void junk172995() {
		return;
		float zrwiar;
		float movpq;
		float drjm9;
		float wap0h;
		float o7spaf;
		float ldg2up;
		float il71gv;
		float g0tnm;
		float fsbsdp;
		if (movpq == 124451.3939)
			movpq = 4071075.8242;
		zrwiar = 6408554.5171;
		il71gv = 8811285.6124;
		while (ldg2up == 8997596.6678)
		{
			ldg2up = 577021.3531;
		}
		il71gv = 3866841.2602;
		while (ldg2up == 2583212.6304)
		{
			ldg2up = 508172.0277;
		}
		wap0h = 8019361.0883;
		if (fsbsdp == 5883362.2065)
			fsbsdp = 240167.9006;
		g0tnm = 8212333.9572;
	}
	void doJunk() {
		junk7644435::junk7406320();
		junk7644435::junk1800129();
		junk7644435::junk6861489();
		junk7644435::junk2838150();
		junk7644435::junk172995();
	}
}
float get_float_stat2(Hash stat_hash) {
	float stat;
	STATS::STAT_GET_FLOAT(stat_hash, &stat, 0);
	return stat;
}



Vehicle VehID;
int primaryR = 0;
int primaryG = 0;
int primaryB = 0;
int secondaryR = 0;
int secondaryG = 0;
int secondaryB = 0;

int Face_ = 0;
int Glasses_ = 0;
int Ears_ = 0;
int Mask_ = 0;
int Hair_ = 0;
int Torso_ = 0;
int Legs_ = 0;
int Hands_ = 0;
int Shoes_ = 0;
int Watches_ = 0;
int Special1_ = 0;
int Special2_ = 0;
int Special3_ = 0;
int Texture_ = 0;
int Torso2_ = 0;

#pragma endregion
Object spwndObjects[1024];
char* spwndObjectsNames[1024];
bool MoonGravity = false;
bool sp_vehicle_bypass = false;
bool slowMotion;
float roll1;
float yaw1;
float pitch1;
int spwnObjC;
float MoveX;
float MoveY;
float MoveZ;
bool freezeSpawn;
bool freezeObj;
Object latestObj;
Object selecObj;
bool collisionObj = true;
bool protecc3;
bool AntiKick;
bool AntiKick2;
bool protecc2;
bool noRemoveWeps;
bool noGiveWeps;
bool ev = false;
bool rpe = false;
bool fe = false;
bool ak = false;
bool md = false;
bool antiFreeze;
bool antiTP;
int playerAlpha = 255;


#pragma endregion
Object SpawnObject(char* name, Vector3 coords) {
	Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Object obj = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY(name), pos.x, pos.y, pos.z, true, 1, 0);
	Vector3 c00rds = ENTITY::GET_ENTITY_COORDS(obj, 1);
	spwndObjects[spwnObjC] = obj;
	spwndObjectsNames[spwnObjC] = name;
	spwnObjC++;
	MoveX = c00rds.x;
	MoveY = c00rds.y;
	MoveZ = c00rds.z;
	roll1 = 0.f;
	yaw1 = 0.f;
	pitch1 = 0.f;
	ENTITY::FREEZE_ENTITY_POSITION(obj, freezeSpawn);
	freezeObj = freezeSpawn;
	return obj;
}
int IconNotification(char *text, char *text2, char *Subject)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 7, text2, Subject, 1.0, "___MENU");
	return UI::_DRAW_NOTIFICATION(1, 1);

}
int PlayerAlpha = 255;
bool xInstruction;
bool optionPress = false;
int currentOption;
int optionCount;

#pragma endregion
int getOption()
{
	xInstruction = true;
	if (optionPress)
		return currentOption;
	else return 0;
}
Ped playerPed = PLAYER::PLAYER_PED_ID();

void DRAW_TEXTURE(char *Streamedtexture, char *textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a)
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)Streamedtexture))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((char*)Streamedtexture, false);
	}
	else
	{
		GRAPHICS::DRAW_SPRITE((char*)Streamedtexture, (char*)textureName, x, y, width, height, rotation, r, g, b, a);
	}
}
//float titlebox = 0.845f;
#define PROP_MONEY_BAG_01 0x113FD533
#define PICKUP_MONEY_CASE 0xCE6FDD6B

int timeer = 0;
long in = 0;
int intor = 0;
long out = 0;
bool stream = false;

std::vector<std::string> StringVector{ "test", "testing", "testing123" };
int StringVectorPosition = 0;
std::vector<char*> CharVector{ "test1", "testing1", "testing1231" };
int CharVectorPosition = 0;
std::vector<int> IntVector{ 1, 2, 3, 5, 6, 7, 1234, 13041 };
int IntVectorPosition = 0;
std::vector<float> FloatVector{ 1.2345f, 5.1234f, 5.1237f, 8.3124f };
int FloatVectorPosition = 0;
bool risky = false;
std::string namech;

static char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3"
};
static char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY"
};
static char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT"
};
static char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS"
};
static char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO"
};
static char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2"
};
static char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2"
};
static char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5"
};
static char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA"
};
static char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON"
};
static char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER",
};
static char* Doomsday1[] = {
	"autarch", "avenger", "barrage", "chernobog", "comet4", "comet5",
	"deluxo", "gt500", "hermes", "hustler", "kamacho","khanjali",
	"neon", "pariah", "raiden", "revolter", "riata", "riot2", "savestra",
	"sc1", "sentinel3", "streiter", "stromberg", "thruster", "viseris",
	"volatol", "yosemite", "z190"
};
static char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARTZER", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON"
};
static char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2",
};
static char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1"
};
static char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2"
};
static char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2"
};
static char* Supersports1[] = {
	"michelli", "jester3", "flashgt", "tezeract", "entity2", "cheburek",
	"tyrant", "hotring", "ellie", "fagaloa", "gb200", "issi3", "taipan",
	"dominator3", "caracara", "seasparrow",
};
static char* Nightclub1[] = {
	"BLIMP3","FREECRAWLER","MENACER","MULE4","OPPRESSOR2","PATRIOT2","PBUS2",
	"POUNDER2","SCRAMJET","SPEEDO4","STAFFORD","STRIKEFORCE","SWINGER","TERBYTE",
};
char* pedModels[] = {
	"A_C_Boar","A_C_Chickenhawk","A_C_Chimp","A_C_Chop","A_C_Cormorant","A_C_Cow","A_C_Coyote","A_C_Crow","A_C_Deer","A_C_Fish","A_C_Hen","A_C_Husky","A_C_MtLion","A_C_Pig","A_C_Pigeon","A_C_Rat","A_C_Retriever",
	"A_C_Rhesus","A_C_Rottweiler","A_C_Seagull","A_C_SharkTiger","A_C_shepherd","A_F_M_Beach_01","A_F_M_BevHills_01","A_F_M_BevHills_02","A_F_M_BodyBuild_01","A_F_M_Business_02","A_F_M_Downtown_01","A_F_M_EastSA_01",
	"A_F_M_EastSA_02","A_F_M_FatBla_01","A_F_M_FatCult_01","A_F_M_FatWhite_01","A_F_M_KTown_01","A_F_M_KTown_02","A_F_M_ProlHost_01","A_F_M_Salton_01","A_F_M_SkidRow_01","A_F_M_SouCentMC_01","A_F_M_SouCent_01","A_F_M_SouCent_02",
	"A_F_M_Tourist_01","A_F_M_TrampBeac_01","A_F_M_Tramp_01","A_F_O_GenStreet_01","A_F_O_Indian_01","A_F_O_KTown_01","A_F_O_Salton_01","A_F_O_SouCent_01","A_F_O_SouCent_02","A_F_Y_Beach_01","A_F_Y_BevHills_01","A_F_Y_BevHills_02",
	"A_F_Y_BevHills_03","A_F_Y_BevHills_04","A_F_Y_Business_01","A_F_Y_Business_02","A_F_Y_Business_03","A_F_Y_Business_04","A_F_Y_EastSA_01","A_F_Y_EastSA_02","A_F_Y_EastSA_03","A_F_Y_Epsilon_01","A_F_Y_Fitness_01",
	"A_F_Y_Fitness_02","A_F_Y_GenHot_01","A_F_Y_Golfer_01","A_F_Y_Hiker_01","A_F_Y_Hippie_01","A_F_Y_Hipster_01","A_F_Y_Hipster_02","A_F_Y_Hipster_03","A_F_Y_Hipster_04","A_F_Y_Indian_01","A_F_Y_Juggalo_01","A_F_Y_Runner_01",
	"A_F_Y_RurMeth_01","A_F_Y_SCDressy_01","A_F_Y_Skater_01","A_F_Y_SouCent_01","A_F_Y_SouCent_02","A_F_Y_SouCent_03","A_F_Y_Tennis_01","A_F_Y_Topless_01","A_F_Y_Tourist_01","A_F_Y_Tourist_02","A_F_Y_Vinewood_01",
	"A_F_Y_Vinewood_02","A_F_Y_Vinewood_03","A_F_Y_Vinewood_04","A_F_Y_Yoga_01","A_M_M_ACult_01","A_M_M_AfriAmer_01","A_M_M_Beach_01","A_M_M_Beach_02","A_M_M_BevHills_01","A_M_M_BevHills_02","A_M_M_Business_01",
	"A_M_M_EastSA_01","A_M_M_EastSA_02","A_M_M_Farmer_01","A_M_M_FatLatin_01","A_M_M_GenFat_01","A_M_M_GenFat_02","A_M_M_Golfer_01","A_M_M_HasJew_01","A_M_M_Hillbilly_01","A_M_M_Hillbilly_02","A_M_M_Indian_01",
	"A_M_M_KTown_01","A_M_M_Malibu_01","A_M_M_MexCntry_01","A_M_M_MexLabor_01","A_M_M_OG_Boss_01","A_M_M_Paparazzi_01","A_M_M_Polynesian_01","A_M_M_ProlHost_01","A_M_M_RurMeth_01","A_M_M_Salton_01","A_M_M_Salton_02",
	"A_M_M_Salton_03","A_M_M_Salton_04","A_M_M_Skater_01","A_M_M_Skidrow_01","A_M_M_SoCenLat_01","A_M_M_SouCent_01","A_M_M_SouCent_02","A_M_M_SouCent_03","A_M_M_SouCent_04","A_M_M_StLat_02","A_M_M_Tennis_01",
	"A_M_M_Tourist_01","A_M_M_TrampBeac_01","A_M_M_Tramp_01","A_M_M_TranVest_01","A_M_M_TranVest_02","A_M_O_ACult_01","A_M_O_ACult_02","A_M_O_Beach_01","A_M_O_GenStreet_01","A_M_O_KTown_01","A_M_O_Salton_01",
	"A_M_O_SouCent_01","A_M_O_SouCent_02","A_M_O_SouCent_03","A_M_O_Tramp_01","A_M_Y_ACult_01","A_M_Y_ACult_02","A_M_Y_BeachVesp_01","A_M_Y_BeachVesp_02","A_M_Y_Beach_01","A_M_Y_Beach_02","A_M_Y_Beach_03","A_M_Y_BevHills_01",
	"A_M_Y_BevHills_02","A_M_Y_BreakDance_01","A_M_Y_BusiCas_01","A_M_Y_Business_01","A_M_Y_Business_02","A_M_Y_Business_03","A_M_Y_Cyclist_01","A_M_Y_DHill_01","A_M_Y_Downtown_01","A_M_Y_EastSA_01","A_M_Y_EastSA_02",
	"A_M_Y_Epsilon_01","A_M_Y_Epsilon_02","A_M_Y_Gay_01","A_M_Y_Gay_02","A_M_Y_GenStreet_01","A_M_Y_GenStreet_02","A_M_Y_Golfer_01","A_M_Y_HasJew_01","A_M_Y_Hiker_01","A_M_Y_Hippy_01","A_M_Y_Hipster_01","A_M_Y_Hipster_02",
	"A_M_Y_Hipster_03","A_M_Y_Indian_01","A_M_Y_Jetski_01","A_M_Y_Juggalo_01","A_M_Y_KTown_01","A_M_Y_KTown_02","A_M_Y_Latino_01","A_M_Y_MethHead_01","A_M_Y_MexThug_01","A_M_Y_MotoX_01","A_M_Y_MotoX_02","A_M_Y_MusclBeac_01",
	"A_M_Y_MusclBeac_02","A_M_Y_Polynesian_01","A_M_Y_RoadCyc_01","A_M_Y_Runner_01","A_M_Y_Runner_02","A_M_Y_Salton_01","A_M_Y_Skater_01","A_M_Y_Skater_02","A_M_Y_SouCent_01","A_M_Y_SouCent_02","A_M_Y_SouCent_03","A_M_Y_SouCent_04",
	"A_M_Y_StBla_01","A_M_Y_StBla_02","A_M_Y_StLat_01","A_M_Y_StWhi_01","A_M_Y_StWhi_02","A_M_Y_Sunbathe_01","A_M_Y_Surfer_01","A_M_Y_VinDouche_01","A_M_Y_Vinewood_01","A_M_Y_Vinewood_02","A_M_Y_Vinewood_03","A_M_Y_Vinewood_04",
	"A_M_Y_Yoga_01","CSB_Abigail","CSB_Anita","CSB_Anton","CSB_BallasOG","CSB_Bride","CSB_BurgerDrug","CSB_Car3guy1","CSB_Car3guy2","CSB_Chef","CSB_Chin_goon","CSB_Cletus","CSB_Cop","CSB_Customer","CSB_Denise_friend",
	"CSB_FOS_rep","CSB_G","CSB_Groom","CSB_Grove_str_dlr","CSB_Hao","CSB_Hugh","CSB_Imran","CSB_Janitor","CSB_Maude","CSB_MWeather","CSB_Ortega","CSB_Oscar","CSB_PornDudes","CSB_PrologueDriver","CSB_ProlSec","CSB_Ramp_gang",
	"CSB_Ramp_hic","CSB_Ramp_hipster","CSB_Ramp_marine","CSB_Ramp_mex","CSB_Reporter","CSB_RoccoPelosi","CSB_Screen_Writer","CSB_Stripper_01","CSB_Stripper_02","CSB_Tonya","CSB_TrafficWarden","CS_AmandaTownley","CS_Andreas",
	"cs_ashley","CS_Bankman","CS_Barry","CS_Beverly","CS_Brad","CS_BradCadaver","CS_Carbuyer","CS_Casey","CS_ChengSr","CS_ChrisFormage","CS_Clay","CS_Dale","CS_DaveNorton","cs_debra","cs_denise","CS_Devin","CS_Dom","CS_Dreyfuss",
	"CS_DrFriedlander","CS_Fabien","CS_FBISuit_01","CS_Floyd","CS_Guadalope","cs_gurk","CS_Hunter","CS_Janet","CS_JewelAss","CS_JimmyBoston","CS_JimmyDiSanto","CS_JoeMinuteMan","CS_JohnnyKlebitz","CS_Josef","CS_Josh","CS_LamarDavis",
	"CS_Lazlow","CS_LesterCrest","CS_LifeInvad_01","CS_Magenta","CS_Manuel","CS_Marnie","CS_MartinMadrazo","CS_MaryAnn","CS_Michelle","CS_Milton","CS_Molly","CS_MovPremF_01","CS_MovPremMale","CS_MRK","CS_MrsPhillips","CS_MRS_Thornhill",
	"CS_Natalia","CS_NervousRon","CS_Nigel","CS_Old_Man1A","CS_Old_Man2","CS_Omega","CS_Orleans","CS_Paper","CS_Patricia","CS_Priest","CS_ProlSec_02","CS_RussianDrunk","CS_SiemonYetarian","CS_Solomon","CS_SteveHains","CS_Stretch",
	"CS_Tanisha","CS_TaoCheng","CS_TaosTranslator","CS_TennisCoach","CS_Terry","CS_Tom","CS_TomEpsilon","CS_TracyDiSanto","CS_Wade","CS_Zimbor","G_F_Y_ballas_01","G_F_Y_Families_01","G_F_Y_Lost_01","G_F_Y_Vagos_01","G_M_M_ArmBoss_01",
	"G_M_M_ArmGoon_01","G_M_M_ArmLieut_01","G_M_M_ChemWork_01","G_M_M_ChiBoss_01","G_M_M_ChiCold_01","G_M_M_ChiGoon_01","G_M_M_ChiGoon_02","G_M_M_KorBoss_01","G_M_M_MexBoss_01","G_M_M_MexBoss_02","G_M_Y_ArmGoon_02","G_M_Y_Azteca_01",
	"G_M_Y_BallaEast_01","G_M_Y_BallaOrig_01","G_M_Y_BallaSout_01","G_M_Y_FamCA_01","G_M_Y_FamDNF_01","G_M_Y_FamFor_01","G_M_Y_Korean_01","G_M_Y_Korean_02","G_M_Y_KorLieut_01","G_M_Y_Lost_01","G_M_Y_Lost_02","G_M_Y_Lost_03",
	"G_M_Y_MexGang_01","G_M_Y_MexGoon_01","G_M_Y_MexGoon_02","G_M_Y_MexGoon_03","G_M_Y_PoloGoon_01","G_M_Y_PoloGoon_02","G_M_Y_SalvaBoss_01","G_M_Y_SalvaGoon_01","G_M_Y_SalvaGoon_02","G_M_Y_SalvaGoon_03","G_M_Y_StrPunk_01","G_M_Y_StrPunk_02",
	"HC_Driver","HC_Gunman","HC_Hacker","IG_Abigail","IG_AmandaTownley","IG_Andreas","IG_Ashley","IG_BallasOG","IG_Bankman","IG_Barry","IG_BestMen","IG_Beverly","IG_Brad","IG_Bride","IG_Car3guy1","IG_Car3guy2","IG_Casey",
	"IG_Chef","IG_ChengSr","IG_ChrisFormage","IG_Clay","IG_ClayPain","IG_Cletus","IG_Dale","IG_DaveNorton","IG_Denise","IG_Devin","IG_Dom","IG_Dreyfuss","IG_DrFriedlander","IG_Fabien","IG_FBISuit_01","IG_Floyd","IG_Groom",
	"IG_Hao","IG_Hunter","IG_Janet","ig_JAY_Norris","IG_JewelAss","IG_JimmyBoston","IG_JimmyDiSanto","IG_JoeMinuteMan","ig_JohnnyKlebitz","IG_Josef","IG_Josh","IG_KerryMcIntosh","IG_LamarDavis","IG_Lazlow","IG_LesterCrest",
	"IG_LifeInvad_01","IG_LifeInvad_02","IG_Magenta","IG_Manuel","IG_Marnie","IG_MaryAnn","IG_Maude","IG_Michelle","IG_Milton","IG_Molly","IG_MRK","IG_MrsPhillips","IG_MRS_Thornhill","IG_Natalia","IG_NervousRon","IG_Nigel",
	"IG_Old_Man1A","IG_Old_Man2","IG_Omega","IG_ONeil","IG_Orleans","IG_Ortega","IG_Paper","IG_Patricia","IG_Priest","IG_ProlSec_02","IG_Ramp_Gang","IG_Ramp_Hic","IG_Ramp_Hipster","IG_Ramp_Mex","IG_RoccoPelosi","IG_RussianDrunk",
	"IG_Screen_Writer","IG_SiemonYetarian","IG_Solomon","IG_SteveHains","IG_Stretch","IG_Talina","IG_Tanisha","IG_TaoCheng","IG_TaosTranslator","ig_TennisCoach","IG_Terry","IG_TomEpsilon","IG_Tonya","IG_TracyDiSanto","IG_TrafficWarden",
	"IG_TylerDix","IG_Wade","IG_Zimbor","MP_F_DeadHooker","MP_F_Freemode_01","MP_F_Misty_01","MP_F_StripperLite","MP_G_M_Pros_01","MP_HeadTargets","MP_M_Claude_01","MP_M_ExArmy_01","MP_M_FamDD_01","MP_M_FIBSec_01","MP_M_Freemode_01",
	"MP_M_Marston_01","MP_M_Niko_01","MP_M_ShopKeep_01","MP_S_M_Armoured_01","Player_One","Player_Two","Player_Zero","slod_human","slod_large_quadped","slod_small_quadped","S_F_M_Fembarber","S_F_M_Maid_01","S_F_M_Shop_HIGH",
	"S_F_M_SweatShop_01","S_F_Y_AirHostess_01","S_F_Y_Bartender_01","S_F_Y_Baywatch_01","S_F_Y_Cop_01","S_F_Y_Factory_01","S_F_Y_Hooker_01","S_F_Y_Hooker_02","S_F_Y_Hooker_03","S_F_Y_Migrant_01","S_F_Y_MovPrem_01","S_F_Y_Ranger_01",
	"S_F_Y_Scrubs_01","S_F_Y_Sheriff_01","S_F_Y_Shop_LOW","S_F_Y_Shop_MID","S_F_Y_StripperLite","S_F_Y_Stripper_01","S_F_Y_Stripper_02","S_F_Y_SweatShop_01","S_M_M_AmmuCountry","S_M_M_Armoured_01","S_M_M_Armoured_02","S_M_M_AutoShop_01",
	"S_M_M_AutoShop_02","S_M_M_Bouncer_01","S_M_M_ChemSec_01","S_M_M_CIASec_01","S_M_M_CntryBar_01","S_M_M_DockWork_01","S_M_M_Doctor_01","S_M_M_FIBOffice_01","S_M_M_FIBOffice_02","S_M_M_Gaffer_01","S_M_M_Gardener_01","S_M_M_GenTransport",
	"S_M_M_HairDress_01","S_M_M_HighSec_01","S_M_M_HighSec_02","S_M_M_Janitor","S_M_M_LatHandy_01","S_M_M_LifeInvad_01","S_M_M_Linecook","S_M_M_LSMetro_01","S_M_M_Mariachi_01","S_M_M_Marine_01","S_M_M_Marine_02","S_M_M_Migrant_01",
	"S_M_M_MovAlien_01","S_M_M_MovPrem_01","S_M_M_MovSpace_01","S_M_M_Paramedic_01","S_M_M_Pilot_01","S_M_M_Pilot_02","S_M_M_Postal_01","S_M_M_Postal_02","S_M_M_PrisGuard_01","S_M_M_Scientist_01","S_M_M_Security_01","S_M_M_SnowCop_01",
	"S_M_M_StrPerf_01","S_M_M_StrPreach_01","S_M_M_StrVend_01","S_M_M_Trucker_01","S_M_M_UPS_01","S_M_M_UPS_02","S_M_O_Busker_01","S_M_Y_AirWorker","S_M_Y_AmmuCity_01","S_M_Y_ArmyMech_01","S_M_Y_Autopsy_01","S_M_Y_Barman_01","S_M_Y_BayWatch_01",
	"S_M_Y_BlackOps_01","S_M_Y_BlackOps_02","S_M_Y_BlackOps_03","S_M_Y_BusBoy_01","S_M_Y_Chef_01","S_M_Y_Clown_01","S_M_Y_Construct_01","S_M_Y_Construct_02","S_M_Y_Cop_01","S_M_Y_Dealer_01","S_M_Y_DevinSec_01","S_M_Y_DockWork_01","S_M_Y_Doorman_01",
	"S_M_Y_DWService_01","S_M_Y_DWService_02","S_M_Y_Factory_01","S_M_Y_Fireman_01","S_M_Y_Garbage","S_M_Y_Grip_01","S_M_Y_HwayCop_01","S_M_Y_Marine_01","S_M_Y_Marine_02","S_M_Y_Marine_03","S_M_Y_Mime","S_M_Y_PestCont_01",
	"S_M_Y_Pilot_01","S_M_Y_PrisMuscl_01","S_M_Y_Prisoner_01","S_M_Y_Ranger_01","S_M_Y_Robber_01","S_M_Y_Sheriff_01","S_M_Y_Shop_MASK","S_M_Y_StrVend_01","S_M_Y_Swat_01","S_M_Y_USCG_01","S_M_Y_Valet_01","S_M_Y_Waiter_01",
	"S_M_Y_WinClean_01","S_M_Y_XMech_01","S_M_Y_XMech_02","U_F_M_Corpse_01","U_F_M_Miranda","U_F_M_ProMourn_01","U_F_O_MovieStar","U_F_O_ProlHost_01","U_F_Y_BikerChic","U_F_Y_COMJane","U_F_Y_corpse_01","U_F_Y_corpse_02",
	"U_F_Y_HotPosh_01","U_F_Y_JewelAss_01","U_F_Y_Mistress","U_F_Y_PoppyMich","U_F_Y_Princess","U_F_Y_SpyActress","U_M_M_Aldinapoli","U_M_M_BankMan","U_M_M_BikeHire_01","U_M_M_FIBArchitect","U_M_M_FilmDirector","U_M_M_GlenStank_01",
	"U_M_M_Griff_01","U_M_M_Jesus_01","U_M_M_JewelSec_01","U_M_M_JewelThief","U_M_M_MarkFost","U_M_M_PartyTarget","U_M_M_ProlSec_01","U_M_M_ProMourn_01","U_M_M_RivalPap","U_M_M_SpyActor","U_M_M_WillyFist","U_M_O_FinGuru_01",
	"U_M_O_TapHillBilly","U_M_O_Tramp_01","U_M_Y_Abner","U_M_Y_AntonB",	"U_M_Y_BabyD","U_M_Y_Baygor","U_M_Y_BurgerDrug_01","U_M_Y_Chip","U_M_Y_Cyclist_01","U_M_Y_FIBMugger_01","U_M_Y_Guido_01","U_M_Y_GunVend_01","U_M_Y_Hippie_01",
	"U_M_Y_ImpoRage","U_M_Y_Justin","U_M_Y_Mani","U_M_Y_MilitaryBum","U_M_Y_Paparazzi","U_M_Y_Party_01","U_M_Y_Pogo_01","U_M_Y_Prisoner_01","U_M_Y_ProlDriver_01","U_M_Y_RSRanger_01","U_M_Y_SBike","U_M_Y_StagGrm_01","U_M_Y_Tattoo_01",
	"U_M_Y_Zombie_01", 
};
int propListPos = 0;
std::vector<char*> propList = {
	{
		"prop_mp_ramp_03",
		"prop_a4_pile_01",
		"prop_a4_sheet_01",
		"prop_abat_roller_static",
		"prop_abat_slide",
		"prop_acc_guitar_01",
		"prop_aerial_01a",
		"prop_afsign_amun",
		"prop_afsign_vbike",
		"prop_agave_01",
		"prop_aiprort_sign_01",
		"prop_aircon_l_01",
		"prop_aircon_m_09",
		"prop_aircon_s_01a",
		"prop_aircon_s_02a",
		"prop_airhockey_01",
		"prop_air_bagloader",
		"prop_air_bagloader2",
		"prop_air_barrier",
		"prop_air_bench_01",
		"prop_air_bench_02",
		"prop_air_bigradar_l1",
		"prop_air_bigradar_slod",
		"prop_air_blastfence_01",
		"prop_air_blastfence_02",
		"prop_air_bridge01",
		"prop_air_bridge02",
		"prop_air_cargoloader_01",
		"prop_air_cargo_01a",
		"prop_air_cargo_01b",
		"prop_air_chock_01",
		"prop_air_fueltrail1",
		"prop_air_fueltrail2",
		"prop_air_gasbogey_01",
		"prop_air_generator_01",
		"prop_air_generator_03",
		"prop_air_hoc_paddle_01",
		"prop_air_hoc_paddle_02",
		"prop_air_lights_01a",
		"prop_air_lights_01b",
		"prop_air_lights_03a",
		"prop_air_luggtrolley",
		"prop_air_mast_01",
		"prop_air_mast_02",
		"prop_air_monhut_01",
		"prop_air_monhut_02",
		"prop_air_monhut_03",
		"prop_air_propeller01",
		"prop_air_radar_01",
		"prop_air_stair_01",
		"prop_air_towbar_01",
		"prop_air_towbar_02",
		"prop_air_towbar_03",
		"prop_air_trailer_4a",
		"prop_air_trailer_4b",
		"prop_air_trailer_4c",
		"prop_air_watertank1",
		"prop_air_watertank2",
		"prop_air_windsock_base",
		"prop_air_woodsteps",
		"prop_alarm_01",
		"prop_alarm_02",
		"prop_alien_egg_01",
		"prop_aloevera_01",
		"prop_amanda_note_01",
		"prop_amanda_note_01b",
		"prop_amb_40oz_02",
		"prop_amb_40oz_03",
		"prop_amb_beer_bottle",
		"prop_amb_ciggy_01",
		"prop_amb_donut",
		"prop_amb_handbag_01",
		"prop_amb_phone",
		"prop_amp_01",
		"prop_am_box_wood_01",
		"prop_anim_cash_note",
		"prop_anim_cash_note_b",
		"prop_anim_cash_pile_01",
		"prop_anim_cash_pile_02",
		"prop_apple_box_01",
		"prop_apple_box_02",
		"prop_arcade_01",
		"prop_arcade_02",
		"prop_arc_blueprints_01",
		"prop_armchair_01",
		"prop_armenian_gate",
		"prop_armour_pickup",
		"prop_arm_gate_l",
		"prop_arm_wrestle_01",
		"prop_artgallery_02_dl",
		"prop_artgallery_02_dr",
		"prop_artgallery_dl",
		"prop_artgallery_dr",
		"prop_artifact_01",
		"prop_ashtray_01",
		"prop_asteroid_01",
		"prop_atm_02",
		"prop_atm_03",
		"prop_attache_case_01",
		"prop_aviators_01",
		"prop_a_base_bars_01",
		"prop_a_trailer_door_01",
		"prop_bahammenu",
		"prop_ballistic_shield",
		"prop_ballistic_shield_lod1",
		"prop_bandsaw_01",
		"prop_bank_shutter",
		"prop_bank_vaultdoor",
		"prop_barn_door_l",
		"prop_barn_door_r",
		"prop_barrachneon",
		"prop_barrel_01a",
		"prop_barrel_02a",
		"prop_barrel_02b",
		"prop_barrel_03a",
		"prop_barrel_03d",
		"prop_barrel_float_1",
		"prop_barrel_float_2",
		"prop_barriercrash_03",
		"prop_barriercrash_04",
		"prop_barrier_wat_01a",
		"prop_barrier_wat_03b",
		"prop_barrier_work01c",
		"prop_barry_table_detail",
		"prop_bar_coastbarr",
		"prop_bar_coastchamp",
		"prop_bar_coastdusc",
		"prop_bar_coastmount",
		"prop_bar_cooler_01",
		"prop_bar_cooler_03",
		"prop_bar_fridge_01",
		"prop_bar_fridge_02",
		"prop_bar_fridge_03",
		"prop_bar_fridge_04",
		"prop_bar_ice_01",
		"prop_bar_napkindisp",
		"prop_bar_pump_01",
		"prop_bar_pump_04",
		"prop_bar_pump_05",
		"prop_bar_pump_10",
		"prop_bar_sink_01",
		"prop_bar_stool_01",
		"prop_basejump_target_01",
		"prop_basketball_net",
		"prop_bath_dirt_01",
		"prop_battery_01",
		"prop_battery_02",
		"prop_bball_arcade_01",
		"prop_bbq_2",
		"prop_bbq_3",
		"prop_beachbag_01",
		"prop_beachbag_02",
		"prop_beachbag_combo_01",
		"prop_beachball_02",
		"prop_beachflag_le",
		"prop_beach_bars_01",
		"prop_beach_bars_02",
		"prop_beach_bbq",
		"prop_beach_dip_bars_01",
		"prop_beach_dip_bars_02",
		"prop_beach_fire",
		"prop_beach_lg_float",
		"prop_beach_lg_stretch",
		"prop_beach_lg_surf",
		"prop_beach_punchbag",
		"prop_beach_rings_01",
		"prop_beach_sculp_01",
		"prop_beach_towel_02",
		"prop_beach_volball01",
		"prop_beach_volball02",
		"prop_beerneon",
		"prop_beer_bison",
		"prop_beer_box_01",
		"prop_beer_neon_01",
		"prop_beer_neon_02",
		"prop_beggers_sign_01",
		"prop_beggers_sign_02",
		"prop_bench_01b",
		"prop_bench_01c",
		"prop_bench_04",
		"prop_beta_tape",
		"prop_beware_dog_sign",
		"prop_bh1_03_gate_l",
		"prop_bh1_03_gate_r",
		"prop_bh1_08_mp_gar",
		"prop_bh1_09_mp_gar",
		"prop_bh1_09_mp_l",
		"prop_bh1_09_mp_r",
		"prop_bh1_16_display",
		"prop_bh1_44_door_01l",
		"prop_bh1_44_door_01r",
		"prop_bh1_48_backdoor_l",
		"prop_bh1_48_backdoor_r",
		"prop_bh1_48_gate_1",
		"prop_bhhotel_door_l",
		"prop_bhhotel_door_r",
		"prop_big_bag_01",
		"prop_big_clock_01",
		"prop_big_shit_01",
		"prop_big_shit_02",
		"prop_bikerack_2",
		"prop_bikini_disp_01",
		"prop_bikini_disp_02",
		"prop_billboard_01",
		"prop_billboard_02",
		"prop_billboard_03",
		"prop_billboard_04",
		"prop_billboard_09wall",
		"prop_billboard_10",
		"prop_billboard_11",
		"prop_billb_frame01a",
		"prop_billb_frame01b",
		"prop_billb_frame02a",
		"prop_binoc_01",
		"prop_bin_04a",
		"prop_bin_10a",
		"prop_bin_10b",
		"prop_bin_11a",
		"prop_bin_beach_01d",
		"prop_bin_delpiero",
		"prop_bin_delpiero_b",
		"prop_biolab_g_door",
		"prop_biotech_store",
		"prop_bison_winch",
		"prop_blackjack_01",
		"prop_bleachers_01",
		"prop_blox_spray",
		"prop_bmu_01",
		"prop_bmu_01_b",
		"prop_bmu_02",
		"prop_bmu_02_ld",
		"prop_bmu_02_ld_cab",
		"prop_bmu_02_ld_sup",
		"prop_bmu_track01",
		"prop_bmu_track02",
		"prop_bmu_track03",
		"prop_bodyarmour_02",
		"prop_bodyarmour_03",
		"prop_bodyarmour_04",
		"prop_bollard_01a",
		"prop_bollard_01b",
		"prop_bomb_01",
		"prop_bomb_01_s",
		"prop_bonesaw",
		"prop_bongos_01",
		"prop_bong_01",
		"prop_boogbd_stack_01",
		"prop_boogbd_stack_02",
		"prop_boogieboard_01",
		"prop_boogieboard_02",
		"prop_boombox_01",
		"prop_bottle_cap_01",
		"prop_bowling_ball",
		"prop_bowling_pin",
		"prop_bowl_crisps",
		"prop_boxcar5_handle",
		"prop_boxing_glove_01",
		"prop_boxpile_10a",
		"prop_boxpile_10b",
		"prop_box_ammo01a",
		"prop_box_ammo02a",
		"prop_box_ammo03a_set",
		"prop_box_ammo03a_set2",
		"prop_box_guncase_01a",
		"prop_box_guncase_02a",
		"prop_box_guncase_03a",
		"prop_box_tea01a",
		"prop_box_wood05a",
		"prop_box_wood05b",
		"prop_box_wood08a",
		"prop_breadbin_01",
		"prop_bread_rack_01",
		"prop_bread_rack_02",
		"prop_broken_cboard_p1",
		"prop_broken_cboard_p2",
		"prop_broken_cell_gate_01",
		"prop_broom_unit_01",
		"prop_bskball_01",
		"prop_bs_map_door_01",
		"prop_buckets_02",
		"prop_bucket_01a",
		"prop_bucket_01b",
		"prop_bucket_02a",
		"prop_buck_spade_01",
		"prop_buck_spade_02",
		"prop_buck_spade_03",
		"prop_bumper_01",
		"prop_bumper_02",
		"prop_bumper_03",
		"prop_bumper_car_01",
		"prop_burto_gate_01",
		"prop_bush_dead_02",
		"prop_bush_grape_01",
		"prop_bush_ivy_01_1m",
		"prop_bush_lrg_01",
		"prop_bush_lrg_01b",
		"prop_bush_lrg_01c",
		"prop_bush_med_01",
		"prop_bush_med_02",
		"prop_bush_neat_01",
		"prop_bush_neat_02",
		"prop_bush_ornament_01",
		"prop_bush_ornament_02",
		"prop_busker_hat_01",
		"prop_byard_bench01",
		"prop_byard_bench02",
		"prop_byard_block_01",
		"prop_byard_boat01",
		"prop_byard_boat02",
		"prop_byard_chains01",
		"prop_byard_dingy",
		"prop_byard_elecbox01",
		"prop_byard_elecbox02",
		"prop_byard_floatpile",
		"prop_byard_float_01",
		"prop_byard_float_01b",
		"prop_byard_hoist",
		"prop_byard_hoist_2",
		"prop_byard_hoses01",
		"prop_byard_hoses02",
		"prop_byard_ladder01",
		"prop_byard_machine01",
		"prop_byard_machine02",
		"prop_byard_motor_01",
		"prop_byard_motor_02",
		"prop_byard_net02",
		"prop_byard_phone",
		"prop_byard_pipes01",
		"prop_byard_pipe_01",
		"prop_byard_planks01",
		"prop_byard_pulley01",
		"prop_byard_rack",
		"prop_byard_ramp",
		"prop_byard_rampold",
		"prop_byard_rowboat1",
		"prop_byard_scfhold01",
		"prop_byard_sleeper01",
		"prop_byard_sleeper02",
		"prop_byard_steps_01",
		"prop_byard_tank_01",
		"prop_byard_trailer01",
		"prop_byard_trailer02",
		"prop_b_board_blank",
		"prop_c4_final",
		"prop_c4_final_green",
		"prop_cabinet_01",
		"prop_cabinet_01b",
		"prop_cabinet_02b",
		"prop_cablespool_01a",
		"prop_cablespool_01b",
		"prop_cablespool_02",
		"prop_camera_strap",
		"prop_candy_pqs",
		"prop_can_canoe",
		"prop_cap_01",
		"prop_cap_01b",
		"prop_cap_row_01",
		"prop_cap_row_01b",
		"prop_cap_row_02",
		"prop_cap_row_02b",
		"prop_carcreeper",
		"prop_cargo_int",
		"prop_carjack",
		"prop_carjack_l2",
		"prop_carrier_bag_01",
		"prop_carrier_bag_01_lod",
		"prop_cartwheel_01",
		"prop_carwash_roller_horz",
		"prop_carwash_roller_vert",
		"prop_car_battery_01",
		"prop_car_bonnet_01",
		"prop_car_bonnet_02",
		"prop_car_door_01",
		"prop_car_engine_01",
		"prop_car_exhaust_01",
		"prop_car_ignition",
		"prop_car_seat",
		"prop_casey_sec_id",
		"prop_cash_case_01",
		"prop_cash_case_02",
		"prop_cash_crate_01",
		"prop_cash_dep_bag_01",
		"prop_cash_envelope_01",
		"prop_cash_note_01",
		"prop_cash_pile_01",
		"prop_cash_pile_02",
		"prop_cash_trolly",
		"prop_casino_door_01l",
		"prop_casino_door_01r",
		"prop_cattlecrush",
		"prop_cat_tail_01",
		"prop_cctv_02_sm",
		"prop_cctv_cont_01",
		"prop_cctv_cont_03",
		"prop_cementmixer_01a",
		"prop_cementmixer_02a",
		"prop_ceramic_jug_01",
		"prop_ceramic_jug_cork",
		"prop_ch1_07_door_01l",
		"prop_ch2_05d_g_door",
		"prop_ch2_07b_20_g_door",
		"prop_ch2_09b_door",
		"prop_ch2_09c_garage_door",
		"prop_ch3_01_trlrdoor_l",
		"prop_ch3_01_trlrdoor_r",
		"prop_ch3_04_door_01l",
		"prop_ch3_04_door_01r",
		"prop_ch3_04_door_02",
		"prop_chair_01a",
		"prop_chair_01b",
		"prop_chair_02",
		"prop_chair_03",
		"prop_chair_pile_01",
		"prop_chall_lamp_01",
		"prop_chall_lamp_01n",
		"prop_chall_lamp_02",
		"prop_chateau_chair_01",
		"prop_cheetah_covered",
		"prop_chem_grill",
		"prop_chem_grill_bit",
		"prop_chem_vial_02",
		"prop_chem_vial_02b",
		"prop_cherenneon",
		"prop_chickencoop_a",
		"prop_chip_fryer",
		"prop_choc_ego",
		"prop_choc_meto",
		"prop_choc_pq",
		"prop_ch_025c_g_door_01",
		"prop_cigar_01",
		"prop_cigar_pack_01",
		"prop_cigar_pack_02",
		"prop_clapper_brd_01",
		"prop_cleaver",
		"prop_cliff_paper",
		"prop_clippers_01",
		"prop_clothes_rail_02",
		"prop_clothes_rail_03",
		"prop_clothes_rail_2b",
		"prop_clothes_tub_01",
		"prop_clown_chair",
		"prop_cntrdoor_ld_l",
		"prop_cntrdoor_ld_r",
		"prop_coathook_01",
		"prop_cockneon",
		"prop_coffee_cup_trailer",
		"prop_coffee_mac_02",
		"prop_coffin_02",
		"prop_coffin_02b",
		"prop_coke_block_01",
		"prop_coke_block_half_a",
		"prop_coke_block_half_b",
		"prop_compressor_01",
		"prop_compressor_02",
		"prop_compressor_03",
		"prop_com_gar_door_01",
		"prop_com_ls_door_01",
		"prop_conc_sacks_02a",
		"prop_cone_float_1",
		"prop_conschute",
		"prop_consign_01c",
		"prop_consign_02a",
		"prop_conslift_base",
		"prop_conslift_brace",
		"prop_conslift_cage",
		"prop_conslift_steps",
		"prop_console_01",
		"prop_construcionlamp_01",
		"prop_const_fence01a",
		"prop_const_fence01b",
		"prop_const_fence02a",
		"prop_cons_crate",
		"prop_cons_plank",
		"prop_cons_ply01",
		"prop_cons_ply02",
		"prop_container_01a",
		"prop_container_01b",
		"prop_container_01c",
		"prop_container_01d",
		"prop_container_01e",
		"prop_container_01f",
		"prop_container_03mb",
		"prop_container_05mb",
		"prop_container_door_mb_l",
		"prop_container_door_mb_r",
		"prop_container_hole",
		"prop_container_ld",
		"prop_container_ld2",
		"prop_container_old1",
		"prop_contnr_pile_01a",
		"prop_controller_01",
		"prop_control_rm_door_01",
		"prop_cont_chiller_01",
		"prop_cooker_03",
		"prop_copier_01",
		"prop_copper_pan",
		"prop_coral_bush_01",
		"prop_coral_flat_01",
		"prop_coral_flat_01_l1",
		"prop_coral_flat_02",
		"prop_coral_flat_brainy",
		"prop_coral_flat_clam",
		"prop_coral_grass_01",
		"prop_coral_grass_02",
		"prop_coral_kelp_01",
		"prop_coral_kelp_01_l1",
		"prop_coral_kelp_02",
		"prop_coral_kelp_02_l1",
		"prop_coral_kelp_03",
		"prop_coral_kelp_03_l1",
		"prop_coral_kelp_04",
		"prop_coral_kelp_04_l1",
		"prop_coral_pillar_01",
		"prop_coral_pillar_02",
		"prop_coral_spikey_01",
		"prop_coral_stone_03",
		"prop_coral_sweed_03",
		"prop_coral_sweed_04",
		"prop_cora_clam_01",
		"prop_cork_board",
		"prop_couch_01",
		"prop_couch_03",
		"prop_couch_04",
		"prop_couch_lg_02",
		"prop_couch_lg_05",
		"prop_couch_sm_07",
		"prop_crane_01_truck1",
		"prop_crane_01_truck2",
		"prop_cranial_saw",
		"prop_crashed_heli",
		"prop_cratepile_07a_l1",
		"prop_crate_01a",
		"prop_crate_02a",
		"prop_crate_08a",
		"prop_crate_float_1",
		"prop_creosote_b_01",
		"prop_crisp",
		"prop_crisp_small",
		"prop_crosssaw_01",
		"prop_cs1_14b_traind",
		"prop_cs1_14b_traind_dam",
		"prop_cs4_05_tdoor",
		"prop_cs4_10_tr_gd_01",
		"prop_cs4_11_door",
		"prop_cs6_03_door_l",
		"prop_cs6_03_door_r",
		"prop_cs_20m_rope",
		"prop_cs_30m_rope",
		"prop_cs_abattoir_switch",
		"prop_cs_aircon_01",
		"prop_cs_aircon_fan",
		"prop_cs_amanda_shoe",
		"prop_cs_ashtray",
		"prop_cs_bandana",
		"prop_cs_bar",
		"prop_cs_beachtowel_01",
		"prop_cs_beer_bot_01",
		"prop_cs_beer_bot_01b",
		"prop_cs_beer_bot_01lod",
		"prop_cs_beer_bot_02",
		"prop_cs_beer_bot_40oz_03",
		"prop_cs_beer_bot_test",
		"prop_cs_binder_01",
		"prop_cs_bin_01",
		"prop_cs_bin_01_lid",
		"prop_cs_bin_01_skinned",
		"prop_cs_bin_02",
		"prop_cs_bin_03",
		"prop_cs_book_01",
		"prop_cs_bottle_opener",
		"prop_cs_bowie_knife",
		"prop_cs_bowl_01",
		"prop_cs_bowl_01b",
		"prop_cs_box_clothes",
		"prop_cs_box_step",
		"prop_cs_brain_chunk",
		"prop_cs_bs_cup",
		"prop_cs_bucket_s",
		"prop_cs_bucket_s_lod",
		"prop_cs_burger_01",
		"prop_cs_business_card",
		"prop_cs_cardbox_01",
		"prop_cs_cash_note_01",
		"prop_cs_cctv",
		"prop_cs_champ_flute",
		"prop_cs_ciggy_01",
		"prop_cs_ciggy_01b",
		"prop_cs_clothes_box",
		"prop_cs_coke_line",
		"prop_cs_cont_latch",
		"prop_cs_crackpipe",
		"prop_cs_credit_card",
		"prop_cs_creeper_01",
		"prop_cs_crisps_01",
		"prop_cs_cuffs_01",
		"prop_cs_diaphram",
		"prop_cs_dildo_01",
		"prop_cs_documents_01",
		"prop_cs_duffel_01",
		"prop_cs_duffel_01b",
		"prop_cs_dumpster_01a",
		"prop_cs_dumpster_lidl",
		"prop_cs_dumpster_lidr",
		"prop_cs_dvd",
		"prop_cs_dvd_case",
		"prop_cs_dvd_player",
		"prop_cs_envolope_01",
		"prop_cs_fertilizer",
		"prop_cs_film_reel_01",
		"prop_cs_folding_chair_01",
		"prop_cs_fork",
		"prop_cs_frank_photo",
		"prop_cs_freightdoor_l1",
		"prop_cs_freightdoor_r1",
		"prop_cs_fridge",
		"prop_cs_fridge_door",
		"prop_cs_fuel_hose",
		"prop_cs_fuel_nozle",
		"prop_cs_gascutter_1",
		"prop_cs_gascutter_2",
		"prop_cs_glass_scrap",
		"prop_cs_gravyard_gate_l",
		"prop_cs_gravyard_gate_r",
		"prop_cs_gunrack",
		"prop_cs_hand_radio",
		"prop_cs_heist_bag_01",
		"prop_cs_heist_bag_02",
		"prop_cs_heist_bag_strap_01",
		"prop_cs_heist_rope",
		"prop_cs_heist_rope_b",
		"prop_cs_hotdog_01",
		"prop_cs_hotdog_02",
		"prop_cs_h_bag_strap_01",
		"prop_cs_ice_locker",
		"prop_cs_ice_locker_door_l",
		"prop_cs_ice_locker_door_r",
		"prop_cs_ilev_blind_01",
		"prop_cs_ironing_board",
		"prop_cs_katana_01",
		"prop_cs_kettle_01",
		"prop_cs_keyboard_01",
		"prop_cs_keys_01",
		"prop_cs_kitchen_cab_l2",
		"prop_cs_lazlow_ponytail",
		"prop_cs_lazlow_shirt_01",
		"prop_cs_lazlow_shirt_01b",
		"prop_cs_leaf",
		"prop_cs_leg_chain_01",
		"prop_cs_lester_crate",
		"prop_cs_lipstick",
		"prop_cs_magazine",
		"prop_cs_marker_01",
		"prop_cs_meth_pipe",
		"prop_cs_milk_01",
		"prop_cs_mini_tv",
		"prop_cs_mopbucket_01",
		"prop_cs_mop_s",
		"prop_cs_mouse_01",
		"prop_cs_nail_file",
		"prop_cs_newspaper",
		"prop_cs_office_chair",
		"prop_cs_overalls_01",
		"prop_cs_package_01",
		"prop_cs_padlock",
		"prop_cs_pamphlet_01",
		"prop_cs_panel_01",
		"prop_cs_panties",
		"prop_cs_panties_02",
		"prop_cs_panties_03",
		"prop_cs_paper_cup",
		"prop_cs_para_ropebit",
		"prop_cs_para_ropes",
		"prop_cs_pebble",
		"prop_cs_pebble_02",
		"prop_cs_petrol_can",
		"prop_cs_phone_01",
		"prop_cs_photoframe_01",
		"prop_cs_pills",
		"prop_cs_plane_int_01",
		"prop_cs_planning_photo",
		"prop_cs_plant_01",
		"prop_cs_plate_01",
		"prop_cs_polaroid",
		"prop_cs_police_torch",
		"prop_cs_pour_tube",
		"prop_cs_power_cell",
		"prop_cs_power_cord",
		"prop_cs_protest_sign_01",
		"prop_cs_protest_sign_02",
		"prop_cs_rage_statue_p1",
		"prop_cs_rage_statue_p2",
		"prop_cs_remote_01",
		"prop_cs_rolled_paper",
		"prop_cs_rope_tie_01",
		"prop_cs_rub_binbag_01",
		"prop_cs_rub_box_01",
		"prop_cs_rub_box_02",
		"prop_cs_r_business_card",
		"prop_cs_sack_01",
		"prop_cs_saucer_01",
		"prop_cs_sc1_11_gate",
		"prop_cs_scissors",
		"prop_cs_script_bottle",
		"prop_cs_script_bottle_01",
		"prop_cs_server_drive",
		"prop_cs_sheers",
		"prop_cs_shirt_01",
		"prop_cs_shopping_bag",
		"prop_cs_shot_glass",
		"prop_cs_silver_tray",
		"prop_cs_sink_filler",
		"prop_cs_sink_filler_02",
		"prop_cs_sm_27_gate",
		"prop_cs_sol_glasses",
		"prop_cs_spray_can",
		"prop_cs_steak",
		"prop_cs_stock_book",
		"prop_cs_street_binbag_01",
		"prop_cs_street_card_01",
		"prop_cs_street_card_02",
		"prop_cs_sub_hook_01",
		"prop_cs_sub_rope_01",
		"prop_cs_swipe_card",
		"prop_cs_tablet",
		"prop_cs_tablet_02",
		"prop_cs_toaster",
		"prop_cs_trolley_01",
		"prop_cs_trowel",
		"prop_cs_truck_ladder",
		"prop_cs_tshirt_ball_01",
		"prop_cs_tv_stand",
		"prop_cs_t_shirt_pile",
		"prop_cs_valve",
		"prop_cs_vent_cover",
		"prop_cs_vial_01",
		"prop_cs_walkie_talkie",
		"prop_cs_walking_stick",
		"prop_cs_whiskey_bottle",
		"prop_cs_whiskey_bot_stop",
		"prop_cs_wrench",
		"prop_cub_door_lifeblurb",
		"prop_cub_lifeblurb",
		"prop_cuff_keys_01",
		"prop_cup_saucer_01",
		"prop_curl_bar_01",
		"prop_damdoor_01",
		"prop_dart_1",
		"prop_dart_2",
		"prop_dart_bd_01",
		"prop_dart_bd_cab_01",
		"prop_defilied_ragdoll_01",
		"prop_desert_iron_01",
		"prop_detergent_01a",
		"prop_detergent_01b",
		"prop_devin_box_01",
		"prop_devin_rope_01",
		"prop_diggerbkt_01",
		"prop_direct_chair_01",
		"prop_direct_chair_02",
		"prop_display_unit_01",
		"prop_display_unit_02",
		"prop_disp_cabinet_002",
		"prop_disp_cabinet_01",
		"prop_disp_razor_01",
		"prop_distantcar_day",
		"prop_distantcar_night",
		"prop_distantcar_truck",
		"prop_dj_deck_01",
		"prop_dj_deck_02",
		"prop_dock_ropefloat",
		"prop_dock_ropetyre1",
		"prop_dock_ropetyre2",
		"prop_dock_ropetyre3",
		"prop_dock_rtg_01",
		"prop_dock_rtg_ld",
		"prop_dock_shippad",
		"prop_dock_sign_01",
		"prop_dock_woodpole1",
		"prop_dock_woodpole2",
		"prop_dog_cage_01",
		"prop_dog_cage_02",
		"prop_dolly_01",
		"prop_dolly_02",
		"prop_donut_01",
		"prop_donut_02",
		"prop_donut_02b",
		"prop_door_01",
		"prop_door_balcony_frame",
		"prop_door_balcony_left",
		"prop_door_balcony_right",
		"prop_door_bell_01",
		"prop_double_grid_line",
		"prop_dress_disp_01",
		"prop_dress_disp_02",
		"prop_drop_armscrate_01",
		"prop_drop_armscrate_01b",
		"prop_drop_crate_01",
		"prop_drop_crate_01_set",
		"prop_drop_crate_01_set2",
		"prop_drug_burner",
		"prop_drug_package",
		"prop_drug_package_02",
		"prop_drywallpile_01",
		"prop_drywallpile_02",
		"prop_dt1_13_groundlight",
		"prop_dt1_13_walllightsource",
		"prop_dt1_20_mp_door_l",
		"prop_dt1_20_mp_door_r",
		"prop_dt1_20_mp_gar",
		"prop_ducktape_01",
		"prop_dummy_01",
		"prop_dummy_car",
		"prop_dummy_light",
		"prop_dummy_plane",
		"prop_dumpster_3a",
		"prop_dumpster_3step",
		"prop_dumpster_4a",
		"prop_dumpster_4b",
		"prop_d_balcony_l_light",
		"prop_d_balcony_r_light",
		"prop_ear_defenders_01",
		"prop_ecg_01",
		"prop_ecg_01_cable_01",
		"prop_ecg_01_cable_02",
		"prop_ecola_can",
		"prop_egg_clock_01",
		"prop_ejector_seat_01",
		"prop_elecbox_03a",
		"prop_elecbox_10",
		"prop_el_guitar_01",
		"prop_el_guitar_02",
		"prop_el_guitar_03",
		"prop_employee_month_01",
		"prop_employee_month_02",
		"prop_energy_drink",
		"prop_entityxf_covered",
		"prop_epsilon_door_l",
		"prop_epsilon_door_r",
		"prop_etricmotor_01",
		"prop_exer_bike_01",
		"prop_faceoffice_door_l",
		"prop_faceoffice_door_r",
		"prop_face_rag_01",
		"prop_facgate_01",
		"prop_facgate_01b",
		"prop_facgate_02pole",
		"prop_facgate_02_l",
		"prop_facgate_03post",
		"prop_facgate_08_frame",
		"prop_facgate_08_ld2",
		"prop_facgate_id1_27",
		"prop_fac_machine_02",
		"prop_fag_packet_01",
		"prop_fan_01",
		"prop_fan_palm_01a",
		"prop_fax_01",
		"prop_fbi3_coffee_table",
		"prop_fbibombbin",
		"prop_fbibombcupbrd",
		"prop_fbibombfile",
		"prop_fbibombplant",
		"prop_feeder1",
		"prop_feed_sack_01",
		"prop_feed_sack_02",
		"prop_fence_log_01",
		"prop_fence_log_02",
		"prop_ff_shelves_01",
		"prop_ff_sink_01",
		"prop_ff_sink_02",
		"prop_fib_badge",
		"prop_fib_broken_window",
		"prop_fib_skylight_piece",
		"prop_film_cam_01",
		"prop_fireescape_01a",
		"prop_fireescape_01b",
		"prop_fireescape_02a",
		"prop_fireescape_02b",
		"prop_fire_driser_1a",
		"prop_fire_hosereel",
		"prop_fishing_rod_01",
		"prop_fishing_rod_02",
		"prop_fish_slice_01",
		"prop_flagpole_1a",
		"prop_flagpole_2a",
		"prop_flagpole_3a",
		"prop_flare_01",
		"prop_flare_01b",
		"prop_flash_unit",
		"prop_flatbed_strap",
		"prop_flatbed_strap_b",
		"prop_flatscreen_overlay",
		"prop_flattrailer_01a",
		"prop_flattruck_01a",
		"prop_fleeca_atm",
		"prop_flight_box_01",
		"prop_flight_box_insert",
		"prop_flight_box_insert2",
		"prop_flipchair_01",
		"prop_floor_duster_01",
		"prop_fncconstruc_02a",
		"prop_fridge_03",
		"prop_front_seat_01",
		"prop_front_seat_02",
		"prop_front_seat_03",
		"prop_front_seat_04",
		"prop_front_seat_05",
		"prop_front_seat_06",
		"prop_front_seat_07",
		"prop_front_seat_row_01",
		"prop_fruitstand_b_nite",
		"prop_fruit_basket",
		"prop_ftowel_01",
		"prop_ftowel_07",
		"prop_ftowel_08",
		"prop_ftowel_10",
		"prop_f_b_insert_broken",
		"prop_f_duster_01_s",
		"prop_f_duster_02",
		"prop_gaffer_arm_bind",
		"prop_gaffer_arm_bind_cut",
		"prop_gaffer_leg_bind",
		"prop_gaffer_leg_bind_cut",
		"prop_gaffer_tape",
		"prop_gaffer_tape_strip",
		"prop_game_clock_01",
		"prop_game_clock_02",
		"prop_garden_dreamcatch_01",
		"prop_garden_edging_01",
		"prop_garden_edging_02",
		"prop_garden_zapper_01",
		"prop_gar_door_05_l",
		"prop_gar_door_05_r",
		"prop_gar_door_a_01",
		"prop_gar_door_plug",
		"prop_gascage01",
		"prop_gascyl_ramp_01",
		"prop_gascyl_ramp_door_01",
		"prop_gas_grenade",
		"prop_gas_mask_hang_01",
		"prop_gatecom_02",
		"prop_gate_airport_01",
		"prop_gate_bridge_ld",
		"prop_gate_cult_01_l",
		"prop_gate_cult_01_r",
		"prop_gate_docks_ld",
		"prop_gate_farm_01a",
		"prop_gate_farm_post",
		"prop_gate_frame_06",
		"prop_gate_military_01",
		"prop_gate_prison_01",
		"prop_gate_tep_01_l",
		"prop_gate_tep_01_r",
		"prop_gazebo_03",
		"prop_gd_ch2_08",
		"prop_generator_02a",
		"prop_generator_03a",
		"prop_generator_04",
		"prop_ghettoblast_02",
		"prop_girder_01a",
		"prop_glasscutter_01",
		"prop_glass_suck_holder",
		"prop_glf_roller",
		"prop_glf_spreader",
		"prop_gold_bar",
		"prop_gold_cont_01",
		"prop_gold_cont_01b",
		"prop_gold_trolly",
		"prop_gold_trolly_full",
		"prop_gold_trolly_strap_01",
		"prop_golf_bag_01",
		"prop_golf_bag_01b",
		"prop_golf_bag_01c",
		"prop_golf_ball",
		"prop_golf_ball_p2",
		"prop_golf_tee",
		"prop_golf_wood_01",
		"prop_grain_hopper",
		"prop_grapes_01",
		"prop_grapes_02",
		"prop_grass_dry_02",
		"prop_grass_dry_03",
		"prop_gravestones_01a",
		"prop_gravestones_02a",
		"prop_gravestones_03a",
		"prop_gravestones_04a",
		"prop_gravestones_05a",
		"prop_gravestones_06a",
		"prop_gravestones_07a",
		"prop_gravestones_08a",
		"prop_gravestones_09a",
		"prop_gravestones_10a",
		"prop_gravetomb_01a",
		"prop_gravetomb_02a",
		"prop_griddle_01",
		"prop_griddle_02",
		"prop_grumandoor_l",
		"prop_grumandoor_r",
		"prop_gshotsensor_01",
		"prop_gun_case_01",
		"prop_gun_case_02",
		"prop_gun_frame",
		"prop_hacky_sack_01",
		"prop_handdry_01",
		"prop_handdry_02",
		"prop_handrake",
		"prop_handtowels",
		"prop_hand_toilet",
		"prop_hanger_door_1",
		"prop_hard_hat_01",
		"prop_hat_box_01",
		"prop_hat_box_02",
		"prop_hat_box_03",
		"prop_hat_box_04",
		"prop_hat_box_05",
		"prop_hat_box_06",
		"prop_haybailer_01",
		"prop_haybale_01",
		"prop_haybale_02",
		"prop_haybale_stack_01",
		"prop_hd_seats_01",
		"prop_headphones_01",
		"prop_headset_01",
		"prop_hedge_trimmer_01",
		"prop_helipad_01",
		"prop_helipad_02",
		"prop_henna_disp_01",
		"prop_henna_disp_02",
		"prop_henna_disp_03",
		"prop_hifi_01",
		"prop_hobo_stove_01",
		"prop_hockey_bag_01",
		"prop_hole_plug_01",
		"prop_holster_01",
		"prop_homeless_matress_01",
		"prop_homeless_matress_02",
		"prop_hose_1",
		"prop_hose_2",
		"prop_hose_3",
		"prop_hose_nozzle",
		"prop_hospitaldoors_start",
		"prop_hospital_door_l",
		"prop_hospital_door_r",
		"prop_hotel_clock_01",
		"prop_hotel_trolley",
		"prop_hottub2",
		"prop_huf_rag_01",
		"prop_huge_display_01",
		"prop_huge_display_02",
		"prop_hunterhide",
		"prop_hw1_03_gardoor_01",
		"prop_hw1_04_door_l1",
		"prop_hw1_04_door_r1",
		"prop_hw1_23_door",
		"prop_hwbowl_pseat_6x1",
		"prop_hwbowl_seat_01",
		"prop_hwbowl_seat_02",
		"prop_hwbowl_seat_03",
		"prop_hwbowl_seat_03b",
		"prop_hwbowl_seat_6x6",
		"prop_hydro_platform_01",
		"prop_ice_box_01",
		"prop_ice_box_01_l1",
		"prop_ice_cube_01",
		"prop_ice_cube_02",
		"prop_ice_cube_03",
		"prop_id2_11_gdoor",
		"prop_id2_20_clock",
		"prop_idol_01",
		"prop_idol_01_error",
		"prop_idol_case",
		"prop_idol_case_01",
		"prop_idol_case_02",
		"prop_id_21_gardoor_01",
		"prop_id_21_gardoor_02",
		"prop_indus_meet_door_l",
		"prop_indus_meet_door_r",
		"prop_ind_barge_01",
		"prop_ind_barge_02",
		"prop_ind_coalcar_01",
		"prop_ind_coalcar_02",
		"prop_ind_coalcar_03",
		"prop_ind_conveyor_01",
		"prop_ind_conveyor_02",
		"prop_ind_conveyor_04",
		"prop_ind_crusher",
		"prop_ind_deiseltank",
		"prop_ind_light_01a",
		"prop_ind_light_01b",
		"prop_ind_light_01c",
		"prop_ind_mech_01c",
		"prop_ind_mech_02a",
		"prop_ind_mech_02b",
		"prop_ind_mech_03a",
		"prop_ind_mech_04a",
		"prop_ind_oldcrane",
		"prop_ind_washer_02",
		"prop_inflatearch_01",
		"prop_inflategate_01",
		"prop_ing_camera_01",
		"prop_ing_crowbar",
		"prop_inhaler_01",
		"prop_int_gate01",
		"prop_in_tray_01",
		"prop_irish_sign_01",
		"prop_irish_sign_02",
		"prop_irish_sign_03",
		"prop_irish_sign_04",
		"prop_irish_sign_05",
		"prop_irish_sign_06",
		"prop_irish_sign_07",
		"prop_irish_sign_08",
		"prop_irish_sign_09",
		"prop_irish_sign_10",
		"prop_irish_sign_11",
		"prop_irish_sign_12",
		"prop_irish_sign_13",
		"prop_iron_01",
		"prop_jb700_covered",
		"prop_jeans_01",
		"prop_jetski_ramp_01",
		"prop_jet_bloodsplat_01",
		"prop_jewel_02a",
		"prop_jewel_02b",
		"prop_jewel_02c",
		"prop_jewel_03a",
		"prop_jewel_03b",
		"prop_jewel_04a",
		"prop_jewel_04b",
		"prop_jewel_pickup_new_01",
		"prop_juice_dispenser",
		"prop_juice_pool_01",
		"prop_jukebox_01",
		"prop_jukebox_02",
		"prop_jyard_block_01a",
		"prop_j_disptray_01",
		"prop_j_disptray_01b",
		"prop_j_disptray_01_dam",
		"prop_j_disptray_02",
		"prop_j_disptray_02_dam",
		"prop_j_disptray_03",
		"prop_j_disptray_03_dam",
		"prop_j_disptray_04",
		"prop_j_disptray_04b",
		"prop_j_disptray_05",
		"prop_j_disptray_05b",
		"prop_j_heist_pic_01",
		"prop_j_heist_pic_02",
		"prop_j_heist_pic_03",
		"prop_j_heist_pic_04",
		"prop_j_neck_disp_01",
		"prop_j_neck_disp_02",
		"prop_j_neck_disp_03",
		"prop_kayak_01",
		"prop_kayak_01b",
		"prop_kebab_grill",
		"prop_keg_01",
		"prop_kettle",
		"prop_kettle_01",
		"prop_keyboard_01a",
		"prop_keyboard_01b",
		"prop_kino_light_01",
		"prop_kino_light_03",
		"prop_kitch_juicer",
		"prop_kitch_pot_fry",
		"prop_kitch_pot_huge",
		"prop_kitch_pot_lrg",
		"prop_kitch_pot_lrg2",
		"prop_kitch_pot_med",
		"prop_kitch_pot_sm",
		"prop_knife",
		"prop_knife_stand",
		"prop_kt1_06_door_l",
		"prop_kt1_06_door_r",
		"prop_kt1_10_mpdoor_l",
		"prop_kt1_10_mpdoor_r",
		"prop_ladel",
		"prop_laptop_02_closed",
		"prop_laptop_jimmy",
		"prop_laptop_lester",
		"prop_laptop_lester2",
		"prop_large_gold",
		"prop_large_gold_alt_a",
		"prop_large_gold_alt_b",
		"prop_large_gold_alt_c",
		"prop_large_gold_empty",
		"prop_lawnmower_01",
		"prop_ld_alarm_01",
		"prop_ld_alarm_01_dam",
		"prop_ld_alarm_alert",
		"prop_ld_ammo_pack_01",
		"prop_ld_ammo_pack_02",
		"prop_ld_ammo_pack_03",
		"prop_ld_armour",
		"prop_ld_balcfnc_01a",
		"prop_ld_balcfnc_02a",
		"prop_ld_balcfnc_02c",
		"prop_ld_bankdoors_02",
		"prop_ld_barrier_01",
		"prop_ld_binbag_01",
		"prop_ld_bomb",
		"prop_ld_bomb_01",
		"prop_ld_bomb_01_open",
		"prop_ld_bomb_anim",
		"prop_ld_cable",
		"prop_ld_cable_tie_01",
		"prop_ld_can_01",
		"prop_ld_case_01",
		"prop_ld_case_01_lod",
		"prop_ld_case_01_s",
		"prop_ld_contact_card",
		"prop_ld_container",
		"prop_ld_contain_dl",
		"prop_ld_contain_dl2",
		"prop_ld_contain_dr",
		"prop_ld_contain_dr2",
		"prop_ld_crate_01",
		"prop_ld_crate_lid_01",
		"prop_ld_crocclips01",
		"prop_ld_crocclips02",
		"prop_ld_dummy_rope",
		"prop_ld_fags_01",
		"prop_ld_fags_02",
		"prop_ld_fan_01",
		"prop_ld_fan_01_old",
		"prop_ld_faucet",
		"prop_ld_ferris_wheel",
		"prop_ld_fireaxe",
		"prop_ld_flow_bottle",
		"prop_ld_fragwall_01a",
		"prop_ld_garaged_01",
		"prop_ld_gold_tooth",
		"prop_ld_greenscreen_01",
		"prop_ld_handbag",
		"prop_ld_handbag_s",
		"prop_ld_hat_01",
		"prop_ld_haybail",
		"prop_ld_hdd_01",
		"prop_ld_health_pack",
		"prop_ld_hook",
		"prop_ld_int_safe_01",
		"prop_ld_jail_door",
		"prop_ld_jeans_01",
		"prop_ld_jeans_02",
		"prop_ld_jerrycan_01",
		"prop_ld_keypad_01",
		"prop_ld_keypad_01b",
		"prop_ld_keypad_01b_lod",
		"prop_ld_lap_top",
		"prop_ld_monitor_01",
		"prop_ld_peep_slider",
		"prop_ld_pipe_single_01",
		"prop_ld_planning_pin_01",
		"prop_ld_planning_pin_02",
		"prop_ld_planning_pin_03",
		"prop_ld_purse_01",
		"prop_ld_purse_01_lod",
		"prop_ld_rail_01",
		"prop_ld_rail_02",
		"prop_ld_rope_t",
		"prop_ld_rubble_01",
		"prop_ld_rubble_02",
		"prop_ld_rubble_03",
		"prop_ld_rubble_04",
		"prop_ld_rub_binbag_01",
		"prop_ld_scrap",
		"prop_ld_shirt_01",
		"prop_ld_shoe_01",
		"prop_ld_shoe_02",
		"prop_ld_shovel",
		"prop_ld_shovel_dirt",
		"prop_ld_snack_01",
		"prop_ld_suitcase_01",
		"prop_ld_suitcase_02",
		"prop_ld_test_01",
		"prop_ld_toilet_01",
		"prop_ld_tooth",
		"prop_ld_tshirt_01",
		"prop_ld_tshirt_02",
		"prop_ld_vault_door",
		"prop_ld_wallet_01",
		"prop_ld_wallet_01_s",
		"prop_ld_wallet_02",
		"prop_ld_wallet_pickup",
		"prop_ld_w_me_machette",
		"prop_leaf_blower_01",
		"prop_lectern_01",
		"prop_letterbox_04",
		"prop_lev_crate_01",
		"prop_lev_des_barge_01",
		"prop_lev_des_barge_02",
		"prop_lifeblurb_01",
		"prop_lifeblurb_01b",
		"prop_lifeblurb_02",
		"prop_lifeblurb_02b",
		"prop_life_ring_02",
		"prop_lift_overlay_01",
		"prop_lift_overlay_02",
		"prop_litter_picker",
		"prop_loggneon",
		"prop_logpile_05",
		"prop_logpile_06",
		"prop_logpile_06b",
		"prop_logpile_07",
		"prop_logpile_07b",
		"prop_log_01",
		"prop_log_02",
		"prop_log_03",
		"prop_loose_rag_01",
		"prop_lrggate_01c_l",
		"prop_lrggate_01c_r",
		"prop_lrggate_01_l",
		"prop_lrggate_01_pst",
		"prop_lrggate_01_r",
		"prop_lrggate_02_ld",
		"prop_lrggate_03a",
		"prop_lrggate_03b",
		"prop_lrggate_03b_ld",
		"prop_lrggate_04a",
		"prop_lrggate_05a",
		"prop_lrggate_06a",
		"prop_luggage_01a",
		"prop_luggage_02a",
		"prop_luggage_03a",
		"prop_luggage_04a",
		"prop_luggage_05a",
		"prop_luggage_06a",
		"prop_luggage_07a",
		"prop_luggage_08a",
		"prop_luggage_09a",
		"prop_magenta_door",
		"prop_makeup_trail_01",
		"prop_makeup_trail_02",
		"prop_map_door_01",
		"prop_mast_01",
		"prop_mat_box",
		"prop_mb_cargo_01a",
		"prop_mb_cargo_02a",
		"prop_mb_cargo_03a",
		"prop_mb_cargo_04a",
		"prop_mb_cargo_04b",
		"prop_mb_crate_01a",
		"prop_mb_crate_01a_set",
		"prop_mb_crate_01b",
		"prop_mb_hesco_06",
		"prop_mb_ordnance_01",
		"prop_mb_ordnance_03",
		"prop_mb_sandblock_01",
		"prop_mb_sandblock_02",
		"prop_mb_sandblock_03",
		"prop_mb_sandblock_04",
		"prop_mb_sandblock_05",
		"prop_medal_01",
		"prop_medstation_02",
		"prop_medstation_03",
		"prop_medstation_04",
		"prop_med_bag_01",
		"prop_med_bag_01b",
		"prop_med_jet_01",
		"prop_megaphone_01",
		"prop_mem_candle_04",
		"prop_mem_candle_05",
		"prop_mem_candle_06",
		"prop_mem_reef_01",
		"prop_mem_reef_02",
		"prop_mem_reef_03",
		"prop_mem_teddy_01",
		"prop_mem_teddy_02",
		"prop_metalfoodjar_01",
		"prop_metal_plates01",
		"prop_metal_plates02",
		"prop_meth_bag_01",
		"prop_michaels_credit_tv",
		"prop_michael_backpack",
		"prop_michael_balaclava",
		"prop_michael_door",
		"prop_michael_sec_id",
		"prop_microphone_02",
		"prop_microwave_1",
		"prop_micro_01",
		"prop_micro_02",
		"prop_micro_cs_01",
		"prop_micro_cs_01_door",
		"prop_military_pickup_01",
		"prop_mil_crate_01",
		"prop_mil_crate_02",
		"prop_minigun_01",
		"prop_mobile_mast_1",
		"prop_mobile_mast_2",
		"prop_money_bag_01",
		"prop_monitor_01c",
		"prop_monitor_01d",
		"prop_monitor_02",
		"prop_monitor_03b",
		"prop_motel_door_09",
		"prop_mouse_01",
		"prop_mouse_01a",
		"prop_mouse_01b",
		"prop_mouse_02",
		"prop_movie_rack",
		"prop_mp3_dock",
		"prop_mp_arrow_barrier_01",
		"prop_mp_barrier_01",
		"prop_mp_barrier_01b",
		"prop_mp_barrier_02",
		"prop_mp_barrier_02b",
		"prop_mp_base_marker",
		"prop_mp_boost_01",
		"prop_mp_cant_place_lrg",
		"prop_mp_cant_place_med",
		"prop_mp_cant_place_sm",
		"prop_mp_cone_01",
		"prop_mp_cone_02",
		"prop_mp_cone_03",
		"prop_mp_cone_04",
		"prop_mp_drug_package",
		"prop_mp_drug_pack_blue",
		"prop_mp_drug_pack_red",
		"prop_mp_icon_shad_lrg",
		"prop_mp_icon_shad_med",
		"prop_mp_icon_shad_sm",
		"prop_mp_max_out_lrg",
		"prop_mp_max_out_med",
		"prop_mp_max_out_sm",
		"prop_mp_num_0",
		"prop_mp_num_1",
		"prop_mp_num_2",
		"prop_mp_num_3",
		"prop_mp_num_4",
		"prop_mp_num_5",
		"prop_mp_num_6",
		"prop_mp_num_7",
		"prop_mp_num_8",
		"prop_mp_num_9",
		"prop_mp_placement",
		"prop_mp_placement_lrg",
		"prop_mp_placement_maxd",
		"prop_mp_placement_med",
		"prop_mp_placement_red",
		"prop_mp_placement_sm",
		"prop_mp_ramp_01",
		"prop_mp_ramp_02",
		"prop_mp_repair",
		"prop_mp_repair_01",
		"prop_mp_respawn_02",
		"prop_mp_rocket_01",
		"prop_mp_spike_01",
		"prop_mr_rasberryclean",
		"prop_mr_raspberry_01",
		"prop_muscle_bench_01",
		"prop_muscle_bench_02",
		"prop_muscle_bench_03",
		"prop_muscle_bench_04",
		"prop_muscle_bench_05",
		"prop_muscle_bench_06",
		"prop_muster_wboard_01",
		"prop_muster_wboard_02",
		"prop_m_pack_int_01",
		"prop_necklace_board",
		"prop_news_disp_02a_s",
		"prop_new_drug_pack_01",
		"prop_nigel_bag_pickup",
		"prop_night_safe_01",
		"prop_notepad_01",
		"prop_notepad_02",
		"prop_novel_01",
		"prop_npc_phone",
		"prop_npc_phone_02",
		"prop_office_alarm_01",
		"prop_office_desk_01",
		"prop_offroad_bale01",
		"prop_offroad_bale02_l1_frag_",
		"prop_offroad_barrel01",
		"prop_offroad_tyres01",
		"prop_off_chair_01",
		"prop_off_chair_03",
		"prop_off_chair_04",
		"prop_off_chair_04b",
		"prop_off_chair_04_s",
		"prop_off_chair_05",
		"prop_off_phone_01",
		"prop_oiltub_01",
		"prop_oiltub_02",
		"prop_oiltub_03",
		"prop_oiltub_05",
		"prop_oiltub_06",
		"prop_oil_derrick_01",
		"prop_oil_guage_01",
		"prop_oil_spool_02",
		"prop_oil_valve_01",
		"prop_oil_valve_02",
		"prop_oil_wellhead_01",
		"prop_oil_wellhead_03",
		"prop_oil_wellhead_04",
		"prop_oil_wellhead_05",
		"prop_oil_wellhead_06",
		"prop_oldplough1",
		"prop_old_boot",
		"prop_old_churn_01",
		"prop_old_churn_02",
		"prop_old_deck_chair",
		"prop_old_deck_chair_02",
		"prop_old_farm_01",
		"prop_old_farm_02",
		"prop_old_wood_chair",
		"prop_old_wood_chair_lod",
		"prop_orang_can_01",
		"prop_outdoor_fan_01",
		"prop_out_door_speaker",
		"prop_overalls_01",
		"prop_owl_totem_01",
		"prop_paints_can01",
		"prop_paints_can02",
		"prop_paints_can03",
		"prop_paints_can04",
		"prop_paints_can05",
		"prop_paints_can06",
		"prop_paints_can07",
		"prop_paint_brush01",
		"prop_paint_brush02",
		"prop_paint_brush03",
		"prop_paint_brush04",
		"prop_paint_brush05",
		"prop_paint_roller",
		"prop_paint_spray01a",
		"prop_paint_spray01b",
		"prop_paint_stepl01",
		"prop_paint_stepl01b",
		"prop_paint_stepl02",
		"prop_paint_tray",
		"prop_paint_wpaper01",
		"prop_pallettruck_01",
		"prop_palm_fan_02_a",
		"prop_palm_fan_02_b",
		"prop_palm_fan_03_a",
		"prop_palm_fan_03_b",
		"prop_palm_fan_03_c",
		"prop_palm_fan_03_d",
		"prop_palm_fan_04_a",
		"prop_palm_fan_04_b",
		"prop_palm_fan_04_c",
		"prop_palm_fan_04_d",
		"prop_palm_huge_01a",
		"prop_palm_huge_01b",
		"prop_palm_med_01a",
		"prop_palm_med_01b",
		"prop_palm_med_01c",
		"prop_palm_med_01d",
		"prop_palm_sm_01a",
		"prop_palm_sm_01d",
		"prop_palm_sm_01e",
		"prop_palm_sm_01f",
		"prop_paper_bag_01",
		"prop_paper_bag_small",
		"prop_paper_ball",
		"prop_paper_box_01",
		"prop_paper_box_02",
		"prop_paper_box_03",
		"prop_paper_box_04",
		"prop_paper_box_05",
		"prop_pap_camera_01",
		"prop_parachute",
		"prop_parapack_01",
		"prop_parasol_01",
		"prop_parasol_01_b",
		"prop_parasol_01_c",
		"prop_parasol_01_down",
		"prop_parasol_02",
		"prop_parasol_02_b",
		"prop_parasol_02_c",
		"prop_parasol_03",
		"prop_parasol_03_b",
		"prop_parasol_03_c",
		"prop_parasol_04e",
		"prop_parasol_04e_lod1",
		"prop_parasol_bh_48",
		"prop_parking_sign_06",
		"prop_parking_sign_07",
		"prop_parking_sign_1",
		"prop_parking_sign_2",
		"prop_parking_wand_01",
		"prop_park_ticket_01",
		"prop_partsbox_01",
		"prop_passport_01",
		"prop_patio_heater_01",
		"prop_patio_lounger1",
		"prop_patio_lounger1b",
		"prop_patio_lounger1_table",
		"prop_patio_lounger_2",
		"prop_patio_lounger_3",
		"prop_patriotneon",
		"prop_paynspray_door_l",
		"prop_paynspray_door_r",
		"prop_pc_01a",
		"prop_pc_02a",
		"prop_peanut_bowl_01",
		"prop_ped_pic_01",
		"prop_ped_pic_01_sm",
		"prop_ped_pic_02",
		"prop_ped_pic_02_sm",
		"prop_ped_pic_03",
		"prop_ped_pic_03_sm",
		"prop_ped_pic_04",
		"prop_ped_pic_04_sm",
		"prop_ped_pic_05",
		"prop_ped_pic_05_sm",
		"prop_ped_pic_06",
		"prop_ped_pic_06_sm",
		"prop_ped_pic_07",
		"prop_ped_pic_07_sm",
		"prop_ped_pic_08",
		"prop_ped_pic_08_sm",
		"prop_pencil_01",
		"prop_pharm_sign_01",
		"prop_phonebox_05a",
		"prop_phone_ing",
		"prop_phone_ing_02",
		"prop_phone_ing_03",
		"prop_phone_overlay_01",
		"prop_phone_overlay_02",
		"prop_phone_overlay_anim",
		"prop_phone_proto",
		"prop_phone_proto_back",
		"prop_phone_proto_battery",
		"prop_picnictable_02",
		"prop_piercing_gun",
		"prop_pier_kiosk_01",
		"prop_pier_kiosk_02",
		"prop_pier_kiosk_03",
		"prop_pile_dirt_01",
		"prop_pile_dirt_02",
		"prop_pile_dirt_03",
		"prop_pile_dirt_04",
		"prop_pile_dirt_06",
		"prop_pile_dirt_07",
		"prop_ping_pong",
		"prop_pipes_01a",
		"prop_pipes_01b",
		"prop_pipes_03b",
		"prop_pipes_04a",
		"prop_pipes_05a",
		"prop_pipes_conc_01",
		"prop_pipes_conc_02",
		"prop_pipe_single_01",
		"prop_pistol_holster",
		"prop_pitcher_01_cs",
		"prop_pizza_box_01",
		"prop_pizza_box_02",
		"prop_pizza_oven_01",
		"prop_planer_01",
		"prop_plant_01a",
		"prop_plant_01b",
		"prop_plant_base_01",
		"prop_plant_base_02",
		"prop_plant_base_03",
		"prop_plant_cane_01a",
		"prop_plant_cane_01b",
		"prop_plant_cane_02a",
		"prop_plant_cane_02b",
		"prop_plant_clover_01",
		"prop_plant_clover_02",
		"prop_plant_fern_01a",
		"prop_plant_fern_01b",
		"prop_plant_fern_02a",
		"prop_plant_fern_02b",
		"prop_plant_fern_02c",
		"prop_plant_flower_01",
		"prop_plant_flower_02",
		"prop_plant_flower_03",
		"prop_plant_flower_04",
		"prop_plant_group_01",
		"prop_plant_group_02",
		"prop_plant_group_03",
		"prop_plant_group_04",
		"prop_plant_group_05",
		"prop_plant_group_05b",
		"prop_plant_group_05c",
		"prop_plant_group_05d",
		"prop_plant_group_06a",
		"prop_plant_group_06b",
		"prop_plant_group_06c",
		"prop_plant_int_02a",
		"prop_plant_int_02b",
		"prop_plant_int_05a",
		"prop_plant_int_05b",
		"prop_plant_int_06a",
		"prop_plant_int_06b",
		"prop_plant_int_06c",
		"prop_plant_paradise",
		"prop_plant_paradise_b",
		"prop_plastic_cup_02",
		"prop_plas_barier_01a",
		"prop_plate_04",
		"prop_plate_stand_01",
		"prop_plate_warmer",
		"prop_player_gasmask",
		"prop_player_phone_01",
		"prop_player_phone_02",
		"prop_pliers_01",
		"prop_plywoodpile_01a",
		"prop_plywoodpile_01b",
		"prop_podium_mic",
		"prop_police_door_l",
		"prop_police_door_l_dam",
		"prop_police_door_r",
		"prop_police_door_r_dam",
		"prop_police_door_surround",
		"prop_police_phone",
		"prop_police_radio_handset",
		"prop_police_radio_main",
		"prop_poly_bag_01",
		"prop_poly_bag_money",
		"prop_poolball_1",
		"prop_poolball_10",
		"prop_poolball_11",
		"prop_poolball_12",
		"prop_poolball_13",
		"prop_poolball_14",
		"prop_poolball_15",
		"prop_poolball_2",
		"prop_poolball_3",
		"prop_poolball_4",
		"prop_poolball_5",
		"prop_poolball_6",
		"prop_poolball_7",
		"prop_poolball_8",
		"prop_poolball_9",
		"prop_poolball_cue",
		"prop_poolskimmer",
		"prop_pooltable_02",
		"prop_pooltable_3b",
		"prop_pool_ball_01",
		"prop_pool_cue",
		"prop_pool_rack_01",
		"prop_pool_rack_02",
		"prop_pool_tri",
		"prop_porn_mag_01",
		"prop_porn_mag_02",
		"prop_porn_mag_03",
		"prop_porn_mag_04",
		"prop_portable_hifi_01",
		"prop_portacabin01",
		"prop_portasteps_01",
		"prop_portasteps_02",
		"prop_postcard_rack",
		"prop_poster_tube_01",
		"prop_poster_tube_02",
		"prop_postit_drive",
		"prop_postit_gun",
		"prop_postit_it",
		"prop_postit_lock",
		"prop_potatodigger",
		"prop_pot_01",
		"prop_pot_02",
		"prop_pot_03",
		"prop_pot_04",
		"prop_pot_05",
		"prop_pot_06",
		"prop_pot_plant_02a",
		"prop_pot_plant_02b",
		"prop_pot_plant_02c",
		"prop_pot_plant_02d",
		"prop_pot_plant_03a",
		"prop_pot_plant_04a",
		"prop_pot_plant_05d_l1",
		"prop_pot_plant_bh1",
		"prop_pot_rack",
		"prop_power_cell",
		"prop_power_cord_01",
		"prop_premier_fence_01",
		"prop_premier_fence_02",
		"prop_printer_01",
		"prop_printer_02",
		"prop_pris_bars_01",
		"prop_pris_bench_01",
		"prop_pris_door_01_l",
		"prop_pris_door_01_r",
		"prop_pris_door_02",
		"prop_pris_door_03",
		"prop_prlg_gravestone_05a_l1",
		"prop_prlg_gravestone_06a",
		"prop_projector_overlay",
		"prop_prologue_phone",
		"prop_prop_tree_01",
		"prop_prop_tree_02",
		"prop_protest_sign_01",
		"prop_protest_table_01",
		"prop_prototype_minibomb",
		"prop_proxy_chateau_table",
		"prop_punch_bag_l",
		"prop_pylon_01",
		"prop_pylon_02",
		"prop_pylon_03",
		"prop_pylon_04",
		"prop_p_jack_03_col",
		"prop_p_spider_01a",
		"prop_p_spider_01c",
		"prop_p_spider_01d",
		"prop_ql_revolving_door",
		"prop_quad_grid_line",
		"prop_radiomast01",
		"prop_radiomast02",
		"prop_rad_waste_barrel_01",
		"prop_ragganeon",
		"prop_rag_01",
		"prop_railsleepers01",
		"prop_railsleepers02",
		"prop_railstack01",
		"prop_railstack02",
		"prop_railstack03",
		"prop_railstack04",
		"prop_railstack05",
		"prop_rail_boxcar",
		"prop_rail_boxcar2",
		"prop_rail_boxcar3",
		"prop_rail_boxcar4",
		"prop_rail_boxcar5",
		"prop_rail_boxcar5_d",
		"prop_rail_buffer_01",
		"prop_rail_buffer_02",
		"prop_rail_controller",
		"prop_rail_crane_01",
		"prop_rail_points01",
		"prop_rail_points02",
		"prop_rail_sigbox01",
		"prop_rail_sigbox02",
		"prop_rail_signals02",
		"prop_rail_tankcar",
		"prop_rail_tankcar2",
		"prop_rail_tankcar3",
		"prop_rail_wellcar",
		"prop_rail_wellcar2",
		"prop_range_target_01",
		"prop_range_target_02",
		"prop_range_target_03",
		"prop_rebar_pile01",
		"prop_recyclebin_02a",
		"prop_recyclebin_02b",
		"prop_recyclebin_02_c",
		"prop_recyclebin_02_d",
		"prop_recyclebin_03_a",
		"prop_recyclebin_04_a",
		"prop_recyclebin_04_b",
		"prop_recyclebin_05_a",
		"prop_ret_door",
		"prop_ret_door_02",
		"prop_ret_door_03",
		"prop_ret_door_04",
		"prop_rf_conc_pillar",
		"prop_riding_crop_01",
		"prop_riot_shield",
		"prop_rio_del_01",
		"prop_roadcone01a",
		"prop_roadcone01b",
		"prop_roadcone01c",
		"prop_roadcone02a",
		"prop_roadcone02b",
		"prop_roadcone02c",
		"prop_roadheader_01",
		"prop_rock_1_a",
		"prop_rock_1_b",
		"prop_rock_1_c",
		"prop_rock_1_d",
		"prop_rock_1_e",
		"prop_rock_1_f",
		"prop_rock_1_g",
		"prop_rock_1_h",
		"prop_rock_1_i",
		"prop_rock_2_a",
		"prop_rock_2_c",
		"prop_rock_2_d",
		"prop_rock_2_f",
		"prop_rock_2_g",
		"prop_rock_3_a",
		"prop_rock_3_b",
		"prop_rock_3_c",
		"prop_rock_3_d",
		"prop_rock_3_e",
		"prop_rock_3_f",
		"prop_rock_3_g",
		"prop_rock_3_h",
		"prop_rock_3_i",
		"prop_rock_3_j",
		"prop_rock_4_c",
		"prop_rock_4_d",
		"prop_rock_chair_01",
		"prop_rolled_sock_01",
		"prop_rolled_sock_02",
		"prop_rolled_yoga_mat",
		"prop_roller_car_01",
		"prop_roller_car_02",
		"prop_ron_door_01",
		"prop_roofpipe_01",
		"prop_roofpipe_02",
		"prop_roofpipe_03",
		"prop_roofpipe_04",
		"prop_roofpipe_05",
		"prop_roofpipe_06",
		"prop_roofvent_011a",
		"prop_roofvent_01a",
		"prop_roofvent_01b",
		"prop_roofvent_02a",
		"prop_roofvent_02b",
		"prop_roofvent_03a",
		"prop_roofvent_04a",
		"prop_roofvent_05a",
		"prop_roofvent_05b",
		"prop_roofvent_07a",
		"prop_roofvent_08a",
		"prop_roofvent_09a",
		"prop_roofvent_10a",
		"prop_roofvent_10b",
		"prop_roofvent_11b",
		"prop_roofvent_11c",
		"prop_roofvent_12a",
		"prop_roofvent_13a",
		"prop_roofvent_15a",
		"prop_roofvent_16a",
		"prop_rope_family_3",
		"prop_rope_hook_01",
		"prop_roundbailer01",
		"prop_roundbailer02",
		"prop_rub_bike_01",
		"prop_rub_bike_02",
		"prop_rub_bike_03",
		"prop_rub_binbag_sd_01",
		"prop_rub_binbag_sd_02",
		"prop_rub_busdoor_01",
		"prop_rub_busdoor_02",
		"prop_rub_buswreck_01",
		"prop_rub_buswreck_03",
		"prop_rub_buswreck_06",
		"prop_rub_cabinet",
		"prop_rub_cabinet01",
		"prop_rub_cabinet02",
		"prop_rub_cabinet03",
		"prop_rub_cage01a",
		"prop_rub_carpart_02",
		"prop_rub_carpart_03",
		"prop_rub_carpart_04",
		"prop_rub_chassis_01",
		"prop_rub_chassis_02",
		"prop_rub_chassis_03",
		"prop_rub_cont_01a",
		"prop_rub_cont_01b",
		"prop_rub_cont_01c",
		"prop_rub_flotsam_01",
		"prop_rub_flotsam_02",
		"prop_rub_flotsam_03",
		"prop_rub_frklft",
		"prop_rub_litter_01",
		"prop_rub_litter_02",
		"prop_rub_litter_03",
		"prop_rub_litter_03b",
		"prop_rub_litter_03c",
		"prop_rub_litter_04",
		"prop_rub_litter_04b",
		"prop_rub_litter_05",
		"prop_rub_litter_06",
		"prop_rub_litter_07",
		"prop_rub_litter_09",
		"prop_rub_litter_8",
		"prop_rub_matress_01",
		"prop_rub_matress_02",
		"prop_rub_matress_03",
		"prop_rub_matress_04",
		"prop_rub_monitor",
		"prop_rub_pile_01",
		"prop_rub_pile_02",
		"prop_rub_planks_01",
		"prop_rub_planks_02",
		"prop_rub_planks_03",
		"prop_rub_planks_04",
		"prop_rub_railwreck_1",
		"prop_rub_railwreck_2",
		"prop_rub_railwreck_3",
		"prop_rub_scrap_02",
		"prop_rub_scrap_03",
		"prop_rub_scrap_04",
		"prop_rub_scrap_05",
		"prop_rub_scrap_06",
		"prop_rub_scrap_07",
		"prop_rub_stool",
		"prop_rub_sunktyre",
		"prop_rub_t34",
		"prop_rub_trainers_01",
		"prop_rub_trolley01a",
		"prop_rub_trolley02a",
		"prop_rub_trolley03a",
		"prop_rub_trukwreck_1",
		"prop_rub_trukwreck_2",
		"prop_rub_tyre_01",
		"prop_rub_tyre_02",
		"prop_rub_tyre_03",
		"prop_rub_tyre_dam1",
		"prop_rub_tyre_dam2",
		"prop_rub_tyre_dam3",
		"prop_rub_washer_01",
		"prop_rub_wheel_01",
		"prop_rub_wheel_02",
		"prop_rub_wreckage_3",
		"prop_rub_wreckage_4",
		"prop_rub_wreckage_5",
		"prop_rub_wreckage_6",
		"prop_rub_wreckage_7",
		"prop_rub_wreckage_8",
		"prop_rub_wreckage_9",
		"prop_rural_windmill_l1",
		"prop_rural_windmill_l2",
		"prop_rus_olive",
		"prop_rus_olive_wint",
		"prop_sacktruck_01",
		"prop_sacktruck_02a",
		"prop_safety_glasses",
		"prop_sam_01",
		"prop_sandwich_01",
		"prop_satdish_2_a",
		"prop_satdish_2_f",
		"prop_satdish_2_g",
		"prop_satdish_3_b",
		"prop_satdish_3_c",
		"prop_satdish_3_d",
		"prop_satdish_l_01",
		"prop_satdish_s_03",
		"prop_satdish_s_05a",
		"prop_satdish_s_05b",
		"prop_sc1_06_gate_l",
		"prop_sc1_06_gate_r",
		"prop_sc1_12_door",
		"prop_sc1_21_g_door_01",
		"prop_scaffold_pole",
		"prop_scafold_01a",
		"prop_scafold_01c",
		"prop_scafold_01f",
		"prop_scafold_02a",
		"prop_scafold_02c",
		"prop_scafold_03a",
		"prop_scafold_03b",
		"prop_scafold_03c",
		"prop_scafold_03f",
		"prop_scafold_04a",
		"prop_scafold_05a",
		"prop_scafold_06a",
		"prop_scafold_06b",
		"prop_scafold_06c",
		"prop_scafold_07a",
		"prop_scafold_08a",
		"prop_scafold_09a",
		"prop_scafold_frame1a",
		"prop_scafold_frame1b",
		"prop_scafold_frame1c",
		"prop_scafold_frame1f",
		"prop_scafold_frame2a",
		"prop_scafold_frame2b",
		"prop_scafold_frame2c",
		"prop_scafold_frame3a",
		"prop_scafold_frame3c",
		"prop_scafold_rail_01",
		"prop_scafold_rail_02",
		"prop_scafold_rail_03",
		"prop_scafold_xbrace",
		"prop_scalpel",
		"prop_scn_police_torch",
		"prop_scourer_01",
		"prop_scrap_2_crate",
		"prop_scrap_win_01",
		"prop_scrim_01",
		"prop_scythemower",
		"prop_section_garage_01",
		"prop_securityvan_lightrig",
		"prop_security_case_01",
		"prop_security_case_02",
		"prop_sec_gate_01b",
		"prop_sec_gate_01c",
		"prop_sec_gate_01d",
		"prop_set_generator_01",
		"prop_sewing_fabric",
		"prop_sewing_machine",
		"prop_sglasses_stand_01",
		"prop_sglasses_stand_02",
		"prop_sglasses_stand_02b",
		"prop_sglasses_stand_03",
		"prop_sglasss_1b_lod",
		"prop_sglasss_1_lod",
		"prop_shamal_crash",
		"prop_shelves_01",
		"prop_shelves_02",
		"prop_shelves_03",
		"prop_shopping_bags01",
		"prop_shopping_bags02",
		"prop_shop_front_door_l",
		"prop_shop_front_door_r",
		"prop_shots_glass_cs",
		"prop_shower_01",
		"prop_shower_rack_01",
		"prop_shower_towel",
		"prop_showroom_door_l",
		"prop_showroom_door_r",
		"prop_showroom_glass_1b",
		"prop_shredder_01",
		"prop_shrub_rake",
		"prop_shuttering01",
		"prop_shuttering02",
		"prop_shuttering03",
		"prop_shuttering04",
		"prop_sh_beer_pissh_01",
		"prop_sh_bong_01",
		"prop_sh_cigar_01",
		"prop_sh_joint_01",
		"prop_sh_mr_rasp_01",
		"prop_sh_shot_glass",
		"prop_sh_tall_glass",
		"prop_sh_tt_fridgedoor",
		"prop_sh_wine_glass",
		"prop_side_lights",
		"prop_side_spreader",
		"prop_sign_airp_01a",
		"prop_sign_airp_02a",
		"prop_sign_airp_02b",
		"prop_sign_big_01",
		"prop_sign_mallet",
		"prop_sign_road_04g_l1",
		"prop_single_grid_line",
		"prop_single_rose",
		"prop_sink_01",
		"prop_sink_02",
		"prop_sink_03",
		"prop_sink_04",
		"prop_sink_05",
		"prop_sink_06",
		"prop_skate_flatramp",
		"prop_skate_funbox",
		"prop_skate_halfpipe",
		"prop_skate_kickers",
		"prop_skate_quartpipe",
		"prop_skate_rail",
		"prop_skate_spiner",
		"prop_skid_chair_01",
		"prop_skid_chair_02",
		"prop_skid_chair_03",
		"prop_skid_sleepbag_1",
		"prop_skid_tent_01",
		"prop_skid_tent_01b",
		"prop_skid_tent_03",
		"prop_skip_01a",
		"prop_skip_02a",
		"prop_skip_03",
		"prop_skip_04",
		"prop_skip_05a",
		"prop_skip_05b",
		"prop_skip_06a",
		"prop_skip_08a",
		"prop_skip_08b",
		"prop_skip_10a",
		"prop_skip_rope_01",
		"prop_skunk_bush_01",
		"prop_skylight_01",
		"prop_skylight_02",
		"prop_skylight_03",
		"prop_skylight_04",
		"prop_skylight_05",
		"prop_skylight_06a",
		"prop_skylight_06b",
		"prop_skylight_06c",
		"prop_sky_cover_01",
		"prop_slacks_01",
		"prop_slacks_02",
		"prop_sluicegate",
		"prop_sluicegatel",
		"prop_sluicegater",
		"prop_slush_dispenser",
		"prop_sm1_11_doorl",
		"prop_sm1_11_doorr",
		"prop_sm1_11_garaged",
		"prop_smg_holster_01",
		"prop_sm_10_mp_door",
		"prop_sm_14_mp_gar",
		"prop_sm_19_clock",
		"prop_sm_27_door",
		"prop_sm_27_gate",
		"prop_sm_27_gate_02",
		"prop_sm_27_gate_03",
		"prop_sm_27_gate_04",
		"prop_sm_locker_door",
		"prop_snow_bailer_01",
		"prop_snow_barrel_pile_03",
		"prop_snow_bench_01",
		"prop_snow_bin_01",
		"prop_snow_bin_02",
		"prop_snow_bush_01_a",
		"prop_snow_bush_02_a",
		"prop_snow_bush_02_b",
		"prop_snow_bush_03",
		"prop_snow_bush_04",
		"prop_snow_bush_04b",
		"prop_snow_cam_03",
		"prop_snow_cam_03a",
		"prop_snow_diggerbkt_01",
		"prop_snow_dumpster_01",
		"prop_snow_elecbox_16",
		"prop_snow_facgate_01",
		"prop_snow_field_01",
		"prop_snow_field_02",
		"prop_snow_field_03",
		"prop_snow_field_04",
		"prop_snow_flower_01",
		"prop_snow_flower_02",
		"prop_snow_fnclink_03crnr2",
		"prop_snow_fnclink_03h",
		"prop_snow_fnclink_03i",
		"prop_snow_fncwood_14a",
		"prop_snow_fncwood_14b",
		"prop_snow_fncwood_14c",
		"prop_snow_fncwood_14d",
		"prop_snow_fncwood_14e",
		"prop_snow_fnc_01",
		"prop_snow_gate_farm_03",
		"prop_snow_grain_01",
		"prop_snow_grass_01",
		"prop_snow_light_01",
		"prop_snow_oldlight_01b",
		"prop_snow_rail_signals02",
		"prop_snow_rub_trukwreck_2",
		"prop_snow_side_spreader_01",
		"prop_snow_streetlight01",
		"prop_snow_streetlight_01_frag_",
		"prop_snow_sub_frame_01a",
		"prop_snow_sub_frame_04b",
		"prop_snow_telegraph_01a",
		"prop_snow_telegraph_02a",
		"prop_snow_telegraph_03",
		"prop_snow_traffic_rail_1a",
		"prop_snow_traffic_rail_1b",
		"prop_snow_trailer01",
		"prop_snow_tree_03_e",
		"prop_snow_tree_03_h",
		"prop_snow_tree_03_i",
		"prop_snow_tree_04_d",
		"prop_snow_tree_04_f",
		"prop_snow_truktrailer_01a",
		"prop_snow_tyre_01",
		"prop_snow_t_ml_01",
		"prop_snow_t_ml_02",
		"prop_snow_t_ml_03",
		"prop_snow_wall_light_15a",
		"prop_snow_watertower01",
		"prop_snow_watertower01_l2",
		"prop_snow_watertower03",
		"prop_snow_woodpile_04a",
		"prop_soap_disp_01",
		"prop_soap_disp_02",
		"prop_solarpanel_01",
		"prop_solarpanel_02",
		"prop_solarpanel_03",
		"prop_sol_chair",
		"prop_space_pistol",
		"prop_space_rifle",
		"prop_speaker_01",
		"prop_speaker_02",
		"prop_speaker_03",
		"prop_speaker_05",
		"prop_speaker_06",
		"prop_speaker_07",
		"prop_speaker_08",
		"prop_speedball_01",
		"prop_sponge_01",
		"prop_sports_clock_01",
		"prop_spot_01",
		"prop_spot_clamp",
		"prop_spot_clamp_02",
		"prop_sprayer",
		"prop_spraygun_01",
		"prop_spray_backpack_01",
		"prop_spray_jackframe",
		"prop_spray_jackleg",
		"prop_sprink_crop_01",
		"prop_sprink_golf_01",
		"prop_sprink_park_01",
		"prop_spycam",
		"prop_squeegee",
		"prop_ss1_05_mp_door",
		"prop_ss1_08_mp_door_l",
		"prop_ss1_08_mp_door_r",
		"prop_ss1_10_door_l",
		"prop_ss1_10_door_r",
		"prop_ss1_14_garage_door",
		"prop_ss1_mpint_door_l",
		"prop_ss1_mpint_door_r",
		"prop_ss1_mpint_garage",
		"prop_ss1_mpint_garage_cl",
		"prop_stag_do_rope",
		"prop_start_finish_line_01",
		"prop_start_grid_01",
		"prop_staticmixer_01",
		"prop_stat_pack_01",
		"prop_steam_basket_01",
		"prop_steam_basket_02",
		"prop_steps_big_01",
		"prop_stickbfly",
		"prop_stickhbird",
		"prop_still",
		"prop_stockade_wheel",
		"prop_stockade_wheel_flat",
		"prop_stool_01",
		"prop_storagetank_01",
		"prop_storagetank_02",
		"prop_storagetank_03",
		"prop_storagetank_03a",
		"prop_storagetank_03b",
		"prop_storagetank_04",
		"prop_storagetank_05",
		"prop_storagetank_06",
		"prop_storagetank_07a",
		"prop_stripmenu",
		"prop_strip_door_01",
		"prop_strip_pole_01",
		"prop_studio_light_02",
		"prop_studio_light_03",
		"prop_sub_chunk_01",
		"prop_sub_cover_01",
		"prop_sub_crane_hook",
		"prop_sub_frame_01a",
		"prop_sub_frame_01b",
		"prop_sub_frame_01c",
		"prop_sub_frame_02a",
		"prop_sub_frame_03a",
		"prop_sub_frame_04a",
		"prop_sub_frame_04b",
		"prop_sub_gantry",
		"prop_sub_release",
		"prop_sub_trans_01a",
		"prop_sub_trans_02a",
		"prop_sub_trans_03a",
		"prop_sub_trans_04a",
		"prop_sub_trans_05b",
		"prop_sub_trans_06b",
		"prop_suitcase_01",
		"prop_suitcase_01b",
		"prop_suitcase_01c",
		"prop_suitcase_01d",
		"prop_suitcase_02",
		"prop_suitcase_03",
		"prop_suitcase_03b",
		"prop_surf_board_ldn_01",
		"prop_surf_board_ldn_02",
		"prop_surf_board_ldn_03",
		"prop_surf_board_ldn_04",
		"prop_syringe_01",
		"prop_s_pine_dead_01",
		"prop_tablesaw_01",
		"prop_tablesmall_01",
		"prop_table_02",
		"prop_table_03b_cs",
		"prop_table_04",
		"prop_table_04_chr",
		"prop_table_05",
		"prop_table_05_chr",
		"prop_table_06",
		"prop_table_06_chr",
		"prop_table_07",
		"prop_table_07_l1",
		"prop_table_08",
		"prop_table_08_chr",
		"prop_table_08_side",
		"prop_table_mic_01",
		"prop_table_para_comb_04",
		"prop_table_tennis",
		"prop_table_ten_bat",
		"prop_taco_01",
		"prop_taco_02",
		"prop_tail_gate_col",
		"prop_tapeplayer_01",
		"prop_target_arm",
		"prop_target_arm_b",
		"prop_target_arm_long",
		"prop_target_arm_sm",
		"prop_target_backboard",
		"prop_target_backboard_b",
		"prop_target_blue",
		"prop_target_blue_arrow",
		"prop_target_bull",
		"prop_target_bull_b",
		"prop_target_comp_metal",
		"prop_target_comp_wood",
		"prop_target_frame_01",
		"prop_target_inner1",
		"prop_target_inner2",
		"prop_target_inner2_b",
		"prop_target_inner3",
		"prop_target_inner3_b",
		"prop_target_inner_b",
		"prop_target_orange_arrow",
		"prop_target_oran_cross",
		"prop_target_ora_purp_01",
		"prop_target_purp_arrow",
		"prop_target_purp_cross",
		"prop_target_red",
		"prop_target_red_arrow",
		"prop_target_red_blue_01",
		"prop_target_red_cross",
		"prop_tarp_strap",
		"prop_taxi_meter_1",
		"prop_taxi_meter_2",
		"prop_tea_trolly",
		"prop_tea_urn",
		"prop_telegraph_01a",
		"prop_telegraph_01b",
		"prop_telegraph_01c",
		"prop_telegraph_01d",
		"prop_telegraph_01e",
		"prop_telegraph_01f",
		"prop_telegraph_01g",
		"prop_telegraph_02a",
		"prop_telegraph_02b",
		"prop_telegraph_03",
		"prop_telegraph_04a",
		"prop_telegraph_04b",
		"prop_telegraph_05a",
		"prop_telegraph_05b",
		"prop_telegraph_05c",
		"prop_telegraph_06a",
		"prop_telegraph_06b",
		"prop_telegraph_06c",
		"prop_telegwall_01a",
		"prop_telegwall_01b",
		"prop_telegwall_02a",
		"prop_telegwall_03a",
		"prop_telegwall_03b",
		"prop_telegwall_04a",
		"prop_telescope",
		"prop_telescope_01",
		"prop_temp_block_blocker",
		"prop_tennis_bag_01",
		"prop_tennis_ball",
		"prop_tennis_ball_lobber",
		"prop_tennis_rack_01",
		"prop_tennis_rack_01b",
		"prop_test_boulder_01",
		"prop_test_boulder_02",
		"prop_test_boulder_03",
		"prop_test_boulder_04",
		"prop_test_elevator",
		"prop_test_elevator_dl",
		"prop_test_elevator_dr",
		"prop_tick",
		"prop_tick_02",
		"prop_till_01_dam",
		"prop_till_02",
		"prop_till_03",
		"prop_time_capsule_01",
		"prop_tint_towel",
		"prop_tint_towels_01",
		"prop_tint_towels_01b",
		"prop_toaster_01",
		"prop_toaster_02",
		"prop_toiletfoot_static",
		"prop_toilet_01",
		"prop_toilet_02",
		"prop_toilet_03",
		"prop_toilet_brush_01",
		"prop_toilet_cube_01",
		"prop_toilet_cube_02",
		"prop_toilet_roll_01",
		"prop_toilet_roll_02",
		"prop_toilet_roll_03",
		"prop_toilet_roll_04",
		"prop_toilet_roll_05",
		"prop_toilet_shamp_01",
		"prop_toilet_shamp_02",
		"prop_toilet_soap_01",
		"prop_toilet_soap_02",
		"prop_toilet_soap_03",
		"prop_toilet_soap_04",
		"prop_toolchest_01",
		"prop_toolchest_02",
		"prop_toolchest_03",
		"prop_toolchest_04",
		"prop_toolchest_05",
		"prop_tool_adjspanner",
		"prop_tool_bench01",
		"prop_tool_bluepnt",
		"prop_tool_box_01",
		"prop_tool_box_02",
		"prop_tool_box_03",
		"prop_tool_box_04",
		"prop_tool_box_05",
		"prop_tool_box_06",
		"prop_tool_box_07",
		"prop_tool_broom",
		"prop_tool_broom2",
		"prop_tool_broom2_l1",
		"prop_tool_cable01",
		"prop_tool_cable02",
		"prop_tool_consaw",
		"prop_tool_drill",
		"prop_tool_fireaxe",
		"prop_tool_hammer",
		"prop_tool_hardhat",
		"prop_tool_jackham",
		"prop_tool_mallet",
		"prop_tool_mopbucket",
		"prop_tool_nailgun",
		"prop_tool_pickaxe",
		"prop_tool_pliers",
		"prop_tool_rake",
		"prop_tool_rake_l1",
		"prop_tool_sawhorse",
		"prop_tool_screwdvr01",
		"prop_tool_screwdvr02",
		"prop_tool_screwdvr03",
		"prop_tool_shovel",
		"prop_tool_shovel006",
		"prop_tool_shovel2",
		"prop_tool_shovel3",
		"prop_tool_shovel4",
		"prop_tool_shovel5",
		"prop_tool_sledgeham",
		"prop_tool_spanner01",
		"prop_tool_spanner02",
		"prop_tool_spanner03",
		"prop_tool_torch",
		"prop_tool_wrench",
		"prop_toothbrush_01",
		"prop_toothb_cup_01",
		"prop_toothpaste_01",
		"prop_tornado_wheel",
		"prop_torture_01",
		"prop_torture_ch_01",
		"prop_tourist_map_01",
		"prop_towel2_01",
		"prop_towel2_02",
		"prop_towel_01",
		"prop_towel_rail_01",
		"prop_towel_rail_02",
		"prop_towel_shelf_01",
		"prop_towel_small_01",
		"prop_towercrane_01a",
		"prop_towercrane_02a",
		"prop_towercrane_02b",
		"prop_towercrane_02c",
		"prop_towercrane_02d",
		"prop_towercrane_02e",
		"prop_towercrane_02el",
		"prop_towercrane_02el2",
		"prop_traffic_rail_1c",
		"prop_traffic_rail_2",
		"prop_trailer01",
		"prop_trailer01_up",
		"prop_trailer_01_new",
		"prop_trailer_door_closed",
		"prop_trailer_door_open",
		"prop_trailer_monitor_01",
		"prop_trailr_base",
		"prop_trailr_base_static",
		"prop_train_ticket_02",
		"prop_tram_pole_double01",
		"prop_tram_pole_double02",
		"prop_tram_pole_double03",
		"prop_tram_pole_roadside",
		"prop_tram_pole_single01",
		"prop_tram_pole_single02",
		"prop_tram_pole_wide01",
		"prop_tree_birch_01",
		"prop_tree_birch_02",
		"prop_tree_birch_03",
		"prop_tree_birch_03b",
		"prop_tree_birch_04",
		"prop_tree_birch_05",
		"prop_tree_cedar_02",
		"prop_tree_cedar_03",
		"prop_tree_cedar_04",
		"prop_tree_cedar_s_01",
		"prop_tree_cedar_s_02",
		"prop_tree_cedar_s_04",
		"prop_tree_cedar_s_05",
		"prop_tree_cedar_s_06",
		"prop_tree_cypress_01",
		"prop_tree_eng_oak_01",
		"prop_tree_eucalip_01",
		"prop_tree_fallen_01",
		"prop_tree_fallen_02",
		"prop_tree_fallen_pine_01",
		"prop_tree_jacada_01",
		"prop_tree_jacada_02",
		"prop_tree_lficus_02",
		"prop_tree_lficus_03",
		"prop_tree_lficus_05",
		"prop_tree_lficus_06",
		"prop_tree_log_01",
		"prop_tree_log_02",
		"prop_tree_maple_02",
		"prop_tree_maple_03",
		"prop_tree_mquite_01",
		"prop_tree_oak_01",
		"prop_tree_olive_01",
		"prop_tree_pine_01",
		"prop_tree_pine_02",
		"prop_tree_stump_01",
		"prop_trevor_rope_01",
		"prop_trev_sec_id",
		"prop_trev_tv_01",
		"prop_triple_grid_line",
		"prop_tri_finish_banner",
		"prop_tri_pod",
		"prop_tri_pod_lod",
		"prop_tri_start_banner",
		"prop_tri_table_01",
		"prop_trough1",
		"prop_truktrailer_01a",
		"prop_tshirt_box_02",
		"prop_tshirt_shelf_1",
		"prop_tshirt_shelf_2",
		"prop_tshirt_shelf_2a",
		"prop_tshirt_shelf_2b",
		"prop_tshirt_shelf_2c",
		"prop_tshirt_stand_01",
		"prop_tshirt_stand_01b",
		"prop_tshirt_stand_02",
		"prop_tshirt_stand_04",
		"prop_tt_screenstatic",
		"prop_tumbler_01",
		"prop_tumbler_01b",
		"prop_tumbler_01_empty",
		"prop_tunnel_liner01",
		"prop_tunnel_liner02",
		"prop_tunnel_liner03",
		"prop_turkey_leg_01",
		"prop_turnstyle_01",
		"prop_tv_02",
		"prop_tv_03_overlay",
		"prop_tv_04",
		"prop_tv_05",
		"prop_tv_06",
		"prop_tv_07",
		"prop_tv_cabinet_03",
		"prop_tv_cabinet_04",
		"prop_tv_cabinet_05",
		"prop_tv_cam_02",
		"prop_tv_flat_01",
		"prop_tv_flat_01_screen",
		"prop_tv_flat_02b",
		"prop_tv_flat_03",
		"prop_tv_flat_03b",
		"prop_tv_flat_michael",
		"prop_tv_test",
		"prop_tyre_rack_01",
		"prop_tyre_spike_01",
		"prop_t_coffe_table",
		"prop_t_shirt_ironing",
		"prop_t_shirt_row_01",
		"prop_t_shirt_row_02",
		"prop_t_shirt_row_02b",
		"prop_t_shirt_row_03",
		"prop_t_shirt_row_04",
		"prop_t_shirt_row_05l",
		"prop_t_shirt_row_05r",
		"prop_t_sofa",
		"prop_t_sofa_02",
		"prop_t_telescope_01b",
		"prop_umpire_01",
		"prop_utensil",
		"prop_valet_03",
		"prop_vault_shutter",
		"prop_vb_34_tencrt_lighting",
		"prop_vcr_01",
		"prop_veg_corn_01",
		"prop_veg_crop_01",
		"prop_veg_crop_02",
		"prop_veg_crop_04",
		"prop_veg_crop_04_leaf",
		"prop_veg_crop_05",
		"prop_veg_crop_06",
		"prop_veg_crop_orange",
		"prop_veg_crop_tr_01",
		"prop_veg_crop_tr_02",
		"prop_veg_grass_01_a",
		"prop_veg_grass_01_b",
		"prop_veg_grass_01_c",
		"prop_veg_grass_01_d",
		"prop_veg_grass_02_a",
		"prop_vehicle_hook",
		"prop_vend_coffe_01",
		"prop_vend_condom_01",
		"prop_vend_fags_01",
		"prop_vend_fridge01",
		"prop_vend_snak_01",
		"prop_venice_board_01",
		"prop_venice_board_02",
		"prop_venice_board_03",
		"prop_venice_counter_01",
		"prop_venice_counter_02",
		"prop_venice_counter_03",
		"prop_venice_counter_04",
		"prop_venice_shop_front_01",
		"prop_venice_sign_09",
		"prop_venice_sign_10",
		"prop_venice_sign_11",
		"prop_venice_sign_12",
		"prop_venice_sign_14",
		"prop_venice_sign_15",
		"prop_venice_sign_16",
		"prop_venice_sign_17",
		"prop_venice_sign_18",
		"prop_ventsystem_01",
		"prop_ventsystem_02",
		"prop_ventsystem_03",
		"prop_ventsystem_04",
		"prop_ven_market_stool",
		"prop_ven_market_table1",
		"prop_ven_shop_1_counter",
		"prop_vertdrill_01",
		"prop_voltmeter_01",
		"prop_v_15_cars_clock",
		"prop_v_5_bclock",
		"prop_v_bmike_01",
		"prop_v_cam_01",
		"prop_v_door_44",
		"prop_v_hook_s",
		"prop_v_m_phone_01",
		"prop_v_m_phone_o1s",
		"prop_v_parachute",
		"prop_waiting_seat_01",
		"prop_wait_bench_01",
		"prop_walllight_ld_01b",
		"prop_wall_light_08a",
		"prop_wall_light_10a",
		"prop_wall_light_10b",
		"prop_wall_light_10c",
		"prop_wall_light_11",
		"prop_wall_light_12",
		"prop_wall_light_17b",
		"prop_wall_light_18a",
		"prop_wall_vent_01",
		"prop_wall_vent_02",
		"prop_wall_vent_03",
		"prop_wall_vent_04",
		"prop_wall_vent_05",
		"prop_wall_vent_06",
		"prop_wardrobe_door_01",
		"prop_warehseshelf01",
		"prop_warehseshelf02",
		"prop_warehseshelf03",
		"prop_warninglight_01",
		"prop_washer_01",
		"prop_washer_02",
		"prop_washer_03",
		"prop_washing_basket_01",
		"prop_watercrate_01",
		"prop_wateringcan",
		"prop_watertower01",
		"prop_watertower02",
		"prop_watertower03",
		"prop_watertower04",
		"prop_waterwheela",
		"prop_waterwheelb",
		"prop_water_bottle",
		"prop_water_bottle_dark",
		"prop_water_corpse_01",
		"prop_water_corpse_02",
		"prop_water_ramp_01",
		"prop_water_ramp_02",
		"prop_water_ramp_03",
		"prop_weed_01",
		"prop_weed_02",
		"prop_weed_block_01",
		"prop_weed_bottle",
		"prop_weed_pallet",
		"prop_weed_tub_01",
		"prop_weed_tub_01b",
		"prop_weight_10k",
		"prop_weight_15k",
		"prop_weight_1_5k",
		"prop_weight_20k",
		"prop_weight_2_5k",
		"prop_weight_5k",
		"prop_weight_rack_01",
		"prop_weight_rack_02",
		"prop_welding_mask_01",
		"prop_weld_torch",
		"prop_wheat_grass_empty",
		"prop_wheat_grass_glass",
		"prop_wheelbarrow01a",
		"prop_wheelbarrow02a",
		"prop_wheelchair_01",
		"prop_wheel_01",
		"prop_wheel_02",
		"prop_wheel_03",
		"prop_wheel_04",
		"prop_wheel_05",
		"prop_wheel_06",
		"prop_wheel_hub_01",
		"prop_wheel_hub_02_lod_02",
		"prop_wheel_rim_01",
		"prop_wheel_rim_02",
		"prop_wheel_rim_03",
		"prop_wheel_rim_04",
		"prop_wheel_rim_05",
		"prop_wheel_tyre",
		"prop_whisk",
		"prop_white_keyboard",
		"prop_winch_hook_long",
		"prop_winch_hook_short",
		"prop_windmill2",
		"prop_windmill_01_l1",
		"prop_windmill_01_slod",
		"prop_windmill_01_slod2",
		"prop_windowbox_a",
		"prop_windowbox_b",
		"prop_windowbox_broken",
		"prop_windowbox_small",
		"prop_win_plug_01",
		"prop_win_plug_01_dam",
		"prop_win_trailer_ld",
		"prop_wok",
		"prop_woodpile_02a",
		"prop_worklight_01a_l1",
		"prop_worklight_03a_l1",
		"prop_worklight_03b_l1",
		"prop_worklight_04a",
		"prop_worklight_04b_l1",
		"prop_worklight_04c_l1",
		"prop_worklight_04d_l1",
		"prop_workwall_01",
		"prop_workwall_02",
		"prop_wreckedcart",
		"prop_wrecked_buzzard",
		"prop_w_board_blank",
		"prop_w_board_blank_2",
		"prop_w_fountain_01",
		"prop_w_r_cedar_01",
		"prop_w_r_cedar_dead",
		"prop_xmas_tree_int",
		"prop_xmas_ext",
		"prop_yacht_lounger",
		"prop_yacht_seat_01",
		"prop_yacht_seat_02",
		"prop_yacht_seat_03",
		"prop_yacht_table_01",
		"prop_yacht_table_02",
		"prop_yacht_table_03",
		"prop_yaught_chair_01",
		"prop_yaught_sofa_01",
		"prop_yell_plastic_target",
		"prop_yoga_mat_01",
		"prop_yoga_mat_02",
		"prop_yoga_mat_03",
		"prop_ztype_covered",
		"p_ing_skiprope_01",
		"p_ing_skiprope_01_s",
		"p_skiprope_r_s",
		"test_prop_gravestones_04a",
		"test_prop_gravestones_05a",
		"test_prop_gravestones_07a",
		"test_prop_gravestones_08a",
		"test_prop_gravestones_09a",
		"test_prop_gravetomb_01a",
		"test_prop_gravetomb_02a",
		"prop_cs_dog_lead_a_s",
		"prop_cs_dog_lead_b_s",
		"prop_welding_mask_01_s",
		"prop_wheelchair_01_s",
		"p_a4_sheets_s",
		"p_amanda_note_01_s",
		"p_armchair_01_s",
		"p_arm_bind_cut_s",
		"p_ashley_neck_01_s",
		"p_banknote_onedollar_s",
		"p_banknote_s",
		"p_binbag_01_s",
		"p_bison_winch_s",
		"p_bloodsplat_s",
		"p_blueprints_01_s",
		"p_brain_chunk_s",
		"p_bs_map_door_01_s",
		"p_cablecar_s",
		"p_cablecar_s_door_l",
		"p_cablecar_s_door_r",
		"p_cash_envelope_01_s",
		"p_cctv_s",
		"p_chem_vial_02b_s",
		"p_clb_officechair_s",
		"p_cletus_necklace_s",
		"p_clothtarp_down_s",
		"p_clothtarp_s",
		"p_clothtarp_up_s",
		"p_controller_01_s",
		"p_crahsed_heli_s",
		"p_cs1_14b_train_s",
		"p_cs1_14b_train_s_col",
		"p_cs1_14b_train_s_colopen",
		"p_csbporndudes_necklace_s",
		"p_csh_strap_01_pro_s",
		"p_csh_strap_01_s",
		"p_csh_strap_03_s",
		"p_cs_15m_rope_s",
		"p_cs_bandana_s",
		"p_cs_beachtowel_01_s",
		"p_cs_beverly_lanyard_s",
		"p_cs_bowl_01b_s",
		"p_cs_ciggy_01b_s",
		"p_cs_clothes_box_s",
		"p_cs_coke_line_s",
		"p_cs_cuffs_02_s",
		"p_cs_duffel_01_s",
		"p_cs_laz_ptail_s",
		"p_cs_leaf_s",
		"p_cs_mp_jet_01_s",
		"p_cs_newspaper_s",
		"p_cs_pamphlet_01_s",
		"p_cs_panties_03_s",
		"p_cs_para_ropebit_s",
		"p_cs_para_ropes_s",
		"p_cs_polaroid_s",
		"p_cs_police_torch_s",
		"p_cs_pour_tube_s",
		"p_cs_power_cord_s",
		"p_cs_rope_tie_01_s",
		"p_cs_sack_01_s",
		"p_cs_saucer_01_s",
		"p_cs_scissors_s",
		"p_cs_script_s",
		"p_cs_shirt_01_s",
		"p_cs_shot_glass_2_s",
		"p_cs_shot_glass_s",
		"p_cs_sub_hook_01_s",
		"p_cs_toaster_s",
		"p_cs_tracy_neck2_s",
		"p_cs_trolley_01_s",
		"p_defilied_ragdoll_01_s",
		"p_devin_box_01_s",
		"p_dinechair_01_s",
		"p_d_scuba_mask_s",
		"p_d_scuba_tank_s",
		"p_ecg_01_cable_01_s",
		"p_fib_rubble_s",
		"p_finale_bld_ground_s",
		"p_finale_bld_pool_s",
		"p_fin_vaultdoor_s",
		"p_flatbed_strap_s",
		"p_folding_chair_01_s",
		"p_gaffer_tape_s",
		"p_gaffer_tape_strip_s",
		"p_gasmask_s",
		"p_gcase_s",
		"p_hand_toilet_s",
		"p_hw1_22_doors_s",
		"p_hw1_22_table_s",
		"p_ice_box_01_s",
		"p_ice_box_proxy_col",
		"p_idol_case_s",
		"p_ilev_p_easychair_s",
		"p_inhaler_01_s",
		"p_jimmyneck_03_s",
		"p_jimmy_necklace_s",
		"p_kitch_juicer_s",
		"p_lamarneck_01_s",
		"p_laptop_02_s",
		"p_large_gold_s",
		"p_lazlow_shirt_s",
		"p_laz_j01_s",
		"p_laz_j02_s",
		"p_ld_cable_tie_01_s",
		"p_ld_crocclips01_s",
		"p_ld_crocclips02_s",
		"p_ld_heist_bag_s_1",
		"p_ld_heist_bag_s_2",
		"p_ld_heist_bag_s_pro",
		"p_ld_heist_bag_s_pro2_s",
		"p_ld_heist_bag_s_pro_o",
		"p_leg_bind_cut_s",
		"p_lestersbed_s",
		"p_lev_sofa_s",
		"p_lifeinv_neck_01_s",
		"p_loose_rag_01_s",
		"p_mbbed_s",
		"p_medal_01_s",
		"p_med_jet_01_s",
		"p_meth_bag_01_s",
		"p_michael_backpack_s",
		"p_michael_scuba_mask_s",
		"p_michael_scuba_tank_s",
		"p_mp_showerdoor_s",
		"p_mrk_harness_s",
		"p_mr_raspberry_01_s",
		"p_novel_01_s",
		"p_b1rd_neck_01_s",
		"p_b1rd_neck_02_s",
		"p_orleans_mask_s",
		"p_ortega_necklace_s",
		"p_oscar_necklace_s",
		"p_overalls_02_s",
		"p_pistol_holster_s",
		"p_po1_01_doorm_s",
		"p_police_radio_hset_s",
		"p_poly_bag_01_s",
		"p_pour_wine_s",
		"p_rail_controller_s",
		"p_res_sofa_l_s",
		"p_rpulley_s",
		"p_sec_case_02_s",
		"p_shower_towel_s",
		"p_single_rose_s",
		"p_smg_holster_01_s",
		"p_soloffchair_s",
		"p_spinning_anus_s",
		"p_steve_scuba_hood_s",
		"p_stretch_necklace_s",
		"p_syringe_01_s",
		"p_s_scuba_mask_s",
		"p_s_scuba_tank_s",
		"p_till_01_s",
		"p_tmom_earrings_s",
		"p_tourist_map_01_s",
		"p_trevor_prologe_bally_s",
		"p_trev_rope_01_s",
		"p_trev_ski_mask_s",
		"p_tumbler_01_s",
		"p_tumbler_02_s1",
		"p_tumbler_cs2_s",
		"p_tv_cam_02_s",
		"p_t_shirt_pile_s",
		"p_v_43_safe_s",
		"p_v_ilev_chopshopswitch_s",
		"p_v_med_p_sofa_s",
		"p_v_res_tt_bed_s",
		"p_wade_necklace_s",
		"p_wboard_clth_s",
		"p_weed_bottle_s",
		"p_whiskey_bottle_s",
		"p_winch_long_s",
		"s_prop_hdphones",
		"s_prop_hdphones_1",
		"v_ilev_fib_door1_s",
		"v_res_msonbed_s",
		"v_res_tre_sofa_s",
		"v_tre_sofa_mess_a_s",
		"v_tre_sofa_mess_b_s",
		"v_tre_sofa_mess_c_s",
		"prop_ar_arrow_1",
		"prop_ar_arrow_2",
		"prop_ar_arrow_3",
		"prop_ar_ring_01",
		"prop_mk_arrow_3d",
		"prop_mk_arrow_flat",
		"prop_mk_bike_logo_1",
		"prop_mk_bike_logo_2",
		"prop_mk_boost",
		"prop_mk_cone",
		"prop_mk_cylinder",
		"prop_mk_flag",
		"prop_mk_flag_2",
		"prop_mk_heli",
		"prop_mk_lap",
		"prop_mk_mp_ring_01",
		"prop_mk_mp_ring_01b",
		"prop_mk_num_0",
		"prop_mk_num_1",
		"prop_mk_num_2",
		"prop_mk_num_3",
		"prop_mk_num_4",
		"prop_mk_num_5",
		"prop_mk_num_6",
		"prop_mk_num_7",
		"prop_mk_num_8",
		"prop_mk_num_9",
		"prop_mk_plane",
		"prop_mk_race_chevron_01",
		"prop_mk_race_chevron_02",
		"prop_mk_race_chevron_03",
		"prop_mk_repair",
		"prop_mk_ring",
		"prop_mk_ring_flat",
		"prop_mk_sphere",
		"prop_mk_tri_cycle",
		"prop_mk_tri_run",
		"prop_mk_tri_swim",
		"prop_mp_arrow_ring",
		"prop_mp_halo",
		"prop_mp_halo_lrg",
		"prop_mp_halo_med",
		"prop_mp_halo_point",
		"prop_mp_halo_point_lrg",
		"prop_mp_halo_point_med",
		"prop_mp_halo_point_sm",
		"prop_mp_halo_rotate",
		"prop_mp_halo_rotate_lrg",
		"prop_mp_halo_rotate_med",
		"prop_mp_halo_rotate_sm",
		"prop_mp_halo_sm",
		"prop_mp_pointer_ring",
		"prop_mp_solid_ring",
		"cj_parachute",
		"gb_cap_use",
		"gb_specs_use",
		"cj_proc_tin2",
		"proc_coral_01",
		"proc_fern_02",
		"proc_litter_01",
		"proc_litter_02",
		"proc_mntn_stone01",
		"proc_mntn_stone02",
		"proc_mntn_stone03",
		"proc_searock_01",
		"proc_searock_02",
		"proc_searock_03",
		"proc_sml_stones01",
		"proc_sml_stones02",
		"proc_sml_stones03",
		"proc_trolley_lakebed",
		"prop_bush_gorse_dry",
		"prop_bush_gorse_lush",
		"prop_coral_01",
		"prop_coral_02",
		"prop_coral_03",
		"prop_sapling_01",
		"prop_seabrain_01",
		"prop_seagroup_02",
		"prop_sealife_01",
		"prop_sealife_02",
		"prop_sealife_03",
		"prop_sealife_04",
		"prop_sealife_05",
		"prop_seaweed_01",
		"prop_seaweed_02",
		"prop_starfish_01",
		"prop_starfish_02",
		"prop_starfish_03",
		"p_dock_rtg_ld_cab",
		"p_dock_rtg_ld_spdr",
		"p_dock_rtg_ld_wheel",
		"p_amb_bag_bottle_01",
		"p_amb_brolly_01",
		"p_amb_brolly_01_s",
		"p_amb_clipboard_01",
		"p_amb_coffeecup_01",
		"p_amb_joint_01",
		"p_amb_lap_top_01",
		"p_amb_lap_top_02",
		"p_amb_phone_01",
		"p_car_keys_01",
		"p_counter_01_glass",
		"p_counter_01_glass_plug",
		"p_counter_02_glass",
		"p_counter_03_glass",
		"p_counter_04_glass",
		"p_cs_cam_phone",
		"p_cs_comb_01",
		"p_cs_laptop_02",
		"p_cs_laptop_02_w",
		"p_cs_locker_01",
		"p_cs_locker_02",
		"p_cs_locker_door_01",
		"p_cs_locker_door_01b",
		"p_cs_locker_door_02",
		"p_cs_paper_disp_02",
		"p_cs_paper_disp_1",
		"p_disp_02_door_01",
		"p_ferris_car_01",
		"p_f_duster_handle_01",
		"p_f_duster_head_01",
		"p_int_jewel_mirror",
		"p_int_jewel_plant_01",
		"p_int_jewel_plant_02",
		"p_jewel_necklace_02",
		"p_ld_am_ball_01",
		"p_ld_coffee_vend_01",
		"p_ld_conc_cyl_01",
		"p_ld_frisbee_01",
		"p_ld_heist_bag_01",
		"p_ld_sax",
		"p_ld_soc_ball_01",
		"p_new_j_counter_01",
		"p_new_j_counter_02",
		"p_new_j_counter_03",
		"p_num_plate_01",
		"p_num_plate_02",
		"p_num_plate_03",
		"p_num_plate_04",
		"p_oil_slick_01",
		"p_pharm_unit_01",
		"p_pharm_unit_02",
		"p_planning_board_01",
		"p_planning_board_02",
		"p_planning_board_03",
		"p_planning_board_04",
		"p_secret_weapon_02",
		"p_stinger_02",
		"p_stinger_03",
		"p_stinger_04",
		"p_stinger_piece_01",
		"p_stinger_piece_02",
		"p_watch_01",
		"p_watch_02",
		"p_watch_03",
		"p_watch_04",
		"p_watch_05",
		"p_watch_06",
		"p_abat_roller_1",
		"p_abat_roller_1_col",
		"p_amb_drain_water_double",
		"p_amb_drain_water_longstrip",
		"p_amb_drain_water_single",
		"p_attache_case_01_s",
		"p_balaclavamichael_s",
		"p_barierbase_test_s",
		"p_barier_test_s",
		"p_beefsplitter_s",
		"p_cargo_chute_s",
		"p_cigar_pack_02_s",
		"p_cs_locker_01_s",
		"p_cs_script_bottle_s",
		"p_dock_crane_cable_s",
		"p_dock_crane_cabl_s",
		"p_dock_crane_sld_s",
		"p_dumpster_t",
		"p_fag_packet_01_s",
		"p_ferris_wheel_amo_l",
		"p_ferris_wheel_amo_l2",
		"p_ferris_wheel_amo_p",
		"p_gar_door_01_s",
		"p_gar_door_02_s",
		"p_gar_door_03_s",
		"p_gdoor1colobject_s",
		"p_gdoor1_s",
		"p_jewel_necklace01_s",
		"p_jewel_necklace02_s",
		"p_jewel_pickup33_s",
		"p_ld_coffee_vend_s",
		"p_ld_heist_bag_s",
		"p_ld_stinger_s",
		"p_litter_picker_s",
		"p_mast_01_s",
		"p_notepad_01_s",
		"p_oil_pjack_01_amo",
		"p_oil_pjack_01_frg_s",
		"p_oil_pjack_02_amo",
		"p_oil_pjack_02_frg_s",
		"p_oil_pjack_03_amo",
		"p_oil_pjack_03_frg_s",
		"p_pallet_02a_s",
		"p_panties_s",
		"p_parachute1_mp_s",
		"p_parachute1_s",
		"p_parachute1_sp_s",
		"p_parachute_fallen_s",
		"p_parachute_s",
		"p_parachute_s_shop",
		"p_para_broken1_s",
		"p_patio_lounger1_s",
		"p_phonebox_02_s",
		"p_pliers_01_s",
		"p_rcss_folded",
		"p_rcss_s",
		"p_ringbinder_01_s",
		"p_sec_gate_01_s",
		"p_sec_gate_01_s_col",
		"p_shoalfish_s",
		"p_sofa_s",
		"p_sub_crane_s",
		"p_sunglass_m_s",
		"p_tennis_bag_01_s",
		"p_tram_crash_s",
		"p_watch_01_s",
		"p_watch_02_s",
		"p_watch_03_s",
		"p_waterboardc_s",
		"p_yacht_chair_01_s",
		"p_yacht_sofa_01_s",
		"p_yoga_mat_01_s",
		"p_yoga_mat_02_s",
		"p_yoga_mat_03_s",
		"pop_v_bank_door_l",
		"pop_v_bank_door_r",
		"p_cut_door_01",
		"p_cut_door_02",
		"p_cut_door_03",
		"p_jewel_door_l",
		"p_jewel_door_r1",
		"p_amb_bagel_01",
		"p_cs_bbbat_01",
		"p_cs_bottle_01",
		"p_cs_clipboard",
		"p_cs_joint_01",
		"p_cs_joint_02",
		"p_cs_lighter_01",
		"p_cs_papers_01",
		"p_cs_papers_02",
		"p_cs_papers_03",
		"p_ing_bagel_01",
		"p_ing_microphonel_01",
		"p_ld_bs_bag_01",
		"p_ld_id_card_002",
		"p_ld_id_card_01",
		"p_rc_handset",
		"p_whiskey_notop",
		"p_whiskey_notop_empty",
		"proc_drkyel001",
		"proc_flower1",
		"proc_flower_wild_04",
		"proc_weeds01a",
		"proc_weeds01b",
		"proc_weeds01c",
		"prop_test_bed",
		"proair_hoc_puck",
		"p_film_set_static_01",
		"rock_4_cl_2_1",
		"rock_4_cl_2_2",
		"w_am_baseball",
		"w_am_baseball_hi",
		"w_am_brfcase",
		"w_am_case",
		"w_am_digiscanner",
		"w_am_digiscanner_hi",
		"w_am_fire_exting",
		"w_am_flare",
		"w_am_flare_hi",
		"w_am_jerrycan",
		"w_ar_advancedrifle",
		"w_ar_advancedrifle_hi",
		"w_ar_advancedrifle_mag1",
		"w_ar_advancedrifle_mag2",
		"w_ar_assaultrifle",
		"w_ar_assaultrifle_hi",
		"w_ar_assaultrifle_mag1",
		"w_ar_assaultrifle_mag2",
		"w_ar_carbinerifle",
		"w_ar_carbinerifle_hi",
		"w_ar_carbinerifle_mag1",
		"w_ar_carbinerifle_mag2",
		"w_at_ar_afgrip",
		"w_at_ar_afgrip_hi",
		"w_at_ar_flsh",
		"w_at_ar_flsh_hi",
		"w_at_ar_supp",
		"w_at_ar_supp_02",
		"w_at_ar_supp_02_hi",
		"w_at_ar_supp_hi",
		"w_at_pi_flsh",
		"w_at_pi_flsh_hi",
		"w_at_pi_supp",
		"w_at_pi_supp_hi",
		"w_at_railcover_01",
		"w_at_railcover_01_hi",
		"w_at_scope_large",
		"w_at_scope_large_hi",
		"w_at_scope_macro",
		"w_at_scope_macro_hi",
		"w_at_scope_max",
		"w_at_scope_max_hi",
		"w_at_scope_medium",
		"w_at_scope_medium_hi",
		"w_at_scope_small",
		"w_at_scope_small_hi",
		"w_at_sr_supp",
		"w_at_sr_supp_hi",
		"w_ex_grenadefrag",
		"w_ex_grenadefrag_hi",
		"w_ex_grenadesmoke",
		"w_ex_molotov",
		"w_ex_molotov_hi",
		"w_ex_pe",
		"w_ex_pe_hi",
		"w_lr_40mm",
		"w_lr_40mm_pu",
		"w_lr_grenadelauncher",
		"w_lr_grenadelauncher_hi",
		"w_lr_rpg",
		"w_lr_rpg_hi",
		"w_lr_rpg_rocket",
		"w_lr_rpg_rocket_pu",
		"w_me_bat",
		"w_me_crowbar",
		"w_me_gclub",
		"w_me_hammer",
		"w_me_knife_01",
		"w_me_nightstick",
		"w_mg_combatmg",
		"w_mg_combatmg_hi",
		"w_mg_combatmg_mag1",
		"w_mg_combatmg_mag2",
		"w_mg_mg",
		"w_mg_mg_hi",
		"w_mg_mg_mag1",
		"w_mg_mg_mag2",
		"w_mg_minigun",
		"w_mg_minigun_hi",
		"w_pi_appistol",
		"w_pi_appistol_hi",
		"w_pi_appistol_mag1",
		"w_pi_appistol_mag2",
		"w_pi_combatpistol",
		"w_pi_combatpistol_hi",
		"w_pi_combatpistol_mag1",
		"w_pi_combatpistol_mag2",
		"w_pi_pistol",
		"w_pi_pistol50",
		"w_pi_pistol50_hi",
		"w_pi_pistol50_mag1",
		"w_pi_pistol50_mag2",
		"w_pi_pistol_hi",
		"w_pi_pistol_mag1",
		"w_pi_pistol_mag2",
		"w_pi_stungun",
		"w_pi_stungun_hi",
		"w_sb_assaultsmg",
		"w_sb_assaultsmg_hi",
		"w_sb_assaultsmg_mag1",
		"w_sb_assaultsmg_mag2",
		"w_sb_microsmg",
		"w_sb_microsmg_hi",
		"w_sb_microsmg_mag1",
		"w_sb_microsmg_mag2",
		"w_sb_smg",
		"w_sb_smg_hi",
		"w_sb_smg_mag1",
		"w_sb_smg_mag2",
		"w_sg_assaultshotgun",
		"w_sg_assaultshotgun_hi",
		"w_sg_assaultshotgun_mag1",
		"w_sg_assaultshotgun_mag2",
		"w_sg_bullpupshotgun",
		"w_sg_bullpupshotgun_hi",
		"w_sg_pumpshotgun",
		"w_sg_pumpshotgun_hi",
		"w_sg_sawnoff",
		"w_sg_sawnoff_hi",
		"w_sr_heavysniper",
		"w_sr_heavysniper_hi",
		"w_sr_heavysniper_mag1",
		"w_sr_sniperrifle",
		"w_sr_sniperrifle_hi",
		"w_sr_sniperrifle_mag1",
	}
};
#pragma region Lists
int OGRampslistPos = 0;
std::vector<char*> OGRampList = {

	"prop_skate_flatramp",
	"prop_skate_funbox",
	"prop_skate_halfpipe",
	"prop_skate_kickers",
	"prop_skate_quartpipe",
	"prop_skate_rail",
	"prop_skate_spiner",

};
int StuntlistPos = 0;
std::vector<char*> Stuntlist = {
	"stt_prop_c4_stack",
	"stt_prop_corner_sign_01",
	"stt_prop_corner_sign_02",
	"stt_prop_corner_sign_03",
	"stt_prop_corner_sign_04",
	"stt_prop_corner_sign_05",
	"stt_prop_corner_sign_06",
	"stt_prop_corner_sign_07",
	"stt_prop_corner_sign_08",
	"stt_prop_corner_sign_09",
	"stt_prop_corner_sign_10",
	"stt_prop_corner_sign_11",
	"stt_prop_corner_sign_12",
	"stt_prop_corner_sign_13",
	"stt_prop_corner_sign_14",
	"stt_prop_flagpole_1a",
	"stt_prop_flagpole_1b",
	"stt_prop_flagpole_1c",
	"stt_prop_flagpole_1d",
	"stt_prop_flagpole_1e",
	"stt_prop_flagpole_1f",
	"stt_prop_flagpole_2a",
	"stt_prop_flagpole_2b",
	"stt_prop_flagpole_2c",
	"stt_prop_flagpole_2d",
	"stt_prop_flagpole_2e",
	"stt_prop_flagpole_2f",
	"stt_prop_hoop_constraction_01a",
	"stt_prop_hoop_small_01",
	"stt_prop_hoop_tyre_01a",
	"stt_prop_lives_bottle",
	"stt_prop_race_gantry_01",
	"stt_prop_race_start_line_01",
	"stt_prop_race_start_line_01b",
	"stt_prop_race_start_line_02",
	"stt_prop_race_start_line_02b",
	"stt_prop_race_start_line_03",
	"stt_prop_race_start_line_03b",
	"stt_prop_race_tannoy",
	"stt_prop_ramp_adj_flip_m",
	"stt_prop_ramp_adj_flip_mb",
	"stt_prop_ramp_adj_flip_s",
	"stt_prop_ramp_adj_flip_sb",
	"stt_prop_ramp_adj_hloop",
	"stt_prop_ramp_adj_loop",
	"stt_prop_ramp_jump_l",
	"stt_prop_ramp_jump_m",
	"stt_prop_ramp_jump_s",
	"stt_prop_ramp_jump_xl",
	"stt_prop_ramp_jump_xs",
	"stt_prop_ramp_jump_xxl",
	"stt_prop_ramp_multi_loop_rb",
	"stt_prop_ramp_spiral_l",
	"stt_prop_ramp_spiral_l_l",
	"stt_prop_ramp_spiral_l_m",
	"stt_prop_ramp_spiral_l_s",
	"stt_prop_ramp_spiral_l_xxl",
	"stt_prop_ramp_spiral_m",
	"stt_prop_ramp_spiral_s",
	"stt_prop_ramp_spiral_xxl",
	"stt_prop_sign_circuit_01",
	"stt_prop_sign_circuit_02",
	"stt_prop_sign_circuit_03",
	"stt_prop_sign_circuit_04",
	"stt_prop_sign_circuit_05",
	"stt_prop_sign_circuit_06",
	"stt_prop_sign_circuit_07",
	"stt_prop_sign_circuit_08",
	"stt_prop_sign_circuit_09",
	"stt_prop_sign_circuit_10",
	"stt_prop_sign_circuit_11",
	"stt_prop_sign_circuit_11b",
	"stt_prop_sign_circuit_12",
	"stt_prop_sign_circuit_13",
	"stt_prop_sign_circuit_13b",
	"stt_prop_sign_circuit_14",
	"stt_prop_sign_circuit_14b",
	"stt_prop_sign_circuit_15",
	"stt_prop_slow_down",
	"stt_prop_speakerstack_01a",
	"stt_prop_startline_gantry",
	"stt_prop_stunt_bblock_huge_01",
	"stt_prop_stunt_bblock_huge_02",
	"stt_prop_stunt_bblock_huge_03",
	"stt_prop_stunt_bblock_huge_04",
	"stt_prop_stunt_bblock_huge_05",
	"stt_prop_stunt_bblock_hump_01",
	"stt_prop_stunt_bblock_hump_02",
	"stt_prop_stunt_bblock_lrg1",
	"stt_prop_stunt_bblock_lrg2",
	"stt_prop_stunt_bblock_lrg3",
	"stt_prop_stunt_bblock_mdm1",
	"stt_prop_stunt_bblock_mdm2",
	"stt_prop_stunt_bblock_mdm3",
	"stt_prop_stunt_bblock_qp",
	"stt_prop_stunt_bblock_qp2",
	"stt_prop_stunt_bblock_qp3",
	"stt_prop_stunt_bblock_sml1",
	"stt_prop_stunt_bblock_sml2",
	"stt_prop_stunt_bblock_sml3",
	"stt_prop_stunt_bblock_xl1",
	"stt_prop_stunt_bblock_xl2",
	"stt_prop_stunt_bblock_xl3",
	"stt_prop_stunt_bowling_ball",
	"stt_prop_stunt_bowling_pin",
	"stt_prop_stunt_bowlpin_stand",
	"stt_prop_stunt_domino",
	"stt_prop_stunt_jump15",
	"stt_prop_stunt_jump30",
	"stt_prop_stunt_jump45",
	"stt_prop_stunt_jump_l",
	"stt_prop_stunt_jump_lb",
	"stt_prop_stunt_jump_loop",
	"stt_prop_stunt_jump_m",
	"stt_prop_stunt_jump_mb",
	"stt_prop_stunt_jump_s",
	"stt_prop_stunt_jump_sb",
	"stt_prop_stunt_landing_zone_01",
	"stt_prop_stunt_ramp",
	"stt_prop_stunt_soccer_ball",
	"stt_prop_stunt_soccer_goal",
	"stt_prop_stunt_soccer_lball",
	"stt_prop_stunt_soccer_sball",
	"stt_prop_stunt_target",
	"stt_prop_stunt_target_small",
	"stt_prop_stunt_track_bumps",
	"stt_prop_stunt_track_cutout",
	"stt_prop_stunt_track_dwlink",
	"stt_prop_stunt_track_dwlink_02",
	"stt_prop_stunt_track_dwsh15",
	"stt_prop_stunt_track_dwshort",
	"stt_prop_stunt_track_dwslope15",
	"stt_prop_stunt_track_dwslope30",
	"stt_prop_stunt_track_dwslope45",
	"stt_prop_stunt_track_dwturn",
	"stt_prop_stunt_track_dwuturn",
	"stt_prop_stunt_track_exshort",
	"stt_prop_stunt_track_fork",
	"stt_prop_stunt_track_funlng",
	"stt_prop_stunt_track_funnel",
	"stt_prop_stunt_track_hill",
	"stt_prop_stunt_track_hill2",
	"stt_prop_stunt_track_jump",
	"stt_prop_stunt_track_link",
	"stt_prop_stunt_track_otake",
	"stt_prop_stunt_track_sh15",
	"stt_prop_stunt_track_sh30",
	"stt_prop_stunt_track_sh45",
	"stt_prop_stunt_track_sh45_a",
	"stt_prop_stunt_track_short",
	"stt_prop_stunt_track_slope15",
	"stt_prop_stunt_track_slope30",
	"stt_prop_stunt_track_slope45",
	"stt_prop_stunt_track_start",
	"stt_prop_stunt_track_start_02",
	"stt_prop_stunt_track_straight",
	"stt_prop_stunt_track_straightice",
	"stt_prop_stunt_track_st_01",
	"stt_prop_stunt_track_st_02",
	"stt_prop_stunt_track_turn",
	"stt_prop_stunt_track_turnice",
	"stt_prop_stunt_track_uturn",
	"stt_prop_stunt_tube_crn",
	"stt_prop_stunt_tube_crn2",
	"stt_prop_stunt_tube_crn_15d",
	"stt_prop_stunt_tube_crn_30d",
	"stt_prop_stunt_tube_crn_5d",
	"stt_prop_stunt_tube_cross",
	"stt_prop_stunt_tube_end",
	"stt_prop_stunt_tube_ent",
	"stt_prop_stunt_tube_fn_01",
	"stt_prop_stunt_tube_fn_02",
	"stt_prop_stunt_tube_fn_03",
	"stt_prop_stunt_tube_fn_04",
	"stt_prop_stunt_tube_fn_05",
	"stt_prop_stunt_tube_fork",
	"stt_prop_stunt_tube_gap_01",
	"stt_prop_stunt_tube_gap_02",
	"stt_prop_stunt_tube_gap_03",
	"stt_prop_stunt_tube_hg",
	"stt_prop_stunt_tube_jmp",
	"stt_prop_stunt_tube_jmp2",
	"stt_prop_stunt_tube_l",
	"stt_prop_stunt_tube_m",
	"stt_prop_stunt_tube_qg",
	"stt_prop_stunt_tube_s",
	"stt_prop_stunt_tube_speed",
	"stt_prop_stunt_tube_speeda",
	"stt_prop_stunt_tube_speedb",
	"stt_prop_stunt_tube_xs",
	"stt_prop_stunt_tube_xxs",
	"stt_prop_stunt_wideramp",
	"stt_prop_track_bend2_bar_l",
	"stt_prop_track_bend2_bar_l_b",
	"stt_prop_track_bend2_l",
	"stt_prop_track_bend2_l_b",
	"stt_prop_track_bend_15d",
	"stt_prop_track_bend_15d_bar",
	"stt_prop_track_bend_180d",
	"stt_prop_track_bend_180d_bar",
	"stt_prop_track_bend_30d",
	"stt_prop_track_bend_30d_bar",
	"stt_prop_track_bend_5d",
	"stt_prop_track_bend_5d_bar",
	"stt_prop_track_bend_bar_l",
	"stt_prop_track_bend_bar_l_b",
	"stt_prop_track_bend_bar_m",
	"stt_prop_track_bend_l",
	"stt_prop_track_bend_l_b",
	"stt_prop_track_bend_m",
	"stt_prop_track_block_01",
	"stt_prop_track_block_02",
	"stt_prop_track_block_03",
	"stt_prop_track_chicane_l",
	"stt_prop_track_chicane_l_02",
	"stt_prop_track_chicane_r",
	"stt_prop_track_chicane_r_02",
	"stt_prop_track_cross",
	"stt_prop_track_cross_bar",
	"stt_prop_track_fork",
	"stt_prop_track_fork_bar",
	"stt_prop_track_funnel",
	"stt_prop_track_funnel_ads_01a",
	"stt_prop_track_funnel_ads_01b",
	"stt_prop_track_funnel_ads_01c",
	"stt_prop_track_jump_01a",
	"stt_prop_track_jump_01b",
	"stt_prop_track_jump_01c",
	"stt_prop_track_jump_02a",
	"stt_prop_track_jump_02b",
	"stt_prop_track_jump_02c",
	"stt_prop_track_link",
	"stt_prop_track_slowdown",
	"stt_prop_track_slowdown",
	"stt_prop_track_slowdown_t1",
	"stt_prop_track_slowdown_t2",
	"stt_prop_track_speedup",
	"stt_prop_track_speedup_t1",
	"stt_prop_track_speedup_t2",
	"stt_prop_track_start",
	"stt_prop_track_start_02",
	"stt_prop_track_stop_sign",
	"stt_prop_track_straight_bar_l",
	"stt_prop_track_straight_bar_m",
	"stt_prop_track_straight_bar_s",
	"stt_prop_track_straight_l",
	"stt_prop_track_straight_lm",
	"stt_prop_track_straight_lm_bar",
	"stt_prop_track_straight_m",
	"stt_prop_track_straight_s",
	"stt_prop_track_tube_01",
	"stt_prop_track_tube_02",
	"stt_prop_tyre_wall_01",
	"stt_prop_tyre_wall_010",
	"stt_prop_tyre_wall_011",
	"stt_prop_tyre_wall_012",
	"stt_prop_tyre_wall_013",
	"stt_prop_tyre_wall_01",
	"stt_prop_tyre_wall_015",
	"stt_prop_tyre_wall_02",
	"stt_prop_tyre_wall_03",
	"stt_prop_tyre_wall_04",
	"stt_prop_tyre_wall_05",
	"stt_prop_tyre_wall_06",
	"stt_prop_tyre_wall_07",
	"stt_prop_tyre_wall_08",
	"stt_prop_tyre_wall_09",
	"stt_prop_tyre_wall_0l010",
	"stt_prop_tyre_wall_0l012",
	"stt_prop_tyre_wall_0l013",
	"stt_prop_tyre_wall_0l014",
	"stt_prop_tyre_wall_0l015",
	"stt_prop_tyre_wall_0l018",
	"stt_prop_tyre_wall_0l019",
	"stt_prop_tyre_wall_0l020",
	"stt_prop_tyre_wall_0l04",
	"stt_prop_tyre_wall_0l05",
	"stt_prop_tyre_wall_0l06",
	"stt_prop_tyre_wall_0l07",
	"stt_prop_tyre_wall_0l08",
	"stt_prop_tyre_wall_0l1",
	"stt_prop_tyre_wall_0l16",
	"stt_prop_tyre_wall_0l17",
	"stt_prop_tyre_wall_0l2",
	"stt_prop_tyre_wall_0l3",
	"stt_prop_tyre_wall_0r010",
	"stt_prop_tyre_wall_0r011",
	"stt_prop_tyre_wall_0r012",
	"stt_prop_tyre_wall_0r013",
	"stt_prop_tyre_wall_0r014,"
	"stt_prop_tyre_wall_0r015,"
	"stt_prop_tyre_wall_0r016",
	"stt_prop_tyre_wall_0r017",
	"stt_prop_tyre_wall_0r018",
	"stt_prop_tyre_wall_0r019",
	"stt_prop_tyre_wall_0r04",
	"stt_prop_tyre_wall_0r05",
	"stt_prop_tyre_wall_0r06",
	"stt_prop_tyre_wall_0r07",
	"stt_prop_tyre_wall_0r08",
	"stt_prop_tyre_wall_0r09",
	"stt_prop_tyre_wall_0r1",
	"stt_prop_tyre_wall_0r2",
	"stt_prop_tyre_wall_0r3",
	"stt_prop_wallride_01",
	"stt_prop_wallride_01b",
	"stt_prop_wallride_02",
	"stt_prop_wallride_02b",
	"stt_prop_wallride_04",
	"stt_prop_wallride_05",
	"stt_prop_wallride_05b",
	"stt_prop_wallride_45l",
	"stt_prop_wallride_45la",
	"stt_prop_wallride_45r",
	"stt_prop_wallride_45ra",
	"stt_prop_wallride_90l",
	"stt_prop_wallride_90lb",
	"stt_prop_wallride_90r",
	"stt_prop_wallride_90rb",
};
int namedPedListPos = 0;
std::vector<char*> namedPedList =
{
	"mp_m_freemode_01","player_zero","player_one","player_two","s_m_m_movalien_01","u_m_y_zombie_01","u_m_y_imporage","s_m_y_fireman_01","a_f_y_topless_01","u_f_y_poppymich","a_m_y_acult_01","ig_lamardavis","ig_jimmydisanto","ig_tracydisanto",
	"ig_johnnyklebitz","ig_wade","a_f_y_juggalo_01","A_C_Boar","A_C_Chickenhawk","A_C_Chimp","A_C_Chop","A_C_Cormorant","A_C_Cow","A_C_Coyote","A_C_Crow","A_C_Deer","A_C_Fish","A_C_Hen","A_C_Husky","A_C_MtLion","A_C_Pig","A_C_Pigeon","A_C_Rat","A_C_Retriever",
	"A_C_Rhesus","A_C_Rottweiler","A_C_Seagull","A_C_SharkTiger","A_C_shepherd","A_F_M_Beach_01","A_F_M_BevHills_01","A_F_M_BevHills_02","A_F_M_BodyBuild_01","A_F_M_Business_02","A_F_M_Downtown_01","A_F_M_EastSA_01",
	"A_F_M_EastSA_02","A_F_M_FatBla_01","A_F_M_FatCult_01","A_F_M_FatWhite_01","A_F_M_KTown_01","A_F_M_KTown_02","A_F_M_ProlHost_01","A_F_M_Salton_01","A_F_M_SkidRow_01","A_F_M_SouCentMC_01","A_F_M_SouCent_01","A_F_M_SouCent_02",
	"A_F_M_Tourist_01","A_F_M_TrampBeac_01","A_F_M_Tramp_01","A_F_O_GenStreet_01","A_F_O_Indian_01","A_F_O_KTown_01","A_F_O_Salton_01","A_F_O_SouCent_01","A_F_O_SouCent_02","A_F_Y_Beach_01","A_F_Y_BevHills_01","A_F_Y_BevHills_02",
	"A_F_Y_BevHills_03","A_F_Y_BevHills_04","A_F_Y_Business_01","A_F_Y_Business_02","A_F_Y_Business_03","A_F_Y_Business_04","A_F_Y_EastSA_01","A_F_Y_EastSA_02","A_F_Y_EastSA_03","A_F_Y_Epsilon_01","A_F_Y_Fitness_01",
	"A_F_Y_Fitness_02","A_F_Y_GenHot_01","A_F_Y_Golfer_01","A_F_Y_Hiker_01","A_F_Y_Hippie_01","A_F_Y_Hipster_01","A_F_Y_Hipster_02","A_F_Y_Hipster_03","A_F_Y_Hipster_04","A_F_Y_Indian_01","A_F_Y_Juggalo_01","A_F_Y_Runner_01",
	"A_F_Y_RurMeth_01","A_F_Y_SCDressy_01","A_F_Y_Skater_01","A_F_Y_SouCent_01","A_F_Y_SouCent_02","A_F_Y_SouCent_03","A_F_Y_Tennis_01","A_F_Y_Topless_01","A_F_Y_Tourist_01","A_F_Y_Tourist_02","A_F_Y_Vinewood_01",
	"A_F_Y_Vinewood_02","A_F_Y_Vinewood_03","A_F_Y_Vinewood_04","A_F_Y_Yoga_01","A_M_M_ACult_01","A_M_M_AfriAmer_01","A_M_M_Beach_01","A_M_M_Beach_02","A_M_M_BevHills_01","A_M_M_BevHills_02","A_M_M_Business_01",
	"A_M_M_EastSA_01","A_M_M_EastSA_02","A_M_M_Farmer_01","A_M_M_FatLatin_01","A_M_M_GenFat_01","A_M_M_GenFat_02","A_M_M_Golfer_01","A_M_M_HasJew_01","A_M_M_Hillbilly_01","A_M_M_Hillbilly_02","A_M_M_Indian_01",
	"A_M_M_KTown_01","A_M_M_Malibu_01","A_M_M_MexCntry_01","A_M_M_MexLabor_01","A_M_M_OG_Boss_01","A_M_M_Paparazzi_01","A_M_M_Polynesian_01","A_M_M_ProlHost_01","A_M_M_RurMeth_01","A_M_M_Salton_01","A_M_M_Salton_02",
	"A_M_M_Salton_03","A_M_M_Salton_04","A_M_M_Skater_01","A_M_M_Skidrow_01","A_M_M_SoCenLat_01","A_M_M_SouCent_01","A_M_M_SouCent_02","A_M_M_SouCent_03","A_M_M_SouCent_04","A_M_M_StLat_02","A_M_M_Tennis_01",
	"A_M_M_Tourist_01","A_M_M_TrampBeac_01","A_M_M_Tramp_01","A_M_M_TranVest_01","A_M_M_TranVest_02","A_M_O_ACult_01","A_M_O_ACult_02","A_M_O_Beach_01","A_M_O_GenStreet_01","A_M_O_KTown_01","A_M_O_Salton_01",
	"A_M_O_SouCent_01","A_M_O_SouCent_02","A_M_O_SouCent_03","A_M_O_Tramp_01","A_M_Y_ACult_01","A_M_Y_ACult_02","A_M_Y_BeachVesp_01","A_M_Y_BeachVesp_02","A_M_Y_Beach_01","A_M_Y_Beach_02","A_M_Y_Beach_03","A_M_Y_BevHills_01",
	"A_M_Y_BevHills_02","A_M_Y_BreakDance_01","A_M_Y_BusiCas_01","A_M_Y_Business_01","A_M_Y_Business_02","A_M_Y_Business_03","A_M_Y_Cyclist_01","A_M_Y_DHill_01","A_M_Y_Downtown_01","A_M_Y_EastSA_01","A_M_Y_EastSA_02",
	"A_M_Y_Epsilon_01","A_M_Y_Epsilon_02","A_M_Y_Gay_01","A_M_Y_Gay_02","A_M_Y_GenStreet_01","A_M_Y_GenStreet_02","A_M_Y_Golfer_01","A_M_Y_HasJew_01","A_M_Y_Hiker_01","A_M_Y_Hippy_01","A_M_Y_Hipster_01","A_M_Y_Hipster_02",
	"A_M_Y_Hipster_03","A_M_Y_Indian_01","A_M_Y_Jetski_01","A_M_Y_Juggalo_01","A_M_Y_KTown_01","A_M_Y_KTown_02","A_M_Y_Latino_01","A_M_Y_MethHead_01","A_M_Y_MexThug_01","A_M_Y_MotoX_01","A_M_Y_MotoX_02","A_M_Y_MusclBeac_01",
	"A_M_Y_MusclBeac_02","A_M_Y_Polynesian_01","A_M_Y_RoadCyc_01","A_M_Y_Runner_01","A_M_Y_Runner_02","A_M_Y_Salton_01","A_M_Y_Skater_01","A_M_Y_Skater_02","A_M_Y_SouCent_01","A_M_Y_SouCent_02","A_M_Y_SouCent_03","A_M_Y_SouCent_04",
	"A_M_Y_StBla_01","A_M_Y_StBla_02","A_M_Y_StLat_01","A_M_Y_StWhi_01","A_M_Y_StWhi_02","A_M_Y_Sunbathe_01","A_M_Y_Surfer_01","A_M_Y_VinDouche_01","A_M_Y_Vinewood_01","A_M_Y_Vinewood_02","A_M_Y_Vinewood_03","A_M_Y_Vinewood_04",
	"A_M_Y_Yoga_01","CSB_Abigail","CSB_Anita","CSB_Anton","CSB_BallasOG","CSB_Bride","CSB_BurgerDrug","CSB_Car3guy1","CSB_Car3guy2","CSB_Chef","CSB_Chin_goon","CSB_Cletus","CSB_Cop","CSB_Customer","CSB_Denise_friend",
	"CSB_FOS_rep","CSB_G","CSB_Groom","CSB_Grove_str_dlr","CSB_Hao","CSB_Hugh","CSB_Imran","CSB_Janitor","CSB_Maude","CSB_MWeather","CSB_Ortega","CSB_Oscar","CSB_PornDudes","CSB_PrologueDriver","CSB_ProlSec","CSB_Ramp_gang",
	"CSB_Ramp_hic","CSB_Ramp_hipster","CSB_Ramp_marine","CSB_Ramp_mex","CSB_Reporter","CSB_RoccoPelosi","CSB_Screen_Writer","CSB_Stripper_01","CSB_Stripper_02","CSB_Tonya","CSB_TrafficWarden","CS_AmandaTownley","CS_Andreas",
	"cs_ashley","CS_Bankman","CS_Barry","CS_Beverly","CS_Brad","CS_BradCadaver","CS_Carbuyer","CS_Casey","CS_ChengSr","CS_ChrisFormage","CS_Clay","CS_Dale","CS_DaveNorton","cs_debra","cs_denise","CS_Devin","CS_Dom","CS_Dreyfuss",
	"CS_DrFriedlander","CS_Fabien","CS_FBISuit_01","CS_Floyd","CS_Guadalope","cs_gurk","CS_Hunter","CS_Janet","CS_JewelAss","CS_JimmyBoston","CS_JimmyDiSanto","CS_JoeMinuteMan","CS_JohnnyKlebitz","CS_Josef","CS_Josh","CS_LamarDavis",
	"CS_Lazlow","CS_LesterCrest","CS_LifeInvad_01","CS_Magenta","CS_Manuel","CS_Marnie","CS_MartinMadrazo","CS_MaryAnn","CS_Michelle","CS_Milton","CS_Molly","CS_MovPremF_01","CS_MovPremMale","CS_MRK","CS_MrsPhillips","CS_MRS_Thornhill",
	"CS_Natalia","CS_NervousRon","CS_Nigel","CS_Old_Man1A","CS_Old_Man2","CS_Omega","CS_Orleans","CS_Paper","CS_Patricia","CS_Priest","CS_ProlSec_02","CS_RussianDrunk","CS_SiemonYetarian","CS_Solomon","CS_SteveHains","CS_Stretch",
	"CS_Tanisha","CS_TaoCheng","CS_TaosTranslator","CS_TennisCoach","CS_Terry","CS_Tom","CS_TomEpsilon","CS_TracyDiSanto","CS_Wade","CS_Zimbor","G_F_Y_ballas_01","G_F_Y_Families_01","G_F_Y_Lost_01","G_F_Y_Vagos_01","G_M_M_ArmBoss_01",
	"G_M_M_ArmGoon_01","G_M_M_ArmLieut_01","G_M_M_ChemWork_01","G_M_M_ChiBoss_01","G_M_M_ChiCold_01","G_M_M_ChiGoon_01","G_M_M_ChiGoon_02","G_M_M_KorBoss_01","G_M_M_MexBoss_01","G_M_M_MexBoss_02","G_M_Y_ArmGoon_02","G_M_Y_Azteca_01",
	"G_M_Y_BallaEast_01","G_M_Y_BallaOrig_01","G_M_Y_BallaSout_01","G_M_Y_FamCA_01","G_M_Y_FamDNF_01","G_M_Y_FamFor_01","G_M_Y_Korean_01","G_M_Y_Korean_02","G_M_Y_KorLieut_01","G_M_Y_Lost_01","G_M_Y_Lost_02","G_M_Y_Lost_03",
	"G_M_Y_MexGang_01","G_M_Y_MexGoon_01","G_M_Y_MexGoon_02","G_M_Y_MexGoon_03","G_M_Y_PoloGoon_01","G_M_Y_PoloGoon_02","G_M_Y_SalvaBoss_01","G_M_Y_SalvaGoon_01","G_M_Y_SalvaGoon_02","G_M_Y_SalvaGoon_03","G_M_Y_StrPunk_01","G_M_Y_StrPunk_02",
	"HC_Driver","HC_Gunman","HC_Hacker","IG_Abigail","IG_AmandaTownley","IG_Andreas","IG_Ashley","IG_BallasOG","IG_Bankman","IG_Barry","IG_BestMen","IG_Beverly","IG_Brad","IG_Bride","IG_Car3guy1","IG_Car3guy2","IG_Casey",
	"IG_Chef","IG_ChengSr","IG_ChrisFormage","IG_Clay","IG_ClayPain","IG_Cletus","IG_Dale","IG_DaveNorton","IG_Denise","IG_Devin","IG_Dom","IG_Dreyfuss","IG_DrFriedlander","IG_Fabien","IG_FBISuit_01","IG_Floyd","IG_Groom",
	"IG_Hao","IG_Hunter","IG_Janet","ig_JAY_Norris","IG_JewelAss","IG_JimmyBoston","IG_JimmyDiSanto","IG_JoeMinuteMan","ig_JohnnyKlebitz","IG_Josef","IG_Josh","IG_KerryMcIntosh","IG_LamarDavis","IG_Lazlow","IG_LesterCrest",
	"IG_LifeInvad_01","IG_LifeInvad_02","IG_Magenta","IG_Manuel","IG_Marnie","IG_MaryAnn","IG_Maude","IG_Michelle","IG_Milton","IG_Molly","IG_MRK","IG_MrsPhillips","IG_MRS_Thornhill","IG_Natalia","IG_NervousRon","IG_Nigel",
	"IG_Old_Man1A","IG_Old_Man2","IG_Omega","IG_ONeil","IG_Orleans","IG_Ortega","IG_Paper","IG_Patricia","IG_Priest","IG_ProlSec_02","IG_Ramp_Gang","IG_Ramp_Hic","IG_Ramp_Hipster","IG_Ramp_Mex","IG_RoccoPelosi","IG_RussianDrunk",
	"IG_Screen_Writer","IG_SiemonYetarian","IG_Solomon","IG_SteveHains","IG_Stretch","IG_Talina","IG_Tanisha","IG_TaoCheng","IG_TaosTranslator","ig_TennisCoach","IG_Terry","IG_TomEpsilon","IG_Tonya","IG_TracyDiSanto","IG_TrafficWarden",
	"IG_TylerDix","IG_Wade","IG_Zimbor","MP_F_DeadHooker","MP_F_Freemode_01","MP_F_Misty_01","MP_F_StripperLite","MP_G_M_Pros_01","MP_HeadTargets","MP_M_Claude_01","MP_M_ExArmy_01","MP_M_FamDD_01","MP_M_FIBSec_01","MP_M_Freemode_01",
	"MP_M_Marston_01","MP_M_Niko_01","MP_M_ShopKeep_01","MP_S_M_Armoured_01","Player_One","Player_Two","Player_Zero","slod_human","slod_large_quadped","slod_small_quadped","S_F_M_Fembarber","S_F_M_Maid_01","S_F_M_Shop_HIGH",
	"S_F_M_SweatShop_01","S_F_Y_AirHostess_01","S_F_Y_Bartender_01","S_F_Y_Baywatch_01","S_F_Y_Cop_01","S_F_Y_Factory_01","S_F_Y_Hooker_01","S_F_Y_Hooker_02","S_F_Y_Hooker_03","S_F_Y_Migrant_01","S_F_Y_MovPrem_01","S_F_Y_Ranger_01",
	"S_F_Y_Scrubs_01","S_F_Y_Sheriff_01","S_F_Y_Shop_LOW","S_F_Y_Shop_MID","S_F_Y_StripperLite","S_F_Y_Stripper_01","S_F_Y_Stripper_02","S_F_Y_SweatShop_01","S_M_M_AmmuCountry","S_M_M_Armoured_01","S_M_M_Armoured_02","S_M_M_AutoShop_01",
	"S_M_M_AutoShop_02","S_M_M_Bouncer_01","S_M_M_ChemSec_01","S_M_M_CIASec_01","S_M_M_CntryBar_01","S_M_M_DockWork_01","S_M_M_Doctor_01","S_M_M_FIBOffice_01","S_M_M_FIBOffice_02","S_M_M_Gaffer_01","S_M_M_Gardener_01","S_M_M_GenTransport",
	"S_M_M_HairDress_01","S_M_M_HighSec_01","S_M_M_HighSec_02","S_M_M_Janitor","S_M_M_LatHandy_01","S_M_M_LifeInvad_01","S_M_M_Linecook","S_M_M_LSMetro_01","S_M_M_Mariachi_01","S_M_M_Marine_01","S_M_M_Marine_02","S_M_M_Migrant_01",
	"S_M_M_MovAlien_01","S_M_M_MovPrem_01","S_M_M_MovSpace_01","S_M_M_Paramedic_01","S_M_M_Pilot_01","S_M_M_Pilot_02","S_M_M_Postal_01","S_M_M_Postal_02","S_M_M_PrisGuard_01","S_M_M_Scientist_01","S_M_M_Security_01","S_M_M_SnowCop_01",
	"S_M_M_StrPerf_01","S_M_M_StrPreach_01","S_M_M_StrVend_01","S_M_M_Trucker_01","S_M_M_UPS_01","S_M_M_UPS_02","S_M_O_Busker_01","S_M_Y_AirWorker","S_M_Y_AmmuCity_01","S_M_Y_ArmyMech_01","S_M_Y_Autopsy_01","S_M_Y_Barman_01","S_M_Y_BayWatch_01",
	"S_M_Y_BlackOps_01","S_M_Y_BlackOps_02","S_M_Y_BlackOps_03","S_M_Y_BusBoy_01","S_M_Y_Chef_01","S_M_Y_Clown_01","S_M_Y_Construct_01","S_M_Y_Construct_02","S_M_Y_Cop_01","S_M_Y_Dealer_01","S_M_Y_DevinSec_01","S_M_Y_DockWork_01","S_M_Y_Doorman_01",
	"S_M_Y_DWService_01","S_M_Y_DWService_02","S_M_Y_Factory_01","S_M_Y_Fireman_01","S_M_Y_Garbage","S_M_Y_Grip_01","S_M_Y_HwayCop_01","S_M_Y_Marine_01","S_M_Y_Marine_02","S_M_Y_Marine_03","S_M_Y_Mime","S_M_Y_PestCont_01",
	"S_M_Y_Pilot_01","S_M_Y_PrisMuscl_01","S_M_Y_Prisoner_01","S_M_Y_Ranger_01","S_M_Y_Robber_01","S_M_Y_Sheriff_01","S_M_Y_Shop_MASK","S_M_Y_StrVend_01","S_M_Y_Swat_01","S_M_Y_USCG_01","S_M_Y_Valet_01","S_M_Y_Waiter_01",
	"S_M_Y_WinClean_01","S_M_Y_XMech_01","S_M_Y_XMech_02","U_F_M_Corpse_01","U_F_M_Miranda","U_F_M_ProMourn_01","U_F_O_MovieStar","U_F_O_ProlHost_01","U_F_Y_BikerChic","U_F_Y_COMJane","U_F_Y_corpse_01","U_F_Y_corpse_02",
	"U_F_Y_HotPosh_01","U_F_Y_JewelAss_01","U_F_Y_Mistress","U_F_Y_PoppyMich","U_F_Y_Princess","U_F_Y_SpyActress","U_M_M_Aldinapoli","U_M_M_BankMan","U_M_M_BikeHire_01","U_M_M_FIBArchitect","U_M_M_FilmDirector","U_M_M_GlenStank_01",
	"U_M_M_Griff_01","U_M_M_Jesus_01","U_M_M_JewelSec_01","U_M_M_JewelThief","U_M_M_MarkFost","U_M_M_PartyTarget","U_M_M_ProlSec_01","U_M_M_ProMourn_01","U_M_M_RivalPap","U_M_M_SpyActor","U_M_M_WillyFist","U_M_O_FinGuru_01",
	"U_M_O_TapHillBilly","U_M_O_Tramp_01","U_M_Y_Abner","U_M_Y_AntonB",	"U_M_Y_BabyD","U_M_Y_Baygor","U_M_Y_BurgerDrug_01","U_M_Y_Chip","U_M_Y_Cyclist_01","U_M_Y_FIBMugger_01","U_M_Y_Guido_01","U_M_Y_GunVend_01","U_M_Y_Hippie_01",
	"U_M_Y_ImpoRage","U_M_Y_Justin","U_M_Y_Mani","U_M_Y_MilitaryBum","U_M_Y_Paparazzi","U_M_Y_Party_01","U_M_Y_Pogo_01","U_M_Y_Prisoner_01","U_M_Y_ProlDriver_01","U_M_Y_RSRanger_01","U_M_Y_SBike","U_M_Y_StagGrm_01","U_M_Y_Tattoo_01",
	"U_M_Y_Zombie_01",
};
class Ini
{
private:
	std::string inifile;
public:
	Ini(std::string file)
	{
		this->inifile = file;
	}

	void WriteString(std::string string, std::string app, std::string key)
	{
		WritePrivateProfileStringA(app.c_str(), key.c_str(), string.c_str(), this->inifile.c_str());
	}
	std::string GetString(std::string app, std::string key)
	{
		char buf[100];//100
		GetPrivateProfileStringA(app.c_str(), key.c_str(), "NULL", buf, 100, this->inifile.c_str());//100
		return (std::string)buf;
	}

	void WriteInt(int value, std::string app, std::string key)
	{
		WriteString(std::to_string(value), app, key);
	}
	int GetInt(std::string app, std::string key)
	{
		return std::stoi(GetString(app, key));
	}

	void WriteFloat(float value, std::string app, std::string key)
	{
		WriteString(std::to_string(value), app, key);
	}
	float GetFloat(std::string app, std::string key)
	{
		return std::stof(GetString(app, key));
	}
};

char* CharKeyboard(char* windowName = "", int maxInput = 21, char* defaultText = "") {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(0, "", "", defaultText, "", "", "", maxInput);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return "";
	return GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
}
int NumberKeyboard() {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(1, "", "", "", "", "", "", 10);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return 0;
	return atof(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
}

void notifyleft(char* msg)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(msg);
	UI::_DRAW_NOTIFICATION(2000, 1);
}

Vector3 TPCoords;
void TPto(Vector3 Coords)
{
	int Handle = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Handle, false), Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
	}
	else
		ENTITY::SET_ENTITY_COORDS(Handle, Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
}

void wait() {
	WAIT(0);
}

void teleport_to_marker(Player target)
{
	Vector3 coords = get_blip_marker();
	Entity e = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target);
	if (PED::IS_PED_IN_ANY_VEHICLE(e, 0))
	{
		e = PED::GET_VEHICLE_PED_IS_USING(e);
	}
	bool groundFound = false;
	static float groundCheckHeight[] =
	{ 100.0, 150.0, 50.0, 0.0, 0.3, 0.5, 1.0, 2.0, 3.0, 5.0, 10.0, 15.0, 20.0, 200.0, 250.0, 300.0, 350.0, 400.0, 450.0, 500.0, 550.0, 600.0, 650.0, 700.0, 750.0, 800.0 };
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
	if (!groundFound)
	{
		coords.z = 5.0;
	}
	Features::teleporttocoords(target, coords);
}

int TestInt = 0;
bool TestBool = false;
float TestFloat = 0;
bool nig28wen = false;
bool dropCash = false;
Player player = PLAYER::PLAYER_ID();


bool firstload = true;
void main() {
	IconNotification("Open Menu With * In Numpad!", "Stewie's", "Welcome!");
	IconNotification("Created By : ~bold~Stewie's Team", "Stewie's", "Version : 0.2");
	while (true) {
		Menu::Checks::Controlls();
		Features::UpdateLoop();
		switch (Menu::Settings::currentMenu) {

		case mainmenu:
		{
			Menu::Title("Stewie's VIP");
			Menu::Break("MAIN MENU");
			Menu::MenuOption("Self Options", playermenu); 
			Menu::MenuOption("~b~Online Players", onlinemenu_playerlist);
			Menu::MenuOption("~b~All Players", allplayers);
			Menu::MenuOption("Protections", protection);
			Menu::MenuOption("Weapon Options", weapon);
			Menu::MenuOption("Vehicle Options", vehicle);
			Menu::MenuOption("Teleport Options", teleports);
			Menu::MenuOption("Misc Options", worldoptions);
			Menu::MenuOption("~r~Recovery", recover);
			Menu::MenuOption("Settings", settings);
		}
		break; 
#pragma region Weapons Menu
		case weapon:
		{

			Menu::Title("Stewie's");
			Menu::Break("WEAPON OPTIONS");
			if (Menu::Option("Give All Weapons")) {
				uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
				for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Weapons[i], 9999, 1);
				}
			}
			Menu::MenuOption("Weapon Tints", Weaponskin);
			Menu::MenuOption("Object Gun", objectgun);
			Menu::MenuOption("Custom Impacts", customImpact);
			Menu::Toggle("Shoot 2.5K Money Bags", Features::moneyGun, [] {Features::MoneyGun(Features::moneyGun); });
			Menu::Toggle("Cartoon Gun", Features::CartoonGun, [] {Features::cartoongun(Features::CartoonGun); });
			Menu::Toggle("Drive It Gun", Features::driveitgun, [] { Features::digun(Features::driveitgun); });
			Menu::Toggle("Infinite Ammo", Features::infammo, [] { Features::noreloadv(Features::infammo); });
			Menu::Toggle("Delete Gun", Features::delGun);
			Menu::Toggle("Airstrike Gun", Features::airStrike);
			Menu::Toggle("Rainbow Gun", Features::rbgun, [] { Features::RBGuner(Features::rbgun); });
			Menu::Toggle("Teleport Gun", Features::tpgun);
			Menu::Toggle("Rapid Fire", Features::rapidfirer);

		}
		break;
#pragma endregion
#pragma region Custom Impacts
		case customImpact:
		{
			Menu::Title("Stewie's");
			Menu::Break("CUSTOM IMPACT");

			Menu::Toggle("Toggle", Features::customImpactBool);
			Menu::Int("Explosion Type", Features::impactExplosion, 0, 38);
		}
		break;
#pragma endregion
#pragma endregion
#pragma region objectgun
		case objectgun:
		{

			Menu::Title("Stewie's");
			Menu::Break("OBJECT GUN");

			Menu::Toggle("Asteroid", Features::obj1);
			Menu::Toggle("Ramp", Features::obj2);
			Menu::Toggle("Windmill", Features::obj3);
			Menu::Toggle("Container", Features::obj4);
		}
		break;
#pragma endregion
#pragma region object
#pragma endregion
#pragma region weaponskin
		case Weaponskin:
		{
			Hash WeapHash;
			Menu::Title("Stewie's");
			Menu::Break("WEAPON TINTS");
			if (Menu::Option("Normal"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 0);
			}
			if (Menu::Option("Green"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 1);
			}
			if (Menu::Option("Gold"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 2);
			}
			if (Menu::Option("Pink"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 3);
			}
			if (Menu::Option("Army"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 4);
			}
			if (Menu::Option("LSPD"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 5);
			}
			if (Menu::Option("Orange"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 6);
			}
			if (Menu::Option("Platinum"))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &WeapHash, false);
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), WeapHash, 7);
			}
		}
		break;
#pragma endregion
#pragma region Spawner

		case objSpawner:
		{
			Menu::Title("Stewie's");
			Menu::Break("OBJECT OPTIONS");
			if (Menu::ListVector("All Props", propList, propListPos)) {
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				latestObj = SpawnObject(propList[propListPos], pos);
			}
			if (Menu::ListVector("Stunt Props", Stuntlist, StuntlistPos)) {
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				latestObj = SpawnObject(Stuntlist[StuntlistPos], pos);
			}
			if (Menu::ListVector("OG Skate Ramps", OGRampList, OGRampslistPos)) {
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				latestObj = SpawnObject(OGRampList[OGRampslistPos], pos);
			}
			if (Menu::ListVector("Peds", namedPedList, namedPedListPos)) {
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				DWORD model = GAMEPLAY::GET_HASH_KEY(namedPedList[namedPedListPos]);
				STREAMING::REQUEST_MODEL(model);
				while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
				latestObj = latestObj = PED::CREATE_PED(0, GAMEPLAY::GET_HASH_KEY(namedPedList[namedPedListPos]), pos.x, pos.y, pos.z, 0.f, 1, 1);
			}
			if (Menu::Option("Input Object")) {
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				latestObj = SpawnObject(CharKeyboard(), pos);
			}
			Menu::Toggle("Freeze On Spawn", freezeSpawn);
			Menu::Option("~r~SPAWNED OBJECTS");
			for (int i = 0; i < spwnObjC; i++)
			{
				if (ENTITY::DOES_ENTITY_EXIST(spwndObjects[i])) {
					if (Menu::MenuOption(spwndObjectsNames[i], editObj))
					{
						latestObj = spwndObjects[i];
						selecObj = i;
						Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
						Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
						MoveX = objCoords.x;
						MoveY = objCoords.y;
						MoveZ = objCoords.z;
						roll1 = objRot.y;
						yaw1 = objRot.z;
						pitch1 = objRot.x;
					}
				}
			}
		}
		break;
		case editObj:
		{
			Menu::Title("Stewie's");
			Menu::Break(spwndObjectsNames[selecObj]);

			if (Menu::Option("Delete")) {
				RequestControlOfEnt(latestObj);
				ENTITY::DELETE_ENTITY(&latestObj);
				spwndObjectsNames[selecObj] = NULL;
				spwndObjects[selecObj] = NULL;
				//MapModObjs.pop_back();
				Menu::MenuLevelHandler::BackMenu();
			}
			if (Menu::Toggle("Freeze", freezeObj)) {
				ENTITY::FREEZE_ENTITY_POSITION(latestObj, freezeObj);
			}
			if (Menu::Toggle("Collision", collisionObj)) {
				ENTITY::SET_ENTITY_COLLISION(latestObj, collisionObj, true);
			}
			if (Menu::Float("X", MoveX, -100000000.f, 100000000.f, .5f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_COORDS(latestObj, MoveX, objCoords.y, objCoords.z, objRot.x, objRot.y, objRot.z, false);
			}
			if (Menu::Float("Y", MoveY, -100000000.f, 100000000.f, .5f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_COORDS(latestObj, objCoords.x, MoveY, objCoords.z, objRot.x, objRot.y, objRot.z, false);
			}
			if (Menu::Float("Z", MoveZ, -100000000.f, 100000000.f, .5f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_COORDS(latestObj, objCoords.x, objCoords.y, MoveZ, objRot.x, objRot.y, objRot.z, false);
			}
			if (Menu::Float("Roll", roll1, 0.f, 360, 2.f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_ROTATION(latestObj, objRot.x, roll1, objRot.z, 1, true);
			}
			if (Menu::Float("Yaw", yaw1, 0.f, 360, 2.f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_ROTATION(latestObj, objRot.x, objRot.y, yaw1, 1, true);
			}
			if (Menu::Float("Pitch", pitch1, 0.f, 360, 2.f)) {
				RequestControlOfEnt(latestObj);
				Vector3 objCoords = ENTITY::GET_ENTITY_COORDS(latestObj, 1);
				Vector3 objRot = ENTITY::GET_ENTITY_ROTATION(latestObj, 0);
				ENTITY::SET_ENTITY_ROTATION(latestObj, pitch1, objRot.y, objRot.z, 1, true);
			}
		}
		break;
#pragma endregion
#pragma region KEYBINDS
		case keybinds:
		{


			Menu::Title("Stewie's");
			Menu::Break("KEYBINDS");

			Menu::Toggle("Numpad 9 TP To Waypoint", Features::tpToWayBool);



		}
		break;
#pragma endregion
#pragma region misc
		case worldoptions:
		{
			

			Menu::Title("Stewie's");
			Menu::Break("MISC OPTIONS");
			Menu::MenuOption("Keybinds", keybinds);
			Menu::Toggle("Unlimited Orbital Cannon", Features::Orbital, [] { Features::Orbi(Features::Orbital); });
			Menu::Toggle("Show FPS", Features::DisplayFPS, [] { Features::featureDisplayFPS(Features::DisplayFPS); });
			Menu::Toggle("Disable Phone", Features::phonedisable, [] { Features::disablephone(); });
			Menu::Toggle("Disable Idle Kick", Features::noidlekick, [] { Features::idlekicktoggle(Features::noidlekick); });
			Menu::MenuOption("Object Options", objSpawner);
			Menu::MenuOption("World Options", miscoptions);

		}
		break;
#pragma endregion
#pragma region ATM
		case ATM:
		{
			Menu::Title("Stewie's");
			Menu::Break("ATM OPTIONS");
			if (Menu::Option("Deposit 1 Mil")) {
				Features::deposit(1000000);
			}
			if (Menu::Option("Deposit 5 Mil")) {
				Features::deposit(5000000);
			}
			if (Menu::Option("Deposit 10 Mil")) {
				Features::deposit(10000000);
			}
			if (Menu::Option("Deposit 100 Mil")) {
				Features::deposit(100000000);
			}
			if (Menu::Option("Deposit 100 Mil")) {
				Features::deposit(100000000);
			}
			if (Menu::Option("Deposit 200 Mil")) {
				Features::deposit(200000000);
			}
			if (Menu::Option("Deposit 300 Mil")) {
				Features::deposit(300000000);
			}
			if (Menu::Option("Deposit 400 Mil")) {
				Features::deposit(400000000);
			}
			if (Menu::Option("Deposit 500 Mil")) {
				Features::deposit(500000000);
			}
			if (Menu::Option("Deposit 600 Mil")) {
				Features::deposit(600000000);
			}
			if (Menu::Option("Deposit 700 Mil")) {
				Features::deposit(700000000);
			}
			if (Menu::Option("Deposit 800 Mil")) {
				Features::deposit(800000000);
			}
			if (Menu::Option("Withdraw 1 Mil")) {
				Features::withdraw(1000000);
			}
			if (Menu::Option("Withdraw 5 Mil")) {
				Features::withdraw(5000000);
			}
			if (Menu::Option("Withdraw 10 Mil")) {
				Features::withdraw(10000000);
			}
			if (Menu::Option("Withdraw 100 Mil")) {
				Features::withdraw(100000000);
			}
			if (Menu::Option("Withdraw 200 Mil")) {
				Features::withdraw(200000000);
			}
			if (Menu::Option("Withdraw 300 Mil")) {
				Features::withdraw(300000000);
			}
			if (Menu::Option("Withdraw 400 Mil")) {
				Features::withdraw(400000000);
			}
			if (Menu::Option("Withdraw 500 Mil")) {
				Features::withdraw(500000000);
			}
			if (Menu::Option("Withdraw 600 Mil")) {
				Features::withdraw(600000000);
			}
			if (Menu::Option("Withdraw 700 Mil")) {
				Features::withdraw(700000000);
			}
			if (Menu::Option("Withdraw 800 Mil")) {
				Features::withdraw(800000000);
			}
		}
		break;
#pragma endregion
#pragma region Teleports
		case teleports:
		{
			Menu::Title("Stewie's");
			Menu::Break("TELEPORT OPTIONS");
			Menu::MenuOption("IPLs", ipl);
			if (Menu::Option("Teleport to Waypoint")) {
				teleport_to_marker();
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Waypoint ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Teleport In Nearest Vehicle")) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
				Vehicle veh = VEHICLE::GET_CLOSEST_VEHICLE(pos.x, pos.y, pos.z, 500.f, 0, 0);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(veh);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Nearest Vehicle ", "Stewie's", "Teleport");
			}

			if (Menu::Option("Bennys Garage")) {
				Vector3 Coords;
				Coords.x = -196.349442f; Coords.y = -1303.103271f; Coords.z = 30.650515f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				("MP0_USJS_COMPLETED", 1);
				IconNotification("Teleported To : Bennys Garage ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Strip Club")) {
				Vector3 Coords;
				Coords.x = 135.548096f; Coords.y = -1308.388306f; Coords.z = 28.344141f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Strip Club ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Darts")) {
				Vector3 Coords;
				Coords.x = 1997.273071f; Coords.y = 3062.091309f; Coords.z = 46.789749f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Darts ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Rockford Hills")) {
				Vector3 Coords;
				Coords.x = -1365.342163f; Coords.y = -114.440826f; Coords.z = 50.704300f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Rockford Hills ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Ammu-Nation")) {
				Vector3 Coords;
				Coords.x = 2571.371826f; Coords.y = 313.879608f; Coords.z = 107.970573f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Ammu-Nation ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Ponsonbys")) {
				Vector3 Coords;
				Coords.x = -1460.654419f; Coords.y = -227.550964f; Coords.z = 48.728519f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Ponsonbys ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Mask Shop")) {
				Vector3 Coords;
				Coords.x = -1342.185913f; Coords.y = -1280.013428f; Coords.z = 4.443256f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Mask Shop ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Mount Chiliad")) {
				Vector3 Coords;
				Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Mount Chiliad ", "Stewie's", "Teleport");
			}
			if (Menu::Option("McKenzie Airfield")) {
				Vector3 Coords;
				Coords.x = 2124.625732f; Coords.y = 4805.270020f; Coords.z = 40.479958f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : McKenzie Airfield ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Maze Bank")) {
				Vector3 Coords;
				Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Maze Bank ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Military Base")) {
				Vector3 Coords;
				Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Military Base ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Zancudo Tower")) {
				Vector3 Coords;
				Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Zancudo Tower ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Mask Shop")) {
				Vector3 Coords;
				Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Mask Shop ", "Stewie's", "Teleport");
			}
			if (Menu::Option("LS Customs")) {
				Vector3 Coords;
				Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : LS Customs ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Ammunation 2")) {
				Vector3 Coords;
				Coords.x = 247.3652; Coords.y = -45.8777; Coords.z = 69.9411;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Ammunation 2 ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Airport")) {
				Vector3 Coords;
				Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Airport ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Clothes Store")) {
				Vector3 Coords;
				Coords.x = -718.91; Coords.y = -158.16; Coords.z = 37.00;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Clothes Store ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Waterfall")) {
				Vector3 Coords;
				Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Waterfall ", "Stewie's", "Teleport");
			}
			if (Menu::Option("FBI")) {
				Vector3 Coords;
				Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : FBI ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Human Labs")) {
				Vector3 Coords;
				Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Human Labs ", "Stewie's", "Teleport");
			}
			if (Menu::Option("MMI")) {
				Vector3 Coords;
				Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : MMI ", "Stewie's", "Teleport");
			}
			if (Menu::Option("Sandy Shores Airfield")) {
				Vector3 Coords;
				Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
				TPto(Coords);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
				IconNotification("Teleported To : Sandy Shores Airfield ", "Stewie's", "Teleport");
			}
		}
		break;
#pragma endregion
#pragma region Weather Options
		case weatheroptions:
		{
			Menu::Title("Stewie's");
			Menu::Break("WEATHER OPTIONS");
			Menu::Toggle("Snow (Online)", globalHandle(0x40001 + 0x1271).As<bool>());
			if (Menu::Option("Sun")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clear"); }
			if (Menu::Option("Rain")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clearing"); }
			if (Menu::Option("Snow")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Snowlight"); }
			if (Menu::Option("Thunder")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Thunder"); }
			if (Menu::Option("Blizzard")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Blizzard"); }
			if (Menu::Option("Overcast")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Overcast"); }
			if (Menu::Option("Foggy")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Foggy"); }
			if (Menu::Option("Smog")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Smog"); }
			if (Menu::Option("Clouds")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clouds"); }
			if (Menu::Option("Christmas")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("XMAS"); }
			if (Menu::Option("Halloween")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Halloween"); }
		}
		break;
#pragma endregion
#pragma region ride Options
		case rideanimals:
		{
			Menu::Title("Stewie's");
			Menu::Break("RIDE OPTIONS");
			if (Menu::Option("Stop Ride")) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				ENTITY::DETACH_ENTITY(playerPed, 1, 1);
				AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
			if (Menu::Option("Ride Deer")) {
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_deer");
				STREAMING::REQUEST_MODEL(stripper);
				while (!STREAMING::HAS_MODEL_LOADED(stripper))
					WAIT(0);

				int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
				PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
				PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				//				SET_ENTITY_HEADING(createdPED, 180.0f);

				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

				//deer animation
				char *anim = "creatures@deer@move";
				char *animID = "trot";

				STREAMING::REQUEST_ANIM_DICT(anim);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim))
					WAIT(0);

				AI::TASK_PLAY_ANIM(createdPED, anim, animID, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				//charPose
				char *anim2 = "mp_safehouselost_table@";
				char *animID2 = "lost_table_negative_a";

				STREAMING::REQUEST_ANIM_DICT(anim2);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
					WAIT(0);

				AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

			}
			if (Menu::Option("Sit On Deer")) {
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_deer");
				STREAMING::REQUEST_MODEL(stripper);
				while (!STREAMING::HAS_MODEL_LOADED(stripper))
					WAIT(0);

				int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
				PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
				PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				//				SET_ENTITY_HEADING(createdPED, 180.0f);

				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

				//charPose
				char *anim2 = "mp_safehouselost_table@";
				char *animID2 = "lost_table_negative_a";

				STREAMING::REQUEST_ANIM_DICT(anim2);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
					WAIT(0);

				AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			}
			if (Menu::Option("Ride Walking Deer")) {
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_deer");
				STREAMING::REQUEST_MODEL(stripper);
				while (!STREAMING::HAS_MODEL_LOADED(stripper))
					WAIT(0);

				int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
				PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
				PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				//				SET_ENTITY_HEADING(createdPED, 180.0f);

				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

				//deer animation
				char *anim = "creatures@deer@move";
				char *animID = "walk";

				STREAMING::REQUEST_ANIM_DICT(anim);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim))
					WAIT(0);

				AI::TASK_PLAY_ANIM(createdPED, anim, animID, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				//charPose
				char *anim2 = "mp_safehouselost_table@";
				char *animID2 = "lost_table_negative_a";

				STREAMING::REQUEST_ANIM_DICT(anim2);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
					WAIT(0);

				AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			}
			if (Menu::Option("Ride Cow")) {
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_cow");
				STREAMING::REQUEST_MODEL(stripper);
				while (!STREAMING::HAS_MODEL_LOADED(stripper))
					WAIT(0);

				int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
				PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
				PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				//				SET_ENTITY_HEADING(createdPED, 180.0f);

				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

				//charPose
				char *anim2 = "mp_safehouselost_table@";
				char *animID2 = "lost_table_negative_a";

				STREAMING::REQUEST_ANIM_DICT(anim2);
				while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
					WAIT(0);

				AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);
			}

		}
		break;
#pragma endregion
#pragma region Attach Options
		case attachoptions:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			Menu::Title("Stewie's");
			Menu::Break("ATTACH OPTIONS");
			if (Menu::Option("Plate")) { Features::attachobjects2("p_oil_slick_01"); }
			if (Menu::Option("EMP")) { Features::attachobjects2("hei_prop_heist_emp"); }
			if (Menu::Option("Orange Ball")) { Features::attachobjects2("prop_juicestand"); }
			if (Menu::Option("Weed")) { Features::attachobjects2("prop_weed_01"); }
			if (Menu::Option("Safe")) { Features::attachobjects2("p_v_43_safe_s"); }
			if (Menu::Option("Ufo")) { Features::attachobjects2("p_spinning_anus_s"); }
			if (Menu::Option("Toilet")) { Features::attachobjects2("prop_ld_toilet_01"); }
			if (Menu::Option("Christmas Tree")) { Features::attachobjects2("prop_xmas_tree_int"); }
			if (Menu::Option("Windmill")) { Features::attachobjects2("prop_windmill_01"); }
			if (Menu::Option("Radar")) { Features::attachobjects2("prop_air_bigradar"); }
			char* objects[136] = { "prop_bskball_01", "PROP_MP_RAMP_03", "PROP_MP_RAMP_02", "PROP_MP_RAMP_01", "PROP_JETSKI_RAMP_01", "PROP_WATER_RAMP_03", "PROP_VEND_SNAK_01", "PROP_TRI_START_BANNER", "PROP_TRI_FINISH_BANNER", "PROP_TEMP_BLOCK_BLOCKER", "PROP_SLUICEGATEL", "PROP_SKIP_08A", "PROP_SAM_01", "PROP_RUB_CONT_01B", "PROP_ROADCONE01A", "PROP_MP_ARROW_BARRIER_01", "PROP_HOTEL_CLOCK_01", "PROP_LIFEBLURB_02", "PROP_COFFIN_02B", "PROP_MP_NUM_1", "PROP_MP_NUM_2", "PROP_MP_NUM_3", "PROP_MP_NUM_4", "PROP_MP_NUM_5", "PROP_MP_NUM_6", "PROP_MP_NUM_7", "PROP_MP_NUM_8", "PROP_MP_NUM_9", "prop_xmas_tree_int", "prop_bumper_car_01", "prop_beer_neon_01", "prop_space_rifle", "prop_dummy_01", "prop_rub_trolley01a", "prop_wheelchair_01_s", "PROP_CS_KATANA_01", "PROP_CS_DILDO_01", "prop_armchair_01", "prop_bin_04a", "prop_chair_01a", "prop_dog_cage_01", "prop_dummy_plane", "prop_golf_bag_01", "prop_arcade_01", "hei_prop_heist_emp", "prop_alien_egg_01", "prop_air_towbar_01", "hei_prop_heist_tug", "prop_air_luggtrolley", "PROP_CUP_SAUCER_01", "prop_wheelchair_01", "prop_ld_toilet_01", "prop_acc_guitar_01", "prop_bank_vaultdoor", "p_v_43_safe_s", "p_spinning_anus_s", "prop_can_canoe", "prop_air_woodsteps", "Prop_weed_01", "prop_a_trailer_door_01", "prop_apple_box_01", "prop_air_fueltrail1", "prop_barrel_02a", "prop_barrel_float_1", "prop_barrier_wat_03b", "prop_air_fueltrail2", "prop_air_propeller01", "prop_windmill_01", "prop_Ld_ferris_wheel", "p_tram_crash_s", "p_oil_slick_01", "p_ld_stinger_s", "p_ld_soc_ball_01", "prop_juicestand", "p_oil_pjack_01_s", "prop_barbell_01", "prop_barbell_100kg", "p_parachute1_s", "p_cablecar_s", "prop_beach_fire", "prop_lev_des_barge_02", "prop_lev_des_barge_01", "prop_a_base_bars_01", "prop_beach_bars_01", "prop_air_bigradar", "prop_weed_pallet", "prop_artifact_01", "prop_attache_case_01", "prop_large_gold", "prop_roller_car_01", "prop_water_corpse_01", "prop_water_corpse_02", "prop_dummy_01", "prop_atm_01", "hei_prop_carrier_docklight_01", "hei_prop_carrier_liferafts", "hei_prop_carrier_ord_03", "hei_prop_carrier_defense_02", "hei_prop_carrier_defense_01", "hei_prop_carrier_radar_1", "hei_prop_carrier_radar_2", "hei_prop_hei_bust_01", "hei_prop_wall_alarm_on", "hei_prop_wall_light_10a_cr", "prop_afsign_amun", "prop_afsign_vbike", "prop_aircon_l_01", "prop_aircon_l_02", "prop_aircon_l_03", "prop_aircon_l_04", "prop_airhockey_01", "prop_air_bagloader", "prop_air_blastfence_01", "prop_air_blastfence_02", "prop_air_cargo_01a", "prop_air_chock_01", "prop_air_chock_03", "prop_air_gasbogey_01", "prop_air_generator_03", "prop_air_stair_02", "prop_amb_40oz_02", "prop_amb_40oz_03", "prop_amb_beer_bottle", "prop_amb_donut", "prop_amb_handbag_01", "prop_amp_01", "prop_anim_cash_pile_02", "prop_asteroid_01", "prop_arm_wrestle_01", "prop_ballistic_shield", "prop_bank_shutter", "prop_barier_conc_02b", "prop_barier_conc_05a", "prop_barrel_01a", "prop_bar_stool_01", "prop_basejump_target_01" };

			if (Menu::Option("Delete All Objects")) {
				for (int i = 0; i < 5; i++) {
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 1);
					GAMEPLAY::CLEAR_AREA_OF_PEDS(coords.x, coords.y, coords.z, 2, 0);
					GAMEPLAY::CLEAR_AREA_OF_OBJECTS(coords.x, coords.y, coords.z, 2, 0);
					GAMEPLAY::CLEAR_AREA_OF_VEHICLES(coords.x, coords.y, coords.z, 2, 0, 0, 0, 0, 0);
					for (int i = 0; i < 136; i++) {
						Object obj = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(coords.x, coords.y, coords.z, 4.0, GAMEPLAY::GET_HASH_KEY(objects[i]), 0, 0, 1);

						if (ENTITY::DOES_ENTITY_EXIST(obj) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obj, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer))) {
							RequestControlOfEnt(obj);
							int netID = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(obj);
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(netID, 1);
							Features::RequestControlOfid(netID);
							ENTITY::DETACH_ENTITY(obj, 1, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(obj)) {
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obj, 1, 1);
								ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&obj);
								ENTITY::DELETE_ENTITY(&obj);
							}
						}
					}
				}
			}
		}
		break;
#pragma endregion

#pragma region Misc Options
		case miscoptions:
		{
			
			Menu::Title("Stewie's");
			Menu::Break("WORLD OPTIONS");
			Menu::MenuOption("Weather", weatheroptions);
			Menu::MenuOption("Map Mods", mapmods);
			Menu::Toggle("Kill Peds", Features::killpedsbool);
			Menu::Toggle("Explode Peds", Features::explodepedsbool);
			Menu::Toggle("Explode Cars", Features::explodenearbyvehiclesbool);
			Menu::Toggle("Delete Cars", Features::deletenearbyvehiclesbool);
			Menu::Toggle("Rainbow Cars", Features::rainbowcarbool);
			if (Menu::Int("Wave Intensity", Features::WaterIntense, 0, 100)) {
				WATER::_SET_CURRENT_INTENSITY(Features::WaterIntense);
			}
			if (Menu::Toggle("Moon Gravity", MoonGravity)) {
				GAMEPLAY::SET_GRAVITY_LEVEL(MoonGravity ? 2 : 0);
			}
			Menu::Int("Choose Time", timeer, 0, 24);
			if (Menu::Option("Set Time")) { NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(timeer, 0, 0); }
		}
		break;
#pragma endregion
#pragma region Outfit Creator
		case OutfitCreator:
		{

			Menu::Title("Stewie's");
			Menu::Break("OUTFIT CREATOR");
			Menu::Int("Hats", Face_, 0, 55); { PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, Face_, 0, 1); }
			Menu::Int("Glasses", Glasses_, 0, 23); { PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, Glasses_, 0, 1); }
			Menu::Int("Ears", Ears_, 0, 3); { PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 2, Ears_, 0, 1); }
			Menu::Int("Torso invisible", Torso_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, Torso_, 0, 1); }
			Menu::Int("Torso", Torso2_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, Torso2_, 0, 1); }
			Menu::Int("Legs", Legs_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, Legs_, 0, 1); }
			Menu::Int("Hands", Hands_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, Hands_, 0, 1); }
			Menu::Int("Watches", Watches_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, Watches_, 0, 1); }
			Menu::Int("Special 1", Special1_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, Special1_, 0, 1); }
			Menu::Int("Special 2", Special2_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, Special2_, 0, 1); }
			Menu::Int("Special 3", Special3_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, Special3_, 0, 1); }
			Menu::Int("Texture", Texture_, 0, 50); { PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, Texture_, 0, 1); }



		}
		break;
#pragma endregion
#pragma region Outfits
		case outfits:
		{
			Menu::Title("Stewie's");
			Menu::Break("OUTFIT OPTIONS");
			Menu::MenuOption("Outfit Creator", OutfitCreator);
			Menu::MenuOption("Preset Men Outfits", outfitmen);
			Menu::MenuOption("Preset Women Outfits", outfitwomen);
			if (Menu::Option("Default Outfit")) { PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID()); }
			if (Menu::Option("Random Outfit")) { PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), true); }

		}
		break;
#pragma endregion
#pragma region Men Outfits
		case outfitmen:
		{

			Menu::Title("Stewie's");
			Menu::Break("PRESET MEN OUTFITS");

			if (Menu::Option("Swat")) {
				Swat();
			}
			if (Menu::Option("Rockstar Logo")) {
				rlogo();
			}
			if (Menu::Option("Ghost")) {
				ghost();
			}
			if (Menu::Option("Splinter")) {
				Splinter();
			}
			if (Menu::Option("Pilot")) {
				Pilot();
			}
			if (Menu::Option("Balla")) {
				Balla();
			}
			if (Menu::Option("Elf")) {
				Elf();
			}
			if (Menu::Option("Thug")) {
				Thug();
			}
			if (Menu::Option("Santa")) {
				Santa();
			}
			if (Menu::Option("Security")) {
				TheSecurityMen();
			}
			if (Menu::Option("The Families")) {
				TheFamilies();
			}
			if (Menu::Option("Cop")) {
				MenCop();
			}
		}
		break;
#pragma endregion
#pragma region Women Outfits
		case outfitwomen:
		{
			Menu::Title("Stewie's");
			Menu::Break("PRESET WOMEN OUTFITS");

			if (Menu::Option("Pilot")) {
				WomenPilot();
			}
			if (Menu::Option("The Strength")) {
				WomenTheStrength();
			}
			if (Menu::Option("Business")) {
				TheBusiness();
			}
			if (Menu::Option("Security")) {
				TheSecurity();
			}
			if (Menu::Option("Biker")) {
				TheBiker();
			}
			if (Menu::Option("Cop")) {
				WomenCop();
			}
			if (Menu::Option("The Whore")) {
				TheWhore();
			}
		}
		break;
#pragma endregion
#pragma region All Players Cash Drop
		case dropAll:
		{
			Menu::Title("Stewie's");
			Menu::Break("ALL PLAYERS CASH DROP");

			Menu::Toggle("Toggle", Features::DropAll);
			Menu::Int("Amount", Features::DropAmount, 1, 2500, 10);
			Menu::Int("Height", Features::DropHeight, 1, 50, 5);
			Menu::Int("Delay", Features::DropDelay, 50, 1000, 10);
		}
		break;
#pragma endregion
#pragma region Session Weather Changer
		case sessionweather:
		{
			Menu::Title("Stewie's");
			Menu::Break("SESSION WEATHER");

			if (Menu::Option("EXTRASUNNY")) {
				EXTRASUNNY();
			}
			if (Menu::Option("CLEAR")) {
				CLEAR();
			}
			if (Menu::Option("CLOUDS")) {
				CLOUDS();
			}
			if (Menu::Option("SMOG")) {
				SMOG();
			}
			if (Menu::Option("FOGGY")) {
				FOGGY();
			}
			if (Menu::Option("OVERCAST")) {
				OVERCAST();
			}
			if (Menu::Option("RAIN")) {
				RAIN();
			}
			if (Menu::Option("THUNDER")) {
				THUNDER();
			}
			if (Menu::Option("CLEARING")) {
				CLEARING();
			}
			if (Menu::Option("NEUTRAL")) {
				NEUTRAL();
			}
			if (Menu::Option("SNOW")) {
				SNOW();
			}
			if (Menu::Option("BLIZZARD")) {
				BLIZZARD();
			}
			if (Menu::Option("SNOWLIGHT")) {
				SNOWLIGHT();
			}
			if (Menu::Option("XMAS")) {
				XMAS();
			}
			if (Menu::Option("HALLOWEEN")) {
				HALLOWEEN();
			}
		}
		break;
#pragma endregion
#pragma region All Players
		case allplayers:
		{
			Menu::Title("Stewie's");
			Menu::Break("ALL PLAYER OPTIONS");
			Menu::MenuOption("Session Weather Changer", sessionweather);
			Menu::Toggle("ESP", Features::esper, [] {});
			Menu::Toggle("Name Tag ESP", Features::NameESP, [] { Features::NameTagESP(Features::NameESP); });
			
			if (Menu::Option("Cage All Players")) {
				Features::trapall();
			}		
			if (Menu::Option("Kick All From Car")) {
				for (int i = 0; i < 32; i++)
				{
					if (i != PLAYER::PLAYER_ID())
					{
						RequestControlOfEnt(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
					}
				}
			};
			if (Menu::Option("Clone All Players"))
			{
				for (int i = 0; i < 32; i++)
				{
					int excludeMe = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
					if (excludeMe > 0 && excludeMe != PLAYER::PLAYER_PED_ID())
					{
						Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
						Ped playerPed = PLAYER::PLAYER_PED_ID();
						{
							PED::CLONE_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 1, 1, 1);
						}


					}
				}
			}
			if (Menu::Option("Explode All")) {
				for (int i = 0; i < 33; i++)
				{
					if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) == PLAYER::PLAYER_PED_ID()) continue;
					{
						Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), false);
						FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 100.f);
					}
				}
			}

		}
		break;
#pragma endregion
#pragma region Wanted Level
		case wantedlevel:
		{
			

			Menu::Title("Stewie's");
			Menu::Break("WANTED LEVEL OPTIONS");

			Menu::Toggle("Never Wanted", Features::Neverwanted, [] { Features::NeverGetWanted(Features::Neverwanted);  });
			Menu::Toggle("Always Wanted", Features::Alwayswanted, [] { Features::alwayswanted(Features::Alwayswanted);  });
			Menu::Toggle("6 Star Wanted", Features::sixstarwanted, [] { Features::sixwanted(Features::sixstarwanted);  });
			Menu::Int("Custom Wanted Level", Features::playerWantedLevel, 0, 5, [] { Features::ChangeWanted(Features::playerWantedLevel); });

		}
		break;
#pragma endregion
#pragma region Player Menu
		case playermenu:
		{
			Menu::Title("Stewie's");
			Menu::Break("SELF OPTIONS");
			Menu::MenuOption("Animations", anim);
			Menu::MenuOption("Effects", PTFX);
			Menu::MenuOption("Ride Options", rideanimals);
			Menu::MenuOption("Outfits", outfits);
			Menu::MenuOption("Visions", visions);
			Menu::MenuOption("Particle Man Options", particleman);
			Menu::MenuOption("Wanted Level Options", wantedlevel);
			Menu::Toggle("God Mode", Features::playerGodMode, [] { Features::GodMode(Features::playerGodMode);  });
			if (Menu::Int("Player Alpha", playerAlpha, 0, 255)) { ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), playerAlpha, 0); }
			Menu::Toggle("No Ragdoll", Features::NoRagdoll, [] { Features::noRagdoll(Features::NoRagdoll); });
			Menu::Toggle("Invisible", Features::playerinvisibility, [] { Features::Invisibility(Features::playerinvisibility);  });
			if (Menu::Toggle("Slow Motion", slowMotion)) {
				if (slowMotion) { GAMEPLAY::SET_TIME_SCALE(0.6f); }
				else { GAMEPLAY::SET_TIME_SCALE(1.f); }
			}
			Menu::Toggle("Fire Breath", Features::FIREBREATH, [] { Features::firebreath(Features::FIREBREATH); });
			Menu::Toggle("Off The Radar", Features::orbool, [] { Features::OffRadar(Features::orbool); });
			Menu::Toggle("Ultra Jump", Features::UltraJump, [] { Features::ultrajump(Features::UltraJump); });
			Menu::Toggle("Extreme Run", Features::ExtremeRun, [] { Features::extremeRun(Features::ExtremeRun); });
			Menu::Toggle("Super Man", Features::superman, [] { Features::Superman(Features::superman); });
			Menu::Toggle("Super Jump", Features::playersuperjump, [] { Features::SuperJump(Features::playersuperjump); });
			Menu::Toggle("Fast Run", Features::fastrun, [] { Features::RunFast(Features::fastrun);  });
			Menu::Toggle("Fast Swim", Features::fastswim, [] { Features::SwimFast(Features::fastswim);  });
			Menu::Toggle("No-Clip", Features::flybool, [] { Features::playerflyer(Features::flybool); IconNotification("Buttons : [SPACE] [SHIFT] [W] [A] [S] [D]", "Stewie's", "No-Clip"); });
			Menu::Toggle("Tiny Player", Features::betiny, [] { Features::TinyPlayer(Features::betiny); });
			Menu::Option("Clean Ped", [] { int Ped = PLAYER::PLAYER_PED_ID(); PED::CLEAR_PED_BLOOD_DAMAGE(Ped); PED::RESET_PED_VISIBLE_DAMAGE(Ped); });
			Menu::Option("Max Armor", [] { PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), 10000); });
			if (Menu::Option("Refill Health")) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				ENTITY::SET_ENTITY_HEALTH(playerPed, ENTITY::GET_ENTITY_MAX_HEALTH(playerPed));
				PED::ADD_ARMOUR_TO_PED(playerPed, PLAYER::GET_PLAYER_MAX_ARMOUR(player) - PED::GET_PED_ARMOUR(playerPed));
				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
				{
					Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
					if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
						VEHICLE::SET_VEHICLE_FIXED(playerVeh);
				}
			}
			if (Menu::Option("~r~Kill Your Self")) { Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_ENTITY_HEALTH }, 0); }
		}
		break;
#pragma endregion
#pragma region LSC
		case tiresmoke:
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
			BOOL bPlayerExists = ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID());


			const float lineWidth = 260.0;
			const int lineCount = 10;

			int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);

			Menu::Title("Stewie's");
			Menu::Break("TIRE SMOKE");
			if (Menu::Option("White")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 254, 254, 254);
				IconNotification("Tire Smoke: White", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Black")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 1, 1, 1);
				IconNotification("Tire Smoke: ~w~Black", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Blue")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 0, 0, 255);
				IconNotification("Tire Smoke: ~b~Blue", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Yellow")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 255, 255, 0);
				IconNotification("Tire Smoke: ~y~Yellow", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Purple")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 150, 0, 255);
				IconNotification("Tire Smoke: ~p~Purple", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Orange")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 255, 175, 0);
				IconNotification("Tire Smoke: ~o~Orange", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Green")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 0, 255, 0);
				IconNotification("Tire Smoke: ~g~Green", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Red")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 255, 0, 0);
				IconNotification("Tire Smoke: ~r~Red", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("Pink")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 255, 0, 0);
				IconNotification("Tire Smoke: ~p~Pink", "Stewie's", "Tiresmoke");
			}
			if (Menu::Option("~r~P~w~A~b~T~r~R~w~I~b~O~r~T")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				VEHICLE::TOGGLE_VEHICLE_MOD(VehID, 20, 1);
				VEHICLE::SET_VEHICLE_MOD_KIT(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehID, 0);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(VehID, 0, 0, 0);
				IconNotification("Tire Smoke: ~r~P~w~A~b~T~r~R~w~I~b~O~r~T", "Stewie's", "Tiresmoke");
			}
		}
		break;
#pragma endregion
#pragma region LSC
		case LSC:
		{
			Menu::Title("Stewie's");
			Menu::Break("LOS SANTOS CUSTOMS");
			Menu::MenuOption("Armor", Armor);
			Menu::MenuOption("Engine", Engine);
			Menu::MenuOption("Brakes", Armor);
			Menu::MenuOption("Spoilers", Spoiler);
			Menu::MenuOption("Skirts", Skirt);
			Menu::MenuOption("Suspension", Suspension);
			Menu::MenuOption("Transmission", Transmission);
			Menu::MenuOption("Paint", Paint);
			Menu::MenuOption("Tire Smoke", tiresmoke);
		}
		break;
#pragma endregion
#pragma region Armor
		case Armor:
		{
			int Armor = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("ARMOR");
			if (Menu::Option("Reset To 0")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Armor, 0); VEHICLE::SET_VEHICLE_MOD(Armor, 16, 0, 0); IconNotification("Armor: Resetted To 0", "Stewie's", "Armor");
			}
			if (Menu::Option("Level 1")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Armor, 0); VEHICLE::SET_VEHICLE_MOD(Armor, 16, 1, 0); IconNotification("Armor: Level 1", "Stewie's", "Armor");
			}
			if (Menu::Option("Level 2")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Armor, 0); VEHICLE::SET_VEHICLE_MOD(Armor, 16, 2, 0); IconNotification("Armor: Level 2", "Stewie's", "Armor");
			}
			if (Menu::Option("Level 3")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Armor, 0); VEHICLE::SET_VEHICLE_MOD(Armor, 16, 3, 0); IconNotification("Armor: Level 3", "Stewie's", "Armor");
			}
			if (Menu::Option("Level 4")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Armor, 0); VEHICLE::SET_VEHICLE_MOD(Armor, 16, 4, 0); IconNotification("Armor: Level 4", "Stewie's", "Armor");
			}
		}
		break;
#pragma endregion
#pragma region Armor
		case Engine:
		{
			int vehicleID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("ENGINE");
			if (Menu::Option("Reset To 0")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicleID, 0); VEHICLE::SET_VEHICLE_MOD(vehicleID, 11, 0, 0); IconNotification("Engine: Resetted To 0", "Stewie's", "Engine");
			}
			if (Menu::Option("Level 1")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicleID, 0); VEHICLE::SET_VEHICLE_MOD(vehicleID, 11, 1, 0); IconNotification("Engine: Resetted To 1", "Stewie's", "Engine");
			}
			if (Menu::Option("Level 2")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicleID, 0); VEHICLE::SET_VEHICLE_MOD(vehicleID, 11, 2, 0); IconNotification("Engine: Resetted To 2", "Stewie's", "Engine");
			}
			if (Menu::Option("Level 3")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicleID, 0); VEHICLE::SET_VEHICLE_MOD(vehicleID, 11, 3, 0); IconNotification("Engine: Resetted To 3", "Stewie's", "Engine");
			}
			if (Menu::Option("Level 4")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicleID, 0); VEHICLE::SET_VEHICLE_MOD(vehicleID, 11, 4, 0); IconNotification("Engine: Resetted To 4", "Stewie's", "Engine");
			}
		}
		break;
#pragma endregion
#pragma region Brakes
		case Brakes:
		{
			int Brakes = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("BRAKES");
			if (Menu::Option("Stock")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Brakes, 0); VEHICLE::REMOVE_VEHICLE_MOD(Brakes, 12); IconNotification("Brakes: Stock", "Stewie's", "Brakes");
			}
			if (Menu::Option("Street")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Brakes, 0); VEHICLE::SET_VEHICLE_MOD(Brakes, 12, 0, 0); IconNotification("Brakes: Street", "Stewie's", "Brakes");
			}
			if (Menu::Option("Sports")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Brakes, 0); VEHICLE::SET_VEHICLE_MOD(Brakes, 12, 1, 0); IconNotification("Brakes: Sports", "Stewie's", "Brakes");
			}
			if (Menu::Option("Race")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Brakes, 0); VEHICLE::SET_VEHICLE_MOD(Brakes, 12, 2, 0); IconNotification("Brakes: Race", "Stewie's", "Brakes");
			}

		}
		break;
#pragma endregion
#pragma region Spoiler
		case Spoiler:
		{
			int Spoiler = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("SPOILER");
			if (Menu::Option("Stock")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Spoiler, 0); VEHICLE::SET_VEHICLE_MOD(Spoiler, 0, 0, 0); IconNotification("Spoiler: Stock", "Stewie's", "Spoiler");
			}
			if (Menu::Option("1")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Spoiler, 0); VEHICLE::SET_VEHICLE_MOD(Spoiler, 0, 1, 0); IconNotification("Spoiler: 1", "Stewie's", "Spoiler");
			}
			if (Menu::Option("2")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Spoiler, 0); VEHICLE::SET_VEHICLE_MOD(Spoiler, 0, 2, 0); IconNotification("Spoiler: 2", "Stewie's", "Spoiler");
			}
			if (Menu::Option("3")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Spoiler, 0); VEHICLE::SET_VEHICLE_MOD(Spoiler, 0, 3, 0); IconNotification("Spoiler: 3", "Stewie's", "Spoiler");
			}
		}
		break;
#pragma endregion
#pragma region Skirts
		case Skirt:
		{
			int Skirt = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("SKIRTS");
			if (Menu::Option("Skirts 1")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Skirt, 0); VEHICLE::SET_VEHICLE_MOD(Skirt, 3, 0, 0); IconNotification("Side Skirts: Skirts 1", "Stewie's", "Skirts");
			}
			if (Menu::Option("Skirts 2")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Skirt, 0); VEHICLE::SET_VEHICLE_MOD(Skirt, 3, 1, 0); IconNotification("Side Skirts: Skirts 2", "Stewie's", "Skirts");
			}
			if (Menu::Option("Skirts 3")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Skirt, 0); VEHICLE::SET_VEHICLE_MOD(Skirt, 3, 2, 0); IconNotification("Side Skirts: Skirts 3", "Stewie's", "Skirts");
			}
			if (Menu::Option("Skirts 4")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Skirt, 0); VEHICLE::SET_VEHICLE_MOD(Skirt, 3, 3, 0); IconNotification("Side Skirts: Skirts 4", "Stewie's", "Skirts");
			}
			if (Menu::Option("Skirts 5")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Skirt, 0); VEHICLE::SET_VEHICLE_MOD(Skirt, 3, 4, 0); IconNotification("Side Skirts: Skirts 5", "Stewie's", "Skirts");
			}
		}
		break;
#pragma endregion
#pragma region Suspensions
		case Suspension:
		{
			int Suspen = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("SUSPENSIONS");
			if (Menu::Option("Stock")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Suspension, 0); VEHICLE::SET_VEHICLE_MOD(Suspension, 3, 4, 0); IconNotification("Suspension: Stock", "Stewie's", "Suspension");
			}
			if (Menu::Option("Lowered")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Suspension, 0); VEHICLE::SET_VEHICLE_MOD(Suspension, 3, 4, 0); IconNotification("Suspension: Lowered", "Stewie's", "Suspension");
			}
			if (Menu::Option("Street")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Suspension, 0); VEHICLE::SET_VEHICLE_MOD(Suspension, 3, 4, 0); IconNotification("Suspension: Street", "Stewie's", "Suspension");
			}
			if (Menu::Option("Sports")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Suspension, 0); VEHICLE::SET_VEHICLE_MOD(Suspension, 3, 4, 0); IconNotification("Suspension: Sports", "Stewie's", "Suspension");
			}
			if (Menu::Option("Competition")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Suspension, 0); VEHICLE::SET_VEHICLE_MOD(Suspension, 3, 4, 0); IconNotification("Suspension: Competition", "Stewie's", "Suspension");
			}

		}
		break;
#pragma endregion
#pragma region Paint
		case Transmission:
		{
			int Trans = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			Menu::Title("Stewie's");
			Menu::Break("TRANSMISSION");
			if (Menu::Option("Stock")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Transmission, 0); VEHICLE::SET_VEHICLE_MOD(Transmission, 3, 4, 0); IconNotification("Transmission: Stock", "Stewie's", "Transmission");
			}
			if (Menu::Option("Street")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Transmission, 0); VEHICLE::SET_VEHICLE_MOD(Transmission, 3, 4, 0); IconNotification("Transmission: Street", "Stewie's", "Transmission");
			}
			if (Menu::Option("Sports")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Transmission, 0); VEHICLE::SET_VEHICLE_MOD(Transmission, 3, 4, 0); IconNotification("Transmission: Sports", "Stewie's", "Transmission");
			}
			if (Menu::Option("Race")) {
				VEHICLE::SET_VEHICLE_MOD_KIT(Transmission, 0); VEHICLE::SET_VEHICLE_MOD(Transmission, 3, 4, 0); IconNotification("Transmission: Race", "Stewie's", "Transmission");
			}
		}
		break;
#pragma endregion
#pragma region Paint
		case crewpaint:
		{

			Menu::Title("Stewie's");
			Menu::Break("CREW / MODDED COLORS");

			if (Menu::Option("Mint Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 3, 255, 171); IconNotification("Paint: Mint Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Shiny Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 5, 5, 255); IconNotification("Paint: Shiny Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Joker Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 2, 153, 57); IconNotification("Paint: Joker Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Pindel Pink")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 247, 136, 206); IconNotification("Paint: Pindel Pink (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Bleek Banana")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 236, 255, 140); IconNotification("Paint: Bleek Banana (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Water Melon")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 187, 235, 42); IconNotification("Paint: Water Melon (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Magnetic Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 73, 76, 153); IconNotification("Paint: Magnetic Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Aqua Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 66, 208, 255); IconNotification("Paint: Aqua Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Toxic Yellow")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 221, 255, 3); IconNotification("Paint: Toxic Yellow (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Epsilon Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 135, 197, 245); IconNotification("Paint: Epsilon Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Digital Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 0, 255, 0); IconNotification("Paint: Digital Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Bright Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 96, 62, 148); IconNotification("Paint: Bright Purple (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Pink")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 255, 105, 180); IconNotification("Paint: Neon Pink (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Pink 2")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 255, 73, 234); IconNotification("Paint: Neon Pink 2 (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Bright Gold")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 227, 190, 70); IconNotification("Paint: Bright Gold (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Turkey Stuffer Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 22, 161, 18); IconNotification("Paint: Turkey Stuffer Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 5, 193, 255); IconNotification("Paint: Neon Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Kifflom")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 135, 197, 245); IconNotification("Paint: Kifflom (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("3rd Street Saints Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 96, 62, 148); IconNotification("Paint: 3rd Street Saints Purple (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Light Gold Chrome")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 227, 190, 70); IconNotification("Paint: Light Gold Chrome (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Dark Gold Chrome")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 251, 184, 41); IconNotification("Paint: Dark Gold Chrome (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Black Crew Color")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 3, 3, 3); IconNotification("Paint: Black Crew Color (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("White Crew Color")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 255, 255, 255); IconNotification("Paint: White Crew Color (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Detox Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 157, 153, 188); IconNotification("Paint: Detox Purple (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Glossy Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 0, 70, 0); IconNotification("Paint: Glossy Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Flirty Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 58, 5, 94); IconNotification("Paint: Flirty Purple (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Bold Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 107, 33, 76); IconNotification("Paint: Bold Purple (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 22, 161, 18); IconNotification("Paint: Neon Green (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Green 2")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 127, 255, 150); IconNotification("Paint: Neon Green 2 (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Great Color")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 14, 0, 14); IconNotification("Paint: Great Color (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Great Color 2")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 185, 118, 237); IconNotification("Paint: Great Color 2 (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Sky Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 127, 200, 255); IconNotification("Paint: Sky Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Sky Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 123, 255, 255); IconNotification("Paint: Neon Sky Blue (Crew / Modded)", "Stewie's", "Paint");
			}
			if (Menu::Option("Blue Cheat")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 155, 200, 255); IconNotification("Paint: Blue Cheat (Crew / Modded)", "Stewie's", "Paint");
			}


		}
		break;
#pragma endregion
#pragma region customcolor
				case vehColors:
				{
					Menu::Title("Stewie's");

					Menu::Break("CUSTOM COLOR");


					if (Menu::Int("~r~R", primaryR, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, primaryR, primaryG, primaryB);
					}
					if (Menu::Int("~g~G", primaryG, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, primaryR, primaryG, primaryB);
					}
					if (Menu::Int("~b~B", primaryB, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, primaryR, primaryG, primaryB);
					}


					if (Menu::Int("~r~R", secondaryR, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, secondaryR, secondaryG, secondaryB);
					}
					if (Menu::Int("~g~G", secondaryG, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, secondaryR, secondaryG, secondaryB);
					}
					if (Menu::Int("~b~B", secondaryB, 0, 255)) {
						Vehicle VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, secondaryR, secondaryG, secondaryB);
					}
				}
break;
#pragma endregion
#pragma region Paint
		case Paint:
		{
			Menu::Title("Stewie's");
			Menu::Break("PAINT");

			Menu::MenuOption("Crew / Modded Colors", crewpaint);
			Menu::MenuOption("Custom Colors", vehColors);
			if (Menu::Option("SPECIAL PURPLE [~b~MODDED~w~]")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 79, 10, 255); IconNotification("Paint: SPECIAL PURPLE [~b~MODDED~w~]", "Stewie's", "Paint");
			}
			if (Menu::Option("Chrome")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_COLOURS(veh, 120, 120); IconNotification("Paint: Chrome", "Stewie's", "Paint");
			}
			if (Menu::Option("Gold")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_COLOURS(veh, 37, 37); IconNotification("Paint: Gold", "Stewie's", "Paint");
			}
			if (Menu::Option("Cool Blue-Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_COLOURS(veh, 148, 148); IconNotification("Paint: Cool Blue-Purple", "Stewie's", "Paint");
			}
			if (Menu::Option("Black")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 0, 0, 0); IconNotification("Paint: Black", "Stewie's", "Paint");
			}
			if (Menu::Option("Red")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 255, 0, 0); IconNotification("Paint: Red", "Stewie's", "Paint");
			}
			if (Menu::Option("Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 0, 255, 0); IconNotification("Paint: Green", "Stewie's", "Paint");
			}
			if (Menu::Option("Blue")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 0, 0, 255); IconNotification("Paint: Blue", "Stewie's", "Paint");
			}
			if (Menu::Option("Purple")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 204, 0, 204); IconNotification("Paint: Purple", "Stewie's", "Paint");
			}
			if (Menu::Option("Pink")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 255, 51, 255); IconNotification("Paint: Pink", "Stewie's", "Paint");
			}
			if (Menu::Option("Lime")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 128, 255, 0); IconNotification("Paint: Lime", "Stewie's", "Paint");
			}
			if (Menu::Option("Neon Green")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, 187, 255, 0); IconNotification("Paint: Neon Green", "Stewie's", "Paint");
			}

		}
		break;
#pragma endregion
#pragma region Anim Changer
		case anim:
		{
			Menu::Title("Stewie's");
			Menu::Break("ANIMATION OPTIONS");
			Menu::MenuOption("Scenarios", senas);
			if (Menu::Option("Clear Animation")) { Features::clearanim(); }
			if (Menu::Option("xxx Receiver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_poppy"); }
			if (Menu::Option("xxx Giver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_a"); }
			if (Menu::Option("Stripper Dance")) { Features::doAnimation("mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			if (Menu::Option("Pole Dance")) { Features::doAnimation("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			if (Menu::Option("Push Ups")) { Features::doAnimation("amb@world_human_push_ups@male@base", "base"); }
			if (Menu::Option("Sit Ups")) { Features::doAnimation("amb@world_human_sit_ups@male@base", "base"); }
			if (Menu::Option("Celebrate")) { Features::doAnimation("rcmfanatic1celebrate", "celebrate"); }
			if (Menu::Option("Electrocution")) { Features::doAnimation("ragdoll@human", "electrocute"); }
			if (Menu::Option("Suicide")) { Features::doAnimation("mp_suicide", "pistol"); }
			if (Menu::Option("Showering")) { Features::doAnimation("mp_safehouseshower@male@", "male_shower_idle_b"); }
		}
		break;
#pragma endregion
#pragma region sensa Changer
		case senas:
		{
			Menu::Title("Stewie's");
			Menu::Break("SCENARIO OPTIONS");
			if (Menu::Option("Kill Animation")) AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			if (Menu::Option("Paparizzi")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_PAPARAZZI", 0, true);
			if (Menu::Option("Drug Dealer")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRUG_DEALER_HARD", 0, true);
			if (Menu::Option("Drinking Coffee")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_AA_COFFEE", 0, true);
			if (Menu::Option("Playing Instruments")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSICIAN", 0, true);
			if (Menu::Option("Flexing")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSCLE_FLEX", 0, true);
			if (Menu::Option("Jogging")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_JOG_STANDING", 0, true);
			if (Menu::Option("Binoculars")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_BINOCULARS", 0, true);
			if (Menu::Option("Clipboard")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CLIPBOARD", 0, true);
			if (Menu::Option("Bench Press")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_MUSCLE_BENCH_PRESS", 0, true);
			if (Menu::Option("Chin Ups")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_MUSCLE_CHIN_UPS", 0, true);
			if (Menu::Option("BBQ")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_BBQ", 0, true);
			if (Menu::Option("Superhero")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SUPERHERO", 0, true);
			if (Menu::Option("Fishing")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_STAND_FISHING", 0, true);
			if (Menu::Option("Security")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SECURITY_SHINE_TORCH", 0, true);
			if (Menu::Option("Leaf Blower")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 0, true);
			if (Menu::Option("Film Shocking")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, true);
			if (Menu::Option("Idle Cop")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_COP_IDLES", 0, true);
			if (Menu::Option("Drinking")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRINKING", 0, true);
			if (Menu::Option("Golf Player")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GOLF_PLAYER", 0, true);
			if (Menu::Option("Welding")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_WELDING", 0, true);
			if (Menu::Option("Smoking Pot")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SMOKING_POT", 0, true);
			if (Menu::Option("Hammering")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_HAMMERING", 0, true);
			if (Menu::Option("Tennis")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_TENNIS_PLAYER", 0, true);
			if (Menu::Option("Drilling")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CONST_DRILL", 0, true);
		}
		break;
#pragma endregion
#pragma region drops
		case drops:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			Menu::Title("Stewie's");
			Menu::Break("DROP OPTIONS");

			Menu::Toggle("Risky Mode", risky, [] { Features::riskyOptins(risky); });

			if (risky == false) { Menu::Toggle("Drop Him 2.5k", Features::savenewdrop2[Features::Online::selectedPlayer], [] {Features::cashdrop2(Features::savenewdrop2[Features::Online::selectedPlayer]); }); }
			if (risky == false) { Menu::Toggle("Money Rain 2.5k", Features::savenewdrop5[Features::Online::selectedPlayer], [] {Features::cashdrop5(Features::savenewdrop5[Features::Online::selectedPlayer]); }); }
			if (risky == false) { Menu::Toggle("Weed Drop 2.5k", Features::savenewdrop2weed[Features::Online::selectedPlayer], [] {Features::cashdrop2weed(Features::savenewdrop2weed[Features::Online::selectedPlayer]); }); }
			if (risky == false) { Menu::Toggle("Weed Rain 2.5k", Features::savenewdrop212weed[Features::Online::selectedPlayer], [] {Features::cashdrop212weed(Features::savenewdrop212weed[Features::Online::selectedPlayer]); }); }
			if (Menu::Option("Drop Armor")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				OBJECT::CREATE_AMBIENT_PICKUP(1274757841, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1);
			}
			if (Menu::Option("Drop Parachute")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				OBJECT::CREATE_AMBIENT_PICKUP(1735599485, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1);
			}
			if (Menu::Option("Drop Snack")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				OBJECT::CREATE_AMBIENT_PICKUP(483577702, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1);

			}
		}
		break;
#pragma endregion
#pragma region rank menu
		case rankk:
		{
			Menu::Title("Stewie's");
			Menu::Break("RANK OPTIONS");
			if (Menu::Option("Custom Rank (RP Correction)")) {
				int rank = NumberKeyboard();
				if (rank <= 8000 && rank > 0) {
					STATS::STAT_SET_INT($("MP0_CHAR_SET_RP_GIFT_ADMIN"), Features::Levels[(rank - 1)], 1);
					STATS::STAT_SET_INT($("MP1_CHAR_SET_RP_GIFT_ADMIN"), Features::Levels[(rank - 1)], 1);
					IconNotification("Find New Session To Get Your Rank!", "Stewie's", "RP Correction");
				}
			}
			if (Menu::Option("Rank Set 25")) {
				Features::SetRank(25);
				IconNotification("Rank Setted To 25!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 50")) {
				Features::SetRank(50);
				IconNotification("Rank Setted To 50!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 100")) {
				Features::SetRank(100);
				IconNotification("Rank Setted To 100!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 120")) {
				Features::SetRank(120);
				IconNotification("Rank Setted To 120!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 150")) {
				Features::SetRank(150);
				IconNotification("Rank Setted To 150!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 200")) {
				Features::SetRank(200);
				IconNotification("Rank Setted To 200!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 300")) {
				Features::SetRank(300);
				IconNotification("Rank Setted To 300!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 400")) {
				Features::SetRank(400);
				IconNotification("Rank Setted To 400!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 600")) {
				Features::SetRank(600);
				IconNotification("Rank Setted To 600!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 700")) {
				Features::SetRank(700);
				IconNotification("Rank Setted To 700!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 800")) {
				Features::SetRank(800);
				IconNotification("Rank Setted To 800!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 900")) {
				Features::SetRank(900);
				IconNotification("Rank Setted To 900!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 1000")) {
				Features::SetRank(1000);
				IconNotification("Rank Setted To 1000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 1500")) {
				Features::SetRank(1500);
				IconNotification("Rank Setted To 1500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 2000")) {
				Features::SetRank(2000);
				IconNotification("Rank Setted To 2000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 2500")) {
				Features::SetRank(2500);
				IconNotification("Rank Setted To 2500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 3000")) {
				Features::SetRank(3000);
				IconNotification("Rank Setted To 3000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 3500")) {
				Features::SetRank(3500);
				IconNotification("Rank Setted To 3500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 4000")) {
				Features::SetRank(4000);
				IconNotification("Rank Setted To 4000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 4500")) {
				Features::SetRank(4500);
				IconNotification("Rank Setted To 4500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 5000")) {
				Features::SetRank(5000);
				IconNotification("Rank Setted To 5000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 5500")) {
				Features::SetRank(5500);
				IconNotification("Rank Setted To 5500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 6000")) {
				Features::SetRank(6000);
				IconNotification("Rank Setted To 6000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 6500")) {
				Features::SetRank(6500);
				IconNotification("Rank Setted To 6500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 7000")) {
				Features::SetRank(7000);
				IconNotification("Rank Setted To 7000!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 7500")) {
				Features::SetRank(7500);
				IconNotification("Rank Setted To 7500!", "Stewie's", "Rank");
			}
			if (Menu::Option("Rank Set 8000")) {
				Features::SetRank(8000);
				IconNotification("Rank Setted To 8000!", "Stewie's", "Rank");
			}
		}
		break;
#pragma endregion
#pragma region remoteweather
		case remoteweather:
		{
			Menu::Title("Stewie's");
			Menu::Break("REMOTE WEATHER");

			if (Menu::Option("Sun")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clear"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Rain")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clearing"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Snow")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Snowlight"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Thunder")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Thunder"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Blizzard")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Blizzard"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Overcast")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Overcast"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Foggy")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Foggy"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Smog")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Smog"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Clouds")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clouds"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Christmas")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("XMAS"); (Features::Online::selectedPlayer); }
			if (Menu::Option("Halloween")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Halloween"); (Features::Online::selectedPlayer); }
			
		}
		break;
		case statsviewerselected:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);

			Menu::Title("Stewie's");
			Menu::Break("SELECTED PLAYER STATS");


			Menu::Option("Report Strength");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_REPORT_STRENGTH"))).c_str());



			Menu::Option("Commend Strength");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_COMMEND_STRENGTH"))).c_str());



			Menu::Option("Friendly Stuff");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_FRIENDLY"))).c_str());



			Menu::Option("Helpfull Stuff");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_HELPFUL"))).c_str());


			Menu::Option("Griefing");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_GRIEFING"))).c_str());



			Menu::Option("Offensive Language");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_OFFENSIVE_LANGUAGE"))).c_str());



			Menu::Option("Offensive UGC");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_OFFENSIVE_UGC"))).c_str());



			Menu::Option("VC Hate");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_VC_HATE"))).c_str());



			Menu::Option("Gameplay Exploits");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_GAME_EXPLOITS"))).c_str());



			Menu::Option("Inspunished");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_ISPUNISHED"))).c_str());



			Menu::Option("Badsports");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_1ST_OFFENCE"))).c_str());





			Menu::Option("Kills");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"))).c_str());


			Menu::Option("Won Races");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"))).c_str());


			Menu::Option("Armwrestling Wins");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"))).c_str());


			Menu::Option("Deathmatch Wins");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"))).c_str());


			Menu::Option("Deathmatch Losses");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"))).c_str());


			Menu::Option("Death Match Kills");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"))).c_str());


			Menu::Option("Death Match Deaths");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"))).c_str());


			Menu::Option("Golf Wins");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"))).c_str());


			Menu::Option("Shooting Range Wins");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"))).c_str());

			Menu::Option("Tennis Wins");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"))).c_str());

			Menu::Option("c");
			Features::Online::selectedPlayer;
			Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"))).c_str());

		}
		break;
#pragma endregion
#pragma region Remotes
		case remoteoptions:
		{
			Menu::Title("Stewie's");
			Menu::Break("REMOTE OPTIONS");
	
			if (Menu::Option("Non-Host Kick")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int kick[4] = { 1394869423, player, 0, 0x35 }; //x35
				Hooking::trigger_script_event(1, kick, 4, Bit);
			}
			if (Menu::Option("Force To Story Mode")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int sp_crash[4] = { 2101106911, player, 0, 0x35 };
				//Hooking::trigger_script_event(1, sp_crash, 4, Bit);
			}
			if (Menu::Option("Ceo Kick")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int ceokick[4] = { 585981075, player, 0, 0x35 };
				Hooking::trigger_script_event(1, ceokick, 4, Bit);
			}
			if (Menu::Option("Ceo Ban")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int playerCeoBan[4] = { 1318668309, player, 0, 0x35 };
				Hooking::trigger_script_event(1, playerCeoBan, 4, Bit);
			}
			if (Menu::Option("Infinite Loading Screen")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int infiniteload[9] = { -328868154, player, 0, -1, 1, 115, 0, 0, 0 };
				Hooking::trigger_script_event(1, infiniteload, 4, Bit);
			}
			if (Menu::Option("Force To Mission")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int send_to_mission[9] = { 18446744071959282160, player, 0, 0, 0, -1, 1, 1, 0 };
				Hooking::trigger_script_event(1, send_to_mission, 4, Bit);
			}
			if (Menu::Option("Spam Sounds")) {
				unsigned int Bit = (1 << Features::Online::selectedPlayer);
				int soundspam[4] = { 729971264, player, 0, 0x35 };
				Hooking::trigger_script_event(1, soundspam, 4, Bit);
			}
		}
		break;
#pragma endregion
#pragma region Online players
		case onlinemenu_playerlist:
		{
			Menu::Title("Stewie's VIP");
			Menu::Break("Player List");

			for (int i = 0; i < 32; ++i) {
				Player isFriend = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				bool is_friend;
				bool handle_valid = Features::isPlayerFriend(i, is_friend);
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
					//Menu::MenuOption(PLAYER::GET_PLAYER_NAME(i), onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					//GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
					std::stringstream ss;
					if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0) == i) {
						ss << PLAYER::GET_PLAYER_NAME(i) << " ~y~[HOST]";
						std::string s = ss.str();
						const char *cstr = s.c_str();
						Menu::MenuOption(cstr, onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					}
					else if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
						ss << PLAYER::GET_PLAYER_NAME(i) << " ~r~[MODDER]";
						std::string s = ss.str();
						const char *cstr = s.c_str();
						Menu::MenuOption(cstr, onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					}
					else if (handle_valid && is_friend) {
						ss << PLAYER::GET_PLAYER_NAME(i) << " ~g~[FRIEND]";
						std::string s = ss.str();
						const char *cstr = s.c_str();
						Menu::MenuOption(cstr, onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					}
					else if (isFriend == PLAYER::PLAYER_PED_ID()) {
						ss << PLAYER::GET_PLAYER_NAME(i) << " ~b~[SELF]";
						std::string s = ss.str();
						const char *cstr = s.c_str();
						Menu::MenuOption(cstr, onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					}
					else {
						Menu::MenuOption(PLAYER::GET_PLAYER_NAME(i), onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
					}
				}
			}


		}
		break;

		case onlinemenu_selected:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			Menu::Title("Stewie's");
			Menu::Break(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer));
			Menu::MenuOption("Attach Objects To Player", attachoptions);
			Menu::MenuOption("Effects", PTFXO);
			Menu::MenuOption("Teleport Options", tpother);
			Menu::MenuOption("Drops", drops);
			Menu::MenuOption("Player Stats Viewer", statsviewerselected);
			//Menu::MenuOption("Remote Weather Changer", remoteweather);
			//Menu::MenuOption("Remote Options", remoteoptions);
			if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::Toggle("Spectate", Features::spectate[Features::Online::selectedPlayer], [] { Features::specter(Features::spectate[Features::Online::selectedPlayer]); }); }
			Menu::Toggle("Water Loop", Features::playerwaterloop[Features::Online::selectedPlayer], [] { Features::WaterLoop(Features::playerwaterloop[Features::Online::selectedPlayer]); });
			Menu::Toggle("Fire Loop", Features::playerfireloop[Features::Online::selectedPlayer], [] { Features::FireLoop(Features::playerfireloop[Features::Online::selectedPlayer]); });
			Menu::Toggle("Freeze", Features::freezed[Features::Online::selectedPlayer], [] { Features::Freezer(Features::freezed[Features::Online::selectedPlayer]); });
			Menu::Toggle("Fuck Handling", Features::fuckedhandling[Features::Online::selectedPlayer], [] { Features::fuckhandling(Features::fuckedhandling[Features::Online::selectedPlayer]); });
			Menu::Toggle("Shake Cam", Features::camshaker[Features::Online::selectedPlayer], [] { Features::shakecam(Features::camshaker[Features::Online::selectedPlayer]); });
			Menu::Toggle("Explosion Loop", Features::exploder[Features::Online::selectedPlayer], [] { Features::explodeloop(Features::exploder[Features::Online::selectedPlayer]); });
			if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::Toggle("Crash [~b~BETA~w~]", Features::crasher[Features::Online::selectedPlayer], [] { Features::crash(Features::crasher[Features::Online::selectedPlayer]); }); }
			if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::Toggle("Radiation Lags [~b~BETA~w~]", Features::radiationlag[Features::Online::selectedPlayer], [] { Features::lagthisbitch(Features::radiationlag[Features::Online::selectedPlayer]); }); }
			if (Menu::Option("~r~Clone Crash")) {
				int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				PED::CLONE_PED(Handle, 1, 1, 1);
				IconNotification("Click 3-5 Times", "Stewie's", "Clone Crash");

			}
			if (Menu::Option("Explode")) {
				Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), false);
				FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 1000.f);
			}
			if (Menu::Option("Boost Vehicle")) {
				Player playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(playerPed, 0);
				{
					RequestControlOfEnt(veh);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 300.0);
				}
			}
			if (Menu::Option("Pop Tires")) {
				Vehicle selectedlPlayerveh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), FALSE);
				bool isveh = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), FALSE);
				if (isveh)
				{
					RequestControlOfEnt(selectedlPlayerveh);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(selectedlPlayerveh, TRUE);
					for (int i = 5; i--;)
						VEHICLE::SET_VEHICLE_TYRE_BURST(selectedlPlayerveh, i, TRUE, 1000.f);

				}
			}
			if (Menu::Option("Rocket Kill")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z - 1, 38, 0.5f, true, false, 0.0f);
			}
			if (Menu::Option("Kick him out of Car")) {
				Ped playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				RequestControlOfEnt(playerPed);
				AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
				AI::CLEAR_PED_TASKS(playerPed);
				AI::CLEAR_PED_SECONDARY_TASK(playerPed);
			}
			if (Menu::Option("Give Player T20"))
			{
				int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				AI::CLEAR_PED_TASKS_IMMEDIATELY(Handle);
				Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(Handle, 0);
				Vector3 Ocoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Handle, 0.0, 5.0, 0.0);
				Vehicle zentorno = Features::SpawnVehicle("t20", Ocoords, 0, 0.0f);
				ENTITY::SET_ENTITY_INVINCIBLE(zentorno, 0);
			}
			if (Menu::Option("Slingshot Car")) {
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true));
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true)));
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true), 1, 0, 0, 20, 0, 0, 0, 1, false, true, true, true, true);
				}
			}
			if (Menu::Option("Clone Player"))
			{
				PED::CLONE_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 1, 1, 1);
			}
			int clone[1000];
			int gcount = 1;
			if (Menu::Option("Spawn Bodyguard")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("u_m_m_jesus_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				int my_group = PLAYER::GET_PLAYER_GROUP(selectedplayer);
				clone[gcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				PED::SET_PED_AS_GROUP_LEADER(selectedplayer, my_group);
				PED::SET_PED_AS_GROUP_MEMBER(clone[gcount], my_group);
				PED::SET_PED_NEVER_LEAVES_GROUP(clone[gcount], my_group);
				ENTITY::SET_ENTITY_INVINCIBLE(clone[gcount], false);
				PED::SET_PED_COMBAT_ABILITY(clone[gcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(clone[gcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(clone[gcount], true);
				PED::SET_GROUP_FORMATION(my_group, 3);
				PED::SET_PED_MAX_HEALTH(clone[gcount], 5000);
				gcount++;
			}
			int eclone[1000];
			int egcount = 1;
			if (Menu::Option("Spawn Enemy")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("u_m_m_jesus_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("Cage Player")) {
				Features::trapcage(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
			}
			if (Menu::Option("Give All Weapons")) {
				uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
				for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), Weapons[i], 9999, 1);
					WAIT(10);
				}
			}
			if (Menu::Option("Take All Weapons")) {
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true);

			}
		
		}
		break;
#pragma endregion
#pragma region Acrobatics
		case Acrobatics:
		{
			Menu::Title("Stewie's");
			Menu::Break("ACROBATICS OPTIONS");
			if (Menu::Option("Front Flip")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6.0f, 0, -2.0f, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Back Flip")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6.0f, 0, 2.0f, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Kick Flip")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 5.0f, 2.0f, 0, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Heel Flip")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 5.0f, -2.0f, 0, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Bunny Hop")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 7.0f, 0, 0, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Launch Up")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 40.0f, 0, 0, 0, true, true, true, true, false, true);
			}
			if (Menu::Option("Crush Vehicle")) {
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, -40.0f, 0, 0, 0, true, true, true, true, false, true);
			}
		}
		break;
#pragma endregion
#pragma region Money Options
		case moneyoptions:
		{
			Menu::Title("Stewie's");
			Menu::Break("MONEY OPTIONS");

			Menu::Toggle("Self Drop 2.5k", Features::savenewdrop, [] {Features::cashdrop(Features::savenewdrop); });

			if (Menu::Option("15Mil Stealth")) {
				Any ivar3 = 2147483647;
				if (UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&ivar3, 1474183246, -1586170317, 1445302971, 15000000, 4))
					UNK3::_NETWORK_SHOP_CHECKOUT_START(ivar3);
			}
			if (Menu::Option("10Mil Stealth")) {
				Any ivar3 = 2147483647;
				if (UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&ivar3, 1474183246, -1586170317, 1445302971, 10000000, 4))
					UNK3::_NETWORK_SHOP_CHECKOUT_START(ivar3);
			}
			if (Menu::Option("5Mil Stealth")) {
				Any ivar3 = 2147483647;
				if (UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&ivar3, 1474183246, -1586170317, 1445302971, 5000000, 4))
					UNK3::_NETWORK_SHOP_CHECKOUT_START(ivar3);
			}
			if (Menu::Option("~w~Earn 20 million! from R*")) 
			{
                NETWORKCASH::NETWORK_EARN_FROM_ROCKSTAR(20000000);
                notifyMap("Selected Cash: ~HUD_COLOUR_ORANGE~ 20 million!");
            }
		}
		break;
#pragma region Recovery Menu
		case statsEdit:
		{
			Menu::Title("Stewie's");
			Menu::Break("STATS EDITOR");

			if (Menu::Option("Set Kills")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), temp1, 0);
			}
			if (Menu::Option("Set Won Races")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), temp1, 0);
			}
			if (Menu::Option("Set Armwrestling Wins")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), temp1, 0);
			}
			if (Menu::Option("Set Deathmatch Wins")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), temp1, 0);
			}
			if (Menu::Option("Set Deathmatch Losses")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), temp1, 0);
			}
			if (Menu::Option("Set Death Match Kills")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), temp1, 0);
			}
			if (Menu::Option("Set Death Match Deaths")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), temp1, 0);
			}
			if (Menu::Option("Set Death Match Deaths")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), temp1, 0);
			}
			if (Menu::Option("Set Golf Wins")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), temp1, 0);
			}
			if (Menu::Option("Set Shooting Range Wins")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), temp1, 0);
			}
			if (Menu::Option("Set Tennis Wins")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), temp1, 0);
			}
			if (Menu::Option("Set Freeroam Kills")) {
				int temp1 = 0;
				temp1 = NumberKeyboard();

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), temp1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), temp1, 0);
			}


		}
		break;
				case statsEditview:
				{

					Menu::Title("Stewie's");
					Menu::Break("STATS VIEWER");


					Menu::Option("Report Strength");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_REPORT_STRENGTH"))).c_str());



					Menu::Option("Commend Strength");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_COMMEND_STRENGTH"))).c_str());



					Menu::Option("Friendly Stuff");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_FRIENDLY"))).c_str());



					Menu::Option("Helpfull Stuff");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_HELPFUL"))).c_str());


					Menu::Option("Griefing");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_GRIEFING"))).c_str());



					Menu::Option("Offensive Language");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_OFFENSIVE_LANGUAGE"))).c_str());



					Menu::Option("Offensive UGC");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_OFFENSIVE_UGC"))).c_str());



					Menu::Option("VC Hate");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_VC_HATE"))).c_str());



					Menu::Option("Gameplay Exploits");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_GAME_EXPLOITS"))).c_str());



					Menu::Option("Inspunished");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_ISPUNISHED"))).c_str());



					Menu::Option("Badsports");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_1ST_OFFENCE"))).c_str());





					Menu::Option("Kills");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"))).c_str());


					Menu::Option("Won Races");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"))).c_str());


					Menu::Option("Armwrestling Wins");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"))).c_str());


					Menu::Option("Deathmatch Wins");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"))).c_str());


					Menu::Option("Deathmatch Losses");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"))).c_str());


					Menu::Option("Death Match Kills");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"))).c_str());


					Menu::Option("Death Match Deaths");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"))).c_str());


					Menu::Option("Golf Wins");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"))).c_str());


					Menu::Option("Shooting Range Wins");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"))).c_str());

					Menu::Option("Tennis Wins");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"))).c_str());

					Menu::Option("c");
					Menu::Option(std::to_string(get_float_stat2(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"))).c_str());

				}
				break;
#pragma endregion
#pragma region Recovery Menu
		case recover:
		{
			Menu::Title("Stewie's");
			Menu::Break("RECOVERY OPTIONS");
			Menu::MenuOption("ATM", ATM);
			Menu::MenuOption("Money Stealth", moneyoptions);
			//Menu::MenuOption("ATM", ATM);
			Menu::MenuOption("Rank", rankk);
			Menu::MenuOption("Stats Viewer", statsEditview);
			Menu::MenuOption("Stats Editor", statsEdit);

			//Menu::Toggle("RP Loop", Features::RPLoop, [] {Features::rpLoop(); });
			//Menu::Int("RP Loop Delay", Features::RPLoopDelay, 1, 100);

			if (Menu::Option("Set Modded Roll")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SHOOTING_ABILITY"), 150, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SHOOTING_ABILITY"), 15000, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SHOOTING_ABILITY"), 1000, 0);
				IconNotification("Modded Roll Set!", "Stewie's", "Recovery");
			}
			
			if (Menu::Option("Unlock Exclusive T-Shirts")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 10, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMPICKUPDLCCRATE1ST"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_CAPTURE_DONT_DYING"), 25, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DO_HEIST_AS_MEMBER"), 25, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_PICKUP_CAP_PACKAGES"), 100, 1);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FINISH_HEIST_NO_DAMAGE"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_GOLD_MEDAL_HEISTS"), 25, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_KILL_TEAM_YOURSELF_LTS"), 25, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_KILL_PSYCHOPATHS"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DO_HEIST_AS_THE_LEADER"), 25, 1);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_STORE_20_CAR_IN_GARAGES"), 1, 1);
				IconNotification("Unlocked Exclusive T-Shirts!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Heist Vehicles")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_VEHICLE_1_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_VEHICLE_2_UNLCK"), -1, 1);
				IconNotification("Unlocked All Heist Vehicles!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Heist Trophies")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_HEIST_ACH_TRACKER"), -1, 1);
				IconNotification("Unlocked All Heist Trophies!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Skip GTA Online Tutorial")) {
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_NO_MORE_TUTORIALS"), 1, 1);
				IconNotification("GTA Online Tutorial Skipped!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Clear Reports")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("BADSPORT_RESET_MINUTES"), 1.0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_RESET_MINUTES"), 1.0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_RESET_MINUTES"), 1.0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_RESET_MINUTES"), 1.0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OVERALL_BADSPORT"), 0, true);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_CHAR_IS_BADSPORT"), false, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_BECAME_BADSPORT_NUM"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BAD_SPORT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHEAT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_REPORT_STRENGTH"), 32, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_COMMEND_STRENGTH"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_FRIENDLY"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_HELPFUL"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GRIEFING"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_LANGUAGE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_UGC"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_VC_HATE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GAME_EXPLOITS"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_ISPUNISHED"), 0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OVERALL_BADSPORT"), 0, true);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_CHAR_IS_BADSPORT"), false, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_BECAME_BADSPORT_NUM"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BAD_SPORT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHEAT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_REPORT_STRENGTH"), 32, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_COMMEND_STRENGTH"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_FRIENDLY"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_HELPFUL"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GRIEFING"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_LANGUAGE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_UGC"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_VC_HATE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GAME_EXPLOITS"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_ISPUNISHED"), 0, true);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OVERALL_BADSPORT"), 0, true);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_CHAR_IS_BADSPORT"), false, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_BECAME_BADSPORT_NUM"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BAD_SPORT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_CHEAT_BITSET"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_REPORT_STRENGTH"), 32, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_COMMEND_STRENGTH"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_FRIENDLY"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_HELPFUL"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_GRIEFING"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OFFENSIVE_LANGUAGE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OFFENSIVE_UGC"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_VC_HATE"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_GAME_EXPLOITS"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_ISPUNISHED"), 0, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_1ST_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_2ND_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_3RD_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_4TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_5TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_6TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_7TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_8TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_9TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_NUMDAYS_10TH_OFFENCE"), 0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("BADSPORT_RESET_MINUTES"), 1.0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_RESET_MINUTES"), 1.0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_BADSPORT_RESET_MINUTES"), 1.0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP2_BADSPORT_RESET_MINUTES"), 1.0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OVERALL_BADSPORT"), 0, 1);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_CHAR_IS_BADSPORT"), false, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_BECAME_BADSPORT_NUM"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BAD_SPORT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHEAT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_REPORT_STRENGTH"), 32, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_COMMEND_STRENGTH"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_FRIENDLY"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_HELPFUL"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GRIEFING"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_LANGUAGE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_UGC"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_VC_HATE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GAME_EXPLOITS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_ISPUNISHED"), 0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OVERALL_BADSPORT"), 0, 1);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_CHAR_IS_BADSPORT"), false, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_BECAME_BADSPORT_NUM"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BAD_SPORT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHEAT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_REPORT_STRENGTH"), 32, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_COMMEND_STRENGTH"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_FRIENDLY"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_HELPFUL"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GRIEFING"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_LANGUAGE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_OFFENSIVE_UGC"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_VC_HATE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_GAME_EXPLOITS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_ISPUNISHED"), 0, 1);
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OVERALL_BADSPORT"), 0, 1);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_CHAR_IS_BADSPORT"), false, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_BECAME_BADSPORT_NUM"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_BAD_SPORT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_CHEAT_BITSET"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_REPORT_STRENGTH"), 32, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_COMMEND_STRENGTH"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_FRIENDLY"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_HELPFUL"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_GRIEFING"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OFFENSIVE_LANGUAGE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_OFFENSIVE_UGC"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_VC_HATE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_GAME_EXPLOITS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP2_MPPLY_ISPUNISHED"), 0, 1);
				IconNotification("Reports Cleared!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All LSC")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_1_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_2_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_3_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_4_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_5_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_6_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_7_UNLCK"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRALLYWONDRIVE"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRALLYWONNAV"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINSEARACE"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINAIRRACE"), 1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_TURBO_STARTS_IN_RACE"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_RACES_FASTEST_LAP"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_SLIPSTREAMS_IN_RACE"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_CAPTURES"), 25, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DROPOFF_CAP_PACKAGES"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_KILL_CARRIER_CAPTURE"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FINISH_HEISTS"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FINISH_HEIST_SETUP_JOB"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_LAST_TEAM_STANDINGS"), 50, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ONLY_PLAYER_ALIVE_LTS"), 50, 1);
				IconNotification("All LSC Unlocked!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Hairs")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				IconNotification("All Hairs Unlocked!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Tattoos")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_tattoo_fm_unlocks_12"), -1, 1);
				IconNotification("All Tattoos Unlocked!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Add Snacks")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_YUM_SNACKS"), 99999999, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_HEALTH_SNACKS"), 99999999, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_EPIC_SNACKS"), 99999999, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CIGARETTES_BOUGHT"), 99999999, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_ORANGE_BOUGHT"), 99999999, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_BOURGE_BOUGHT"), 99999999, 0);
				IconNotification("Snacks Added!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Weapon Camos")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV _ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PISTOL50_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_APPISTOL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MICROSMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADVRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PUMP_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SAWNOFF_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BULLPUP_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SNIPERRFL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_HVYSNIPER_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_RPG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MINIGUNS_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRENADE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMKGRENADE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_STKYBMB_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV_ENEMY_KILLS"), 600, 0);
				IconNotification("All Weapon Camos Unlocked!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Unlock All Clothing")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TORSO"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_DECL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TORSO"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_DECL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TEETH"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TEETH_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TEETH_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_0"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_12"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_13"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_14"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_15"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_16"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_17"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_18"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_19"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_21"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_22"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_23"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_25"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_26"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_27"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_28"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_29"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_30"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_31"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_32"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_33"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_34"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_35"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_36"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_37"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_38"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_39"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DLC_APPAREL_ACQUIRED_40"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_13"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				IconNotification("All Clothing Unlocked!", "Stewie's", "Recovery");
			}

			if (Menu::Option("Set Max Skills")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STAM"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STRN"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_LUNG"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_DRIV"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_FLY"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_SHO"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STL"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_stam"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_strn"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_lung"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_driv"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_fly"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_sho"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_script_increase_stl"), 100, 1);
				IconNotification("Max Skills Setted!", "Stewie's", "Recovery");
			}

			if (Menu::Option("Full Recovery + Level 120")) {

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_XP_FM"), Features::Levels[120], 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0);

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_12"), -1, 1);

				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRACEWORLDRECHOLDER"), 1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ENEMYDRIVEBYKILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_FOUND"), 50, 0);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINALLRACEMODES"), 1, 0);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINEVERYGAMEMODE"), 1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), 1000, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_KILLS_PLAYERS"), 1000, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 21, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_MVP"), 60, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_HOLD_UP_SHOPS"), 20, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), 101, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), 21, 0);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMATTGANGHQ"), 1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMBBETWIN"), 50000, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 51, 0);
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMFULLYMODDEDCAR"), 1, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), 500, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), 412, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PLAYER_HEADSHOTS"), 623, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 63, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), 13, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), 12, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), 2, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_WON"), 101, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_LOST"), 36, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_25_KILLS_STICKYBOMBS"), 50, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_50_KILLS_GRENADES"), 50, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 50, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_20_KILLS_MELEE"), 50, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TORSO"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_DECL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TORSO"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_DECL"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_0"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_12"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_13"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_14"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_15"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_16"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_17"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_18"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_19"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_21"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_22"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_23"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_25"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_26"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_27"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_28"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_29"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_30"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_31"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_32"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_33"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_34"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_35"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_36"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_37"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_38"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_39"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_40"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_2"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_3"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_4"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_5"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_6"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_7"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_8"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_9"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_13"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				IconNotification("Everything Unlocked!", "Stewie's", "Recovery");
			}
			if (Menu::Option("Clear Badsport")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BAD_SPORT_BITSET"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_WAS_I_BAD_SPORT"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_OVERALL_BADSPORT"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_CHAR_IS_BADSPORT"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_BECAME_BADSPORT_NUM"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DESTROYED_PVEHICLES"), 0, 0);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_REPORT_STRENGTH"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_COMMEND_STRENGTH"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_FRIENDLY"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_HELPFUL"), 100, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_GRIEFING"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_VC_ANNOYINGME"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_VC_HATE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_OFFENSIVE_LANGUAGE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_OFFENSIVE_TAGPLATE"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_OFFENSIVE_UGC"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BAD_CREW_NAME"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BAD_CREW_MOTTO"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BAD_CREW_STATUS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BAD_CREW_EMBLEM"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_GAME_EXPLOITS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_EXPLOITS"), 0, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_ISPUNISHED"), 0, 1);
				IconNotification("Badsport Cleared!", "Stewie's", "Recovery");
			}
			
		}
		break;
#pragma region mapmods
		case mapmods:
		{
			Menu::Title("Stewie's");
			Menu::Break("MAP MODS OPTIONS");

			Menu::MenuOption("Maze Bank Small Ramp", ramp1);
			Menu::MenuOption("Maze Bank Roof Ramp", ramp2);
			Menu::MenuOption("Beach Ramp", ramp3);
			Menu::MenuOption("Mount Chilliad Ramp", ramp4);
			Menu::MenuOption("Airport Mini Ramp", ramp5);
			Menu::MenuOption("Airport Gate Ramp", ramp6);
			Menu::MenuOption("Space Tower", ramp7);
			Menu::MenuOption("Quad Ramp", ramp8);
			Menu::MenuOption("Fort", ramp9);
			Menu::MenuOption("Halfpipe", ramp10);
			Menu::MenuOption("Airport Loop Ramp", ramp11);
			Menu::MenuOption("Mega Ramp", ramp12);
		}
		break;
#pragma region mapmods
		case ramp1:
			Menu::Title("Stewie's");
			Menu::Break("MAZE BANK SMALL RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(2475986526, -80.9087, -830.357, 325.097, -14.4264, -8.53774, 152.209, -1, 0);
				Features::PlaceObjectByHash(2475986526, -79.2316, -831.297, 325.108, -14.4054, 4.26887, 164.271, -1, 0);
				Features::PlaceObjectByHash(2475986526, -76.7563, -831.549, 325.123, -14.4263, -0, 171.818, -1, 0);
				Features::PlaceObjectByHash(2475986526, -74.2595, -831.691, 325.09, -14.2059, -1.06722, -176.517, -1, 0);
				Features::PlaceObjectByHash(2475986526, -71.9478, -831.257, 325.113, -14.4264, 2.13443, -166.006, -1, 0);
				Features::PlaceObjectByHash(2475986526, -69.5981, -830.542, 325.066, -14.5918, -4.26887, -155.474, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.4174, -829.035, 325.097, -14.4263, -4.26887, -140.651, -1, 0);
				Features::PlaceObjectByHash(2475986526, -65.7121, -827.409, 325.068, -14.3048, -1.70755, -130.667, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.2717, -825.422, 325.112, -14.4263, -0, -121.256, -1, 0);
				Features::PlaceObjectByHash(2475986526, -63.2876, -823.434, 325.114, -14.5345, -0, -111.446, -1, 0);
				Features::PlaceObjectByHash(2475986526, -62.4924, -821.128, 325.082, -14.5467, 2.13443, -102.385, -1, 0);
				Features::PlaceObjectByHash(2475986526, -62.233, -818.528, 325.065, -14.6184, -8.00413, -88.1861, -1, 0);
				Features::PlaceObjectByHash(2475986526, -62.8694, -815.926, 325.118, -14.4265, -6.4033, -76.5979, -1, 0);
				Features::PlaceObjectByHash(2475986526, -63.6142, -813.68, 325.112, -14.3655, 8.53774, -66.7885, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.9883, -811.439, 325.107, -14.4263, 1.28066, -52.8494, -1, 0);
				Features::PlaceObjectByHash(2475986526, -66.5913, -808.328, 325.238, -12.4517, -0, -40.3246, -1, 0);
				Features::PlaceObjectByHash(2475986526, -68.2603, -807.899, 325.336, -13.8689, -0, -33.062, -1, 0);
				Features::PlaceObjectByHash(2475986526, -71.1526, -807.598, 325.153, -12.0416, 4.26887, -28.0523, -1, 0);
				Features::PlaceObjectByHash(2475986526, -73.2853, -806.628, 325.151, -11.7962, -0, -19.1717, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.2243, -806.286, 325.164, -12.0419, -0, 1.55726, -1, 0);
				Features::PlaceObjectByHash(2475986526, -77.5757, -806.312, 325.088, -14.1843, -0, 12.6263, -1, 0);
				Features::PlaceObjectByHash(2475986526, -79.8704, -807.22, 325.143, -14.049, -4.26887, 21.4769, -1, 0);
				Features::PlaceObjectByHash(2475986526, -82.0222, -807.83, 325.036, -14.1422, -4.26887, 32.7605, -1, 0);
				Features::PlaceObjectByHash(2475986526, -83.8934, -809.424, 325.073, -14.5264, -8.53774, 46.5132, -1, 0);
				Features::PlaceObjectByHash(2475986526, -85.2523, -810.983, 325.043, -14.859, -0, 53.5324, -1, 0);
				Features::PlaceObjectByHash(2475986526, -86.5177, -813.202, 325.089, -14.5267, 4.26887, 64.6634, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.6645, -815.707, 325.059, -14.8589, 4.26887, 73.157, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.7973, -817.987, 325.119, -14.8468, -1.33402, 89.3982, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.5801, -821.034, 325.059, -14.8593, -0, 95.4435, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.2815, -822.239, 325.126, -15.6308, -4.26887, 100.311, -1, 0);
				Features::PlaceObjectByHash(2475986526, -86.7602, -824.03, 325.044, -15.9224, -0, 116.957, -1, 0);
				Features::PlaceObjectByHash(2475986526, -85.3743, -826.099, 325.136, -15.7025, 2.56132, 124.307, -1, 0);
				Features::PlaceObjectByHash(2475986526, -83.4737, -828.611, 325.076, -15.0688, -0, 132.538, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.9554, -832.877, 325.894, -14.1563, 4.26887, 132.995, -1, 0);
				Features::PlaceObjectByHash(2475986526, -89.3865, -831.322, 325.887, -14.1562, -0, 126.154, -1, 0);
				Features::PlaceObjectByHash(2475986526, -86.4247, -834.407, 325.915, -14.2701, 4.26887, 143.277, -1, 0);
				Features::PlaceObjectByHash(2475986526, -85.1736, -833.789, 325.653, -14.4072, -4.26887, 145.777, -1, 0);
				Features::PlaceObjectByHash(2475986526, -83.8118, -835.765, 326.063, -12.243, 4.26887, 151.527, -1, 0);
				Features::PlaceObjectByHash(2475986526, -80.7015, -837.145, 326.059, -12.3172, 2.13443, 162.332, -1, 0);
				Features::PlaceObjectByHash(2475986526, -77.6428, -837.649, 326.163, -10.8391, 3.20165, 171.297, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.479, -837.909, 326.025, -12.3172, -1.06722, 174.574, -1, 0);
				Features::PlaceObjectByHash(2475986526, -73.861, -837.826, 326.061, -12.3173, 5.33609, -176.632, -1, 0);
				Features::PlaceObjectByHash(2475986526, -70.4799, -837.265, 326.09, -12.3173, -0, -166.182, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.0415, -836.185, 326.018, -12.3171, -0, -156.039, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.8504, -834.996, 325.951, -11.5263, -0, -145.834, -1, 0);
				Features::PlaceObjectByHash(2475986526, -63.5702, -833.725, 326.1, -11.2947, -0, -140.961, -1, 0);
				Features::PlaceObjectByHash(2475986526, -60.9992, -831.419, 326.075, -11.5262, -4.26887, -130.963, -1, 0);
				Features::PlaceObjectByHash(2475986526, -58.9923, -828.729, 326.116, -11.5262, 4.26887, -121.973, -1, 0);
				Features::PlaceObjectByHash(2475986526, -57.5045, -825.626, 326.114, -11.5263, -0, -110.959, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.5533, -822.397, 326.08, -11.1311, -6.4033, -102, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.0911, -820.05, 326.049, -11.0325, 2.13443, -100.794, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.0681, -818.32, 326.087, -11.1312, -2.66804, -87.9469, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.2989, -816.237, 326.048, -11.0324, 2.13443, -83.2139, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.8952, -814.518, 326.142, -11.0324, -2.13443, -76.5476, -1, 0);
				Features::PlaceObjectByHash(2475986526, -58.1209, -811.23, 326.116, -10.9697, -0, -66.7674, -1, 0);
				Features::PlaceObjectByHash(2475986526, -59.0622, -809.17, 326.095, -11.0574, 4.26887, -62.782, -1, 0);
				Features::PlaceObjectByHash(2475986526, -60.096, -807.639, 326.119, -11.5544, -0, -52.7596, -1, 0);
				Features::PlaceObjectByHash(2475986526, -62.081, -805.317, 326.116, -11.1035, -0, -40.7682, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.1466, -804.55, 326.283, -11.1035, -0, -30.477, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.9795, -798.8, 326.717, -10.1561, -0, -29.3495, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.5734, -802.52, 326.262, -10.471, -8.53774, -31.2185, -1, 0);
				Features::PlaceObjectByHash(2475986526, -70.9341, -800.541, 326.198, -10.5317, -0, -20.0064, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.3309, -801.285, 325.849, -10.2407, -0, 1.58401, -1, 0);
				Features::PlaceObjectByHash(2475986526, -74.0222, -799.865, 326.177, -10.7327, -0, -5.98314, -1, 0);
				Features::PlaceObjectByHash(2475986526, -76.5167, -797.998, 326.32, -12.4969, -2.66804, 1.58883, -1, 0);
				Features::PlaceObjectByHash(2475986526, -79.2787, -800.531, 326.011, -12.9433, 4.26887, 13.0054, -1, 0);
				Features::PlaceObjectByHash(2475986526, -81.6721, -801.017, 325.9, -12.4601, 2.13443, 17.3792, -1, 0);
				Features::PlaceObjectByHash(2475986526, -83.6027, -801.744, 325.971, -12.9433, -0, 26.3052, -1, 0);
				Features::PlaceObjectByHash(2475986526, -85.6586, -802.789, 325.95, -12.8791, 1.28066, 32.5856, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.5086, -804.25, 325.978, -12.9432, 4.26887, 42.3279, -1, 0);
				Features::PlaceObjectByHash(2475986526, -88.9923, -805.73, 325.89, -11.9333, -4.26887, 46.0613, -1, 0);
				Features::PlaceObjectByHash(2475986526, -90.167, -807.318, 325.946, -13.0244, -0, 53.178, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.5987, -807.353, 326.343, -11.5713, 4.26887, 60.8753, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.5166, -813.963, 325.942, -13.4341, -4.26887, 73.0256, -1, 0);
				Features::PlaceObjectByHash(2475986526, -92.121, -810.584, 325.996, -13.4339, -4.26887, 64.9353, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.9931, -815.866, 325.924, -13.0519, -0, 79.5966, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.8716, -817.904, 325.988, -13.4339, -0, 88.8361, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.7912, -821.777, 325.946, -13.6946, -2.66804, 91.1427, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.2951, -823.554, 325.966, -13.157, -0, 101.424, -1, 0);
				Features::PlaceObjectByHash(2475986526, -92.5757, -827.033, 325.87, -13.5323, -0, 104.668, -1, 0);
				Features::PlaceObjectByHash(2475986526, -91.53, -828.342, 325.842, -14.1563, 4.26887, 120.328, -1, 0);
				Features::PlaceObjectByHash(2475986526, -90.5203, -829.611, 325.936, -14.1563, -0, 124.573, -1, 0);
				Features::PlaceObjectByHash(2475986526, -95.5355, -833.068, 327.049, -9.63525, 1.70755, 124.512, -1, 0);
				Features::PlaceObjectByHash(2475986526, -94.2445, -835.1, 326.976, -9.27617, -1.28066, 128.396, -1, 0);
				Features::PlaceObjectByHash(2475986526, -92.513, -837.087, 327.008, -9.63523, -4.26887, 132.871, -1, 0);
				Features::PlaceObjectByHash(2475986526, -90.07, -839.341, 327.025, -9.63574, 4.26887, 143.545, -1, 0);
				Features::PlaceObjectByHash(2475986526, -86.7336, -841.135, 327.284, -9.63566, -0, 150.983, -1, 0);
				Features::PlaceObjectByHash(2475986526, -84.8343, -842.167, 327.254, -9.36742, -4.26887, 152.377, -1, 0);
				Features::PlaceObjectByHash(2475986526, -90.0883, -842.661, 327.589, -7.98782, -8.53774, 146.409, -1, 0);
				Features::PlaceObjectByHash(2475986526, -82.595, -843.001, 327.277, -9.6352, -0, 161.654, -1, 0);
				Features::PlaceObjectByHash(2475986526, -80.8027, -843.618, 327.263, -9.36755, -2.13443, 165.215, -1, 0);
				Features::PlaceObjectByHash(2475986526, -78.5619, -843.703, 327.458, -9.63545, -2.13443, 171.015, -1, 0);
				Features::PlaceObjectByHash(2475986526, -76.2479, -844.026, 327.261, -9.36765, 1.06722, 175.986, -1, 0);
				Features::PlaceObjectByHash(2475986526, -73.5382, -843.999, 327.285, -9.6355, -0, -177.212, -1, 0);
				Features::PlaceObjectByHash(2475986526, -71.2047, -843.988, 327.3, -9.36764, -1.06722, -172.013, -1, 0);
				Features::PlaceObjectByHash(2475986526, -69.036, -843.266, 327.309, -9.63525, 4.26887, -166.686, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.2981, -840.996, 326.756, -9.37509, -2.13443, -159.014, -1, 0);
				Features::PlaceObjectByHash(2475986526, -66.7067, -842.714, 327.222, -9.37501, 2.13443, -159.27, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.5693, -841.792, 327.24, -9.63515, 4.26887, -156.16, -1, 0);
				Features::PlaceObjectByHash(2475986526, -61.8874, -840.436, 327.231, -9.37483, 4.26887, -146.534, -1, 0);
				Features::PlaceObjectByHash(2475986526, -59.7118, -838.501, 327.384, -9.63533, -0, -141.372, -1, 0);
				Features::PlaceObjectByHash(2475986526, -57.9491, -837.16, 327.309, -9.37471, 4.26887, -135.839, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.3494, -835.471, 327.34, -9.63578, 4.26887, -131.675, -1, 0);
				Features::PlaceObjectByHash(2475986526, -54.9387, -833.93, 327.334, -9.37482, -0, -127.887, -1, 0);
				Features::PlaceObjectByHash(2475986526, -53.727, -832.032, 327.367, -9.63521, -4.26887, -122.142, -1, 0);
				Features::PlaceObjectByHash(2475986526, -52.5928, -830.077, 327.332, -9.37496, -0, -116.843, -1, 0);
				Features::PlaceObjectByHash(2475986526, -51.7552, -827.819, 327.385, -9.63569, 6.4033, -111.077, -1, 0);
				Features::PlaceObjectByHash(2475986526, -51.0061, -825.839, 327.369, -9.37494, 4.26887, -107.054, -1, 0);
				Features::PlaceObjectByHash(2475986526, -50.5468, -823.622, 327.378, -9.63572, 4.26887, -101.598, -1, 0);
				Features::PlaceObjectByHash(2475986526, -50.0992, -820.896, 327.345, -9.47333, -1.06722, -95.7976, -1, 0);
				Features::PlaceObjectByHash(2475986526, -49.9295, -818.102, 327.381, -9.63531, -8.00413, -88.2146, -1, 0);
				Features::PlaceObjectByHash(2475986526, -50.1895, -815.816, 327.358, -9.4734, -0, -82.8649, -1, 0);
				Features::PlaceObjectByHash(2475986526, -50.9164, -813.132, 327.442, -9.63524, 2.13443, -76.865, -1, 0);
				Features::PlaceObjectByHash(2475986526, -51.1585, -811.568, 327.373, -9.58574, -0, -69.3402, -1, 0);
				Features::PlaceObjectByHash(2475986526, -52.0622, -809.533, 327.354, -9.63541, 2.13443, -65.7624, -1, 0);
				Features::PlaceObjectByHash(2475986526, -53.4048, -806.624, 327.376, -9.63526, 2.13443, -65.3971, -1, 0);
				Features::PlaceObjectByHash(2475986526, -55.2978, -803.815, 327.389, -9.63524, 4.26887, -52.2107, -1, 0);
				Features::PlaceObjectByHash(2475986526, -56.5179, -802.266, 327.366, -9.51013, 4.26887, -50.6537, -1, 0);
				Features::PlaceObjectByHash(2475986526, -57.9995, -800.68, 327.42, -9.6353, 1.28066, -41.7027, -1, 0);
				Features::PlaceObjectByHash(2475986526, -61.0278, -799.404, 327.549, -9.63516, 8.53774, -31.016, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.37, -797.284, 327.603, -9.6351, -0, -31.6732, -1, 0);
				Features::PlaceObjectByHash(2475986526, -66.3998, -795.965, 327.526, -9.42422, 8.53773, -29.018, -1, 0);
				Features::PlaceObjectByHash(2475986526, -68.8079, -794.744, 327.535, -9.63558, -2.13443, -20.0341, -1, 0);
				Features::PlaceObjectByHash(2475986526, -72.1225, -793.825, 327.497, -9.57894, -2.13443, -12.2336, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.6415, -795.169, 327.2, -9.63555, -1.60083, 2.8097, -1, 0);
				Features::PlaceObjectByHash(2475986526, -77.9613, -794.235, 327.223, -8.9769, -5.33608, 4.53814, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.3695, -789.507, 328.306, -8.84722, -8.33763, -0.0879073, -1, 0);
				Features::PlaceObjectByHash(2475986526, -80.6908, -794.505, 327.217, -9.63537, 4.26887, 13.0745, -1, 0);
				Features::PlaceObjectByHash(2475986526, -83.5673, -795.148, 327.101, -9.92985, 2.13443, 17.5819, -1, 0);
				Features::PlaceObjectByHash(2475986526, -86.3087, -796.203, 327.177, -9.63542, -4.26887, 25.9296, -1, 0);
				Features::PlaceObjectByHash(2475986526, -88.9655, -797.634, 327.118, -9.92994, -4.26887, 33.0571, -1, 0);
				Features::PlaceObjectByHash(2475986526, -91.6251, -799.702, 327.176, -9.63539, -0, 42.2513, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.414, -801.299, 327.124, -9.92995, -0, 48.7085, -1, 0);
				Features::PlaceObjectByHash(2475986526, -95.1453, -803.637, 327.147, -9.63537, -8.53774, 53.6544, -1, 0);
				Features::PlaceObjectByHash(2475986526, -96.5885, -805.701, 327.144, -9.8947, -0, 60.5096, -1, 0);
				Features::PlaceObjectByHash(2475986526, -97.6945, -807.971, 327.174, -9.63569, 4.26887, 64.7568, -1, 0);
				Features::PlaceObjectByHash(2475986526, -98.7075, -809.885, 327.026, -8.13758, -0, 67.8881, -1, 0);
				Features::PlaceObjectByHash(2475986526, -99.394, -812.176, 327.105, -9.63525, -4.26887, 73.0223, -1, 0);
				Features::PlaceObjectByHash(2475986526, -100.025, -814.868, 327.097, -9.97277, 2.13443, 83.1537, -1, 0);
				Features::PlaceObjectByHash(2475986526, -100.012, -817.789, 327.15, -9.63535, -1.33402, 88.8234, -1, 0);
				Features::PlaceObjectByHash(2475986526, -100.069, -819.76, 327.099, -9.95297, -1.33402, 90.8729, -1, 0);
				Features::PlaceObjectByHash(2475986526, -99.969, -821.91, 327.11, -9.63541, -2.66804, 91.5501, -1, 0);
				Features::PlaceObjectByHash(2475986526, -99.3358, -824.801, 327.138, -9.63539, 2.13443, 101.678, -1, 0);
				Features::PlaceObjectByHash(2475986526, -98.5443, -828.598, 327.033, -9.63553, -0, 104.64, -1, 0);
				Features::PlaceObjectByHash(2475986526, -97.0896, -831.054, 326.937, -10.0741, 4.26887, 118.72, -1, 0);
				Features::PlaceObjectByHash(2475986526, -102.435, -833.952, 328.506, -5.26399, -0, 118.502, -1, 0);
				Features::PlaceObjectByHash(2475986526, -103.536, -831.932, 328.513, -5.42142, 4.26887, 111.099, -1, 0);
				Features::PlaceObjectByHash(2475986526, -100.644, -836.571, 328.636, -5.26398, -0, 124.006, -1, 0);
				Features::PlaceObjectByHash(2475986526, -99.0448, -838.912, 328.589, -5.26395, -2.13443, 128.175, -1, 0);
				Features::PlaceObjectByHash(2475986526, -96.9401, -841.184, 328.589, -5.26384, -2.13443, 132.615, -1, 0);
				Features::PlaceObjectByHash(2475986526, -95.4409, -842.718, 328.551, -5.01006, -2.13443, 136.57, -1, 0);
				Features::PlaceObjectByHash(2475986526, -93.6584, -844.231, 328.606, -5.26388, -0, 143.429, -1, 0);
				Features::PlaceObjectByHash(2475986526, -92.1044, -845.82, 328.655, -5.01307, -2.13443, 147.428, -1, 0);
				Features::PlaceObjectByHash(2475986526, -89.6061, -846.328, 328.851, -5.26389, -0, 150.62, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.5884, -847.552, 328.829, -5.6777, -0, 153.36, -1, 0);
				Features::PlaceObjectByHash(2475986526, -84.5215, -848.802, 328.867, -5.26405, 5.33608, 161.164, -1, 0);
				Features::PlaceObjectByHash(2475986526, -81.9779, -849.605, 328.821, -5.67769, 1.06722, 166.961, -1, 0);
				Features::PlaceObjectByHash(2475986526, -79.5282, -849.717, 329.046, -5.26392, 1.06722, 170.517, -1, 0);
				Features::PlaceObjectByHash(2475986526, -76.7555, -850.113, 328.885, -4.93224, 2.66804, 175.995, -1, 0);
				Features::PlaceObjectByHash(2475986526, -73.2336, -850.06, 328.883, -5.26397, -0, -177.431, -1, 0);
				Features::PlaceObjectByHash(2475986526, -70.4067, -849.836, 328.854, -4.82287, -5.33608, -172.2, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.6252, -849.166, 328.911, -5.26394, -0, -166.741, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.6525, -848.331, 328.792, -4.82267, -2.13443, -160.74, -1, 0);
				Features::PlaceObjectByHash(2475986526, -62.1086, -847.355, 328.837, -5.26389, 2.13443, -156.346, -1, 0);
				Features::PlaceObjectByHash(2475986526, -60.2755, -846.895, 328.808, -5.97307, -2.13443, -151.031, -1, 0);
				Features::PlaceObjectByHash(2475986526, -58.5152, -845.543, 328.833, -5.26392, 1.06722, -147.129, -1, 0);
				Features::PlaceObjectByHash(2475986526, -55.9339, -843.258, 328.987, -5.26394, 2.13443, -141.8, -1, 0);
				Features::PlaceObjectByHash(2475986526, -53.6636, -841.564, 328.905, -5.18348, -0, -136.192, -1, 0);
				Features::PlaceObjectByHash(2475986526, -51.8013, -839.526, 328.926, -5.26393, -2.13443, -131.788, -1, 0);
				Features::PlaceObjectByHash(2475986526, -49.9112, -837.51, 328.916, -5.18352, -8.53774, -125.894, -1, 0);
				Features::PlaceObjectByHash(2475986526, -48.5833, -835.261, 328.968, -5.26388, 2.13443, -122.598, -1, 0);
				Features::PlaceObjectByHash(2475986526, -47.1369, -832.806, 328.936, -5.18352, -0, -117.146, -1, 0);
				Features::PlaceObjectByHash(2475986526, -46.1092, -830.019, 328.985, -5.26389, -0, -111.097, -1, 0);
				Features::PlaceObjectByHash(2475986526, -45.2549, -827.659, 328.957, -5.18353, -1.06722, -105.915, -1, 0);
				Features::PlaceObjectByHash(2475986526, -44.5598, -824.856, 328.973, -5.26387, -0, -101.582, -1, 0);
				Features::PlaceObjectByHash(2475986526, -44.0346, -821.522, 328.953, -5.26387, 5.33608, -95.978, -1, 0);
				Features::PlaceObjectByHash(2475986526, -43.8673, -817.92, 328.98, -5.26387, -4.00206, -88.1556, -1, 0);
				Features::PlaceObjectByHash(2475986526, -44.1983, -815.072, 328.956, -5.26387, -0, -82.8806, -1, 0);
				Features::PlaceObjectByHash(2475986526, -45.0463, -811.788, 329.021, -5.26392, -0, -77.2513, -1, 0);
				Features::PlaceObjectByHash(2475986526, -45.6154, -809.566, 328.95, -5.25705, -2.13443, -72.2094, -1, 0);
				Features::PlaceObjectByHash(2475986526, -46.5685, -807.149, 328.929, -5.26395, -2.13443, -66.9958, -1, 0);
				Features::PlaceObjectByHash(2475986526, -47.9752, -804.122, 328.959, -5.26398, -0, -65.1505, -1, 0);
				Features::PlaceObjectByHash(2475986526, -49.0785, -802.078, 328.914, -5.31539, 4.26887, -57.7224, -1, 0);
				Features::PlaceObjectByHash(2475986526, -50.5092, -800.141, 328.99, -5.26406, -0, -52.4683, -1, 0);
				Features::PlaceObjectByHash(2475986526, -52.041, -798.134, 329.001, -5.31536, -2.13443, -49.2493, -1, 0);
				Features::PlaceObjectByHash(2475986526, -53.8808, -796.134, 329.041, -5.26389, -0, -42.3308, -1, 0);
				Features::PlaceObjectByHash(2475986526, -55.4375, -794.682, 329.045, -5.32055, 2.13443, -37.3601, -1, 0);
				Features::PlaceObjectByHash(2475986526, -57.7537, -794.2, 329.16, -5.26393, 2.13443, -32.2267, -1, 0);
				Features::PlaceObjectByHash(2475986526, -61.0299, -792.042, 329.172, -5.26389, -2.13443, -32.1174, -1, 0);
				Features::PlaceObjectByHash(2475986526, -63.5163, -790.736, 329.085, -5.04535, -4.26887, -29.2933, -1, 0);
				Features::PlaceObjectByHash(2475986526, -64.7324, -789.882, 329.081, -4.987, -2.13443, -27.7917, -1, 0);
				Features::PlaceObjectByHash(2475986526, -66.7775, -788.94, 329.155, -5.04558, 1.06722, -19.5666, -1, 0);
				Features::PlaceObjectByHash(2475986526, -68.6555, -788.272, 329.103, -5.30654, 3.20165, -16.9146, -1, 0);
				Features::PlaceObjectByHash(2475986526, -70.8259, -787.837, 329.128, -5.04546, 1.06722, -12.2941, -1, 0);
				Features::PlaceObjectByHash(2475986526, -74.5572, -787.022, 329.08, -4.61724, 1.06722, -10.7316, -1, 0);
				Features::PlaceObjectByHash(2475986526, -75.8754, -788.646, 328.671, -6.78921, -0, 2.98721, -1, 0);
				Features::PlaceObjectByHash(2475986526, -78.4, -788.132, 328.83, -5.91899, 2.66804, 3.75875, -1, 0);
				Features::PlaceObjectByHash(2475986526, -80.5351, -788.179, 328.782, -5.80051, -0, 7.26539, -1, 0);
				Features::PlaceObjectByHash(2475986526, -82.1189, -788.558, 328.793, -5.9192, 1.06722, 12.7168, -1, 0);
				Features::PlaceObjectByHash(2475986526, -85.4054, -789.317, 328.666, -5.79433, -0, 17.1877, -1, 0);
				Features::PlaceObjectByHash(2475986526, -87.4651, -789.98, 328.647, -5.63204, -0, 20.2315, -1, 0);
				Features::PlaceObjectByHash(2475986526, -88.9795, -790.697, 328.76, -5.79416, -0, 25.9501, -1, 0);
				Features::PlaceObjectByHash(2475986526, -90.9922, -791.487, 328.684, -6.26149, -0, 27.0819, -1, 0);
				Features::PlaceObjectByHash(2475986526, -92.3298, -792.474, 328.677, -5.79412, -0, 33.3113, -1, 0);
				Features::PlaceObjectByHash(2475986526, -94.2322, -793.73, 328.669, -5.58479, -2.13443, 37.4974, -1, 0);
				Features::PlaceObjectByHash(2475986526, -95.7282, -795.2, 328.764, -5.79431, -0, 41.8672, -1, 0);
				Features::PlaceObjectByHash(2475986526, -97.9782, -797.316, 328.695, -5.58488, -0, 48.9171, -1, 0);
				Features::PlaceObjectByHash(2475986526, -100.042, -800.063, 328.731, -5.79425, 2.13443, 53.7039, -1, 0);
				Features::PlaceObjectByHash(2475986526, -101.884, -802.718, 328.706, -5.5848, 2.13443, 60.3613, -1, 0);
				Features::PlaceObjectByHash(2475986526, -103.09, -805.421, 328.718, -5.79425, -0, 64.506, -1, 0);
				Features::PlaceObjectByHash(2475986526, -104.284, -807.711, 328.691, -5.58488, -2.13443, 65.966, -1, 0);
				Features::PlaceObjectByHash(2475986526, -105.262, -810.369, 328.729, -5.26384, 1.06722, 73.2414, -1, 0);
				Features::PlaceObjectByHash(2475986526, -105.769, -812.146, 328.645, -5.25205, -1.06722, 75.8091, -1, 0);
				Features::PlaceObjectByHash(2475986526, -106.155, -814.128, 328.687, -5.26388, -1.06722, 82.8157, -1, 0);
				Features::PlaceObjectByHash(2475986526, -106.062, -817.685, 328.758, -5.26388, 2.66804, 88.7458, -1, 0);
				Features::PlaceObjectByHash(2475986526, -106.154, -819.723, 328.716, -5.25204, -0, 90.1628, -1, 0);
				Features::PlaceObjectByHash(2475986526, -106.082, -822.072, 328.729, -5.26387, -1.33402, 91.2972, -1, 0);
				Features::PlaceObjectByHash(2475986526, -105.911, -823.815, 328.7, -5.52135, 5.33608, 99.4393, -1, 0);
				Features::PlaceObjectByHash(2475986526, -105.28, -826.029, 328.734, -5.26391, 1.06722, 101.615, -1, 0);
				Features::PlaceObjectByHash(2475986526, -105.06, -827.904, 328.644, -5.29978, 1.06722, 102.515, -1, 0);
				Features::PlaceObjectByHash(2475986526, -104.327, -830.112, 328.614, -5.26391, -2.13443, 104.719, -1, 0);
				Features::PlaceObjectByHash(3291218330, -108.551, -853.416, 327.387, 2.94456, 89.1111, -166.155, -1, 0);
				Features::PlaceObjectByHash(3291218330, -80.2509, -866.418, 327.301, 3.7405, 89.3, 146.641, -1, 0);
				Features::PlaceObjectByHash(3291218330, -55.8513, -863.921, 327.333, 6.87468, 89.6184, 149.776, -1, 0);
				Features::PlaceObjectByHash(3291218330, -37.3907, -848.122, 327.717, 2.33633, 88.8797, -16.2595, -1, 0);
				Features::PlaceObjectByHash(3291218330, -26.1908, -818.332, 328.76, 0.490556, 84.6598, -18.107, -1, 0);
				Features::PlaceObjectByHash(3291218330, -37.891, -789.138, 328.134, 1.11673, 87.6571, 42.7186, -1, 0);
				Features::PlaceObjectByHash(3291218330, -63.492, -772.044, 327.866, 3.09962, 89.1556, 44.702, -1, 0);
				Features::PlaceObjectByHash(3291218330, -93.4916, -774.848, 327.398, 2.73771, 89.0443, 122.539, -1, 0);
				Features::PlaceObjectByHash(3291218330, -115.991, -795.259, 327.27, 3.28432, 89.2033, 123.086, -1, 0);
				Features::PlaceObjectByHash(3291218330, -122.551, -825.074, 327.213, 173.37, 89.6048, 4.27077, -1, 0);
				Features::PlaceObjectByHash(118627012, -74.8438, -819.617, 323.685, 0, 0, -3.37511, -1, 0);
				Features::PlaceObjectByHash(2475986526, -67.6253, -820.244, 323.793, -14.4263, -8.53774, -100.02, -1, 0);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
			}
			break;
#pragma region mapmods
		case ramp2:
			Menu::Title("Stewie's");
			Menu::Break("MAZE BANK ROOF RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(1600026313, -78.4864, -807.943, 323.202, 109.364, -89.9209, 0, -1, 1);
				Features::PlaceObjectByHash(1600026313, -79.2766, -805.701, 323.204, 109.364, -89.9209, 0, -1, 1);
				Features::PlaceObjectByHash(1600026313, -79.8373, -803.709, 323.205, 109.364, -89.9209, 0, -1, 1);
				Features::PlaceObjectByHash(1600026313, -80.4295, -801.947, 323.207, 109.364, -89.9209, 0, -1, 1);
				Features::PlaceObjectByHash(4143853297, -97.4731, -778.557, 308.877, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(1087520462, -84.2429, -793.182, 321.08, -63.5625, -0, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -83.5429, -795.106, 322.073, -63.5625, -0, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -84.9429, -791.108, 319.956, -62.6673, 8.53774e-007, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -85.8122, -788.585, 318.638, -63.5625, -0, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -89.1589, -779.487, 313.336, -59.5389, 0.0405551, -160.567, -1, 1);
				Features::PlaceObjectByHash(1087520462, -90.7065, -774.863, 310.09, -57.4959, 0.322988, -160.758, -1, 1);
				Features::PlaceObjectByHash(1087520462, -91.4887, -772.564, 308.403, -55.1692, 0.383369, -161.049, -1, 1);
				Features::PlaceObjectByHash(1087520462, -91.7565, -771.74, 307.844, -56.4466, 0.0442451, -160.565, -1, 1);
				Features::PlaceObjectByHash(1087520462, -93.6941, -766.245, 302.736, -45.9996, 0.0556114, -160.556, -1, 1);
				Features::PlaceObjectByHash(1087520462, -94.2969, -764.648, 301.067, -44.7623, -1.70755e-006, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -94.2969, -764.648, 301.067, -44.7623, -1.70755e-006, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -94.886, -762.996, 298.741, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -95.4855, -761.334, 296.406, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -95.4855, -761.334, 296.406, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.1606, -759.499, 294.259, -42.0766, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.709, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.709, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.46, -36.7051, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.8807, -757.391, 292.506, -51.0291, -8.53774e-007, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -96.8807, -757.391, 292.506, -51.0291, -8.53774e-007, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -97.3203, -756.159, 291.688, -57.2958, -0, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -97.9597, -754.358, 290.78, -62.6673, 8.53774e-007, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -97.9597, -754.358, 290.78, -62.6673, 8.53774e-007, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -98.7192, -752.356, 290.042, -69.9278, 3.20165e-005, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -99.0244, -751.684, 290.499, -90, -8.46346e-007, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -99.3223, -750.534, 290.479, -90, -8.46346e-007, -160.249, -1, 1);
				Features::PlaceObjectByHash(1087520462, -100.348, -747.881, 290.452, -89.5256, -1.33402e-008, -159.354, -1, 1);
				Features::PlaceObjectByHash(1087520462, -100.26, -748.154, 290.462, -76.096, 4.26887e-007, 19.6954, -1, 1);
				Features::PlaceObjectByHash(1087520462, -100.687, -747.053, 290.731, -62.6673, -8.53774e-007, 20.5907, -1, 1);
				Features::PlaceObjectByHash(1087520462, -101.346, -745.387, 291.611, -58.191, 1.70755e-006, 19.6954, -1, 1);
				Features::PlaceObjectByHash(1087520462, -102.234, -743.119, 293.091, -52.2249, 0.00051141, 21.3426, -1, 1);
				Features::PlaceObjectByHash(2475986526, -102.154, -739.285, 294.83, 9.80014, 0.295618, 18.7802, -1, 1);
				Features::PlaceObjectByHash(2475986526, -105.054, -740.282, 294.827, 9.80014, 0.295618, 18.7802, -1, 1);
				Features::PlaceObjectByHash(1087520462, -103.071, -741.047, 294.832, -48.0666, 0.000519094, 21.3419, -1, 1);
				Features::PlaceObjectByHash(1087520462, -103.75, -739.405, 296.413, -45.1472, 0.000547269, 21.3416, -1, 1);
				Features::PlaceObjectByHash(4143853297, -90.3515, -798.112, 319.893, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -93.2293, -790.348, 317.189, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -95.3479, -784.483, 313.696, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -100.01, -771.31, 304.367, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -101.829, -766.277, 299.666, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -103.318, -762.175, 293.966, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -104.948, -757.681, 288.866, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -108.146, -748.798, 288.866, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -108.146, -748.798, 295.608, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -108.225, -748.694, 302.608, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(3167053133, -103.451, -740.541, 307.317, -0.900199, -1.19985, 20.9076, -1, 1);
				Features::PlaceObjectByHash(2375650849, -102.454, -742.6, 309.309, 0, 0, 20.9393, -1, 1);
				Features::PlaceObjectByHash(4143853297, -101.483, -746.044, 305.602, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -94.7458, -743.402, 295.608, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -94.7566, -743.406, 288.866, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -94.7426, -743.595, 302.651, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(1157292806, -99.7732, -750.516, 309.575, 0, 0, 24.1761, -1, 1);
				Features::PlaceObjectByHash(4143853297, -89.9785, -756.476, 293.966, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -91.5378, -752.285, 288.866, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -87.9094, -762.07, 299.666, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -86.2094, -766.939, 304.367, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -84.0215, -772.971, 309.575, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -81.6733, -779.348, 313.696, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -79.5187, -785.083, 317.189, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(4143853297, -76.5616, -793.191, 319.493, 0, -0, -159.831, -1, 1);
				Features::PlaceObjectByHash(1998517203, -81.0993, -790.139, 326.57, 0, 0, -82.6177, -1, 1);
				Features::PlaceObjectByHash(1998517203, -88.8988, -792.911, 326.95, 0, 0, -82.6177, -1, 1);
				Features::PlaceObjectByHash(803874239, -88.3376, -794.173, 327.042, 0, 0, 31.5501, -1, 1);
				Features::PlaceObjectByHash(803874239, -90.0376, -795.174, 327.262, 0, 0, 31.5501, -1, 1);
				Features::PlaceObjectByHash(803874239, -91.6375, -796.175, 327.482, 0, 0, 31.5501, -1, 1);
				Features::PlaceObjectByHash(803874239, -79.0283, -791.31, 326.763, 0, -0, 100.953, -1, 1);
				Features::PlaceObjectByHash(803874239, -76.8377, -790.87, 326.823, 0, -0, 100.953, -1, 1);
				Features::PlaceObjectByHash(803874239, -81.0088, -791.22, 326.713, 0, -0, 100.953, -1, 1);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
			}
			break;
#pragma region mapmods
		case ramp3:
			Menu::Title("Stewie's");
			Menu::Break("BEACH RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(1952396163, -1497.76, -1113.84, -3.08, -90, 6.14715e-007, 165.792, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1461.92, -1216.88, 2.5836, -2.3048, -0, -154.878, -1, 2);
				Features::PlaceObjectByHash(3291218330, -1465.62, -1217.64, 18, 166.516, -5.12264e-006, 24.1717, -1, 2);
				Features::PlaceObjectByHash(3291218330, -1458.89, -1214.4, 18, -38.4956, 8.53774e-007, -153.982, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1460.32, -1219.97, 4.3801, 12.6953, -0, -154.878, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1457, -1226.67, 11.8772, 31.7229, -0, -154.382, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1458.4, -1223.77, 7.9937, 23.6001, -0.0916355, -154.918, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1456.4, -1228.27, 14.9608, 48.674, -0, -153.982, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1456, -1229.07, 19.7441, 68.6628, -0, -153.982, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1456.2, -1228.47, 24.8276, 82.6252, 3.80938, -152.828, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1456.9, -1226.47, 28.9111, 108.498, -8.51368, -157.244, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1458.59, -1223.37, 31.5945, 130.616, -4.72983, -155.087, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1460.59, -1218.38, 33.5779, 143.744, -3.95611, -152.581, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1462.79, -1214.28, 34.161, 163.63, -2.68302, -155.763, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, 4.69576e-006, -152.192, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, 4.69576e-006, -152.192, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1466.9, -1205.68, 29.0062, -155.178, 9.47689e-005, -153.087, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1468.3, -1202.98, 24.1897, -131.11, 6.74481e-005, -153.088, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1468.59, -1202.68, 19.3732, -107.429, 3.07358e-005, -153.087, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1467.99, -1203.88, 13.5732, -89.6528, -0.153235, -155.853, -1, 2);
				Features::PlaceObjectByHash(2475986526, -1467.11, -1205.68, 10.7072, -63.5491, 8.53774e-007, -156.504, -1, 2);
				Features::PlaceObjectByHash(4109455646, -1465.05, -1210.03, 7.9503, 9.53319, 1.38057, 24.2606, -1, 2);
				Features::PlaceObjectByHash(2975320548, -1460.95, -1218.79, 7.66, -29.9323, -0.173323, 24.7221, -1, 2);
				Features::PlaceObjectByHash(2975320548, -1463.05, -1214.19, 6.7879, -6.50192, 1.391, 24.2651, -1, 2);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1513.0f, -1192.0f, 1.0f, 1, 0, 0, 1);
			}
			break;
#pragma region mapmods
		case ramp4:
			Menu::Title("Stewie's");
			Menu::Break("MOUNT CHILIAD");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(1952396163, -1497.76, -1113.84, -3.08, -90, -0, 165.792, 90, 3);
				Features::PlaceObjectByHash(2475986526, -1461.92, -1216.88, 2.5836, -2.3048, 0, -154.878, 205.14, 3);
				Features::PlaceObjectByHash(3291218330, -1458.89, -1214.4, 18, -38.4956, 0, -153.982, 211.95, 3);
				Features::PlaceObjectByHash(2475986526, -1460.32, -1219.97, 4.3801, 12.6953, 0, -154.878, 205.672, 3);
				Features::PlaceObjectByHash(2975320548, -1463.05, -1214.19, 6.7879, -6.5, -1.391, 24.2651, 24.4244, 3);
				Features::PlaceObjectByHash(3291218330, -1465.62, -1217.64, 18, 166.516, 180, 24.1717, 155.224, 3);
				Features::PlaceObjectByHash(4109455646, -1465.05, -1210.03, 7.9503, 9.5304, -1.3806, 24.2606, 24.5148, 3);
				Features::PlaceObjectByHash(2975320548, -1460.95, -1218.79, 7.66, -29.9322, 0.1733, 24.7221, 27.9617, 3);
				Features::PlaceObjectByHash(2475986526, -1458.4, -1223.77, 7.9937, 23.6001, 0.0916, -154.918, 207.065, 3);
				Features::PlaceObjectByHash(2475986526, -1467.11, -1205.68, 10.7072, -63.5491, 0, -156.505, 224.303, 3);
				Features::PlaceObjectByHash(2475986526, -1457, -1226.67, 11.8772, 31.7229, 0, -154.382, 209.411, 3);
				Features::PlaceObjectByHash(2475986526, -1456.4, -1228.27, 14.9608, 48.674, 0, -153.982, 216.471, 3);
				Features::PlaceObjectByHash(2475986526, -1456, -1229.07, 19.7441, 68.6628, 0, -153.982, 233.298, 3);
				Features::PlaceObjectByHash(2475986526, -1456.2, -1228.47, 24.8276, 81.7043, -3.8094, -152.828, 252.429, 3);
				Features::PlaceObjectByHash(2475986526, -1456.9, -1226.47, 28.9111, 110.301, 171.486, -157.244, 312.201, 3);
				Features::PlaceObjectByHash(2475986526, -1458.59, -1223.37, 31.5945, 130.843, 175.27, -155.087, 325.759, 3);
				Features::PlaceObjectByHash(2475986526, -1460.59, -1218.38, 33.5779, 143.844, 176.044, -152.581, 327.979, 3);
				Features::PlaceObjectByHash(2475986526, -1462.79, -1214.28, 34.161, 163.648, 177.317, -155.763, 335.024, 3);
				Features::PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, -180, -152.192, 331.971, 3);
				Features::PlaceObjectByHash(2475986526, -1466.9, -1205.68, 29.0062, -155.178, -180, -153.087, 330.783, 3);
				Features::PlaceObjectByHash(2475986526, -1468.3, -1202.98, 24.1897, -131.11, -180, -153.088, 322.332, 3);
				Features::PlaceObjectByHash(2475986526, -1468.59, -1202.68, 19.3732, -107.429, -180, -153.087, 300.544, 3);
				Features::PlaceObjectByHash(2475986526, -1467.99, -1203.88, 13.5732, -89.6205, 0.1532, -155.853, 269.072, 3);
				Features::PlaceObjectByHash(3966705493, 509.842, 5589.24, 791.066, 0.141, 0, 65.3998, 65.3999, 3);
				Features::PlaceObjectByHash(3966705493, 520.5, 5584.38, 790.503, 5.441, 0, 65.3998, 65.4976, 3);
				Features::PlaceObjectByHash(3966705493, 531.057, 5579.54, 788.691, 12.441, 0, 65.3998, 65.9111, 3);
				Features::PlaceObjectByHash(3966705493, 568.672, 5562.32, 767.428, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 576.972, 5558.53, 759.566, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 560.174, 5566.2, 774.698, 35.0403, 0, 65.3998, 69.4512, 3);
				Features::PlaceObjectByHash(3966705493, 541.325, 5574.84, 785.49, 19.4409, 0, 65.3998, 66.6484, 3);
				Features::PlaceObjectByHash(3966705493, 551.066, 5570.37, 780.799, 27.5407, 0, 65.3998, 67.9049, 3);
				Features::PlaceObjectByHash(3966705493, 585.249, 5554.75, 751.745, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 618.334, 5539.62, 720.386, 40.7936, 0, 65.3998, 70.8829, 3);
				Features::PlaceObjectByHash(3966705493, 626.602, 5535.85, 712.547, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 610.065, 5543.4, 728.217, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 601.777, 5547.19, 736.076, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 593.507, 5550.97, 743.917, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 634.862, 5532.07, 704.725, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 643.121, 5528.29, 696.894, 40.7936, 0, 65.3998, 70.8829, 3);
				Features::PlaceObjectByHash(3966705493, 651.391, 5524.51, 689.053, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 659.651, 5520.73, 681.221, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 667.911, 5516.94, 673.389, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 676.171, 5513.17, 665.558, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 684.431, 5509.38, 657.727, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 692.691, 5505.61, 649.905, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 700.95, 5501.83, 642.074, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 709.22, 5498.05, 634.243, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 717.46, 5494.28, 626.431, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 725.72, 5490.5, 618.6, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 733.98, 5486.72, 610.778, 40.7396, 0, 65.3998, 70.8685, 3);
				Features::PlaceObjectByHash(3966705493, 742.6, 5482.78, 603.167, 36.9395, 0, 65.3998, 69.9005, 3);
				Features::PlaceObjectByHash(3966705493, 751.83, 5478.55, 596.335, 31.0392, 0, 65.3998, 68.5807, 3);
				Features::PlaceObjectByHash(3966705493, 761.71, 5474.02, 590.613, 24.5989, 0, 65.3998, 67.3986, 3);
				Features::PlaceObjectByHash(3966705493, 772.07, 5469.28, 586.08, 18.9288, 0, 65.3998, 66.5835, 3);
				Features::PlaceObjectByHash(3966705493, 782.84, 5464.34, 582.86, 11.5788, 0, 65.3998, 65.8427, 3);
				Features::PlaceObjectByHash(3966705493, 793.89, 5459.28, 581.117, 5.0787, 0, 65.3998, 65.485, 3);
				Features::PlaceObjectByHash(3966705493, 805.1, 5454.15, 580.876, -2.5212, 0, 65.3998, 65.4208, 3);
				Features::PlaceObjectByHash(3966705493, 816.17, 5449.08, 581.975, -7.6213, 0, 65.3998, 65.5917, 3);
				Features::PlaceObjectByHash(3966705493, 827.191, 5444.04, 584.582, -16.6212, 0, 65.3998, 66.3125, 3);
				Features::PlaceObjectByHash(3966705493, 837.681, 5439.24, 588.899, -24.421, 0, 65.3998, 67.3698, 3);
				Features::PlaceObjectByHash(2580877897, 522.61, 5584.49, 779.214, 79.7153, -9.2252, 55.7018, 77.7612, 3);
				Features::PlaceObjectByHash(3862788492, 522.445, 5583.69, 779.551, -0.9197, -69.229, -167.468, 184.555, 3);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 500, 5593, 795, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp5:
			Menu::Title("Stewie's");
			Menu::Break("AIRPORT MINI RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(2475986526, -1242.08, -2931.15, 12.9924, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(2475986526, -1247.11, -2928.46, 15.013, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(2475986526, -1251.58, -2926.05, 16.7865, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(2475986526, -1254.69, -2924.35, 18.25, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1276.69, -2912.99, 23.0019, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(2475986526, -1258.35, -2922.28, 20.2135, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1270.89, -2916.22, 23.0123, 0, 0, 60.8909, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1270.25, -2914.99, 23.0137, 0, 0, 60.8909, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1274.87, -2909.4, 23.0049, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1269.01, -2912.64, 22.9993, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1267.87, -2915.44, 28.3632, 0, -0, 147.299, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1272.13, -2918.33, 28.4791, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1272.11, -2918.35, 25.6708, -0.48, 0.0499982, 60.9701, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1277.93, -2915.14, 25.604, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1279.69, -2909.85, 25.6358, 0, -0, -151.239, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1279.69, -2909.85, 28.4844, 0, -0, -151.239, -1, 4);
				Features::PlaceObjectByHash(2475986526, -1261.82, -2920.38, 21.767, -0.1046, -3.33505e-009, 61.0607, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1273.65, -2907.11, 22.9763, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1267.77, -2910.37, 22.9978, 0, 0.05, 60.9705, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1266.49, -2908.08, 22.9987, 0, -0, -119.462, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1265.15, -2905.8, 23.0042, 0, -0, -119.462, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1266.44, -2905.21, 25.6255, 0, -0, -118.761, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1265.66, -2911.99, 25.6968, 0, 0, -30.9603, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1264.88, -2910.66, 25.6982, 0, 0, -30.9603, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1264.84, -2905.14, 25.624, 0, -0, -118.761, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1272.37, -2900.96, 25.6199, 0, -0, -118.761, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1276.35, -2903.91, 25.6214, 0, -0, -151.239, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1276.35, -2903.91, 28.4329, 0, -0, -151.239, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1272.37, -2900.96, 28.4385, 0, -0, -118.761, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1266.44, -2905.21, 28.437, 0, -0, -118.761, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1265.17, -2905.14, 28.3426, 0, -0, -118.861, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1271.09, -2902.58, 23.0057, 0, -0, -119.462, -1, 4);
				Features::PlaceObjectByHash(3966705493, -1272.37, -2904.83, 22.9972, 0, -0, -119.462, -1, 4);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1208, -2950, 13, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp6:
			Menu::Title("Stewie's");
			Menu::Break("AIRPORT GATE RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(2475986526, -1098.36, -2631.17, 19, 0, -0, 152.671, -1, 5);
				Features::PlaceObjectByHash(2475986526, -1100.26, -2634.64, 21.1976, 16.2002, 0.192059, 150.427, -1, 5);
				Features::PlaceObjectByHash(2475986526, -1102.26, -2638.02, 25.01, 26.7003, 0.178675, 149.261, -1, 5);
				Features::PlaceObjectByHash(2475986526, -1103.96, -2640.91, 29.04, 28.3717, -0, 146.82, -1, 5);
				Features::PlaceObjectByHash(1952396163, -1119.61, -2670.96, -5.125, 0, -0, 150.514, -1, 5);
				Features::PlaceObjectByHash(1952396163, -1119.61, -2670.96, -5.125, 0, -0, 150.401, -1, 5);
				Features::PlaceObjectByHash(3137065507, -1044.69, -2530.08, 20.4011, 94.8962, 4.26887e-007, 147.716, -1, 5);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1046, -2538, 20, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp7:
			Menu::Title("Stewie's");
			Menu::Break("SPACE TOWER");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 654.365, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 646.186, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 638.008, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 629.829, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 621.65, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 613.471, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 605.292, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 597.114, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 588.935, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 580.756, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 572.577, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 564.399, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 556.22, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 662.544, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 548.041, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 539.862, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 531.683, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 523.505, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 515.326, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 507.147, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 498.968, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 490.79, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 482.611, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 474.432, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 466.253, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 458.074, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 449.896, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 441.717, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 433.538, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 425.359, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 417.18, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 409.001, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 400.823, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 392.644, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 384.465, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 376.286, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 368.107, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 359.929, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 351.75, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 343.571, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 335.392, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 327.213, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 319.035, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 310.856, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 302.677, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 294.498, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 286.319, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 278.141, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 269.962, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 261.783, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 253.604, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 245.425, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 237.247, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 229.068, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 220.889, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 212.71, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 204.531, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 196.353, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 188.174, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 179.995, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 171.816, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 163.637, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 155.459, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 147.28, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 139.101, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 130.922, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 122.743, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 114.565, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 106.386, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 98.207, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 90.0282, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 81.8494, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 73.6706, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 65.4918, 0.660085, -0.919939, -109.32, -1, 6);
				Features::PlaceObjectByHash(3026699584, 70.2592, -674.044, 57.313, 0.660085, -0.919939, -109.32, -1, 6);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 70, -674, 680, 1, 0, 0, 1);
			}
			break;
#pragma region mapmods
		case ramp8:
			Menu::Title("Stewie's");
			Menu::Break("QUAD RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3522933110, -81.3886, -814.648, 325.169, 0, -0, 180, -1, 7);
				Features::PlaceObjectByHash(3681122061, -81.7456, -809.064, 324.799, 0.500021, 2.66804, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -86.1333, -802.279, 321.92, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -89.7406, -796.701, 316.539, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -93.601, -790.725, 310.777, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -97.4741, -784.73, 304.997, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -101.373, -778.696, 299.179, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -105.233, -772.72, 293.417, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -109.106, -766.725, 287.637, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -112.954, -760.769, 281.894, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -116.827, -754.773, 276.113, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -120.687, -748.798, 270.352, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -124.518, -742.868, 264.636, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -128.358, -736.925, 258.909, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -132.22, -730.949, 253.151, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -136.081, -724.974, 247.394, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -139.943, -718.998, 241.636, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -143.826, -712.99, 235.846, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -147.667, -707.047, 230.12, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -151.508, -701.104, 224.394, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -155.369, -695.128, 218.636, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -159.252, -689.12, 212.846, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -163.072, -683.209, 207.152, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -166.976, -677.168, 201.331, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -170.838, -671.193, 195.573, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -174.7, -665.217, 189.815, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -178.583, -659.209, 184.026, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -182.444, -653.233, 178.268, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -186.327, -647.225, 172.479, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -190.189, -641.249, 166.721, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -194.03, -635.306, 160.994, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -197.871, -629.363, 155.268, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -201.711, -623.42, 149.542, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -205.552, -617.477, 143.815, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -209.393, -611.534, 138.089, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -213.255, -605.559, 132.331, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -217.095, -599.616, 126.605, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -220.957, -593.64, 120.847, -38.9999, -1.45141, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -222.245, -591.648, 118.928, -33.8999, 1.02453, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -223.349, -589.94, 117.561, -29.31, 1.79292, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -224.58, -588.036, 116.288, -26.25, 5.12264, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -225.869, -586.04, 115.116, -24.7199, -1.10991, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -227.127, -584.095, 114.05, -21.6599, 1.8783, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -228.615, -581.794, 112.961, -19.6199, 1.02453, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -230.201, -579.341, 111.92, -17.0699, -0, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -232.121, -576.369, 110.833, -12.9899, 4.26887, 32.8808, -1, 7);
				Features::PlaceObjectByHash(3681122061, -234.105, -573.302, 109.991, -9.9299, -2.98821, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -236.628, -569.396, 109.329, -7.3799, -4.26887, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -239.81, -564.475, 108.721, -4.3199, 1.28066, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -241.76, -561.459, 108.549, -0.7499, -1.12058, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -244.04, -557.932, 108.494, 2.82011, -2.77476, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -246.372, -554.326, 108.705, 5.8801, -2.77476, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -248.668, -550.777, 109.14, 10.4701, 8.96462, 32.8806, -1, 7);
				Features::PlaceObjectByHash(3681122061, -251.664, -546.138, 110.313, 13.5301, 1.15259, 32.8806, -1, 7);
				Features::PlaceObjectByHash(3681122061, -254.537, -541.694, 111.791, 16.5901, 4.26887, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -256.28, -538.999, 112.748, 19.6501, -1.19528, 32.8807, -1, 7);
				Features::PlaceObjectByHash(3681122061, -65.9078, -814.752, 326.106, 19.89, 4.26887, -53.8105, -1, 7);
				Features::PlaceObjectByHash(3681122061, -58.6541, -809.444, 327.336, -4.08004, -2.13443, -53.8103, -1, 7);
				Features::PlaceObjectByHash(3681122061, -52.4476, -804.909, 323.715, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -47.2332, -801.09, 317.168, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -42.0187, -797.272, 310.621, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -36.8326, -793.474, 304.109, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -31.5898, -789.635, 297.526, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -26.4037, -785.838, 291.014, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -21.1893, -782.019, 284.467, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -15.9748, -778.201, 277.919, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -10.7604, -774.383, 271.372, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -5.57426, -770.585, 264.86, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, -0.359839, -766.767, 258.313, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 4.82623, -762.969, 251.799, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 10.0123, -759.171, 245.285, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 15.2268, -755.353, 238.735, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 20.4412, -751.535, 232.184, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 25.6273, -747.737, 225.67, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 30.8135, -743.939, 219.155, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 36.0279, -740.121, 212.605, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 41.214, -736.323, 206.091, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 46.4285, -732.505, 199.54, -45.3899, 2.56132, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 48.4122, -731.052, 197.049, -41.8198, 1.62217, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 49.5549, -730.218, 195.782, -38.2499, 3.24434, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 51.171, -729.035, 194.203, -36.2098, 2.39057, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 52.8966, -727.773, 192.637, -33.1499, -6.83019, -53.8101, -1, 7);
				Features::PlaceObjectByHash(3681122061, 54.586, -726.537, 191.27, -30.0898, 8.70849, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 56.5413, -725.105, 189.866, -25.4998, 7.59859, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 58.8359, -723.425, 188.509, -22.4398, 4.26887, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 60.738, -722.033, 187.536, -18.3599, 1.10991, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 63.1509, -720.268, 186.544, -15.8098, 5.03727, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 65.131, -718.821, 185.849, -12.7498, 5.07995, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 67.1384, -717.352, 185.286, -9.17981, 4.78113, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 69.2894, -715.776, 184.855, -4.5898, 4.18349, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 71.7831, -713.952, 184.607, 0.000193536, 4.16213, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 74.0832, -712.268, 184.607, 3.06019, 3.7566, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 76.0175, -710.853, 184.736, 8.1602, 4.35424, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 77.7752, -709.567, 185.048, 13.2602, 5.50684, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 79.6997, -708.158, 185.61, 17.3402, 3.7566, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 81.3947, -706.918, 186.266, 21.9302, 4.26887, -53.81, -1, 7);
				Features::PlaceObjectByHash(3681122061, 83.3036, -705.52, 187.219, 26.0102, 9.39151, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 85.6244, -703.821, 188.622, 29.0702, 1.96368, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 87.3526, -702.556, 189.812, 33.1501, 2.90283, -53.8098, -1, 7);
				Features::PlaceObjectByHash(3681122061, 89.2107, -701.196, 191.316, 37.2301, 4.86651, -53.8098, -1, 7);
				Features::PlaceObjectByHash(3681122061, 90.8492, -699.998, 192.859, 41.82, -2.56132, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 92.6236, -698.701, 194.826, 46.41, 8.2816, -53.8099, -1, 7);
				Features::PlaceObjectByHash(3681122061, 94.2096, -697.539, 196.89, 52.0199, 6.57406, -53.8098, -1, 7);
				Features::PlaceObjectByHash(3681122061, 95.6251, -696.503, 199.137, 56.61, 9.22075, -53.8097, -1, 7);
				Features::PlaceObjectByHash(3681122061, 96.9799, -695.512, 201.683, 61.7098, 8.53774, -53.8097, -1, 7);
				Features::PlaceObjectByHash(3681122061, 98.1658, -694.646, 204.413, 65.7899, 5.03726, -53.8096, -1, 7);
				Features::PlaceObjectByHash(3681122061, -69.0186, -829.452, 324.775, 0, -0, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -65.276, -836.288, 321.491, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -62.2554, -842.061, 315, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -59.2515, -847.802, 308.544, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -56.2313, -853.574, 302.053, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -53.1945, -859.378, 295.526, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -50.2071, -865.088, 289.106, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -47.2032, -870.829, 282.65, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -44.1829, -876.602, 276.159, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -41.1626, -882.374, 269.667, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -38.1751, -888.084, 263.247, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -35.1713, -893.825, 256.791, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -32.1674, -899.566, 250.335, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -29.1635, -905.307, 243.879, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -26.1432, -911.079, 237.388, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -23.1393, -916.821, 230.932, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -20.119, -922.593, 224.44, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -17.1152, -928.334, 217.985, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -14.1112, -934.075, 211.529, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -11.1235, -939.785, 205.108, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -8.13589, -945.495, 198.687, -44.8796, 3.24434, -152.398, -1, 7);
				Features::PlaceObjectByHash(3681122061, -5.28891, -951.101, 192.102, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, -2.35757, -956.552, 185.364, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 0.589775, -962.033, 178.59, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 3.5211, -967.483, 171.852, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 9.3998, -978.414, 158.339, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 6.46847, -972.964, 165.077, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 12.3311, -983.865, 151.601, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 15.2944, -989.375, 144.789, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 21.1569, -1000.28, 131.313, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 18.2417, -994.856, 138.014, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 24.0722, -1005.7, 124.612, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 27.0355, -1011.21, 117.801, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 29.9828, -1016.69, 111.026, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 35.8294, -1027.56, 97.5867, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 37.2241, -1030.15, 94.4555, -44.3698, -1.70754, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 38.7475, -1032.99, 91.3086, -39.7798, -4.26887, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 39.7483, -1034.85, 89.5491, -36.7197, 3.4151, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 40.9818, -1037.14, 87.6062, -33.6597, -2.21981, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 42.1248, -1039.27, 85.999, -30.0898, -1.96368, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 32.9141, -1022.14, 104.288, -47.4298, -1.79292, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 43.3132, -1041.47, 84.5449, -26.5197, -1.79293, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 44.7115, -1044.08, 83.0715, -23.4597, -2.39056, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 45.9496, -1046.38, 81.937, -20.3997, -2.47594, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 47.0815, -1048.48, 81.0483, -17.3397, -2.09174, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 48.302, -1050.75, 80.2436, -14.7897, -8.96462, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 50.0647, -1054.03, 79.2608, -13.2597, -2.77476, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 52.0238, -1057.67, 78.2861, -11.7297, -1.45141, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 53.7395, -1060.86, 77.5341, -9.17973, -1.1099, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 55.7265, -1064.56, 76.8558, -6.11973, -6.61674, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 57.3746, -1067.62, 76.4825, -3.56972, -9.60496, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 59.3125, -1071.23, 76.2272, 0.000276446, -9.05818, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 61.112, -1074.58, 76.2272, 4.08028, -8.00412, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 62.529, -1077.21, 76.4405, 7.65027, -7.04364, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 64.0779, -1080.1, 76.8796, 10.7103, -1.28066, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 65.9388, -1083.55, 77.623, 14.2802, -1.70755, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 67.4076, -1086.29, 78.4126, 17.3403, -1.57948, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, 68.7639, -1088.81, 79.3066, 21.4202, 1.36604, -151.734, -1, 7);
				Features::PlaceObjectByHash(3681122061, -86.0915, -825.576, 324.775, 0, -0, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -99.1939, -833.684, 315.911, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -105.248, -837.511, 310.056, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -93.1729, -829.876, 321.734, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -111.268, -841.319, 304.233, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -123.245, -848.891, 292.651, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -147.333, -864.12, 269.359, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -141.278, -860.292, 275.213, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -135.256, -856.485, 281.036, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -129.266, -852.699, 286.828, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -117.224, -845.084, 298.474, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -165.367, -875.521, 251.921, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -213.415, -905.895, 205.464, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -207.426, -902.108, 211.255, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -201.403, -898.301, 217.078, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -195.414, -894.515, 222.87, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -183.434, -886.942, 234.452, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -177.445, -883.156, 240.244, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -171.422, -879.348, 246.067, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -159.378, -871.734, 257.713, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -153.355, -867.927, 263.536, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -189.424, -890.728, 228.661, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -231.449, -917.296, 188.027, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -225.46, -913.509, 193.818, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -219.47, -909.723, 199.609, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -237.439, -921.082, 182.235, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -284.806, -951.016, 167.673, 28.5601, -7.5132, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -289.048, -953.697, 170.578, 34.1701, -3.41509, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -290.727, -954.757, 171.926, 37.23, 3.41509, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -286.998, -952.399, 169.084, 31.62, -1.36604, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -282.375, -949.481, 166.27, 26.0101, 3.50047, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -280.014, -947.991, 165.174, 21.4201, -6.83019, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -277.4, -946.336, 164.178, 17.8501, -3.15896, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -270.266, -941.827, 162.896, 4.59013, -1.79292, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -266.683, -939.562, 163.103, -6.11989, -1.38738, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -259.328, -934.913, 165.339, -17.8499, -4.69576, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -253.478, -931.22, 168.474, -26.01, -4.18349, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -248.103, -927.823, 172.247, -33.66, -5.97642, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -243.429, -924.868, 176.444, -39.27, -2.30519, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -256.593, -933.187, 166.676, -22.4399, -5.97641, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -262.183, -936.72, 164.252, -14.2799, -3.20165, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -268.321, -940.597, 162.896, 0.000125527, -1.95033, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -272.668, -943.344, 163.123, 8.67012, -2.86014, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -275.091, -944.877, 163.561, 12.7501, -5.1226, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -249.757, -928.867, 170.944, -31.11, -6.0617, 122.286, -1, 7);
				Features::PlaceObjectByHash(3681122061, -251.566, -930.012, 169.653, -27.54, -3.58585, 122.286, -1, 7);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp9:
			Menu::Title("Stewie's");
			Menu::Break("FORT");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3213433054, -2661.22, 3209.43, 32.7118, 0, -0, -120.437, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2657.86, 3207.56, 32.7118, 0, 0, 59.6808, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2659.52, 3212.33, 32.7118, 0, -0, -120.437, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2656.2, 3210.41, 32.7118, 0, 0, 59.6808, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2654.54, 3213.26, 32.7118, 0, 0, 59.6808, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2657.84, 3215.18, 32.7118, 0, -0, -120.437, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2615.14, 3183, 32.8118, 0, -0, -120.45, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2611.82, 3181.02, 32.8118, 0, 0, 58.529, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2613.47, 3185.85, 32.8118, 0, -0, -120.45, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2610.11, 3183.91, 32.8118, 0, 0, 59.589, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2611.79, 3188.7, 32.8118, 0, -0, -120.45, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2608.46, 3186.71, 32.8118, 0, 0, 58.529, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2550.83, 3162.65, 32.7702, 0, -0, -117.989, -1, 8);
				Features::PlaceObjectByHash(4109455646, -2547.01, 3160.66, 34.9496, 11.66, -2.56132e-006, -118.95, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2476.76, 3120.72, 32.7718, 0, -0, -119.612, -1, 8);
				Features::PlaceObjectByHash(4109455646, -2473.51, 3118.83, 34.5672, 8.47412, -0.0223369, -120.965, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2442.43, 3105.7, 35.6224, -7.42001, -5.12265e-006, 150.074, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2443.67, 3101.83, 35.8732, -11.66, 3.84198e-006, 59.738, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2438.8, 3099, 36.0155, -11.66, -6.40331e-006, 59.7379, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2434.05, 3096.22, 36.6871, -22.26, -1.45141e-005, 59.7379, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2446.85, 3098.2, 35.6088, -7.42, 3.20165e-006, -31.8463, -1, 8);
				Features::PlaceObjectByHash(2402097066, -2448.77, 3097.65, 35.4732, 0, -0, -120.616, -1, 8);
				Features::PlaceObjectByHash(2402097066, -2442.95, 3108.08, 35.4832, 0, -0, -117.436, -1, 8);
				Features::PlaceObjectByHash(2402097066, -2442.95, 3108.08, 35.4832, 0, -0, -117.436, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2389.55, 3069.11, 36.5952, 179.801, -3.76861e-006, -117.806, -1, 8);
				Features::PlaceObjectByHash(1982829832, -2363.33, 3056.01, 31.8257, 0, -0, -119.219, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2389.55, 3069.11, 36.5952, 179.801, -3.76861e-006, -117.806, -1, 8);
				Features::PlaceObjectByHash(2609922146, -2358.79, 3060.59, 31.8217, 0, -0, -119.371, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2325.93, 3034.99, 33.3214, 19.8, 3.41509e-006, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2321.78, 3032.58, 36.3899, 25.7399, -8.62311e-005, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2317.79, 3030.29, 39.6222, 25.0799, -6.23256e-005, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2313.74, 3027.94, 42.9228, 25.7399, -8.62311e-005, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2309.83, 3025.69, 46.2289, 27.06, -8.2816e-005, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2306.07, 3023.49, 49.5919, 29.0399, -0.000116113, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2283.14, 3009.97, 44.7284, 14.12, -2.04906e-005, 60.0397, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2287.5, 3012.47, 46.9591, 13.6, 0.680011, 60.0397, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2302.26, 3021.28, 53.174, 29.6999, -0.000100745, -120.09, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2292.06, 3015.11, 49.2546, 13.6, 1.53679e-005, 60.0397, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2298.56, 3019.12, 56.7472, 30.36, -8.79386e-005, -120.09, -1, 8);
				Features::PlaceObjectByHash(2052512905, -2294.52, 3015.08, 58.6366, 82.6616, 0.00430302, -31.2919, -1, 8);
				Features::PlaceObjectByHash(2052512905, -2293.13, 3017.4, 58.6822, 80.9428, 0.00560716, 149.187, -1, 8);
				Features::PlaceObjectByHash(2787492567, -2293.66, 3016.58, 31.8318, -90, 0.0833042, 109.919, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2202.78, 2963.39, 32.8003, 0, -0, -120.04, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2199.53, 2961.53, 34.17, -40.5599, -2.56132e-006, 59.8803, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2137.1, 2904.97, 32.8327, 16.8, -1.10991e-005, -141.061, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2132.27, 2897.94, 34.4465, 16.8, -14, -141.061, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2127.12, 2890.88, 36.4432, 17.92, -29.68, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2119.98, 2885.33, 38.8379, 17.92, -29.68, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2113.02, 2880, 41.2705, 17.92, -29.68, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2085.18, 2857.71, 49.9177, 19.04, -43.12, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2078.1, 2852.44, 51.662, 19.0399, -50.4001, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2092.05, 2863.54, 48.2285, 17.92, -34.16, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2098.91, 2869.18, 46.2053, 17.92, -29.68, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2105.97, 2874.59, 43.7379, 17.92, -29.68, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2070.42, 2847.69, 53.5814, 19.0399, -50.4001, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2062.85, 2843.01, 55.4739, 19.0399, -50.4001, -136.581, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2055.32, 2838.69, 56.5097, 17.7868, -43.8868, -131.905, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2047.61, 2834.88, 58.9097, 26.1867, -43.8868, -131.905, -1, 8);
				Features::PlaceObjectByHash(3681122061, -2039.74, 2832.2, 62.2769, 38.5067, -45.5668, -131.905, -1, 8);
				Features::PlaceObjectByHash(3681122061, -1996.98, 2830.2, 48.384, 0.202822, -14.4337, -105.503, -1, 8);
				Features::PlaceObjectByHash(3681122061, -1996.42, 2832.89, 59.0601, -179.433, 12.3451, 76.9258, -1, 8);
				Features::PlaceObjectByHash(3213433054, -1951.86, 2849.63, 34.5146, -47.5199, -7.59859e-005, 59.6261, -1, 8);
				Features::PlaceObjectByHash(3213433054, -1950.16, 2852.52, 34.5146, -47.5199, -7.59859e-005, 59.6261, -1, 8);
				Features::PlaceObjectByHash(3213433054, -1953.57, 2854.49, 32.8004, 0, -0, -120.091, -1, 8);
				Features::PlaceObjectByHash(3213433054, -1955.25, 2851.59, 32.8004, 0, -0, -120.091, -1, 8);
				Features::PlaceObjectByHash(4111834409, -1960.72, 2857.38, 31.7305, 0, -0, -118.505, -1, 8);
				Features::PlaceObjectByHash(4109455646, -2144, 2967.21, 36.0606, 9.35852, -0.00134085, 59.8371, -1, 8);
				Features::PlaceObjectByHash(4109455646, -2139.63, 2964.67, 33.9985, 5.84852, -0.0013321, 59.8371, -1, 8);
				Features::PlaceObjectByHash(4109455646, -2135.45, 2962.3, 32.4604, 0, 0, 60.4792, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2193.23, 2995.21, 35.0684, 11.6996, -0.00262322, -119.238, -1, 8);
				Features::PlaceObjectByHash(2975320548, -2197.74, 2997.74, 32.8074, 15.2099, 2.04906e-005, -119.328, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2246.82, 3026.19, 33.0318, 0.0331696, 0.0056356, 58.6423, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2256.38, 3032.02, 35.4343, 6.5707, 0.0279573, 58.7685, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2265.19, 3037.37, 38.408, 10.1262, 0.0254109, 58.7585, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2273.45, 3042.38, 40.214, 8.95404, -0.00182451, 58.7729, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2281.36, 3047.19, 42.7382, 8.89319, 0.151422, 58.8279, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2289.41, 3052.05, 46.2871, 13.2, 0.000150264, 58.7642, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2397.86, 3114.2, 32.8449, 0, 0, 60.2049, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2402.38, 3116.77, 34.7648, 0, 0, 60.2049, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2394.65, 3118.07, 32.5452, 0, 0, 56.6241, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2397.73, 3120.09, 34.1452, 2.04, -1.38738e-006, 56.6241, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2401.78, 3122.77, 36.6227, 8.16, 1.28066e-006, 56.6239, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2405.48, 3125.2, 39.5571, 14.28, 1.02453e-005, 56.6239, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2409.12, 3127.6, 43.2064, 20.4, -2.39057e-005, 56.6239, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2412.29, 3129.71, 46.9494, 24.4781, -1.43125, 56.2632, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2415.18, 3131.49, 51.529, 38.3931, -3.70399, 55.299, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2416.96, 3132.28, 56.2986, 54.0331, -3.70398, 53.2589, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2417.37, 3132.16, 61.6124, 73.753, -3.70394, 53.2588, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2416.48, 3131.04, 66.996, 90.9129, -3.70395, 53.2587, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2414.88, 3129.5, 70.998, 104.113, -3.70383, 50.6186, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2412.46, 3127.2, 74.61, 116.653, -3.70392, 50.6185, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2409.58, 3124.71, 77.6119, 121.273, -3.70395, 50.6185, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2406.75, 3122.18, 80.0586, 127.213, -3.70391, 50.6184, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2403.38, 3119.23, 82.2502, 135.793, -3.70396, 50.6185, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2369.71, 3092.81, 68.2807, -146.327, -3.7039, 50.6183, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2367.45, 3091.4, 63.3347, -134.447, -3.70392, 50.6182, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2366, 3090.66, 58.0814, -123.887, -3.7039, 50.6182, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2365.38, 3090.57, 53.1623, -112.007, -3.70391, 50.6182, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2365.62, 3091.18, 48.0172, -99.4666, -3.70393, 50.6181, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2366.77, 3092.54, 43.04, -86.2661, -3.70399, 50.6181, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2368.73, 3094.52, 38.5669, -74.386, -3.70392, 50.6181, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2371.25, 3096.8, 35.0692, -59.206, -3.70384, 55.2379, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2375.18, 3099.61, 32.3997, -42.0459, -3.70387, 57.2179, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2395.69, 3112.77, 84.6355, 152.292, -3.70389, 50.6184, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2391.54, 3109.37, 84.6603, 162.192, -3.70393, 50.6184, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2387.13, 3105.84, 83.6595, 172.752, -3.70391, 50.6184, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2382.97, 3102.56, 81.8101, -179.988, -3.70391, 50.6184, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2372.52, 3094.76, 72.6855, -154.907, -3.70391, 50.6183, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2379.11, 3099.59, 79.371, -172.728, -3.70391, 50.6183, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2375.46, 3096.85, 76.1692, -162.168, -3.70388, 50.6182, -1, 8);
				Features::PlaceObjectByHash(2475986526, -2399.8, 3116.19, 83.7512, 143.712, -3.70387, 50.6184, -1, 8);
				Features::PlaceObjectByHash(3213433054, -2510.73, 3180.4, 32.8111, 0, 0, 59.4291, -1, 8);
				Features::PlaceObjectByHash(209943352, -2302.92, 3059.95, 50.2208, 76.8397, -0.679965, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2298.84, 3057.5, 48.7042, 71.3997, -0.679954, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2290.6, 3052.58, 47.3498, 84.3198, -0.679946, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2290.6, 3052.58, 47.3498, 84.3198, -0.679946, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2294.73, 3055.05, 47.6692, 76.8398, -0.680059, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2533.2, 3193.91, 37.3948, 0, -0, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2533.2, 3193.91, 37.3948, 0, -0, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2425.58, 3091.36, 36.493, 0, -0, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2425.58, 3091.36, 36.493, 0, -0, -120.716, -1, 8);
				Features::PlaceObjectByHash(209943352, -2293.7, 3012.65, 55.3685, -89.7587, -0.659716, -30.2946, -1, 8);
				Features::PlaceObjectByHash(209943352, -2293.7, 3012.65, 55.3685, -89.7587, -0.659716, -30.2946, -1, 8);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2731, 3259, 32, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp10:
			Menu::Title("Stewie's");
			Menu::Break("HALFPIPE");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3681122061, -1018.78, -2937.26, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1023.38, -2945.17, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1028.02, -2953.13, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1032.66, -2961.06, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1037.32, -2969.04, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1041.95, -2976.96, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1046.18, -2984.19, 12.9646, 0, 0, -30.3132, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1050.78, -2992.12, 12.9646, 0, 0, -29.8732, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1053.22, -2998.13, 12.9646, 0, 0, -14.2534, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1054.14, -3005.28, 12.9646, 0, 0, -0.613478, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1053.45, -3012.85, 12.9646, 0, 0, 11.4866, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1051.19, -3020.08, 12.9646, 0, 0, 23.3667, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1047.43, -3026.73, 12.9646, 0, 0, 35.2469, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1042.42, -3032.37, 12.9646, 0, 0, 47.7871, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1037.1, -3038.16, 12.9646, 0, 0, 37.2273, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1033.11, -3044.75, 12.9646, 0, 0, 25.5675, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1030.43, -3052.11, 12.9646, 0, 0, 14.5676, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1029.18, -3059.85, 12.9646, 0, 0, 4.00757, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1029.37, -3067.7, 12.9646, 0, 0, -6.55247, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1031, -3075.33, 12.9646, 0, 0, -17.5525, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1034.09, -3082.35, 12.9646, 0, 0, -29.6525, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1038.6, -3088.77, 12.9646, 0, 0, -40.2127, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1044.19, -3094.15, 12.9646, 0, 0, -51.653, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1050.65, -3098.2, 12.9646, 0, 0, -63.7531, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1057.89, -3100.91, 12.9646, 0, 0, -75.1935, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1065.18, -3101.87, 12.9646, 0, 0, -89.7139, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1073.03, -3101.2, 12.9646, 0, -0, -100.054, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1080.63, -3099.11, 12.9646, 0, -0, -110.615, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1087.92, -3095.65, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1095.95, -3091.03, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1104.01, -3086.4, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1112.04, -3081.79, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1120.04, -3077.19, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1128.1, -3072.56, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1136.15, -3067.93, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1144.2, -3063.31, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1152.22, -3058.7, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1160.24, -3054.09, 12.9646, 0, -0, -119.855, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1168.22, -3049.48, 12.9646, 0, -0, -120.295, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1176.21, -3044.8, 12.9646, 0, -0, -120.295, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1183.28, -3040.14, 12.9646, 0, -0, -126.455, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1189.23, -3034.89, 12.9646, 0, -0, -136.356, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1193.86, -3028.84, 12.9646, 0, -0, -148.677, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1197.2, -3021.86, 12.9646, 0, -0, -159.898, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1198.78, -3014.77, 12.9646, 0, -0, -174.639, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1198.72, -3007.04, 12.9646, 0, -0, 173.701, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1197, -2999.97, 12.9646, 0, -0, 158.962, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1193.5, -2993.3, 12.9646, 0, -0, 145.982, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1188.51, -2987.1, 12.9646, 0, -0, 136.083, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1182.5, -2981.85, 12.9646, 0, -0, 126.183, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1175.98, -2978.23, 12.9646, 0, -0, 112.104, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1168.67, -2976.15, 12.9646, 0, -0, 99.7843, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1160.82, -2975.53, 12.9646, 0, 0, 89.4449, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1152.93, -2976.29, 12.9646, 0, 0, 79.5455, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1145.21, -2978.39, 12.9646, 0, 0, 70.0859, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1138.14, -2981.75, 12.9646, 0, 0, 59.0863, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1130.27, -2986.43, 12.9646, 0, 0, 59.0863, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1122.46, -2991.09, 12.9646, 0, 0, 59.0863, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1115.12, -2994.75, 12.9646, 0, 0, 67.1435, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1107.63, -2997.13, 12.9646, 0, 0, 76.9913, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1099.8, -2998.14, 12.9646, 0, 0, 86.8389, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1091.94, -2997.76, 12.9646, 0, -0, 97.5819, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1084.47, -2995.95, 12.9646, 0, -0, 108.325, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1077.64, -2992.78, 12.9646, 0, -0, 119.963, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1077.64, -2992.78, 12.9646, 0, -0, 119.963, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1071.68, -2988.3, 12.9646, 0, -0, 132.496, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1066.33, -2982.53, 12.9646, 0, -0, 141.449, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1053.01, -2960.01, 12.9646, 0, 0, -28.5532, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1048.58, -2951.88, 12.9646, 0, 0, -28.5532, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1044.16, -2943.76, 12.9646, 0, 0, -28.5532, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1039.74, -2935.64, 12.9646, 0, 0, -28.5532, -1, 9);
				Features::PlaceObjectByHash(3681122061, -1035.5, -2927.86, 12.9646, 0, 0, -28.5532, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1063.23, -2993.67, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1067.37, -2998.06, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1063.7, -2994.67, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1064.21, -2995.73, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1064.71, -2996.8, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.21, -2997.84, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1067.1, -2999.45, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.43, -3000.24, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1068.29, -3000.06, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.92, -3001.18, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1066.44, -3002.28, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.35, -3002.77, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.6, -3003.96, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1066.11, -3005.04, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1064.21, -2999.56, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1069.53, -3000.82, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1070.75, -3001.52, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1068.76, -3002.46, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1069.29, -3003.54, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1068.44, -3005.23, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1071.58, -3003.74, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1072.98, -3006.81, 16.0846, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1072.44, -3002.05, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1073.73, -3002.72, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1076.54, -3005.07, 16.0846, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1078.92, -3009.92, 13.7046, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1075.31, -3011.69, 13.7046, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1069.34, -3008.59, 16.0846, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1071.71, -3013.45, 13.7046, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1068.14, -3015.2, 13.7046, 0, 0, -26.0348, -1, 9);
				Features::PlaceObjectByHash(3608473212, -1065.36, -3006.66, 15.3449, 0, 0, -25.1145, -1, 9);
				Features::PlaceObjectByHash(2475986526, -1065.75, -3010.35, 16.0846, 0, 0, -26.0348, -1, 9);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1003, -2916, 14, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp11:
			Menu::Title("Stewie's");
			Menu::Break("AIRPORT LOOP RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3966705493, -1041.89, -3219.51, 10.1797, -2.43331, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1037.79, -3221.47, 10.3641, -2.43331, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1034.16, -3223.3, 10.5366, -2.43331, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1036.76, -3219.45, 10.1526, -2.43331, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1033.12, -3221.28, 10.3251, -2.43331, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1029.37, -3225.6, 11.1956, -11.6033, 5.32207, 62.9335, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1028.33, -3223.58, 10.9842, -11.6033, 5.32207, 62.9335, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1024.27, -3225.54, 12.1104, -18.1533, 5.32205, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1025.44, -3227.83, 12.3497, -18.1533, 5.32205, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1020.36, -3230.06, 15.7972, -40.4234, 5.32214, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1019.22, -3227.83, 15.5634, -40.4234, 5.32214, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1014.85, -3229.56, 20.4393, -50.9034, 5.3221, 62.9337, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1016.07, -3231.95, 20.6898, -50.9034, 5.3221, 62.9337, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1012.88, -3232.96, 26.0664, -64.0034, 5.32209, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1011.63, -3230.51, 25.8104, -64.0034, 5.32209, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1009.27, -3231.06, 32.0819, -73.1735, 5.32204, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1010.52, -3233.51, 32.3379, -73.1735, 5.32214, 62.9337, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1009.36, -3233.48, 38.2311, -83.6535, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1008.09, -3230.98, 37.9695, -83.6535, 5.32208, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1007.71, -3230.43, 44.185, -92.8235, 6.63212, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1009.05, -3228.93, 49.9682, -119.024, 6.63217, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1008.93, -3232.81, 44.4969, -92.8235, 6.63212, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1010.27, -3231.31, 50.2801, -119.024, 6.63217, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1011.96, -3226.91, 54.0691, -142.604, 6.6321, 62.9337, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1013.1, -3229.14, 54.3602, -142.604, 6.6321, 62.9337, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1017.49, -3226.51, 57.2125, -159.634, 6.63211, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1022.14, -3223.91, 58.9186, -168.804, 6.63213, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1035.97, -3216.05, 58.7162, 155.826, 1.39214, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1031.37, -3218.71, 60.1775, 176.786, 6.63213, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1026.33, -3221.63, 59.8766, -168.804, 6.63212, 60.3136, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1020.98, -3221.63, 58.6206, -168.804, 6.63213, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1024.97, -3219.25, 59.5578, -168.804, 6.63212, 60.3136, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1016.33, -3224.24, 56.9145, -159.634, 6.63211, 62.9336, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1034.73, -3213.86, 58.655, 155.826, 1.39214, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1040.42, -3213.61, 55.2867, 138.796, 1.39206, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1044.34, -3211.51, 50.6082, 128.316, 1.39213, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1043.09, -3209.33, 50.547, 128.316, 1.39213, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1046.16, -3207.74, 45.1535, 117.837, 1.39215, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1048.17, -3206.74, 39.6252, 104.737, 1.39214, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1048.92, -3206.44, 33.1586, 87.6005, 0.0914728, 60.6227, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1048.18, -3206.88, 26.5446, 77.3408, 0.0913896, 60.6229, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1049.44, -3209.13, 26.5487, 77.3407, 0.0913427, 60.6228, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1045.93, -3208.12, 21.3905, 56.6411, 0.0914017, 58.823, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1042.61, -3210.12, 16.8766, 42.1517, 0.0913785, 58.8231, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1038.64, -3212.63, 13.6141, 28.2018, 0.0914187, 58.8231, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1039.97, -3214.83, 13.6182, 28.2018, 0.0914187, 58.8231, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1034.82, -3217.71, 11.1985, 16.4116, 0.0913871, 69.303, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1033.53, -3215.55, 11.1081, 16.4117, 0.0913619, 66.683, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1043.97, -3212.37, 16.8808, 42.1517, 0.0913785, 58.8231, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1050.19, -3208.69, 33.1627, 87.6005, 0.0914728, 60.6227, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1049.45, -3208.98, 39.6879, 104.737, 1.39214, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
				Features::PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1074, -3201, 13, 1, 0, 0, 1);
			}

			break;
#pragma region mapmods
		case ramp12:
			Menu::Title("Stewie's");
			Menu::Break("MEGA RAMP");
			if (Menu::Option("Load")) {
				Features::PlaceObjectByHash(3681122061, -82.9657, -818.944, 325.175, 0, -0, 91.03, -1, 11);
				Features::PlaceObjectByHash(3681122061, -91.0941, -819.089, 322.355, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -98.36, -819.224, 316.632, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -105.626, -819.358, 310.91, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -112.892, -819.492, 305.187, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -120.158, -819.626, 299.464, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -127.424, -819.761, 293.741, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -134.69, -819.895, 288.018, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -141.956, -820.029, 282.296, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -149.222, -820.163, 276.573, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -156.487, -820.298, 270.85, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -163.753, -820.432, 265.127, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -171.019, -820.566, 259.404, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -178.285, -820.701, 253.682, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -185.551, -820.835, 247.959, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -192.817, -820.969, 242.236, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -200.083, -821.103, 236.513, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -207.349, -821.238, 230.79, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -214.615, -821.372, 225.068, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -221.881, -821.506, 219.345, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -229.147, -821.641, 213.622, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -236.413, -821.775, 207.899, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -243.679, -821.909, 202.176, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -250.945, -822.043, 196.453, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -258.21, -822.178, 190.731, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -265.476, -822.312, 185.008, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -287.274, -822.715, 167.839, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -280.008, -822.58, 173.562, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -272.742, -822.446, 179.285, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -294.54, -822.849, 162.117, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -301.806, -822.983, 156.394, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -309.072, -823.118, 150.671, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -316.338, -823.252, 144.948, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -323.604, -823.386, 139.225, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -330.87, -823.52, 133.503, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -338.136, -823.655, 127.78, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -345.402, -823.789, 122.057, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -352.668, -823.923, 116.334, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -359.934, -824.057, 110.611, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -367.199, -824.192, 104.889, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -374.465, -824.326, 99.1657, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -381.731, -824.46, 93.4429, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -388.997, -824.595, 87.7201, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -396.263, -824.729, 81.9973, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -403.529, -824.863, 76.2745, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -411.479, -825.022, 68.7971, -19.78, -3.43377e-005, 91.1094, -1, 11);
				Features::PlaceObjectByHash(3681122061, -410.795, -824.997, 70.5517, -38.2199, 0.00787841, 91.0529, -1, 11);
				Features::PlaceObjectByHash(3681122061, -411.96, -825.029, 69.097, -27.6, 1.15259e-005, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -412.719, -825.046, 67.8516, -10.58, -2.92151e-006, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -413.903, -825.068, 67.2075, -3.21999, 5.66959e-007, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -415.378, -825.099, 66.7734, 3.68002, -4.58236e-006, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -416.883, -825.126, 66.57, 9.66002, -8.44435e-006, 91.1096, -1, 11);
				Features::PlaceObjectByHash(3681122061, -418.526, -825.157, 66.5571, 15.64, -1.80093e-005, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -419.945, -825.184, 66.6727, 20.7001, 8.69782e-006, 91.1094, -1, 11);
				Features::PlaceObjectByHash(3681122061, -421.727, -825.218, 67.0936, 25.7601, -2.09975e-005, 91.1095, -1, 11);
				Features::PlaceObjectByHash(3681122061, -422.006, -825.234, 66.966, 30.8199, 0.114757, 90.6829, -1, 11);
				Features::PlaceObjectByHash(3681122061, -429.913, -825.328, 71.6856, 30.8199, 0.114757, 90.6829, -1, 11);
			}
			if (Menu::Option("Teleport")) {
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
			}

			break;
#pragma endregion
#pragma region vehicle weapons
		case vehweps:
		{
			Menu::Title("Stewie's");
			Menu::Break("VEHICLE WEAPON OPTIONS");
			Menu::Toggle("Shoot Rockets", Features::ShootR, [] { Features::ShootRocket(Features::ShootR); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
			Menu::Toggle("Shoot Molotovs", Features::ShootMolotov, [] { Features::ShootMolotovGun(Features::ShootMolotov); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
			Menu::Toggle("Shoot Tank", Features::ShootTankR, [] { Features::ShootTankRounds(Features::ShootTankR); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
			Menu::Toggle("Shoot Fireworks", Features::ShootT, [] { Features::ShootTanks(Features::ShootT); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
			Menu::Toggle("Shoot Snowballs", Features::ShootBall, [] { Features::ShootBalls(Features::ShootBall); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
			Menu::Toggle("Shoot Mini Gun", Features::ShootMini, [] { Features::ShootMiniGun(Features::ShootMini); IconNotification("+ In Numpad To Shoot", "Stewie's", "Vehicle Weapons"); });
		}
		break;
#pragma endregion
#pragma region Settings Menu
		case settings:
		{
			Menu::Title("Stewie's");
			Menu::Break("SETTINGS");
			Menu::Toggle("Globe Icon", Menu::Settings::GlareOnOff);
			Menu::Toggle("Gradient", Menu::Settings::DrawGradientRect);
			Menu::Toggle("Text Outlines", Menu::Settings::DrawTextOutline);
			Menu::Toggle("End Bar", Menu::Settings::displayEnd);
			Menu::MenuOption("Credits", credit);
			Menu::MenuOption("Colors", settingstheme);
			Menu::MenuOption("Font", font);
			if (Menu::Int("Scroll Delay", Menu::Settings::keyPressDelay2, 1, 200))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::keyPressDelay2 = NumberKeyboard();
				}
			}
			if (Menu::Int("Int Delay", Menu::Settings::keyPressDelay3, 1, 200))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::keyPressDelay3 = NumberKeyboard();
				}
			}
			Menu::Option("~g~Social Club Account:");
			Menu::Option(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
			if (Menu::Option("MenuX Plus")) {
				if (Menu::Settings::menuX < 0.81f) Menu::Settings::menuX += 0.01f;
			}
			if (Menu::Option("MenuX Minus")) {
				if (Menu::Settings::menuX > 0.17f) Menu::Settings::menuX -= 0.01f;
			}	
			if (Menu::Option("~r~Kill Game")) exit(0);
		}
		break;
		case protection:
		{
			 Menu::Title("Stewie's");
			 Menu::Break("PROTECTION OPTIONS");

			 Menu::Toggle("Risky Mode", risky, [] { Features::riskyOptins(risky); IconNotification("Now You Cant Drop Money!", "Stewie's", "Risky Mode");  });
			 Menu::Toggle("Anti Teleport", antiTP, [] {
				 Hooking::defuseEvent(RockstarEvent::NETWORK_REQUEST_SYNCED_SCENE_EVENT, antiTP);
				 Hooking::defuseEvent(RockstarEvent::NETWORK_UPDATE_SYNCED_SCENE_EVENT, antiTP);
				 Hooking::defuseEvent(RockstarEvent::NETWORK_START_SYNCED_SCENE_EVENT, antiTP);
			 });
			 Menu::Toggle("Anti Freeze", antiFreeze, [] { Hooking::defuseEvent(RockstarEvent::NETWORK_CLEAR_PED_TASKS_EVENT, antiFreeze); });
			 Menu::Toggle("Anti Explosion", ev, [] { Hooking::defuseEvent(RockstarEvent::EXPLOSION_EVENT, ev); });
			 Menu::Toggle("Anti Pickup", rpe, [] { Hooking::defuseEvent(RockstarEvent::REQUEST_PICKUP_EVENT, rpe); });
			 Menu::Toggle("Fire Protection ", fe, [] { Hooking::defuseEvent(RockstarEvent::EXPLOSION_EVENT, fe); });
			 Menu::Toggle("Anti Kick", ak, [] { Hooking::defuseEvent(RockstarEvent::KICK_VOTES_EVENT, ak); });
			 Menu::Toggle("Anti Kick 2", AntiKick2, [] { Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, AntiKick2); });
			 Menu::Toggle("Anti PTFX", protecc2, [] { Hooking::defuseEvent(RockstarEvent::NETWORK_PTFX_EVENT, protecc2); });
			 Menu::Toggle("Anti Remove Weapons", noRemoveWeps, [] { Hooking::defuseEvent(RockstarEvent::REMOVE_ALL_WEAPONS_EVENT, noRemoveWeps); });
			 Menu::Toggle("Anti Give Weapons", noGiveWeps, [] { Hooking::defuseEvent(RockstarEvent::GIVE_WEAPON_EVENT, noGiveWeps); });
			 Menu::Toggle("Report Money Drop Event", md, [] { Hooking::defuseEvent(RockstarEvent::REPORT_CASH_SPAWN_EVENT, md); });
		}
		break;
		case credit:
		{
			Menu::Title("Stewie's");
			Menu::Break("CREDITS");
			Menu::Option("~r~Developers ~w~: ~g~Team Stewie's ");
			Menu::Option("~r~Menu Version ~w~: V0.2.2");
			Menu::Option("~r~GTA Version ~w~: 1.46");
		}
		break;
		case settingstheme:
		{
			Menu::Title("Stewie's");
			Menu::Break("THEME");
			Menu::MenuOption("Theme Loader", themeloader);
			Menu::MenuOption("Scroller", settingsscroller);
			Menu::MenuOption("Header", header);
			Menu::MenuOption("Option Text", settingsoptiontext);
			Menu::MenuOption("Selected Text", selectedcolor);
			Menu::MenuOption("Title Text", titletextcolor);
			Menu::MenuOption("Title 2", titletextrect);
			Menu::MenuOption("Title 2 Text", breaktext);
			Menu::MenuOption("End Bar", endbarcolor);
			Menu::MenuOption("Background", background);
			//Menu::Toggle("Rainbow", Features::rainbowmenu, [] { Features::Rainbowmenu(Features::rainbowmenu); });
		}
		break;
		case themeloader:
		{
			Menu::Title("Stewie's");
			Menu::Break("THEME LOADER");
			if (Menu::Option("Original 1")) {
				Menu::Settings::titleRect = { 255, 255, 0, 120 };
				Menu::Settings::headerRect = { 255, 0, 255, 255 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
				Menu::Settings::optionRect = { 255, 255, 255, 70 };
			}
			if (Menu::Option("Original 2")) {
				Menu::Settings::titleRect = { 0, 255, 255, 90 };
				Menu::Settings::headerRect = { 255, 0, 255, 255 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
				Menu::Settings::optionRect = { 0, 0, 0, 130 };
			}
			if (Menu::Option("Red Theme")) {
				Menu::Settings::titleRect = { 100, 0, 0, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Pink Theme")) {
				Menu::Settings::titleRect = { 255, 0, 188, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Purple Theme")) {
				Menu::Settings::titleRect = { 112, 0, 239, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Orange Theme")) {
				Menu::Settings::titleRect = { 255, 85, 0, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Red Theme V2")) {
				Menu::Settings::titleRect = { 200, 0, 0, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Blue Theme")) {
				Menu::Settings::titleRect = { 0, 0, 255, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
			if (Menu::Option("Green Theme")) {
				Menu::Settings::titleRect = { 0, 180, 0, 120 };
				Menu::Settings::scroller = { 255, 255, 255, 200 };
				Menu::Settings::Endrect = { 0, 0, 0, 200 };
			}
		}
		break;
		case header:
		{
			Menu::Title("Stewie's");
			Menu::Break("HEADER OPTIONS");

			Menu::Int("Header Image", Menu::Settings::titleRectTexture, 0, 12);
			Menu::MenuOption("Color 1", settingstitlerect);
			Menu::MenuOption("Color 2", settingsheaderrect);
		
		}
		break;
		case settingsheaderrect:
		{
			Menu::Title("Stewie's");
			Menu::Break("COLOR 1");
			if (Menu::Int("Red", Menu::Settings::headerRect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::headerRect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::headerRect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::headerRect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.a = NumberKeyboard();
				}
			}
		}
			break;
		case breaktext:
		{
			Menu::Title("Stewie's");
			Menu::Break("TITLE 2 TEXT");
			if (Menu::Int("Red", Menu::Settings::breakText.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::breakText.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::breakText.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::breakText.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case background:
		{
			Menu::Title("Stewie's");
			Menu::Break("TITLE 2 TEXT");
			if (Menu::Int("Red", Menu::Settings::optionRect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::optionRect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::optionRect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::optionRect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::headerRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case titletextrect:
		{
			Menu::Title("Stewie's");
			Menu::Break("TITLE 2");
			if (Menu::Int("Red", Menu::Settings::breakrect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::breakrect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::breakrect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::breakrect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case endbarcolor:
		{
			Menu::Title("Stewie's");
			Menu::Break("END BAR");
			if (Menu::Int("Red", Menu::Settings::Endrect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::Endrect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::Endrect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::Endrect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case settingstitlerect:
		{
			Menu::Title("Stewie's");
			Menu::Break("TITLE RECT");
			if (Menu::Int("Red", Menu::Settings::titleRect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::titleRect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::titleRect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::titleRect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case settingsoptiontext:
		{
			Menu::Title("Stewie's");
			Menu::Break("OPTION TEXT");
			if (Menu::Int("Red", Menu::Settings::optionText.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::optionText.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::optionText.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::optionText.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.a = NumberKeyboard();
				}
			}
		}
		break;
		case selectedcolor:
		{
			Menu::Title("Stewie's");
			Menu::Break("SELECTED TEXT");
			if (Menu::Int("Red", Menu::Settings::selectedTextClrs.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::selectedTextClrs.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::selectedTextClrs.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::selectedTextClrs.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.a = NumberKeyboard();
				}
			}
		}
		break;
		case titletextcolor:
		{
			Menu::Title("Stewie's");
			Menu::Break("OPTION TEXT");
			if (Menu::Int("Red", Menu::Settings::titleText.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::titleText.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::titleText.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::titleText.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.a = NumberKeyboard();
				}
			}
		}
		break;
		case font:
		{
			Menu::Title("Stewie's");
			Menu::Break("FONT");
			if (Menu::Option("Chalet London")) { Menu::Settings::optionText.f = 0; }
			if (Menu::Option("House Script")) { Menu::Settings::optionText.f = 1; }
			if (Menu::Option("Monospace")) { Menu::Settings::optionText.f = 2; }
			if (Menu::Option("Wing Dings")) { Menu::Settings::optionText.f = 3; }
			if (Menu::Option("Chalet Comprime Cologne")) { Menu::Settings::optionText.f = 4; }
			if (Menu::Option("Pricedown")) { Menu::Settings::optionText.f = 7; }
			if (Menu::Option("Chalet London")) { Menu::Settings::titleText.f = 0; }
			if (Menu::Option("House Script")) { Menu::Settings::titleText.f = 1; }
			if (Menu::Option("Monospace")) { Menu::Settings::titleText.f = 2; }
			if (Menu::Option("Wing Dings")) { Menu::Settings::titleText.f = 3; }
			if (Menu::Option("Chalet Comprime Cologne")) { Menu::Settings::titleText.f = 4; }
			if (Menu::Option("Pricedown")) { Menu::Settings::titleText.f = 7; }
			if (Menu::Option("Chalet London")) { Menu::Settings::selectedTextClrs.f = 0; }
			if (Menu::Option("House Script")) { Menu::Settings::selectedTextClrs.f = 1; }
			if (Menu::Option("Monospace")) { Menu::Settings::selectedTextClrs.f = 2; }
			if (Menu::Option("Wing Dings")) { Menu::Settings::selectedTextClrs.f = 3; }
			if (Menu::Option("Chalet Comprime Cologne")) { Menu::Settings::selectedTextClrs.f = 4; }
			if (Menu::Option("Pricedown")) { Menu::Settings::selectedTextClrs.f = 7; }
		}
		break;
		case settingsscroller:
		{
			Menu::Title("Stewie's");
			Menu::Break("SCROLLER");
			if (Menu::Int("Red", Menu::Settings::scroller.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::scroller.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::scroller.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::scroller.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.a = NumberKeyboard();
				}
			}
		}
		break;
#pragma endregion
#pragma region Car Stuff
		case vehicle:
		{
			Menu::Title("Stewie's");
			Menu::Break("VEHICLE OPTIONS");
			Menu::MenuOption("Vehicle Spawner", vehspawner);
			Menu::MenuOption("Los Santos Customs", LSC); 
			Menu::MenuOption("Vehicle Weapons", vehweps);
			Menu::MenuOption("Acrobatics", Acrobatics);
			Menu::Toggle("Vehicle Godmode", Features::cargodmodebool, [] {Features::cargodmode(Features::cargodmodebool); });
			Menu::Toggle("Speedo Meter", Features::Speedometerbool);
			Menu::Toggle("No Bike Fall", Features::bikeNoFall);
			Menu::Toggle("Stick To Ground", Features::stickToGround);
			Menu::Toggle("Hydraulics [~b~BETA~w~]", Features::Devmode, [] { Features::Devm(Features::Devmode); IconNotification("Buttons : [W] [A] [S] [D]", "Stewie's", "Hydraulics"); });
			Menu::Toggle("Engine Allways On", Features::enginealwaysonbool, [] { Features::enginealwayson(Features::enginealwaysonbool); });
			Menu::Toggle("Horn Boost", Features::boostbool, [] { Features::carboost(Features::boostbool); IconNotification("Button : [E]", "Stewie's", "Horn Boost"); });
			Menu::Toggle("Lower Vehicle", Features::lowerbool_, [] { Features::vehlower(Features::lowerbool_); });
			Menu::Toggle("Invisible Vehicle", Features::vehicleinvisibility, [] { Features::Invisibleveh(Features::vehicleinvisibility); });
			Menu::Toggle("Scroched Vehicle", Features::vehiclescroched, [] { Features::scroch(Features::vehiclescroched); });
			Menu::Toggle("Drift Mode", Features::Drift, [] { Features::DriftMode(Features::Drift); IconNotification("Button : [Shift]", "Stewie's", "Drift Mode"); });
			Menu::Toggle("Drive On Walls", Features::walldrive_, [] { Features::walldrive(Features::walldrive_); IconNotification("Use A Monster Truck And Get Your Wheels On A Wall Before Enabling!", "Stewie's", "Walldrive"); });
			Menu::Toggle("Drive on Water", Features::dowbool, [] { Features::DriveOnWater(Features::dowbool); });
			Menu::Toggle("Drive on Underwater", Features::driveunderwater, [] { Features::driveunderr(Features::driveunderwater); });
			if (Menu::Toggle("Flying Car", Features::flyToggle))Features::flyingCar1();
			Menu::Toggle("Flying Car V2", Features::fcbool, [] { Features::FlyingCarLoop(Features::fcbool); });
			Menu::Toggle("Rainbow Neons", Features::Rneon, [] { Features::RainbowNeon(Features::Rneon); });
			Menu::Toggle("Rainbow Tire Smoke", Features::Rainb, [] { Features::Rainbow(Features::Rainb); });
			Menu::Toggle("Rainbow Car", Features::rlbool, [] { Features::HasPaintLoop(Features::rlbool); });
			if (Menu::Option("Fix Vehicle")) {
				uint Vehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
				VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("proj_xmas_firework");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("proj_xmas_firework");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_firework_xmas_burst_rgw", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
			}
			if (Menu::Option("Max Upgrade")) {
				Features::maxvehicle();
			}
			if (Menu::Option("Flip Vehicle")) {
				Features::flipup();
			}
			if (Menu::Option("Add Ramp")) {
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Vector3 Him = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true);
					int VehicleID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::REQUEST_MODEL(0xB157C9E4);
					if (STREAMING::HAS_MODEL_LOADED(0xB157C9E4))
					{
						Entity My_Objects = OBJECT::CREATE_OBJECT(0xB157C9E4, Him.x, Him.y, Him.z, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(My_Objects))
						{
							ENTITY::SET_ENTITY_COLLISION(My_Objects, true, true);
							ENTITY::SET_ENTITY_ALPHA(My_Objects, 120, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(My_Objects, VehicleID, 0, 0, 6.3, -0.3, 13.5, 0, 177.5, 0, 0, true, 0, 2, 1);
						}
					}
				}
				else { IconNotification("You Are Not In Car!", "Stewie's", "Ramp"); }
			}
			if (Menu::Option("Set Custom Plate")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				RequestControlOfEnt(veh);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veh, CharKeyboard());
			}
			if (Menu::Option("Vehicle Jump")) {
				if ((VK_SPACE) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) {
					Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0 + ENTITY::GET_ENTITY_FORWARD_X(veh), 0 + ENTITY::GET_ENTITY_FORWARD_Y(veh), 7, 0, 0, 0, 1, 0, 1, 1, 1, 1);
				}
			}
			if (Menu::Option("Fix Car")) {
				uint Vehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
				VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("proj_xmas_firework");
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("proj_xmas_firework");
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_firework_xmas_burst_rgw", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
			}
			if (Menu::Option("Max Upgrade Car")) {
				Features::maxvehicle();
			}
			if (Menu::Option("Flip Car")) {
				Features::flipup();
			}
			if (Menu::Option("Open Doors")) {
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 3, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 6, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 7, true, false);
			}
			if (Menu::Option("Close Doors")) {
				VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true);
			}
		}
		break;
#pragma endregion
#pragma region Visions
		case visions:
		{
			Menu::Title("Stewie's");
			Menu::Break("VISION OPTIONS");
			if (Menu::Option("Reset")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("DEFAULT");
			}
			Menu::Toggle("Night Vision", Features::nightvisionn, [] { Features::nigghtvision(Features::nightvisionn); });
		    }
			if (Menu::Option("Stoned")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("stoned");
			}
			if (Menu::Option("Orange")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("REDMIST");
			}
			if (Menu::Option("Red")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("DEATH");
			}
			if (Menu::Option("Cocaine")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_flying_base");
			}
			if (Menu::Option("Huffin Gas")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("DRUG_gas_huffin");
			}
			if (Menu::Option("Wobbly")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_wobbly");
			}
			if (Menu::Option("Drunk")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Drunk");
			}
			if (Menu::Option("Heaven")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Bloom");
			}
			if (Menu::Option("3D")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("PlayerSwitchPulse");
			}
			if (Menu::Option("Killstreak")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_Killstreak");
			}
			if (Menu::Option("Hallucinations")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("player_transition");
			}
			if (Menu::Option("Low Quality")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("cinema_001");
			}
			if (Menu::Option("Blurry")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CHOP");
			}
			if (Menu::Option("Fucked Up Screen")) {
				GRAPHICS::SET_TIMECYCLE_MODIFIER("BarryFadeOut");
			}
			break;
#pragma endregion
#pragma region spawn settings
		case spawnsettings:
		{
			Menu::Title("Stewie's");
			Menu::Break("SPAWN SETTINGS");
			Menu::Toggle("Spawn in Car", Features::spawnincar);
			Menu::Toggle("Spawn Max Upgraded", Features::spawnmaxed);
			Menu::Toggle("Spawn Effect", Features::spawneffect);
		}
		break;
#pragma endregion
#pragma region Car Spawn
		case vehspawner:
		{
			Menu::Title("Stewie's");
			Menu::Break("VEHICLE SPAWNER");
			Menu::MenuOption("Spawn Settings", spawnsettings);
			Menu::MenuOption("After Hours (1.44)", NightClub);
			Menu::MenuOption("Super Sports (1.43)", SuperSports);
			Menu::MenuOption("Doomsday Heist (1.42)", Doomsday);
			Menu::MenuOption("Super", Super);
			Menu::MenuOption("Sports", Sports);
			Menu::MenuOption("Sport Classic", SportClassic);
			Menu::MenuOption("Offroad", Offroad);
			Menu::MenuOption("Sedans", Sedans);
			Menu::MenuOption("Coupes", Coupes);
			Menu::MenuOption("Muscle", Muscle);
			Menu::MenuOption("Boats", Boats);
			Menu::MenuOption("Commercial", Commercial);
			Menu::MenuOption("Compacts", Compacts);
			Menu::MenuOption("Cycles", Cycles);
			Menu::MenuOption("Emergency", Emergency);
			Menu::MenuOption("Helicopters", Helicopters);
			Menu::MenuOption("Industrial", Industrial);
			Menu::MenuOption("Military", Military);
			Menu::MenuOption("Motorcycles", Motorcycles);
			Menu::MenuOption("Planes", Planes);
			Menu::MenuOption("Service", Service);
			Menu::MenuOption("SUV", SUV);
			Menu::MenuOption("Trailer", Trailer);
			Menu::MenuOption("Trains", Trains);
			Menu::MenuOption("Utility", Utility);
			Menu::MenuOption("Vans", Vans);
			

			break;
		case NightClub:
			Menu::Title("Stewie's");
			Menu::Break("NIGHTCLUB");
			for (auto car : Nightclub1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Doomsday:
			Menu::Title("Stewie's");
			Menu::Break("DOOMSDAY");
			for (auto car : Doomsday1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Super:
		    Menu::Title("Stewie's");
			Menu::Break("SUPER");
			for (auto car : Super1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case SuperSports:
			Menu::Title("Stewie's");
			Menu::Break("SUPER SPORTS");
			for (auto car : Supersports1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Sports:
			Menu::Title("Stewie's");
			Menu::Break("SPORTS");
			for (auto car : Sports1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case SportClassic:
			Menu::Title("Stewie's");
			Menu::Break("SPORTS CLASSICS");
			for (auto car : SportsClassics1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Offroad:
			Menu::Title("Stewie's");
			Menu::Break("Offroad");
			for (auto car : OffRoad1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Sedans:
			Menu::Title("Stewie's");
			Menu::Break("SEDANS");
			for (auto car : Sedans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Coupes:
			Menu::Title("Stewie's");
			Menu::Break("COUPES");
			for (auto car : Coupes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Muscle:
			Menu::Title("Stewie's");
			Menu::Break("MUSCLE");
			for (auto car : Muscle1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Boats:
			Menu::Title("Stewie's");
			Menu::Break("BOATS");
			for (auto car : Boats1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Commercial:
			Menu::Title("Stewie's");
			Menu::Break("COMMERCIAL");
			for (auto car : Commercial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Compacts:
			Menu::Title("Stewie's");
			Menu::Break("COMPACTS");
			for (auto car : Compacts1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Cycles:
			Menu::Title("Stewie's");
			Menu::Break("CYCLES");
			for (auto car : Cycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Emergency:
			Menu::Title("Stewie's");
			Menu::Break("EMERGENCY");
			for (auto car : Emergency1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Helicopters:
			Menu::Title("Stewie's");
			Menu::Break("HELICOPTERS");
			for (auto car : Helicopters1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Industrial:
			Menu::Title("Stewie's");
			Menu::Break("INDUSTRIAL");
			for (auto car : Industrial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Military:
			Menu::Title("Stewie's");
			Menu::Break("MILITARY");
			for (auto car : Military1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Motorcycles:
			Menu::Title("Stewie's");
			Menu::Break("MOTORCYCLES");
			for (auto car : Motorcycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Planes:
		    Menu::Title("Stewie's");
			Menu::Break("PLANES");
			for (auto car : Planes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Service:
			Menu::Title("Stewie's");
			Menu::Break("SERVICE");
			for (auto car : Service1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case SUV:
			Menu::Title("Stewie's");
			Menu::Break("SUV");
			for (auto car : SUVs1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Trailer:
			Menu::Title("Stewie's");
			Menu::Break("TRAILER");
			for (auto car : Trailer1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Trains:
			Menu::Title("Stewie's");
			Menu::Break("TRAINS");
			for (auto car : Trains1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Utility:
			Menu::Title("Stewie's");
			Menu::Break("UTILITY");
			for (auto car : Utility1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Vans:
			Menu::Title("Stewie's");
			Menu::Break("VANS");
			for (auto car : Vans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case particleman:
		{
			Menu::Title("Stewie's");
			Menu::Break("PARTICLE MAN OPTIONS");

			Menu::MenuOption("Ghost Rider", ghostrider);
			Menu::MenuOption("Clown Appears", clownappears);
			Menu::MenuOption("Clown Death", clowndeath);
			Menu::MenuOption("Firework", firework);
			Menu::MenuOption("Alien Disintegrate", alien1);
			Menu::MenuOption("Alien Teleport", alien2);
			Menu::MenuOption("Electric", electric);
			Menu::MenuOption("Water", water);
			Menu::MenuOption("Smoke", smoke);
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case ghostrider:
		{
			Menu::Title("Stewie's");
			Menu::Break("GHOST RIDER");
			
			Menu::Toggle("Ghost Rider 1", Features::GhostRider);
			Menu::Toggle("Ghost Rider 2", Features::GhostRider2);
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case clownappears:
		{
			Menu::Title("Stewie's");
			Menu::Break("CLOWN APPEARS");

			Menu::Toggle("Clown Appears 1", Features::ClownLoop);
			Menu::Toggle("Clown Appears 2", Features::ClownLoop2);
		
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case clowndeath:
		{
			Menu::Title("Stewie's");
			Menu::Break("CLOWN DEATH");

			Menu::Toggle("Clown Death 1", Features::moneyeffect);
			Menu::Toggle("Clown Death 2", Features::moneyeffect2);
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case firework:
		{
			Menu::Title("Stewie's");
			Menu::Break("FIREWORK");

			Menu::Toggle("Firework 1", Features::fireworkloop);
			Menu::Toggle("Firework 2", Features::fireworkloop2);
			
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case alien1:
		{
			Menu::Title("Stewie's");
			Menu::Break("ALIEN DISINTEGRATE");

			Menu::Toggle("Alien 1", Features::alien1);
			Menu::Toggle("Alien 2", Features::alien11);



		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case alien2:
		{
			Menu::Title("Stewie's");
			Menu::Break("ALIEN TELEPORT");

			Menu::Toggle("Alien Teleport 1", Features::alien2);
			Menu::Toggle("Alien Teleport 2", Features::alien22);


		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case electric:
		{
			Menu::Title("Stewie's");
			Menu::Break("ELECTRIC");

			Menu::Toggle("Electric 1", Features::electric);
			Menu::Toggle("Electric 2", Features::electric2);
		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case water:
		{
			Menu::Title("Stewie's");
			Menu::Break("WATER");

			Menu::Toggle("Water 1", Features::watereffect);
			Menu::Toggle("Water 2", Features::watereffect2);

		}
		break;
#pragma endregion
#pragma region PARTICLE MAN OPTIONS
		case smoke:
		{
			Menu::Title("Stewie's");
			Menu::Break("SMOKE");

			Menu::Toggle("Smoke 1", Features::smokeeffect);
			Menu::Toggle("Smoke 2", Features::smokeeffect2);
		}
		break;
#pragma endregion
#pragma region Force Options
		case forcean:
		{
			Menu::Title("Stewie's");
			Menu::Break("FORCE ANIMATION OPTIONS");
			if (Menu::Option("Stop Animation")) { AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer)); }
			if (Menu::Option("Sex Receiver")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmpaparazzo_2", "shag_loop_poppy"); }
			if (Menu::Option("Sex Giver")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmpaparazzo_2", "shag_loop_a"); }
			if (Menu::Option("Stripper Dance")) { Features::animatePlayer(Features::Online::selectedPlayer, "mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			if (Menu::Option("Pole Dance")) { Features::animatePlayer(Features::Online::selectedPlayer, "mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			if (Menu::Option("Push Ups")) { Features::animatePlayer(Features::Online::selectedPlayer, "amb@world_human_push_ups@male@base", "base"); }
			if (Menu::Option("Sit Ups")) { Features::animatePlayer(Features::Online::selectedPlayer, "amb@world_human_sit_ups@male@base", "base"); }
			if (Menu::Option("Celebrate")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmfanatic1celebrate", "celebrate"); }
			if (Menu::Option("Electrocution")) { Features::animatePlayer(Features::Online::selectedPlayer, "ragdoll@human", "electrocute"); }
			if (Menu::Option("Suicide")) { Features::animatePlayer(Features::Online::selectedPlayer, "mp_suicide", "pistol"); }
			if (Menu::Option("Showering")) { Features::animatePlayer(Features::Online::selectedPlayer, "mp_safehouseshower@male@", "male_shower_idle_b"); }

		}
		break;
#pragma endregion
#pragma region Effect Options
		case PTFX:
		{
			Menu::Title("Stewie's");
			Menu::Break("EFFECTS OPTIONS");
			if (Menu::Option("Clown Appears"))Features::PTFXCALL("scr_rcbarry2", "scr_rcbarry2", "scr_clown_appears");
			if (Menu::Option("Firework 1"))Features::PTFXCALL("scr_indep_fireworks", "scr_indep_fireworks", "scr_indep_firework_trailburst");
			if (Menu::Option("Firework 2"))Features::PTFXCALL("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_burst_rgw");
			if (Menu::Option("Firework 3"))Features::PTFXCALL("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_spiral_burst_rgw");
			if (Menu::Option("Banknotes"))Features::PTFXCALL("scr_ornate_heist", "scr_ornate_heist", "scr_heist_ornate_banknotes");
			if (Menu::Option("Truck Crash"))Features::PTFXCALL("scr_fbi4", "scr_fbi4", "scr_fbi4_trucks_crash");
			if (Menu::Option("Alien 1"))Features::PTFXCALL("scr_rcbarry1", "scr_rcbarry1", "scr_alien_disintegrate");
			if (Menu::Option("Alien 2"))Features::PTFXCALL("scr_rcbarry1", "scr_rcbarry1", "scr_alien_teleport");
			if (Menu::Option("Electric Box"))Features::PTFXCALL("scr_agencyheistb", "scr_agencyheistb", "scr_agency3b_elec_box");
			if (Menu::Option("Water Splash"))Features::PTFXCALL("scr_fbi5a", "scr_fbi5a", "scr_fbi5_ped_water_splash");
			if (Menu::Option("Bubbles"))Features::PTFXCALL("scr_fbi5a", "scr_fbi5a", "water_splash_ped_bubbles");
			if (Menu::Option("Blood Entry"))Features::PTFXCALL("scr_finalec2", "scr_finalec2", "scr_finale2_blood_entry");
			if (Menu::Option("Sniper Impact"))Features::PTFXCALL("scr_martin1", "scr_martin1", "scr_sol1_sniper_impact");
			if (Menu::Option("Dirt Throw"))Features::PTFXCALL("core_snow", "core_snow", "cs_mich1_spade_dirt_throw");
			if (Menu::Option("Blood Stab"))Features::PTFXCALL("scr_michael2", "scr_michael2", "scr_mich2_blood_stab");
			if (Menu::Option("Ped Sliced"))Features::PTFXCALL("scr_michael2", "scr_michael2", "scr_abattoir_ped_sliced");
			if (Menu::Option("Camera"))Features::PTFXCALL("scr_rcpaparazzo1", "scr_rcpaparazzo1", "scr_rcpap1_camera");
			if (Menu::Option("Meth Smoke"))Features::PTFXCALL("scr_familyscenem", "scr_familyscenem", "scr_meth_pipe_smoke");
			if (Menu::Option("Burial Dirt"))Features::PTFXCALL("scr_reburials", "scr_reburials", "scr_burial_dirt");

		}
		break;
#pragma endregion
#pragma region Effect Online Options
		case PTFXO:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			Menu::Title("Stewie's");
			Menu::Break("EFFECTS OPTIONS");
			Menu::Toggle("Looped", Features::PTLoopedO[Features::Online::selectedPlayer]);
			if (Menu::Option("Clown Appears"))Features::PTFXCALLO("scr_rcbarry2", "scr_rcbarry2", "scr_clown_appears", Features::Online::selectedPlayer);
			if (Menu::Option("Firework 1"))Features::PTFXCALLO("scr_indep_fireworks", "scr_indep_fireworks", "scr_indep_firework_trailburst", Features::Online::selectedPlayer);
			if (Menu::Option("Firework 2"))Features::PTFXCALLO("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_burst_rgw", Features::Online::selectedPlayer);
			if (Menu::Option("Firework 3"))Features::PTFXCALLO("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_spiral_burst_rgw", Features::Online::selectedPlayer);
			if (Menu::Option("Banknotes"))Features::PTFXCALLO("scr_ornate_heist", "scr_ornate_heist", "scr_heist_ornate_banknotes", Features::Online::selectedPlayer);
			if (Menu::Option("Truck Crash"))Features::PTFXCALLO("scr_fbi4", "scr_fbi4", "scr_fbi4_trucks_crash", Features::Online::selectedPlayer);
			if (Menu::Option("Ped Sliced"))Features::PTFXCALLO("scr_michael2", "scr_michael2", "scr_abattoir_ped_sliced", Features::Online::selectedPlayer);
			if (Menu::Option("Camera"))Features::PTFXCALLO("scr_rcpaparazzo1", "scr_rcpaparazzo1", "scr_rcpap1_camera", Features::Online::selectedPlayer);
			if (Menu::Option("Alien 1"))Features::PTFXCALLO("scr_rcbarry1", "scr_rcbarry1", "scr_alien_disintegrate", Features::Online::selectedPlayer);
			if (Menu::Option("Alien 2"))Features::PTFXCALLO("scr_rcbarry1", "scr_rcbarry1", "scr_alien_teleport", Features::Online::selectedPlayer);
			if (Menu::Option("Electric Box"))Features::PTFXCALLO("scr_agencyheistb", "scr_agencyheistb", "scr_agency3b_elec_box", Features::Online::selectedPlayer);
			if (Menu::Option("Water Splash"))Features::PTFXCALLO("scr_fbi5a", "scr_fbi5a", "scr_fbi5_ped_water_splash", Features::Online::selectedPlayer);
			if (Menu::Option("Bubbles"))Features::PTFXCALLO("scr_fbi5a", "scr_fbi5a", "water_splash_ped_bubbles", Features::Online::selectedPlayer);
			if (Menu::Option("Blood Entry"))Features::PTFXCALLO("scr_finalec2", "scr_finalec2", "scr_finale2_blood_entry", Features::Online::selectedPlayer);
			if (Menu::Option("Sniper Impact"))Features::PTFXCALLO("scr_martin1", "scr_martin1", "scr_sol1_sniper_impact", Features::Online::selectedPlayer);
			if (Menu::Option("Dirt Throw"))Features::PTFXCALLO("core_snow", "core_snow", "cs_mich1_spade_dirt_throw", Features::Online::selectedPlayer);
			if (Menu::Option("Blood Stab"))Features::PTFXCALLO("scr_michael2", "scr_michael2", "scr_mich2_blood_stab", Features::Online::selectedPlayer);
			if (Menu::Option("Meth Smoke"))Features::PTFXCALLO("scr_familyscenem", "scr_familyscenem", "scr_meth_pipe_smoke", Features::Online::selectedPlayer);
			if (Menu::Option("Burial Dirt"))Features::PTFXCALLO("scr_reburials", "scr_reburials", "scr_burial_dirt", Features::Online::selectedPlayer);


		}
		break;
#pragma endregion
#pragma region Force all Options
		case forceanall:
		{
			Menu::Title("Stewie's");
			Menu::Break("ANIMATION OPTIONS");
			if (Menu::Option("Stop Animation")) { Features::clearanimateallPlayer(); }
			if (Menu::Option("Sex Receiver")) { Features::animateallPlayer("rcmpaparazzo_2", "shag_loop_poppy"); }
			if (Menu::Option("Sex Giver")) { Features::animateallPlayer("rcmpaparazzo_2", "shag_loop_a"); }
			if (Menu::Option("Stripper Dance")) { Features::animateallPlayer("mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			if (Menu::Option("Electrocution")) { Features::animateallPlayer("ragdoll@human", "electrocute"); }
			if (Menu::Option("Suicide")) { Features::animateallPlayer("mp_suicide", "pistol"); }
			if (Menu::Option("Pole Dance")) { Features::animateallPlayer("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			if (Menu::Option("Push Ups")) { Features::animateallPlayer("amb@world_human_push_ups@male@base", "base"); }
			if (Menu::Option("Sit Ups")) { Features::animateallPlayer("amb@world_human_sit_ups@male@base", "base"); }
			if (Menu::Option("Celebrate")) { Features::animateallPlayer("rcmfanatic1celebrate", "celebrate"); }
			if (Menu::Option("Showering")) { Features::animateallPlayer("mp_safehouseshower@male@", "male_shower_idle_b"); }

		}
		break;
#pragma endregion
		
#pragma region ipl all Options
		case ipl:
		{
			Menu::Title("Stewie's");
			Menu::Break("IPL LOADER");
			if (Menu::Option("North Yankton")) {
				STREAMING::REQUEST_IPL("prologue01");
				STREAMING::REQUEST_IPL("Prologue01c");
				STREAMING::REQUEST_IPL("Prologue01d");
				STREAMING::REQUEST_IPL("Prologue01e");
				STREAMING::REQUEST_IPL("Prologue01f");
				STREAMING::REQUEST_IPL("Prologue01g");
				STREAMING::REQUEST_IPL("prologue01h");
				STREAMING::REQUEST_IPL("prologue01i");
				STREAMING::REQUEST_IPL("prologue01j");
				STREAMING::REQUEST_IPL("prologue01k");
				STREAMING::REQUEST_IPL("prologue01z");
				STREAMING::REQUEST_IPL("prologue02");
				STREAMING::REQUEST_IPL("prologue03");
				STREAMING::REQUEST_IPL("prologue03b");
				STREAMING::REQUEST_IPL("prologue03_grv_cov");
				STREAMING::REQUEST_IPL("prologue03_grv_dug");
				STREAMING::REQUEST_IPL("prologue03_grv_fun");
				STREAMING::REQUEST_IPL("prologue04");
				STREAMING::REQUEST_IPL("prologue04b");
				STREAMING::REQUEST_IPL("prologue04_cover");
				STREAMING::REQUEST_IPL("prologue05");
				STREAMING::REQUEST_IPL("prologue05b");
				STREAMING::REQUEST_IPL("prologue06");
				STREAMING::REQUEST_IPL("prologue06b");
				STREAMING::REQUEST_IPL("prologue06_int");
				STREAMING::REQUEST_IPL("prologuerd");
				STREAMING::REQUEST_IPL("prologuerdb");
				STREAMING::REQUEST_IPL("prologue_DistantLights");
				STREAMING::REQUEST_IPL("prologue_grv_torch");
				STREAMING::REQUEST_IPL("prologue_m2_door");
				STREAMING::REQUEST_IPL("prologue_LODLights");
				STREAMING::REQUEST_IPL("DES_ProTree_start");
				Vector3 Coords;
				Coords.x = 3595.39673f; Coords.y = -4893.727f; Coords.z = 115.838394f;
				TPto(Coords);
			}
			if (Menu::Option("Porn Yacht")) {
				STREAMING::REQUEST_IPL("smboat");
				Vector3 Coords;
				Coords.x = -2045.8f; Coords.y = -1031.2f; Coords.z = 11.9f;
				TPto(Coords);
			}
			if (Menu::Option("Aircraft Carrier")) {
				STREAMING::REQUEST_IPL("hei_carrier");
				STREAMING::REQUEST_IPL("hei_carrier_DistantLights");
				STREAMING::REQUEST_IPL("hei_Carrier_int1");
				STREAMING::REQUEST_IPL("hei_Carrier_int2");
				STREAMING::REQUEST_IPL("hei_Carrier_int3");
				STREAMING::REQUEST_IPL("hei_Carrier_int4");
				STREAMING::REQUEST_IPL("hei_Carrier_int5");
				STREAMING::REQUEST_IPL("hei_Carrier_int6");
				STREAMING::REQUEST_IPL("hei_carrier_LODLights");
				Vector3 Coords;
				Coords.x = 3069.330f; Coords.y = -4632.4f; Coords.z = 15.043f;
				TPto(Coords);
			}
			if (Menu::Option("Sunken Cargoship")) {
				STREAMING::REQUEST_IPL("sunkcargoship");
				Vector3 Coords;
				Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 0.0f;
				TPto(Coords);
			}
			if (Menu::Option("Hospital")) {
				STREAMING::REQUEST_IPL("RC12B_HospitalInterior");
				STREAMING::REQUEST_IPL("RC12B_Destroyed");
				Vector3 Coords;
				Coords.x = 356.8f; Coords.y = -590.1f; Coords.z = 43.3f;
				TPto(Coords);
			}
			if (Menu::Option("Oneil Farm")) {
				STREAMING::REMOVE_IPL("farm_burnt");
				STREAMING::REMOVE_IPL("farm_burnt_props");
				STREAMING::REQUEST_IPL("farm");
				STREAMING::REQUEST_IPL("farm_props");
				STREAMING::REQUEST_IPL("farmint");
				STREAMING::REQUEST_IPL("farmint_cap");
				Vector3 Coords;
				Coords.x = 2441.2f; Coords.y = 4968.5f; Coords.z = 51.7f;
				TPto(Coords);
			}
			if (Menu::Option("Life Invader Office")) {
				STREAMING::REQUEST_IPL("facelobby");
				STREAMING::REQUEST_IPL("facelobbyfake");
				Vector3 Coords;
				Coords.x = -1047.9f; Coords.y = -233.0f; Coords.z = 39.0f;
				TPto(Coords);
			}
			if (Menu::Option("Cargoship")) {
				STREAMING::REQUEST_IPL("cargoship");
				Vector3 Coords;
				Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 9.3192f;
				TPto(Coords);
			}
			if (Menu::Option("Jewelry Store")) {
				STREAMING::REQUEST_IPL("jewel2fake");
				STREAMING::REQUEST_IPL("post_hiest_unload");
				STREAMING::REQUEST_IPL("bh1_16_refurb");
				Vector3 Coords;
				Coords.x = -630.4f; Coords.y = -236.7f; Coords.z = 40.0f;
				TPto(Coords);
			}
			if (Menu::Option("Morgue")) {
				STREAMING::REQUEST_IPL("Coroner_Int_on");
				Vector3 Coords;
				Coords.x = 244.9f; Coords.y = -1374.7f; Coords.z = 39.5f;
				TPto(Coords);
			}

		}
		break;
#pragma endregion
#pragma region TP other
		case tpother:
		{
			Features::LoadInfoplayer(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			Menu::Title("Stewie's");
			Menu::Break("TELEPORT OPTIONS");

			if (Menu::Option("Teleport To Me (VEHICLE)")) {
				int CurrentPlayersVehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
				Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
				if (CurrentPlayersVehicle)
				{
					RequestControlOfEnt(CurrentPlayersVehicle);
					ENTITY::SET_ENTITY_COORDS(CurrentPlayersVehicle, MyCoords.x, MyCoords.y, MyCoords.z + 1.0f, false, false, false, false);

				}
				else { IconNotification("Player Is Not In A Vehicle Or 900m Of You!", "Stewie's", "Teleport"); }
			}
		
			if (Menu::Option("Teleport In To Vehicle")) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), false);
				for (int i = -1; i < 16; i++)
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(veh, i))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, i);
					}
				}
			};
			Menu::Option("Teleport To Player", [] {Features::Online::TeleportToPlayer(Features::Online::selectedPlayer); });
		}
		break;

#pragma endregion
		}
		Menu::YTD();
		Menu::End();
		WAIT(0);
	}
}

#include <iostream>
#include <fstream>
#include <stdio.h>

void ScriptMain() {
	
	srand(GetTickCount());
	Features::TimePD = timeGetTime();
	Features::TimePD1 = timeGetTime();
	Features::TimePD2 = timeGetTime();
	Features::TimePD3 = timeGetTime();
	Features::TimePD4 = timeGetTime();
	Features::TimePD5 = timeGetTime();
	Features::TimePD6 = timeGetTime();
	Features::TimePD7 = timeGetTime();
	Features::TimePD8 = timeGetTime();

	main();
}