// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct AdventureOnDemandVoyageDiscoveryPageMysteryProposal
{
public:
	struct FName                                                 MysteryName;                                       // 0x0(0x8)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x8(0x10)
	class UClass*                                                MysteryProposalTemplate;                           // 0x18(0x8)
	bool                                                         SelectTallTales;                                   // 0x20(0x1)
	char                                                         pad0x7_LC9MP[0x7];                                 // 0x21(0x7)
};


// Size 0x70
struct AdventureOnDemandTallTaleProposalGroup
{
public:
	struct StringAssetReference                                  BackgroundImageUrl;                                // 0x0(0x10)
	struct StringAssetReference                                  SmallBackgroundImageUrl;                           // 0x10(0x10)
	TArray<struct QuestTableTallTaleReward>                      Rewards;                                           // 0x20(0x10)
	TArray<struct FText>                                         LockedDescriptions;                                // 0x30(0x10)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x40(0x10)
	struct PlayerStat                                            StatForNewTag;                                     // 0x50(0x4)
	byte                                                         SailToQuestAvailability;                           // 0x54(0x1)
	byte                                                         DiveToQuestAvailability;                           // 0x55(0x1)
	char                                                         pad0x2_OVFEL[0x2];                                 // 0x56(0x2)
	class UClass*                                                InitialProposal;                                   // 0x58(0x8)
	TArray<struct AdventureOnDemandTallTaleCheckpoint>           Checkpoints;                                       // 0x60(0x10)
};


// Size 0x10
struct AdventureOnDemandTallTaleCheckpoint
{
public:
	TArray<struct AdventureOnDemandTallTaleCheckpointProposal>   Proposals;                                         // 0x0(0x10)
};


// Size 0x18
struct AdventureOnDemandTallTaleCheckpointProposal
{
public:
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x0(0x10)
	class UClass*                                                Proposal;                                          // 0x10(0x8)
};


// Size 0x48
struct AdventureOnDemandVoyageSelectionVoyageProposalGroup
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	class UClass*                                                CategoryId;                                        // 0x8(0x8)
	class UClass*                                                Company;                                           // 0x10(0x8)
	struct FeatureFlag                                           Feature;                                           // 0x18(0xc)
	byte                                                         CategoryType;                                      // 0x24(0x1)
	char                                                         pad0x3_YHBP4[0x3];                                 // 0x25(0x3)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x28(0x10)
	TArray<struct AdventureOnDemandVoyageSelectionVoyageProposal> Proposals;                                         // 0x38(0x10)
};


// Size 0x30
struct AdventureOnDemandVoyageSelectionVoyageProposal
{
public:
	struct FeatureFlag                                           Feature;                                           // 0x0(0xc)
	char                                                         pad0x4_AL2G9[0x4];                                 // 0xc(0x4)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x10(0x10)
	struct PlayerStat                                            StatForNewTag;                                     // 0x20(0x4)
	byte                                                         SailToQuestAvailability;                           // 0x24(0x1)
	byte                                                         DiveToQuestAvailability;                           // 0x25(0x1)
	byte                                                         VoyageType;                                        // 0x26(0x1)
	char                                                         pad0x1_5ZXH8[0x1];                                 // 0x27(0x1)
	class UClass*                                                Proposal;                                          // 0x28(0x8)
};


// Size 0x10
struct VoyageHintPopupDescEntry
{
public:
	byte                                                         QuestType;                                         // 0x0(0x1)
	char                                                         pad0x7_PL3SX[0x7];                                 // 0x1(0x7)
	class PopUpMessageDesc*                                      HintPopUpMessageDesc;                              // 0x8(0x8)
};


// Size 0x18
struct ExtraSpawnDistanceFromIsland
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	TArray<struct ExtraSpawnDistanceByIslandType>                DistanceByIslandType;                              // 0x8(0x10)
};


// Size 0x8
struct ExtraSpawnDistanceByIslandType
{
public:
	byte                                                         IslandType;                                        // 0x0(0x1)
	char                                                         pad0x3_TR96B[0x3];                                 // 0x1(0x3)
	float                                                        ExtraSpawnDistance;                                // 0x4(0x4)
};


// Size 0x30
struct OnDemandQuestResumeConditionMetReasonQuestVariable
{
public:
	char                                                         pad0x30_GJTO0[0x30];                               // 0x0(0x30)
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


// Size 0x10
struct GameEventOnDemandCompanyStatData
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	struct PlayerStat                                            Stat;                                              // 0x8(0x4)
	char                                                         pad0x4_U1OY6[0x4];                                 // 0xc(0x4)
};


// Size 0x18
struct QuestTableCompanyTutorialPrerequisites
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<class InteractionPrerequisiteBase*>                   Prerequisites;                                     // 0x8(0x10)
};


// Size 0x148
struct QuestTableBakedInfoDiscoverTile
{
public:
	char                                                         pad0x138_J45FZ[0x138];                             // 0x0(0x138)
	struct FString                                               InfoTipIdClientConfigName;                         // 0x138(0x10)
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
	char                                                         pad0x7_0CUJF[0x7];                                 // 0xf1(0x7)
	struct StringAssetReference                                  BackgroundImageUrl;                                // 0xf8(0x10)
	struct StringAssetReference                                  PreviewTileIconImageUrl;                           // 0x108(0x10)
	struct StringAssetReference                                  BladeFrameImageURL;                                // 0x118(0x10)
	struct StringAssetReference                                  WatermarkImageUrl;                                 // 0x128(0x10)
};


// Size 0x140
struct QuestTableBakedQuestDiscoverTile
{
public:
	char                                                         pad0x138_X3CKH[0x138];                             // 0x0(0x138)
	class UClass*                                                Proposal;                                          // 0x138(0x8)
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


// Size 0x10
struct AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x1
struct AdventureOnDemandVoyageSurfaceTaleFinished
{
public:
	char                                                         pad0x1_NTZ7O[0x1];                                 // 0x0(0x1)
};


// Size 0x38
struct ContendedResourceGameEventOnDemandArrivalTunnelWorkerFailedTelemetryEvent
{
public:
	struct Guid                                                  TunnelInstanceId;                                  // 0x0(0x10)
	struct FString                                               GameEventType;                                     // 0x10(0x10)
	TArray<Str InvalidReasons>                                   InvalidReasons;                                    // 0x20(0x10)
	int                                                          NumLockedEvents;                                   // 0x30(0x4)
	int                                                          NumAvailableEvents;                                // 0x34(0x4)
};


// Size 0x18
struct GameEventOnDemandArrivalTunnelWorkerCompletedTelemetryEvent
{
public:
	struct Guid                                                  TunnelInstanceId;                                  // 0x0(0x10)
	double                                                       ArrivalTunnelWorkerLifetimeSeconds;                // 0x10(0x8)
};


// Size 0x10
struct SeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent
{
public:
	struct FString                                               GameEventType;                                     // 0x0(0x10)
};


// Size 0x18
struct SeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent
{
public:
	struct FString                                               GameEventType;                                     // 0x0(0x10)
	struct Vector2D                                              Result;                                            // 0x10(0x8)
};


}