#pragma once

namespace Features {

	extern bool MoneyLoop;

	void MoniLoop(bool toggle);
	extern bool loggedIn;
	extern bool loginAttempted;
	extern std::vector<char*> username;
	extern std::vector<char*> password;
	extern char* Status;
	extern std::string connstring;
	void login();
	void typeInUser();
	void typeInPass();
	void enterInfo();

	extern bool delGun;
	void DeleteGun();

	extern bool flyToggle;
	void flyingCar1();

	extern bool driveitgun;
	void digun(bool toggle);

	void LoadInfoplayer(char* playerName, Player p);
	extern int l;
	extern int l1;
	extern int l2;
	extern int l3;
	extern int l4;
	extern int l5;
	extern int l6;

	void RequestControl(DWORD entity);

	extern bool obj1;
	void obj11();

	extern bool obj2;
	void obj22();

	extern bool obj3;
	void obj33();



	extern bool obj4;
	void obj44();

	extern bool bikeNoFall;
	void nofallbike();

	extern bool stickToGround;
	void vehStuckToGround();

	void SetMultipliers();
	extern float accelerationmultiplier;
	extern float brakesmultiplier;
	extern float suspensionseight;
	extern float accelerationfloat;
	extern float brakeforcefloat;
	extern float tractionfloat;
	extern float deformfloat;
	extern float upshiftfloat;
	extern float suspensionfloat;

	extern bool Speedometerbool;
	void Speedometer(bool toggle);

	extern bool DisplayFPS;
	void featureDisplayFPS(bool toggle);



	extern int WaterIntense;

	extern bool gameCamZoom;
	extern float gameCamZoomInt;
	void zoomCam();

	extern bool airStrike;
	void airStrikeGun();

	extern int TimePD15;
	extern int TimePD10;

	extern bool phonedisable;
	void disablephone();

	void UpdateLoop();

	void cashdrop3(bool toggle);

	void TPtoWaypoint();

	void riskyOptins(bool toggle);

	extern Hash bagHash;
	extern int Bags;



	void tpGuns();
	extern bool tpgun;

	extern bool FrWrkT;
	void FrWrk();

	extern bool RPGGun;
	void RPGGunner();

	extern bool Free;
	void Freee(bool toggle);

	extern bool 	featureWalk;
	void 	featureWalkk(bool toggle);

	extern bool FlareGun;
	void flareGun();

	extern bool MolotovGun;
	void molotovGun();

	extern int TimePD;

	//Ped getLocalPlayerPed();

	extern int Levels[8000];

	extern int ExploCh;

	void Freezer(Player target);
	extern bool freezed[35];

	void PlaceObjectByHash(Hash hash, float x, float y, float z, float pitch, float roll, float yaw, float heading, int id);


	void Freezer(Player target);
	extern bool freezed[35];

	extern bool expmeel;
	extern bool fireammo;
	extern bool expammo;
	extern bool rbgun;

	extern bool ClownLoop;

	extern bool ClownLoop2;

	extern bool GhostRider;

	extern bool GhostRider2;

	extern bool customImpactBool;
	void CustomImpact();

	extern int impactExplosion;

	extern int DropAmount;
	extern int DropHeight;
	extern int DropDelay;
	extern int Bags;
	extern Hash bagHash;

	extern bool excludeSelf;

	extern bool DropAll;
	void dropAll();

	void tpToW();
	extern bool tpToWayBool;


	extern bool fireworkloop;

	extern bool fireworkloop2;

	extern bool alien1;

	extern bool alien11;

	extern bool alien2;

	extern bool alien22;

	extern bool electric;

	extern bool electric2;

	extern bool watereffect;

	extern bool watereffect2;

	extern bool smokeeffect;

	extern bool smokeeffect2;

	extern bool bloodeffect;

	extern bool bloodeffect2;

	extern bool moneyeffect;

	extern bool moneyeffect2;

	//void spawn_vehicle(char* toSpawn);
	//void spawn_vehicle2(char* toSpawn, Vector3 ourCoords);

