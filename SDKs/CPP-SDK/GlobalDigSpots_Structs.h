#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x30
struct GlobalDigSpotDefinition
{
public:
	struct StoryFlag                                             Story;                                             // 0x0(0x8)
	class VoyageDescDataAsset*                                   VoyageDesc;                                        // 0x8(0x8)
	struct StringAssetReference                                  ActorWithNamedPointComponent;                      // 0x10(0x10)
	struct FName                                                 NamedPoint;                                        // 0x20(0x8)
	class TaleQuestWeightedItemDescSpawnDataAsset*               Rewards;                                           // 0x28(0x8)
};


// Size 0x30
struct GlobalDigSpotStatusUpdateTelemetryEvent
{
public:
	struct FString                                               DigSpotEventId;                                    // 0x0(0x10)
	struct Guid                                                  VoyageID;                                          // 0x10(0x10)
	struct FString                                               DigSpotStatus;                                     // 0x20(0x10)
};


// Size 0x20
struct GlobalDigSpotPopupEvent
{
public:
	class PopUpMessageDesc*                                      PopUpDesc;                                         // 0x18(0x8)
};


