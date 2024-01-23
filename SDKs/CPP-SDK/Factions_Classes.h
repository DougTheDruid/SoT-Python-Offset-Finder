// Generated by dougthedruid on Discord
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
	TArray<class Class*>                                         PossibleFactions;                                  // 0x28(0x10)
	TArray<class Class*>                                         FactionsRewardingFriendlyFire;                     // 0x38(0x10)
	TArray<struct SandsOfFateData>                               SandsOfFateRewards;                                // 0x48(0x10)
	TArray<struct FactionStreakLevelData>                        FactionStreakLevelData;                            // 0x58(0x10)
	TArray<struct DefenderLootLevelThreshold>                    DefenderLootLevelThresholds;                       // 0x68(0x10)
	float                                                        EnemyFactionShipEmergentRange;                     // 0x78(0x4)
	float                                                        EnemyFactionShipInvasionRange;                     // 0x7c(0x4)
	float                                                        CrewShipRangeStatesUpdateInterval;                 // 0x80(0x4)
	float                                                        UpdateWaitTimesRate;                               // 0x84(0x4)
	TArray<struct CompanyFactionAlignment>                       AlignedFactionsAndCompanies;                       // 0x88(0x10)
	TArray<struct CompanyFactionAlignment>                       OpposingFactionsAndCompanies;                      // 0x98(0x10)
	TArray<struct FactionServicePopUpData>                       JoiningFactionPopUp;                               // 0xa8(0x10)
	TArray<struct FactionServicePopUpData>                       LeavingFactionPopUp;                               // 0xb8(0x10)
	TArray<struct FactionServicePopUpData>                       DefeatedFactionPopUp;                              // 0xc8(0x10)
	TArray<struct FactionServicePopUpData>                       EnteredTunnelOfTheDamnedFactionPopUp;              // 0xd8(0x10)
	TArray<struct FactionServicePopUpData>                       LeavingBattleBoundsPopUp;                          // 0xe8(0x10)
	TArray<struct FactionServicePopUpData>                       SentToSinBinPopUp;                                 // 0xf8(0x10)
	TArray<struct FactionServicePopUpData>                       MaxRankAchievedForSloopOrBrigantinePopUp;          // 0x108(0x10)
	TArray<struct FactionServicePopUpData>                       MaxRankAchievedForGalleonPopUp;                    // 0x118(0x10)
	struct FText                                                 LosingBattleHeaderText;                            // 0x128(0x38)
	struct FText                                                 LosingBattleMessageText;                           // 0x160(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrewFactionOwnershipInterface: public Interface
{
public:
};


// Size 0x270 (Full Size[0x890] - InheritedSize[0x620]
class FactionFlipMeshComponent: public StaticMeshComponent
{
public:
	class CurveFloat*                                            FlipCurve;                                         // 0x620(0x8)
	class UClass*                                                FlippedFaction;                                    // 0x628(0x8)
	float                                                        FactionJoinedLerpDuration;                         // 0x630(0x4)
	char                                                         pad0x244_KYC6H[0x244];                             // 0x634(0x244)
	struct Guid                                                  OwningShipCrewId;                                  // 0x878(0x10)
	int                                                          OwningShipCrewStreak;                              // 0x888(0x4)
	bool                                                         ServerTargetFlipped;                               // 0x88c(0x1)
	char                                                         pad0x3_P77YE[0x3];                                 // 0x88d(0x3)
};