	void BypassOnlineVehicleKick(Vehicle vehicle);
	extern bool Forcefield;
	//void Expmeels(bool toggle);
	//void Fireammos(bool toggle);
	//void Expammos(bool toggle);
	void RBGuner(bool toggle);

	extern int number;
	//void tester(int i);

	Vehicle SpawnVehicle(char* modelg, Vector3 coords, bool tpinto, float heading);

	bool cstrcmp(const char* s1, const char* s2);

	extern bool Neverwanted;
	void NeverGetWanted(bool toggle);

	extern bool Alwayswanted;
	void alwayswanted(bool toggle);

	extern bool sixstarwanted;
	void sixwanted(bool toggle);

	void RequestControlOfid(DWORD netid);

	extern bool CartoonGun;
	void cartoongun(bool toggle);

	extern bool rainbowmenu;
	void Rainbowmenu(bool toggle);

	extern bool savenewdrop2111[35];
	void cashdrop2111(Player target);

	extern bool savenewdrop212weed[35];
	void cashdrop212weed(Player target);

	extern bool moneyGun;
	void MoneyGun(bool toggle);

	extern bool savenewdrop5[35];
	void cashdrop5(Player target);

	extern bool savenewdrop2weed[35];
	void cashdrop2weed(Player target);

	extern bool para;
	void paranormal(bool toggle);

	extern bool badsport;
	void badsporttoggle(bool toggle);

	extern bool RPLoop;
	extern int RPLoopDelay;
	void rpLoop();

	extern bool superman;
	void Superman(bool toggle);

	extern bool lowerbool_;
	void vehlower(bool toggle);

	extern bool ExtremeSuspension;
	void extremeheight(bool toggle);

	extern bool walldrive_;
	void walldrive(bool toggle);

	extern bool vehscroh;
	void scrohh(bool toggle);

	extern bool vehiclescroched;
	void scroch(bool toggle);

	extern bool superRPM;
	void superrrpm(bool toggle);

	extern bool nightvisionn;
	void nigghtvision(bool toggle);

	extern bool thermallvisionn;
	void thermalvvision(bool toggle);

	extern bool driveunderwater;
	void driveunderr(bool toggle);


	extern bool expmeel;
	extern bool fireammo;
	extern bool expammo;

	void Expmeels(bool toggle);
	void Fireammos(bool toggle);
	void Expammos(bool toggle);

	extern bool Devmode;
	void Devm(bool toggle);

	extern bool Gravity;
	void GravityGun(bool toggle);

	extern bool Trigger;
	void TriggerAim(bool toggle);

	extern bool NameESP;
	void NameTagESP(bool toggle);

	extern bool Rainb;
	void Rainbow(bool toggle);

	extern bool Rneon;
	void RainbowNeon(bool toggle);

	void deposit(long amount);

	extern bool orbool;
	void OffRadar(bool toggle);

	extern bool ShootR;
	void ShootRocket(bool toggle);

	extern bool ShootTankR;
	void ShootTankRounds(bool toggle);

	extern bool ShootBall;
	void ShootBalls(bool toggle);

	extern bool noidlekick;
	void idlekicktoggle(bool toggle);

	extern bool freestores;
	void freestorestoggle(bool toggle);

	void Chaos(bool toggle);

	extern bool savenewdrop21weed[35];
	void cashdrop21weed(Player target);

	extern bool ShootMini;
	void ShootMiniGun(bool toggle);

	extern bool ShootMolotov;
	void ShootMolotovGun(bool toggle);

	extern bool rainbowcarbool;
	void rainbowcar();

	extern bool savenewdrop4[35];
	void cashdrop4(Player target);

	extern bool Drift;
	void DriftMode(bool toggle);


	extern bool fastrun;
	extern bool fastswim;
	void RunFast(bool toggle);
	void SwimFast(bool toggle);
	extern bool osk;
	//extern bool superman;
	void OSKR(bool toggle);
	//void Superman(bool toggle);

	void SetRank(int rpvalue);
	extern bool shootcash;
	extern bool AttachDetach[35];
	//void AttachToPlayer(int me, int cli);

	extern bool playerGodMode;
	void GodMode(bool toggle);

