// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x170 (Full Size[0x198] - InheritedSize[0x28]
class FactionSettingsAsset: public DataAsset
{
public:
	TArray<Class PossibleFactions>                               PossibleFactions;                                  // 0x28(0x10)
	TArray<Class FactionsRewardingFriendlyFire>                  FactionsRewardingFriendlyFire;                     // 0x38(0x10)
	TArray<Struct SandsOfFateData>                               SandsOfFateRewards;                                // 0x48(0x10)
	TArray<Struct FactionStreakLevelData>                        FactionStreakLevelData;                            // 0x58(0x10)
	TArray<Struct DefenderLootLevelThreshold>                    DefenderLootLevelThresholds;                       // 0x68(0x10)
	float                                                        EnemyFactionShipEmergentRange;                     // 0x78(0x4)
	float                                                        EnemyFactionShipInvasionRange;                     // 0x7c(0x4)
	float                                                        CrewShipRangeStatesUpdateInterval;                 // 0x80(0x4)
	float                                                        UpdateWaitTimesRate;                               // 0x84(0x4)
	TArray<Struct CompanyFactionAlignment>                       AlignedFactionsAndCompanies;                       // 0x88(0x10)
	TArray<Struct CompanyFactionAlignment>                       OpposingFactionsAndCompanies;                      // 0x98(0x10)
	TArray<Struct FactionServicePopUpData>                       JoiningFactionPopUp;                               // 0xa8(0x10)
	TArray<Struct FactionServicePopUpData>                       LeavingFactionPopUp;                               // 0xb8(0x10)
	TArray<Struct FactionServicePopUpData>                       DefeatedFactionPopUp;                              // 0xc8(0x10)
	TArray<Struct FactionServicePopUpData>                       EnteredTunnelOfTheDamnedFactionPopUp;              // 0xd8(0x10)
	TArray<Struct FactionServicePopUpData>                       LeavingBattleBoundsPopUp;                          // 0xe8(0x10)
	TArray<Struct FactionServicePopUpData>                       SentToSinBinPopUp;                                 // 0xf8(0x10)
	TArray<Struct FactionServicePopUpData>                       MaxRankAchievedForSloopOrBrigantinePopUp;          // 0x108(0x10)
	TArray<Struct FactionServicePopUpData>                       MaxRankAchievedForGalleonPopUp;                    // 0x118(0x10)
	Struct FText                                                 LosingBattleHeaderText;                            // 0x128(0x38)
	Struct FText                                                 LosingBattleMessageText;                           // 0x160(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrewFactionOwnershipInterface: public Interface
{
public:
};


// Size 0x230 (Full Size[0x850] - InheritedSize[0x620]
class FactionFlipMeshComponent: public StaticMeshComponent
{
public:
	Class CurveFloat*                                            FlipCurve;                                         // 0x620(0x8)
	class                                                        FlippedFaction;                                    // 0x628(0x8)
	float                                                        FactionJoinedLerpDuration;                         // 0x630(0x4)
	char                                                         pad0x204_S4KNQ[0x204];                             // 0x634(0x204)
	Struct Guid                                                  OwningShipCrewId;                                  // 0x838(0x10)
	int                                                          OwningShipCrewStreak;                              // 0x848(0x4)
	bool                                                         ServerTargetFlipped;                               // 0x84c(0x1)
	char                                                         pad0x5_G2UQL[0x5];                                 // 0x84b(0x5)
};


// Size 0x50 (Full Size[0x1a0] - InheritedSize[0x150]
class FactionInteractionVoteComponent: public InlineVotingInteractionComponent
{
public:
	float                                                        TurnHourglassInteractionHoldTime;                  // 0x150(0x4)
	int                                                          WaitTimeSimilarityThresholdSeconds;                // 0x154(0x4)
	char                                                         pad0x50_MRW8R[0x50];                               // 0x156(0x50)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FactionLootLevelRewardsAsset: public DataAsset
{
public:
	TArray<Struct LootLevelReward>                               LootLevelRewards;                                  // 0x28(0x10)
};


// Size 0x230 (Full Size[0x5f8] - InheritedSize[0x3c8]
class FactionOutpostVoteInteractionActor: public Actor
{
public:
	char                                                         pad0x10_GMUZS[0x10];                               // 0x3c8(0x10)
	float                                                        FadeDuration;                                      // 0x3d8(0x4)
	char                                                         pad0x4_UN67G[0x4];                                 // 0x3dc(0x4)
	Struct FactionDisplayInfo                                    FactionInactiveInfo;                               // 0x3e0(0xa0)
	Struct FactionDisplayInfo                                    FactionActiveInfo;                                 // 0x480(0xa0)
	char                                                         pad0x18_OWZ5K[0x18];                               // 0x520(0x18)
	Struct FactionRequest                                        FactionActiveInfoPtr;                              // 0x538(0x20)
	char                                                         pad0xe0_W8O31[0xe0];                               // 0x556(0xe0)
};


// Size 0x170 (Full Size[0xa20] - InheritedSize[0x8b0]
class FactionParticleComponent: public ParticleSystemComponent
{
public:
	char                                                         pad0x148_T69X1[0x148];                             // 0x8b0(0x148)
	class                                                        Faction;                                           // 0x9f8(0x8)
	class                                                        JoinedFaction;                                     // 0xa00(0x8)
	Struct Guid                                                  OwningShipCrewId;                                  // 0xa08(0x10)
	int                                                          OwningShipCrewStreak;                              // 0xa18(0x4)
	bool                                                         ServerMigrationEnded;                              // 0xa1c(0x1)
	char                                                         pad0x5_3248P[0x5];                                 // 0xa1b(0x5)
};


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class FactionServiceDebugRepActor: public Actor
{
public:
	bool                                                         bDebugEnabled;                                     // 0x3c8(0x1)
	char                                                         pad0x7_S28MH[0x7];                                 // 0x3c9(0x7)
	TArray<Struct CrewFactionEntryData>                          FactionAlignedCrewData;                            // 0x3d0(0x10)
	Class FactionService*                                        FactionService;                                    // 0x3e0(0x8)
};


// Size 0x278 (Full Size[0x640] - InheritedSize[0x3c8]
class FactionService: public Actor
{
public:
	char                                                         pad0x10_UF3UO[0x10];                               // 0x3c8(0x10)
	Class FactionSettingsAsset*                                  Settings;                                          // 0x3d8(0x8)
	Class FactionLootLevelRewardsAsset*                          LootLevelRewardsAsset;                             // 0x3e0(0x8)
	char                                                         pad0xc0_0N5DI[0xc0];                               // 0x3e8(0xc0)
	TArray<Struct CompanyFactionAlignment>                       OpposingFactionsAndCompanies;                      // 0x4a8(0x10)
	TArray<Struct DefenderLootLevelThreshold>                    DefenderLootLevelThresholds;                       // 0x4b8(0x10)
	TArray<Struct CrewFactionEntryData>                          FactionAlignedCrewData;                            // 0x4c8(0x10)
	TArray<Struct CrewFactionEntry>                              FactionAlignedCrews;                               // 0x4d8(0x10)
	TArray<Struct FactionWaitTimesData>                          MatchmakingWaitTimes;                              // 0x4e8(0x10)
	char                                                         pad0x120_4WGWV[0x120];                             // 0x4f8(0x120)
	Class FactionServiceDebugRepActor*                           DebugRepActor;                                     // 0x618(0x8)
	char                                                         pad0x30_2SI4K[0x30];                               // 0x61e(0x30)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FactionShipStreakDataAsset: public DataAsset
{
public:
	TArray<Struct StreakMesh>                                    StreakMeshes;                                      // 0x28(0x10)
};


// Size 0x110 (Full Size[0x1f8] - InheritedSize[0xe8]
class FactionVoteAudioComponent: public VoteAudioComponent
{
public:
	Class WwiseEvent*                                            FactionStart;                                      // 0xe8(0x8)
	Class WwiseEvent*                                            Flip;                                              // 0xf0(0x8)
	Class WwiseEvent*                                            Levelup;                                           // 0xf8(0x8)
	struct FName                                                 LevelupSwitchGroup;                                // 0x100(0x8)
	TArray<Struct FName>                                         LevelupSwitchValues;                               // 0x108(0x10)
	char                                                         pad0x100_WZYSU[0x100];                             // 0x116(0x100)
};


// Size 0xa0 (Full Size[0xd0] - InheritedSize[0x30]
class FactionVoteConsumerBase: public VoteConsumerInlineBase
{
public:
	char                                                         pad0x10_6M67G[0x10];                               // 0x30(0x10)
	Class FactionVoteValidatorBase*                              Validator;                                         // 0x40(0x8)
	char                                                         pad0x48_9WBF5[0x48];                               // 0x48(0x48)
	Class Actor*                                                 OwningActor;                                       // 0x90(0x8)
	TArray<Struct CinematicFactionEvent>                         FactionBannerData;                                 // 0x98(0x10)
	TArray<Struct CrewMemberVotes>                               Votes;                                             // 0xa8(0x10)
	char                                                         pad0x38_DJ3EA[0x38];                               // 0xb6(0x38)
};


// Size 0x268 (Full Size[0x338] - InheritedSize[0xd0]
class StartFactionVoyageVoteConsumer: public FactionVoteConsumerBase
{
public:
	Struct FText                                                 FactionVotingCastVote;                             // 0xd0(0x38)
	Struct FText                                                 FactionVotingCantVote;                             // 0x108(0x38)
	Struct FText                                                 FactionVotingRemoveVote;                           // 0x140(0x38)
	Struct FText                                                 FactionVotingCantRemoveVote;                       // 0x178(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonVoterNotOnOwnShip;      // 0x1b0(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonIsOpposingEmissary;     // 0x1e8(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonIsOnFactionBlockedTale; // 0x220(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonIsInInvalidWorldRegion; // 0x258(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonIsNotOnNormalPlayMode;  // 0x290(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonShroudbreakerIsActive;  // 0x2c8(0x38)
	Struct FText                                                 FactionVotingSwitchVote;                           // 0x300(0x38)
};


// Size 0x230 (Full Size[0x300] - InheritedSize[0xd0]
class StopFactionVoyageVoteConsumer: public FactionVoteConsumerBase
{
public:
	Struct FText                                                 FactionVotingCastVote;                             // 0xd0(0x38)
	Struct FText                                                 FactionVotingCantVote;                             // 0x108(0x38)
	Struct FText                                                 FactionVotingRemoveVote;                           // 0x140(0x38)
	Struct FText                                                 FactionVotingCantRemoveVote;                       // 0x178(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonGoToOutpost;            // 0x1b0(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonActiveForDifferentCompany; // 0x1e8(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonEnemyShipNearby;        // 0x220(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonShipNotInHarbour;       // 0x258(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonCrewInBattle;           // 0x290(0x38)
	Struct FText                                                 FactionVotingCantVoteReasonLeaveFactionCooldownIsActive; // 0x2c8(0x38)
};


// Size 0xf8 (Full Size[0x4c0] - InheritedSize[0x3c8]
class FactionVoteInteractionActor: public Actor
{
public:
	char                                                         pad0x10_QK9SZ[0x10];                               // 0x3c8(0x10)
	float                                                        FadeDuration;                                      // 0x3d8(0x4)
	char                                                         pad0x4_46W6K[0x4];                                 // 0x3dc(0x4)
	TArray<Struct FactionDisplayInfo>                            NoFactionInfos;                                    // 0x3e0(0x10)
	TArray<Struct FactionDisplayInfo>                            FactionInfos;                                      // 0x3f0(0x10)
	TArray<Struct FactionRequest>                                NoFactionInfoPtrs;                                 // 0x400(0x10)
	TArray<Struct FactionRequest>                                FactionInfoPtrs;                                   // 0x410(0x10)
	char                                                         pad0xc0_UV1XE[0xc0];                               // 0x41e(0xc0)
};


// Size 0xc0 (Full Size[0xf0] - InheritedSize[0x30]
class FactionVoteValidatorBase: public VoteValidatorInlineBase
{
public:
	TArray<Class TargetCompanies>                                TargetCompanies;                                   // 0x30(0x10)
	float                                                        EdgeOfWorldWarningWeightForFactionLock;            // 0x40(0x4)
	char                                                         pad0x8c_KB83W[0x8c];                               // 0x44(0x8c)
	Class FactionVoteConsumerBase*                               Consumer;                                          // 0xd0(0x8)
	int                                                          CurrentCompany;                                    // 0xd8(0x4)
	float                                                        FlipTime;                                          // 0xdc(0x4)
	char                                                         pad0x8_1K4H3[0x8];                                 // 0xe0(0x8)
	Class Actor*                                                 OwningActor;                                       // 0xe8(0x8)
};


// Size 0x0 (Full Size[0xf0] - InheritedSize[0xf0]
class StartFactionVoyageVoteValidator: public FactionVoteValidatorBase
{
public:
};


// Size 0x0 (Full Size[0xf0] - InheritedSize[0xf0]
class StopFactionVoyageVoteValidator: public FactionVoteValidatorBase
{
public:
};


// Size 0x20 (Full Size[0x50] - InheritedSize[0x30]
class IsInFactionStatCondition: public TargetedStatCondition
{
public:
	bool                                                         CheckOwnerFaction;                                 // 0x30(0x1)
	bool                                                         RequiresOwnerMaxStreakLevel;                       // 0x31(0x1)
	char                                                         pad0x6_3S3WW[0x6];                                 // 0x32(0x6)
	class                                                        RequiredOwnerFaction;                              // 0x38(0x8)
	bool                                                         CheckTargetFaction;                                // 0x40(0x1)
	bool                                                         RequiresTargetMaxStreakLevel;                      // 0x41(0x1)
	char                                                         pad0x6_MR06C[0x6];                                 // 0x42(0x6)
	class                                                        RequiredTargetFaction;                             // 0x48(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class IsWearingCursePrerequisite: public InteractionPrerequisiteBase
{
public:
	bool                                                         AnyCurse;                                          // 0x80(0x1)
	bool                                                         SkeletonCurse;                                     // 0x81(0x1)
	bool                                                         GhostCurse;                                        // 0x82(0x1)
	char                                                         pad0x7_SWXZD[0x7];                                 // 0x81(0x7)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class StreakMaterialDataAsset: public DataAsset
{
public:
	TArray<Struct StreakMaterialValue>                           MaterialValues;                                    // 0x28(0x10)
	TArray<Struct StreakCompanyMaterials>                        StreakMaterials;                                   // 0x38(0x10)
};


// Size 0x88 (Full Size[0x150] - InheritedSize[0xc8]
class ShipFactionCustomisation: public ActorComponent
{
public:
	Class StreakMaterialDataAsset*                               StreakMaterialData;                                // 0xc8(0x8)
	Class FactionShipStreakDataAsset*                            ShipStreakData;                                    // 0xd0(0x8)
	TArray<class ActorComponent*>                                CachedStaticMeshComponents;                        // 0xd8(0x10)
	TArray<Struct StreakDynamicMaterials>                        CachedDynamicMaterials;                            // 0xe8(0x10)
	char                                                         pad0x48_HUK8Q[0x48];                               // 0xf8(0x48)
	Struct FactionStreakData                                     FactionStreakData;                                 // 0x140(0x10)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class ShipSunkTrackingComponent: public ActorComponent
{
public:
	float                                                        CrewRange;                                         // 0xc8(0x4)
	char                                                         pad0x1c_QU0UT[0x1c];                               // 0xca(0x1c)
};


}