// Size 0x8 (Full Size[0x168] - InheritedSize[0x160]
class FactionInteractionVoteComponent: public InlineVotingInteractionComponent
{
public:
	float                                                        TurnHourglassInteractionHoldTime;                  // 0x160(0x4)
	int                                                          WaitTimeSimilarityThresholdSeconds;                // 0x164(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FactionIntervoteServiceInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x410] - InheritedSize[0x3c8]
class FactionIntervoteService: public Actor
{
public:
	char                                                         pad0x8_W8ARK[0x8];                                 // 0x3c8(0x8)
	TArray<class FactionVoteConsumerBase*>                       FactionVoteConsumers;                              // 0x3d0(0x10)
	char                                                         pad0x30_NMEYS[0x30];                               // 0x3e0(0x30)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FactionLootLevelRewardsAsset: public DataAsset
{
public:
	TArray<struct LootLevelReward>                               LootLevelRewards;                                  // 0x28(0x10)
};


// Size 0x230 (Full Size[0x5f8] - InheritedSize[0x3c8]
class FactionOutpostVoteInteractionActor: public Actor
{
public:
	char                                                         pad0x10_LRPPI[0x10];                               // 0x3c8(0x10)
	float                                                        FadeDuration;                                      // 0x3d8(0x4)
	char                                                         pad0x4_F2GZ8[0x4];                                 // 0x3dc(0x4)
	struct FactionDisplayInfo                                    FactionInactiveInfo;                               // 0x3e0(0xa0)
	struct FactionDisplayInfo                                    FactionActiveInfo;                                 // 0x480(0xa0)
	char                                                         pad0x18_KT8YC[0x18];                               // 0x520(0x18)
	struct FactionRequest                                        FactionActiveInfoPtr;                              // 0x538(0x20)
	char                                                         pad0xa0_JMQZJ[0xa0];                               // 0x558(0xa0)
};


// Size 0x1a0 (Full Size[0xa50] - InheritedSize[0x8b0]
class FactionParticleComponent: public ParticleSystemComponent
{
public:
	char                                                         pad0x178_6BAF1[0x178];                             // 0x8b0(0x178)
	class UClass*                                                Faction;                                           // 0xa28(0x8)
	class UClass*                                                JoinedFaction;                                     // 0xa30(0x8)
	struct Guid                                                  OwningShipCrewId;                                  // 0xa38(0x10)
	int                                                          OwningShipCrewStreak;                              // 0xa48(0x4)
	bool                                                         ServerMigrationEnded;                              // 0xa4c(0x1)
	char                                                         pad0x3_L9VFB[0x3];                                 // 0xa4d(0x3)
};


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class FactionServiceDebugRepActor: public Actor
{
public:
	bool                                                         bDebugEnabled;                                     // 0x3c8(0x1)
	char                                                         pad0x7_ZTKZH[0x7];                                 // 0x3c9(0x7)
	TArray<struct CrewFactionEntryData>                          FactionAlignedCrewData;                            // 0x3d0(0x10)
	class FactionService*                                        FactionService;                                    // 0x3e0(0x8)
};


// Size 0x290 (Full Size[0x658] - InheritedSize[0x3c8]
class FactionService: public Actor
{
public:
	char                                                         pad0x10_FWYFT[0x10];                               // 0x3c8(0x10)
	class FactionSettingsAsset*                                  Settings;                                          // 0x3d8(0x8)
	class FactionLootLevelRewardsAsset*                          LootLevelRewardsAsset;                             // 0x3e0(0x8)
	char                                                         pad0xc0_N8BYP[0xc0];                               // 0x3e8(0xc0)
	TArray<struct CompanyFactionAlignment>                       OpposingFactionsAndCompanies;                      // 0x4a8(0x10)
	TArray<struct DefenderLootLevelThreshold>                    DefenderLootLevelThresholds;                       // 0x4b8(0x10)
	TArray<struct CrewFactionEntryData>                          FactionAlignedCrewData;                            // 0x4c8(0x10)
	TArray<struct CrewFactionEntry>                              FactionAlignedCrews;                               // 0x4d8(0x10)
	TArray<struct FactionWaitTimesData>                          MatchmakingWaitTimes;                              // 0x4e8(0x10)
	char                                                         pad0x138_JLY12[0x138];                             // 0x4f8(0x138)
	class FactionServiceDebugRepActor*                           DebugRepActor;                                     // 0x630(0x8)
	char                                                         pad0x20_9UF56[0x20];                               // 0x638(0x20)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FactionShipStreakDataAsset: public DataAsset
{
public:
	TArray<struct StreakMesh>                                    StreakMeshes;                                      // 0x28(0x10)
};


// Size 0x130 (Full Size[0x218] - InheritedSize[0xe8]
class FactionVoteAudioComponent: public VoteAudioComponent
{
public:
	class WwiseEvent*                                            FactionStart;                                      // 0xe8(0x8)
	class WwiseEvent*                                            Flip;                                              // 0xf0(0x8)
	class WwiseEvent*                                            Levelup;                                           // 0xf8(0x8)
	struct FName                                                 LevelupSwitchGroup;                                // 0x100(0x8)
	TArray<struct FName>                                         LevelupSwitchValues;                               // 0x108(0x10)
	char                                                         pad0x100_TB8MG[0x100];                             // 0x118(0x100)
};


// Size 0xa0 (Full Size[0xd0] - InheritedSize[0x30]
class FactionVoteConsumerBase: public VoteConsumerInlineBase
{
public:
	char                                                         pad0x10_L4UC4[0x10];                               // 0x30(0x10)
	class FactionVoteValidatorBase*                              Validator;                                         // 0x40(0x8)
	char                                                         pad0x48_NNQHA[0x48];                               // 0x48(0x48)
	class Actor*                                                 OwningActor;                                       // 0x90(0x8)
	TArray<struct CinematicFactionEvent>                         FactionBannerData;                                 // 0x98(0x10)
	TArray<struct CrewMemberVotes>                               Votes;                                             // 0xa8(0x10)
	char                                                         pad0x18_M6WP6[0x18];                               // 0xb8(0x18)
};


// Size 0x360 (Full Size[0x430] - InheritedSize[0xd0]
class StartFactionVoyageVoteConsumer: public FactionVoteConsumerBase
{
public:
	struct FText                                                 FactionVotingCastVote;                             // 0xd0(0x38)
	struct FText                                                 FactionVotingCantVote;                             // 0x108(0x38)
	struct FText                                                 FactionVotingRemoveVote;                           // 0x140(0x38)
	struct FText                                                 FactionVotingCantRemoveVote;                       // 0x178(0x38)
	struct FText                                                 FactionVotingCantVoteReasonVoterNotOnOwnShip;      // 0x1b0(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsOpposingEmissary;     // 0x1e8(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsOnFactionBlockedTale; // 0x220(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsInInvalidWorldRegion; // 0x258(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsNotOnNormalPlayMode;  // 0x290(0x38)
	struct FText                                                 FactionVotingCantVoteReasonShroudbreakerIsActive;  // 0x2c8(0x38)
	struct FText                                                 FactionVotingCantVoteReasonSaferSeas;              // 0x300(0x38)
	struct FText                                                 FactionVotingSwitchVote;                           // 0x338(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsDivingToAdventure;    // 0x370(0x38)
	struct FText                                                 FactionVotingCantVoteReasonIsInTunnelOfTheDamned;  // 0x3a8(0x38)
	struct FText                                                 FactionVotingCantVoteReasonHasProposedOnDemandVoyage; // 0x3e0(0x38)
	char                                                         pad0x18_KDK1T[0x18];                               // 0x418(0x18)
};


// Size 0x230 (Full Size[0x300] - InheritedSize[0xd0]
class StopFactionVoyageVoteConsumer: public FactionVoteConsumerBase
{
public:
	struct FText                                                 FactionVotingCastVote;                             // 0xd0(0x38)
	struct FText                                                 FactionVotingCantVote;                             // 0x108(0x38)
	struct FText                                                 FactionVotingRemoveVote;                           // 0x140(0x38)
	struct FText                                                 FactionVotingCantRemoveVote;                       // 0x178(0x38)
	struct FText                                                 FactionVotingCantVoteReasonGoToOutpost;            // 0x1b0(0x38)
	struct FText                                                 FactionVotingCantVoteReasonActiveForDifferentCompany; // 0x1e8(0x38)
	struct FText                                                 FactionVotingCantVoteReasonEnemyShipNearby;        // 0x220(0x38)
	struct FText                                                 FactionVotingCantVoteReasonShipNotInHarbour;       // 0x258(0x38)
	struct FText                                                 FactionVotingCantVoteReasonCrewInBattle;           // 0x290(0x38)
	struct FText                                                 FactionVotingCantVoteReasonLeaveFactionCooldownIsActive; // 0x2c8(0x38)
};


// Size 0x118 (Full Size[0x4e0] - InheritedSize[0x3c8]
class FactionVoteInteractionActor: public Actor
{
public:
	char                                                         pad0x10_KB46C[0x10];                               // 0x3c8(0x10)
	float                                                        FadeDuration;                                      // 0x3d8(0x4)
	char                                                         pad0x4_QJMU3[0x4];                                 // 0x3dc(0x4)
	TArray<struct FactionDisplayInfo>                            NoFactionInfos;                                    // 0x3e0(0x10)
	TArray<struct FactionDisplayInfo>                            FactionInfos;                                      // 0x3f0(0x10)
	TArray<struct FactionDisplayInfo>                            SaferSeasDisplayInfos;                             // 0x400(0x10)
	TArray<struct FactionRequest>                                NoFactionInfoPtrs;                                 // 0x410(0x10)
	TArray<struct FactionRequest>                                FactionInfoPtrs;                                   // 0x420(0x10)
	TArray<struct FactionRequest>                                SaferSeasDisplayInfoPtrs;                          // 0x430(0x10)
	char                                                         pad0xa0_T0FFD[0xa0];                               // 0x440(0xa0)
};


// Size 0xd8 (Full Size[0x108] - InheritedSize[0x30]
class FactionVoteValidatorBase: public VoteValidatorInlineBase
{
public:
	TArray<class Class*>                                         TargetCompanies;                                   // 0x30(0x10)
	float                                                        EdgeOfWorldWarningWeightForFactionLock;            // 0x40(0x4)
	char                                                         pad0xa4_3N5NA[0xa4];                               // 0x44(0xa4)
	class FactionVoteConsumerBase*                               Consumer;                                          // 0xe8(0x8)
	int                                                          CurrentCompany;                                    // 0xf0(0x4)
	float                                                        FlipTime;                                          // 0xf4(0x4)
	char                                                         pad0x8_28229[0x8];                                 // 0xf8(0x8)
	class Actor*                                                 OwningActor;                                       // 0x100(0x8)
};


// Size 0x0 (Full Size[0x108] - InheritedSize[0x108]
class StartFactionVoyageVoteValidator: public FactionVoteValidatorBase
{
public:
};


// Size 0x0 (Full Size[0x108] - InheritedSize[0x108]
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
	char                                                         pad0x6_DCBLZ[0x6];                                 // 0x32(0x6)
	class UClass*                                                RequiredOwnerFaction;                              // 0x38(0x8)
	bool                                                         CheckTargetFaction;                                // 0x40(0x1)
	bool                                                         RequiresTargetMaxStreakLevel;                      // 0x41(0x1)
	char                                                         pad0x6_0TW0K[0x6];                                 // 0x42(0x6)
	class UClass*                                                RequiredTargetFaction;                             // 0x48(0x8)
};


// Size 0x8 (Full Size[0x98] - InheritedSize[0x90]
class IsWearingCursePrerequisite: public InteractionPrerequisiteBase
{
public:
	bool                                                         AnyCurse;                                          // 0x90(0x1)
	bool                                                         SkeletonCurse;                                     // 0x91(0x1)
	bool                                                         GhostCurse;                                        // 0x92(0x1)
	char                                                         pad0x5_9CWSQ[0x5];                                 // 0x93(0x5)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class StreakMaterialDataAsset: public DataAsset
{
public:
	TArray<struct StreakMaterialValue>                           MaterialValues;                                    // 0x28(0x10)
	TArray<struct StreakCompanyMaterials>                        StreakMaterials;                                   // 0x38(0x10)
};


// Size 0x88 (Full Size[0x150] - InheritedSize[0xc8]
class ShipFactionCustomisation: public ActorComponent
{
public:
	class StreakMaterialDataAsset*                               StreakMaterialData;                                // 0xc8(0x8)
	class FactionShipStreakDataAsset*                            ShipStreakData;                                    // 0xd0(0x8)
	TArray<class ActorComponent*>                                CachedStaticMeshComponents;                        // 0xd8(0x10)
	TArray<struct StreakDynamicMaterials>                        CachedDynamicMaterials;                            // 0xe8(0x10)
	char                                                         pad0x48_TFJID[0x48];                               // 0xf8(0x48)
	struct FactionStreakData                                     FactionStreakData;                                 // 0x140(0x10)
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class ShipSunkTrackingComponent: public ActorComponent
{
public:
	float                                                        CrewRange;                                         // 0xc8(0x4)
	char                                                         pad0x2c_LTTJH[0x2c];                               // 0xcc(0x2c)
};


}