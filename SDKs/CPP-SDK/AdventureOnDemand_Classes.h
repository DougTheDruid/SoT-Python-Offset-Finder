#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "AdventureOnDemand_Structs.h"


// Size 0x310 (Full Size[0x6d8] - InheritedSize[0x3c8]
class AdventureOnDemandService: public Actor
{
public:
	class AdventureOnDemandServiceParams*                        Params;                                            // 0x3d8(0x8)
	class AdventureOnDemandVoyageSelectionDataAsset*             VoyageSelectionDataAsset;                          // 0x3e0(0x8)
	class QuestTableAdventureOnDemandParams*                     QuestTableAdventureOnDemandParams;                 // 0x3e8(0x8)
	class TradingCompanyPopUpBackgroundCollectionDataAsset*      TradingCompanyPopUpBackgroundCollection;           // 0x3f0(0x8)
	TArray<struct AdventureOnDemandServiceCrewEntry>             DiveToTunnelEntries;                               // 0x498(0x10)
	TArray<struct AdventureOnDemandServiceCrewEntry>             LeaveTunnelEntries;                                // 0x4a8(0x10)
	TArray<struct Guid>                                          CrewsDivingToTunnel;                               // 0x4b8(0x10)
	TArray<struct Guid>                                          CrewsInArrivalTunnel;                              // 0x4c8(0x10)
	TArray<struct Guid>                                          CrewsOnCooldown;                                   // 0x4d8(0x10)
};


// Size 0x128 (Full Size[0x158] - InheritedSize[0x30]
class GameEventOnDemandArrivalTunnelWorkerBase: public AdventureOnDemandArrivalTunnelWorkerBase
{
public:
	float                                                        TriggerTunnelFailureTimeout;                       // 0x30(0x4)
	float                                                        MinRangeFromTarget;                                // 0x34(0x4)
	float                                                        MaxRangeFromTarget;                                // 0x38(0x4)
	float                                                        SubsequentCrewJoinRadiusModifier;                  // 0x3c(0x4)
	class UClass*                                                GameEventType;                                     // 0x40(0x8)
	class VoyageDescDataAsset*                                   LeaveTunnelVoyageDesc;                             // 0x128(0x8)
	float                                                        RetryRequestEventFrequency;                        // 0x144(0x4)
};


// Size 0x30 (Full Size[0x188] - InheritedSize[0x158]
class IslandBasedGameEventOnDemandArrivalTunnelWorker: public GameEventOnDemandArrivalTunnelWorkerBase
{
public:
	bool                                                         UseSpawnDistanceFromIslandForResurfaceRadius;      // 0x158(0x1)
	float                                                        ResurfaceMaxRadiusModifier;                        // 0x170(0x4)
};


