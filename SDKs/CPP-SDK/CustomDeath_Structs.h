// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct SetCustomPlayerStartData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	int                                                          PlayerStartActorNetID;                             // 0x4(0x4)
};


// Size 0x18
struct CustomDeathConfiguration
{
public:
};


// Size 0x18
struct DestroyCustomPlayerStartData
{
public:
	int                                                          PlayerStartActorNetID;                             // 0x0(0x4)
	char                                                         pad0x4_7ZOUO[0x4];                                 // 0x4(0x4)
	Struct FString                                               Tag;                                               // 0x8(0x10)
};


// Size 0x8
struct CustomPlayerStartConfigResponseData
{
public:
	bool                                                         Success;                                           // 0x0(0x1)
	char                                                         pad0x3_JVMHM[0x3];                                 // 0x1(0x3)
	int                                                          PlayerStartId;                                     // 0x4(0x4)
};


// Size 0x30
struct CustomPlayerStartConfigData
{
public:
	Struct Vector                                                Location;                                          // 0x0(0xc)
	char                                                         pad0x4_WXA7B[0x4];                                 // 0xc(0x4)
	Struct Quat                                                  Rotation;                                          // 0x10(0x10)
	TArray<Str Tags>                                             Tags;                                              // 0x20(0x10)
};


// Size 0x4
struct ResetCustomConfigForPlayerData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
};


// Size 0x8
struct SetShouldSkipFerryOfTheDamnedData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bShouldSkipFerryOfTheDamned;                       // 0x4(0x1)
};


// Size 0x8
struct SetShouldUseRevivalFlowData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bShouldUseRevivalFlow;                             // 0x4(0x1)
};


// Size 0x4
struct GameModeDeathPenaltyRespawnTimerData
{
public:
	float                                                        SpawnTimer;                                        // 0x0(0x4)
};


// Size 0x8
struct ForcePlayerRespawnData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bRespawnAsGhost;                                   // 0x4(0x1)
};


// Size 0x10
struct KillCrewData
{
public:
	Struct Guid                                                  CrewNetGUID;                                       // 0x0(0x10)
};


// Size 0x4
struct KillPlayerData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
};


}