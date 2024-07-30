#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x4
struct KillPlayerGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
};


// Size 0x8
struct CustomPlayerStartConfigResponseGameServerRequestModel
{
public:
	bool                                                         Success;                                           // 0x0(0x1)
	int                                                          PlayerStartId;                                     // 0x4(0x4)
};


// Size 0x4
struct ResetCustomConfigForPlayerGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
};


// Size 0x30
struct CustomPlayerStartConfigGameServerRequestModel
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	struct Quat                                                  Rotation;                                          // 0x10(0x10)
	TArray<String>                                               Tags;                                              // 0x20(0x10)
};


// Size 0x8
struct ForcePlayerRespawnGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bRespawnAsGhost;                                   // 0x4(0x1)
};


// Size 0x4
struct GameModeDeathPenaltyRespawnTimerGameServerRequestModel
{
public:
	float                                                        SpawnTimer;                                        // 0x0(0x4)
};


// Size 0x8
struct SetCustomPlayerStartGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	int                                                          PlayerStartActorNetID;                             // 0x4(0x4)
};


// Size 0x8
struct SetShouldUseRevivalFlowGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bShouldUseRevivalFlow;                             // 0x4(0x1)
};


// Size 0x10
struct KillCrewGameServerRequestModel
{
public:
	struct Guid                                                  CrewNetGUID;                                       // 0x0(0x10)
};


// Size 0x18
struct DestroyCustomPlayerStartGameServerRequestModel
{
public:
	int                                                          PlayerStartActorNetID;                             // 0x0(0x4)
	struct FString                                               Tag;                                               // 0x8(0x10)
};


// Size 0x8
struct SetShouldSkipFerryOfTheDamnedGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	bool                                                         bShouldSkipFerryOfTheDamned;                       // 0x4(0x1)
};


