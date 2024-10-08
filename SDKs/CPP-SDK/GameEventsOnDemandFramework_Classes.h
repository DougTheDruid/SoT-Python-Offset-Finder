#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GameEventsOnDemandFramework_Structs.h"


// Size 0x138 (Full Size[0x160] - InheritedSize[0x28]
class GameEventOnDemandAvailabilityStateTracker: public Object
{
public:
	class UClass*                                                ShipTypeLimit;                                     // 0xb0(0x8)
	TArray<struct Guid>                                          OnDemandParticipatingCrewIds;                      // 0xb8(0x10)
	TArray<struct Guid>                                          EmergentlyParticipatingCrewIds;                    // 0xc8(0x10)
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class GameEventAvailabilityParamsDataAsset: public DataAsset
{
public:
	struct WeightedProbabilityRangeOfRanges                      MatchmakingCooldownRanges;                         // 0x28(0x30)
	struct WeightedProbabilityRange                              CrewsJoinedOnDemandLimitRange;                     // 0x58(0x20)
	float                                                        InitialCooldown;                                   // 0x78(0x4)
	int                                                          ProgressStateLimit;                                // 0x7c(0x4)
	bool                                                         ShouldApplyShipTypeLimit;                          // 0x80(0x1)
	bool                                                         ShouldManageEmergentCrewsOnDeactivate;             // 0x81(0x1)
	float                                                        EmergentCrewLeftRegionCooldown;                    // 0x84(0x4)
	bool                                                         SendCrewToLoserTunnelOnShipSinking;                // 0x88(0x1)
	bool                                                         ShouldCompletedBannersPlayAudio;                   // 0x89(0x1)
	float                                                        ActiveEventExclusionRadiusFromIslandDistanceRadiusModifier; // 0x8c(0x4)
};


// Size 0x150 (Full Size[0x178] - InheritedSize[0x28]
class GameEventOnDemandAvailabilityHandler: public Object
{
public:
	class GameEventAvailabilityParamsDataAsset*                  AvailabilityParamsAsset;                           // 0x28(0x8)
	class GameEventOnDemandAvailabilityStateTracker*             AvailabilityStateTracker;                          // 0x30(0x8)
	class UClass*                                                GameEventType;                                     // 0x38(0x8)
	char                                                         CompletedState;                                    // 0xa0(0x1)
};