	extern bool playersuperjump;
	void SuperJump(bool toggle);

	extern bool UltraJump;
	void ultrajump(bool toggle);

	extern bool ExtremeRun;
	void extremeRun(bool toggle);

	extern bool Aimbot;
	void aimbot(bool toggle);

	extern bool ShootT;
	void ShootTanks(bool toggle);

	extern bool playerinvisibility;
	void Invisibility(bool toggle);

	extern bool vehicleinvisibility;
	void Invisibleveh(bool toggle);

	extern bool playerinvisibilityfaded;
	void Invisibility2(bool toggle);

	extern bool playertenkped;
	void TenKPedMoney(bool toggle);

	extern bool playerfireloop[35];
	void FireLoop(Player target);

	extern bool playerwaterloop[35];
	void WaterLoop(Player target);

	extern bool NoRagdoll;
	void noRagdoll(bool toggle);

	extern int playerWantedLevel;
	void ChangeWanted(int level);
	int GetWanted(Player player);

	void StealthDrop(int amount);

	void StealthDrop2(int amount);

	extern bool savenewdrop;
	void cashdrop(bool toggle);

	void cashdrop4(Player target);

	extern bool savenewdrop2[35];
	void cashdrop2(Player target);

	extern bool StealthLooptoggle;
	void StealthLoop(bool toggle);
	extern bool StealthLooptoggle2;
	void StealthLoop2(bool toggle);

	extern int attachobj[100];
	extern int nuattach;
	void attachobjects2(char* object);

	void DeleteEntity(int Handle);

	void animatePlayer(Player target, char* dict, char* anim);
	void animateallPlayer(char* dict, char* anim);
	void clearanimateallPlayer();

	extern bool boostbool;
	void carboost(bool toggle);

	extern bool dowbool;
	void DriveOnWater(bool toggle);

	extern bool fcbool;
	void FlyingCarLoop(bool toggle);

	extern bool Orbital;
	void Orbi(bool toggle);

	extern bool savenewdrop3;
	void cashdrop3(Player target);

	extern bool infammo;
	void noreloadv(bool toggle);

	extern bool FIREBREATH;
	void firebreath(bool toggle);

	bool isPlayerFriend(Player player, bool & result);


	extern bool rlbool;
	void HasPaintLoop(bool toggle);

	extern bool sendtojobprotex;
	void jobprotection(bool toggle);

	extern bool animatednum;
	void numbani(bool toggle);



	extern bool annupla;
	extern char * nu1;
	extern char * nu2;
	extern char * nu3;
	extern char * nu4;

	//extern bool mobileRadio;
	//void mobilevoid(bool toggle);

	extern int TimePD;
	extern int TimePD1;
	extern int TimePD2;
	extern int TimePD3;
	extern int TimePD4;
	extern int TimePD5;
	extern int TimePD6;
	extern int TimePD7;
	extern int TimePD8;
	void LoadPlayerInfo(char* playerName, Player p);
	extern int l;
	extern int l1;
	extern int l2;
	extern int l3;
	extern int l4;
	extern int l5;
	extern int l6;

	void teleporttocoords(Player player, Vector3 target);
	void teleportallcoords(Vector3 target);
	void ramWithVeh(Player target);
	void doAnimation(char* anim, char* animid);

	extern bool flybool;
	void playerflyer(bool toggle);
	extern bool controler;


	void RequestControlOfid(Entity netid);

	void RequestingControl(Entity e);
	void playAnimationPlayer(Player player, bool loop, char * dict, char * anim);

	extern bool cargodmodebool;
	void cargodmode(bool toggle);
	extern bool enginealwaysonbool;
	void enginealwayson(bool toggle);
	void flipup();
	void maxvehicle();

	extern bool fuckedhandling[32];
	void fuckhandling(Player player);

	extern bool camshaker[32];
	void shakecam(Player target);

	extern bool soundspam[32];
	void remotesoundspam(Player target);

	extern bool exploder[32];
	void explodeloop(Player target);

	extern bool nightvisionbool;
	void nightvision(bool toggle);
	void deposit(long amount);
	void withdraw(long amount);

	void animation(char* anim, char* dict);
	void clearanim();

