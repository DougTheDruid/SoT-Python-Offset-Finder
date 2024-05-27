#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x28
struct OnCompetitiveVoyageCrewRespawned
{
public:
	struct                                                       CrewId;                                            // 0x0(0x10)
	struct                                                       SinkLocation;                                      // 0x10(0xc)
	struct                                                       SpawnLocation;                                     // 0x1c(0xc)
};


// Size 0x38
struct CompetitiveVoyagesCrewShipRespawnTelemetryEvent
{
public:
	struct                                                       EventID;                                           // 0x0(0x10)
	struct                                                       CrewId;                                            // 0x10(0x10)
	struct                                                       SinkLocation;                                      // 0x20(0xc)
	struct                                                       SpawnLocation;                                     // 0x2c(0xc)
};


// Size 0x18
struct OnCompetitiveVoyageItemRemoved
{
public:
	class Actor*                                                 RemovedItem;                                       // 0x0(0x8)
	struct                                                       CompetitiveVoyageEventId;                          // 0x8(0x10)
};


// Size 0x108
struct CompetitiveVoyagesRespawnConfig
{
public:
	struct                                                       ScuttleRespawnParams;                              // 0x0(0x50)
	struct                                                       NormalRespawnParams;                               // 0x50(0x50)
	bool                                                         GenerateRespawnVisualizationImages;                // 0xa0(0x1)
	int                                                          NumDebugGenerations;                               // 0xa4(0x4)
	struct                                                       MapMin;                                            // 0xa8(0x8)
	struct                                                       MapMax;                                            // 0xb0(0x8)
	struct                                                       RespawnParamsToUse;                                // 0xb8(0x50)
};


// Size 0x10
struct OnCompetitiveVoyageCrewOptInEvent
{
public:
	struct                                                       CrewId;                                            // 0x0(0x10)
};


// Size 0x10
struct CompetitiveVoyagesEventCreatedTelemetryEvent
{
public:
	struct                                                       EventID;                                           // 0x0(0x10)
};


// Size 0x18
struct CompetitiveVoyageEventItem
{
public:
	class Actor*                                                 VoyageItem;                                        // 0x0(0x8)
	struct                                                       EventID;                                           // 0x8(0x10)
};


// Size 0xc
struct ShipSpeedCurseModifyingValues
{
public:
	float                                                        SloopSpeedCurseModifier;                           // 0x0(0x4)
	float                                                        BrigantineSpeedCurseModifier;                      // 0x4(0x4)
	float                                                        GalleonSpeedCurseModifier;                         // 0x8(0x4)
};


// Size 0x18
struct OnCompetitiveVoyageItemAdded
{
public:
	class Actor*                                                 AddedItem;                                         // 0x0(0x8)
	struct                                                       CompetitiveVoyageEventId;                          // 0x8(0x10)
};


// Size 0x1c
struct CompetitiveVoyagesItemUsageTelemetryEvent
{
public:
	struct                                                       EventID;                                           // 0x0(0x10)
	struct FName                                                 ClassName;                                         // 0x10(0x8)
	int                                                          NumTimesSwappedHands;                              // 0x18(0x4)
};


// Size 0x10
struct OnCompetitiveVoyageOptOutVotePassed
{
public:
	struct                                                       CrewId;                                            // 0x0(0x10)
};


// Size 0x48
struct CompetitiveVoyageItemData
{
public:
	class Actor*                                                 ItemInfo;                                          // 0x0(0x8)
	struct                                                       FirstHoldingCrewId;                                // 0x8(0x10)
	struct                                                       PreviousHoldingCrewId;                             // 0x18(0x10)
	struct                                                       CurrentHoldingCrewId;                              // 0x28(0x10)
	int                                                          NumTimesSwappedHands;                              // 0x38(0x4)
};


// Size 0x50
struct CompetitiveVoyagesRespawnParams
{
public:
	float                                                        ScorePenaltyForEachMeterAwayFromShipwreck;         // 0x0(0x4)
	float                                                        MinRespawnLocDistanceFromSunkShip;                 // 0x4(0x4)
	float                                                        MinScorePenaltyForEnemyShipProximity;              // 0x8(0x4)
	float                                                        MaxScorePenaltyForEnemyShipProximity;              // 0xc(0x4)
	float                                                        MinDistanceFromEnemyShipToApplyPenalty;            // 0x10(0x4)
	float                                                        MaxDistanceFromEnemyShipToApplyPenalty;            // 0x14(0x4)
	struct                                                       TreasureHuntPOIData;                               // 0x18(0x1c)
	struct                                                       HandInPOIData;                                     // 0x34(0x1c)
};


// Size 0x1c
struct CompetitiveVoyagesRespawnPOIData
{
public:
	float                                                        MinPreferredDistanceFromPOI;                       // 0x0(0x4)
	float                                                        MaxPreferredDistanceFromPOI;                       // 0x4(0x4)
	float                                                        MinBonusForPreferredDistance;                      // 0x8(0x4)
	float                                                        MaxBonusForPreferredDistance;                      // 0xc(0x4)
	float                                                        ScorePenaltyForEachMeterAwayFromVoyageItem;        // 0x10(0x4)
	float                                                        ResourceOrFeatureMultiplier;                       // 0x14(0x4)
	float                                                        OutpostMultiplier;                                 // 0x18(0x4)
};


// Size 0x20
struct CompetitiveVoyagesEventCompletedTelemetryEvent
{
public:
	struct                                                       EventID;                                           // 0x0(0x10)
	int                                                          NumParticipatingCrews;                             // 0x10(0x4)
	int                                                          NumMainVoyageCrews;                                // 0x14(0x4)
	int                                                          NumScuttledCrews;                                  // 0x18(0x4)
	int                                                          NumOptedOutCrews;                                  // 0x1c(0x4)
};


// Size 0x14
struct MigratingEventTelemetryData
{
public:
	struct                                                       EventID;                                           // 0x0(0x10)
	int                                                          NumMigratingCrews;                                 // 0x10(0x4)
};


// Size 0x18
struct CompetitiveVoyagesMigrationTelemetryEvent
{
public:
	TArray<struct MigratingEventTelemetryData>                   MigrationEvents;                                   // 0x0(0x10)
	int                                                          NumOptInCrews;                                     // 0x10(0x4)
};


