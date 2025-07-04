#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct VoyageBoarWallowAndIslandName
{
public:
	char                                                         pad0x10_LJ7VA[0x10];                               // 0x0(0x10)
};


// Size 0x8
struct OnBoarWallowRemoved
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
};


// Size 0x8
struct BoarWallowEmergentSpawnIslandSelectedTelemetryEvent
{
public:
	struct FName                                                 SelectedIsland;                                    // 0x0(0x8)
};


// Size 0x8
struct OnIncreasingNumberOfTotalLootItems
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
};


// Size 0x18
struct OnBoarVoyageCompleted
{
public:
	struct Guid                                                  VoyageOwningCrewID;                                // 0x0(0x10)
	struct FName                                                 IslandName;                                        // 0x10(0x8)
};


// Size 0x10
struct OnCrewReachingVoyageBoarIsland
{
public:
	struct Guid                                                  VoyageOwningCrewID;                                // 0x0(0x10)
};


// Size 0x14
struct OnIncreasingNumberOfKilledBoarsOnIsland
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
	bool                                                         IsAlphaKilled;                                     // 0x10(0x1)
	char                                                         pad0x3_A5H5U[0x3];                                 // 0x11(0x3)
};


// Size 0x20
struct OnBoarVoyageWallowSpawned
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
	struct Guid                                                  VoyageOwningCrewID;                                // 0x8(0x10)
	char                                                         pad0x8_6C8H5[0x8];                                 // 0x18(0x8)
};


// Size 0x18
struct OnBoarKilled
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	bool                                                         IsAlphaKilled;                                     // 0x14(0x1)
	char                                                         pad0x3_1TVR7[0x3];                                 // 0x15(0x3)
};


// Size 0xc
struct OnLootHoleTreasureExhumed
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
};


// Size 0x18
struct OnBoarVoyageStarted
{
public:
	struct Guid                                                  VoyageOwningCrewID;                                // 0x0(0x10)
	struct FName                                                 IslandName;                                        // 0x10(0x8)
};


// Size 0xc
struct OnLootHoleSpawned
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
};


// Size 0x8
struct OnAllBoarsOnIslandKilled
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
};


// Size 0x8
struct OnIncreasingTotalDugUpLootItems
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
};


// Size 0x200
struct OnIncreasingTotalNumberOfSpawnedBoarsOnIsland
{
public:
	struct FName                                                 IslandName;                                        // 0x0(0x8)
	char                                                         pad0x1f8_T0YR8[0x1f8];                             // 0x8(0x1f8)
};


// Size 0x1
struct OnAllConditionsForEmergentIslandBoarAndWallowSpawningMet
{
public:
	bool                                                         AllConditionsForSpawningBoarsAndWallowsMet;        // 0x0(0x1)
};


// Size 0x208
struct OnBoarSpawned
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	char                                                         pad0x1fc_Z9ZCR[0x1fc];                             // 0xc(0x1fc)
};