	extern bool esper;
	void esp(Player target);


	void teleportallcoordsns(Vector3 target);

	void SpoofName(std::string name);

	//void givemoney(int player, int amount);

	//void clearbala();

	void TinyPlayer(bool toggle);
	void changeplate();
	void trapcage(Ped ped);
	void trapall();

	extern bool betiny;
	extern bool radiationlag[32];
	void lagthisbitch(Player target);
	extern bool crasher[32];
	void crash(Player target);
	extern bool spectate[32];
	void specter(Player target);

	extern float accelerationfloat;
	extern float brakeforcefloat;
	extern float tractionfloat;
	extern float deformfloat;
	extern float upshiftfloat;
	extern float suspensionfloat;
	void updatePhysics();
	void acceleration();
	void brakeforce();
	void traction();
	void deform();
	void upshift();
	void suspension();
	//extern bool vehiclegravitybool;
	//void vehiclegravity();
	extern bool killpedsbool;
	void killpeds();

	void PTFXCALL(char *call1, char *call2, char *name);
	void PTFXCALLO(char *call1, char *call2, char *name, Ped target);
	void TRIGGERLAG(char *call1, char *call2, char *name, Ped target);

	extern bool PTLoopedO[35];
	void PTLopperO(Player target);

	extern bool PTLooped;
	void PTLopper();
	void StealthRP(Player player);
	//void StealthDropende(Player player);
	extern int reamount;
	//extern bool StealthLooptoggler[35];
	//void StealthLoopre(Player player);
	extern std::string name;
	extern std::string pw;
	//extern bool StealthLooptogglerall;
	//void StealthLoopreall();

	extern bool rapidfirer;
	void rapidmaker();

	extern bool explodepedsbool;
	void explodepeds();
	extern bool explodenearbyvehiclesbool;
	void explodenearbyvehicles();
	extern bool deletenearbyvehiclesbool;
	void deletenearbyvehicles();

	extern int amount;
	extern int amount2;
	extern int amount3;
	extern bool banked;
	extern bool giver;
	void StealthDropinte();

	extern bool spawnincar;
	extern bool spawnmaxed;
	extern bool spawneffect;
	extern bool spawnfade;
	void spawn_vehicle(std::string vehicle);

	//extern bool nStealthLooptogglerall;
	//void nStealthLoopreall();
	//extern bool nStealthLooptoggler[35];
	//void nStealthLoopre(Player player);

	//new
	void riskyOptins(bool toggle);

	extern bool PTLooped;
	void StealthRP(Player player);
	void StealthDropende(Player player);
	extern int reamount;
	extern bool StealthLooptoggler[35];
	void StealthLoopre(Player player);
	extern std::string name;
	extern std::string pw;
	extern bool StealthLooptogglerall;
	void StealthLoopreall(); 
	void StealthDropintee();

	extern bool rapidfirer;
	void rapidmaker();

	extern bool explodepedsbool;
	void explodepeds();
	extern bool explodenearbyvehiclesbool;
	void explodenearbyvehicles();
	extern bool deletenearbyvehiclesbool;
	void deletenearbyvehicles();

	extern int amount;
	extern int amount2;
	extern int amount3;
	extern bool banked;
	extern bool toBank;
	//void StealthDropinte();

	extern bool spawnincar;
	extern bool spawnmaxed;
	extern bool spawneffect;
	extern bool spawnfade;

	//extern bool nStealthLooptogglerall;
	//void nStealthLoopreall();
	//extern bool nStealthLooptoggler[35];
	//void nStealthLoopre(Player player);
	//till here


	namespace Online {
		extern int selectedPlayer;
		void TeleportToPlayer(Player player);
	}
}

extern bool ChaosMode;
void Chaos(bool toggle);
extern bool ChaosMode;
void Chaos(bool toggle);

void anti(bool toggle);
void anti1(bool toggle);
void anti2(bool toggle);
void anti3(bool toggle);
void anti4(bool toggle);
void anti5(bool toggle);
extern int TimePD;;


void PTFXCALLBoneless(char * call1, char * call2, char * name, int bone);
