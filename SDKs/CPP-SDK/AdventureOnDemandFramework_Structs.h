#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct TradingCompanyPopUpBackgroundEntry
{
public:
	class UClass*                                                TradingCompany;                                    // 0x0(0x8)
	TArray<struct StringAssetReference>                          BackgroundImages;                                  // 0x8(0x10)
};


// Size 0x28
struct AdventureOnDemandVoyageDiscoveryPageMysteryProposal
{
public:
	struct FName                                                 MysteryName;                                       // 0x0(0x8)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x8(0x10)
	class UClass*                                                MysteryProposalTemplate;                           // 0x18(0x8)
	bool                                                         SelectTallTales;                                   // 0x20(0x1)
};


// Size 0x18
struct AdventureOnDemandTallTaleCheckpointProposal
{
public:
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x0(0x10)
	class UClass*                                                Proposal;                                          // 0x10(0x8)
};


// Size 0x30
struct AdventureOnDemandVoyageSelectionVoyageProposal
{
public:
	struct FeatureFlag                                           Feature;                                           // 0x0(0xc)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x10(0x10)
	struct PlayerStat                                            StatForNewTag;                                     // 0x20(0x4)
	char                                                         SailToQuestAvailability;                           // 0x24(0x1)
	char                                                         DiveToQuestAvailability;                           // 0x25(0x1)
	char                                                         VoyageType;                                        // 0x26(0x1)
	class UClass*                                                Proposal;                                          // 0x28(0x8)
};


// Size 0x8
struct ExtraSpawnDistanceByIslandType
{
public:
	char                                                         IslandType;                                        // 0x0(0x1)
	float                                                        ExtraSpawnDistance;                                // 0x4(0x4)
};


// Size 0x138
struct QuestTableBakedDiscoverTile
{
public:
	struct Guid                                                  TileId;                                            // 0x0(0x10)
	struct FText                                                 CondensedTitle;                                    // 0x10(0x38)
	struct FText                                                 Title;                                             // 0x48(0x38)
	struct FText                                                 Subtitle;                                          // 0x80(0x38)
	struct FText                                                 Description;                                       // 0xb8(0x38)
	bool                                                         HighSeasOnly;                                      // 0xf0(0x1)
	struct StringAssetReference                                  BackgroundImageUrl;                                // 0xf8(0x10)
	struct StringAssetReference                                  PreviewTileIconImageUrl;                           // 0x108(0x10)
	struct StringAssetReference                                  BladeFrameImageURL;                                // 0x118(0x10)
	struct StringAssetReference                                  WatermarkImageUrl;                                 // 0x128(0x10)
};


// Size 0x10
struct GameEventOnDemandCompanyStatData
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	struct PlayerStat                                            Stat;                                              // 0x8(0x4)
};


// Size 0x10
struct AdventureOnDemandCrewReachedSurfaceEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x10
struct AdventureOnDemandCrewReadyToResurfaceEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x140
struct QuestTableBakedQuestDiscoverTile
{
public:
	class UClass*                                                Proposal;                                          // 0x138(0x8)
};


// Size 0x38
struct ContendedResourceGameEventOnDemandArrivalTunnelWorkerFailedTelemetryEvent
{
public:
	struct Guid                                                  TunnelInstanceId;                                  // 0x0(0x10)
	struct FString                                               GameEventType;                                     // 0x10(0x10)
	TArray<String>                                               InvalidReasons;                                    // 0x20(0x10)
	int                                                          NumLockedEvents;                                   // 0x30(0x4)
	int                                                          NumAvailableEvents;                                // 0x34(0x4)
};


// Size 0x10
struct AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x18
struct QuestTableCompanyTutorialPrerequisites
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x8(0x10)
};


// Size 0x18
struct GameEventOnDemandArrivalTunnelWorkerCompletedTelemetryEvent
{
public:
	struct Guid                                                  TunnelInstanceId;                                  // 0x0(0x10)
	double                                                       ArrivalTunnelWorkerLifetimeSeconds;                // 0x10(0x8)
};


// Size 0xf0
struct GameEventOnDemandBannerTextData
{
public:
	TArray<class Class*>                                         GameEventTypes;                                    // 0x0(0x10)
	struct FText                                                 OnShipSunkBannerText;                              // 0x10(0x38)
	struct FText                                                 OnVoyageCancelledBannerText;                       // 0x48(0x38)
	struct FText                                                 OnGameEventCompletedBannerHeaderText;              // 0x80(0x38)
	struct FText                                                 OnGameEventCompletedBannerMessageText;             // 0xb8(0x38)
};


// Size 0x148
struct QuestTableBakedInfoDiscoverTile
{
public:
	struct FString                                               InfoTipIdClientConfigName;                         // 0x138(0x10)
};


// Size 0x10
struct VoyageHintPopupDescEntry
{
public:
	char                                                         QuestType;                                         // 0x0(0x1)
	class PopUpMessageDesc*                                      HintPopUpMessageDesc;                              // 0x8(0x8)
};


// Size 0x18
struct ExtraSpawnDistanceFromIsland
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	TArray<struct ExtraSpawnDistanceByIslandType>                DistanceByIslandType;                              // 0x8(0x10)
};


// Size 0x48
struct AdventureOnDemandVoyageSelectionVoyageProposalGroup
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	class UClass*                                                CategoryId;                                        // 0x8(0x8)
	class UClass*                                                Company;                                           // 0x10(0x8)
	struct FeatureFlag                                           Feature;                                           // 0x18(0xc)
	char                                                         CategoryType;                                      // 0x24(0x1)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x28(0x10)
	TArray<struct AdventureOnDemandVoyageSelectionVoyageProposal> Proposals;                                         // 0x38(0x10)
};


// Size 0x10
struct AdventureOnDemandTallTaleCheckpoint
{
public:
	TArray<struct AdventureOnDemandTallTaleCheckpointProposal>   Proposals;                                         // 0x0(0x10)
};


// Size 0x70
struct AdventureOnDemandTallTaleProposalGroup
{
public:
	struct StringAssetReference                                  BackgroundImageUrl;                                // 0x0(0x10)
	struct StringAssetReference                                  SmallBackgroundImageUrl;                           // 0x10(0x10)
	TArray<struct QuestTableTallTaleReward>                      Rewards;                                           // 0x20(0x10)
	TArray<struct Text>                                          LockedDescriptions;                                // 0x30(0x10)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x40(0x10)
	struct PlayerStat                                            StatForNewTag;                                     // 0x50(0x4)
	char                                                         SailToQuestAvailability;                           // 0x54(0x1)
	char                                                         DiveToQuestAvailability;                           // 0x55(0x1)
	class UClass*                                                InitialProposal;                                   // 0x58(0x8)
	TArray<struct AdventureOnDemandTallTaleCheckpoint>           Checkpoints;                                       // 0x60(0x10)
};


