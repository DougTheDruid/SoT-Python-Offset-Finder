// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class EmissaryActionRewardBoostComponent: public ActorComponent
{
public:
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class EmissaryActiveTableVisualiserComponent: public ActorComponent
{
public:
	class                                                        TargetCompany;                                     // 0xc8(0x8)
	TArray<Struct MaterialVisualisation>                         MaterialChanges;                                   // 0xd0(0x10)
	char                                                         pad0x10_0G25C[0x10];                               // 0xe0(0x10)
	TArray<Struct LightVisualisation>                            LightChanges;                                      // 0xf0(0x10)
	char                                                         pad0x10_ME79B[0x10];                               // 0x100(0x10)
	TArray<Struct ParticleVisualisation>                         ParticleChanges;                                   // 0x110(0x10)
	char                                                         pad0x58_PLFGF[0x58];                               // 0x11e(0x58)
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class EmissaryEntitlementCategory: public ItemCategory
{
public:
};


// Size 0x0 (Full Size[0xc8] - InheritedSize[0xc8]
class EmissaryEntitlementDesc: public EntitlementDesc
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmissaryFlotsamDuplicationInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x770] - InheritedSize[0x728]
class EmissaryFlotsamItemInfo: public BootyItemInfo
{
public:
	char                                                         pad0x8_AA977[0x8];                                 // 0x728(0x8)
	Struct CompanySpecificBootyReward                            HandInOwnFlotsamReward;                            // 0x730(0x18)
	Struct CompanySpecificBootyReward                            AlternateHandInOwnFlotsamReward;                   // 0x748(0x18)
	class                                                        PermittedFlotsamPurchaseCompany;                   // 0x760(0x8)
	bool                                                         FlotsamCanBeDuplicated;                            // 0x768(0x1)
	char                                                         pad0x9_886F8[0x9];                                 // 0x767(0x9)
};


// Size 0x90 (Full Size[0x4d0] - InheritedSize[0x440]
class EmissaryFlotsamItemSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class EmissaryFlotsamTooltipCustomizerComponent: public ActorComponent
{
public:
	char                                                         pad0x10_2NHMJ[0x10];                               // 0xc8(0x10)
	bool                                                         CheckForDelivery;                                  // 0xd8(0x1)
	bool                                                         CheckForPickup;                                    // 0xd9(0x1)
	bool                                                         HonorBattleFlag;                                   // 0xda(0x1)
	char                                                         pad0x17_WVOMB[0x17];                               // 0xd9(0x17)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class EmissaryLevelSettingsAsset: public DataAsset
{
public:
	TArray<Struct EmissaryLevelEntry>                            EmissaryLevelData;                                 // 0x28(0x10)
	Struct EmissaryPointBoostMultipliers                         BoostMultiplers;                                   // 0x38(0x8)
	Struct EmissaryFlagMeshReferences                            DefaultEmissaryFlagAssetReferences;                // 0x40(0x20)
	char                                                         pad0x48_9EMA5[0x48];                               // 0x5e(0x48)
};


// Size 0x350 (Full Size[0x718] - InheritedSize[0x3c8]
class EmissaryLevelService: public Actor
{
public:
	char                                                         pad0xb8_Q6KBB[0xb8];                               // 0x3c8(0xb8)
	Class EmissaryLevelSettingsAsset*                            Settings;                                          // 0x480(0x8)
	Class EmissaryRewardSettingsAsset*                           RewardSettings;                                    // 0x488(0x8)
	char                                                         pad0x298_Z8B7J[0x298];                             // 0x48e(0x298)
};


// Size 0x98 (Full Size[0x160] - InheritedSize[0xc8]
class EmissaryMaxRankQuestProvider: public ActorComponent
{
public:
	class                                                        MaxRankQuestNotificationID;                        // 0xc8(0x8)
	byte                                                         MaxRankQuestToolTipPriority;                       // 0xd0(0x1)
	char                                                         pad0x7_0W8XW[0x7];                                 // 0xd1(0x7)
	Struct FText                                                 StartMaxRankQuestToolTipText;                      // 0xd8(0x38)
	Struct FText                                                 CannotStartMaxRankQuestToolTipText;                // 0x110(0x38)
	Struct StringAssetReference                                  QuestDesc;                                         // 0x148(0x10)
	class                                                        Company;                                           // 0x158(0x8)
};


// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class EmissaryParticipantComponent: public ActorComponent
{
public:
	char                                                         pad0x8_Q4482[0x8];                                 // 0xc8(0x8)
	bool                                                         IsAtMaxRank;                                       // 0xd0(0x1)
	char                                                         pad0x7_I9TVD[0x7];                                 // 0xd1(0x7)
	TArray<Struct MysteriousNotesCompletionEventsModelEntry>     NoteCompletionIdents;                              // 0xd8(0x10)
	char                                                         pad0x10_B7E7P[0x10];                               // 0xe8(0x10)
	int                                                          EmissaryLevel;                                     // 0xf8(0x4)
	float                                                        EmissaryLevelProgress;                             // 0xfc(0x4)
	struct FName                                                 AffiliatedCompany;                                 // 0x100(0x8)
	bool                                                         IsEmissaryMaxRankQuestBeenActivatedThisSession;    // 0x108(0x1)
	char                                                         pad0x3_PVK17[0x3];                                 // 0x109(0x3)
	struct FName                                                 VotedCompany;                                      // 0x10c(0x8)
	char                                                         pad0x14_JKJT8[0x14];                               // 0x112(0x14)
};


// Size 0x0 (Full Size[0x620] - InheritedSize[0x620]
class EmissaryRepresentationMeshComponent: public StaticMeshComponent
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EmissaryRewardCampaignSettingsAsset: public DataAsset
{
public:
	TArray<Struct EmissaryCompanyCampaignSettings>               Companies;                                         // 0x28(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class EmissaryRewardSettingsAsset: public DataAsset
{
public:
	TArray<Struct EmissaryRewardEntry>                           EmissaryRewardData;                                // 0x28(0x10)
	float                                                        PlayerKilledExpiryTime;                            // 0x38(0x4)
	char                                                         pad0x4_2J80I[0x4];                                 // 0x3c(0x4)
	Class EmissaryRewardCampaignSettingsAsset*                   CampaignSettings;                                  // 0x40(0x8)
};


// Size 0x70 (Full Size[0x350] - InheritedSize[0x2e0]
class EmissaryShipAffiliationTrackerComponent: public SceneComponent
{
public:
	class                                                        TrackedCompany;                                    // 0x2e0(0x8)
	TArray<Struct Transform>                                     EmissaryRepresentationTransforms;                  // 0x308(0x10)
	TArray<class StaticMeshComponent*>                           EmissaryRepresentationMeshes;                      // 0x318(0x10)
	class                                                        LoadedEmissaryRepresentationMesh;                  // 0x328(0x8)
	int                                                          EmissaryCount;                                     // 0x330(0x4)
	char                                                         pad0x24_TULQP[0x24];                               // 0x332(0x24)
};


// Size 0xf8 (Full Size[0x128] - InheritedSize[0x30]
class EmissaryVoyageInlineVoteConsumerBase: public VoteConsumerInlineBase
{
public:
	Class EmissaryVoyageVoteValidatorBase*                       Validator;                                         // 0x30(0x8)
	char                                                         pad0x48_KBG0U[0x48];                               // 0x38(0x48)
	Struct FText                                                 VoyageCinematicHeader;                             // 0x80(0x38)
	struct FName                                                 VoyageCinematicTag;                                // 0xb8(0x8)
	char                                                         pad0x20_GTQXP[0x20];                               // 0xc0(0x20)
	TArray<Struct CrewMemberVotes>                               Votes;                                             // 0xe0(0x10)
	Class BoxedRpcDispatcherComponent*                           RpcDispatcher;                                     // 0xf0(0x8)
	char                                                         pad0x20_DAYCU[0x20];                               // 0xf8(0x20)
	Class Actor*                                                 OwningActor;                                       // 0x118(0x8)
	char                                                         pad0x18_ET4UG[0x18];                               // 0x11e(0x18)
};


// Size 0x1d8 (Full Size[0x300] - InheritedSize[0x128]
class StartEmissaryVoyageInlineVoteConsumer: public EmissaryVoyageInlineVoteConsumerBase
{
public:
	Struct FText                                                 EmissaryVotingCastVote;                            // 0x128(0x38)
	Struct FText                                                 EmissaryVotingCantVote;                            // 0x160(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonCrewShipOutsideRange;  // 0x198(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonNoEmissaryEntitlement; // 0x1d0(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x208(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonOnOpposingFaction;     // 0x240(0x38)
	Struct FText                                                 EmissaryVotingRemoveVote;                          // 0x278(0x38)
	Struct FText                                                 EmissaryVotingCantRemoveVote;                      // 0x2b0(0x38)
	char                                                         pad0x88_4UYVF[0x88];                               // 0x2e6(0x88)
};


// Size 0x168 (Full Size[0x290] - InheritedSize[0x128]
class StopEmissaryVoyageInlineVoteConsumer: public EmissaryVoyageInlineVoteConsumerBase
{
public:
	Struct FText                                                 EmissaryVotingCastVote;                            // 0x128(0x38)
	Struct FText                                                 EmissaryVotingCantVote;                            // 0x160(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonCrewShipOutsideRange;  // 0x198(0x38)
	Struct FText                                                 EmissaryVotingCantVoteReasonActiveForDifferentCompany; // 0x1d0(0x38)
	Struct FText                                                 EmissaryVotingRemoveVote;                          // 0x208(0x38)
	Struct FText                                                 EmissaryVotingCantRemoveVote;                      // 0x240(0x38)
	char                                                         pad0x88_P0786[0x88];                               // 0x276(0x88)
};


// Size 0xa0 (Full Size[0xd0] - InheritedSize[0x30]
class EmissaryVoyageVoteValidatorBase: public VoteValidatorInlineBase
{
public:
	byte                                                         ValidatorType;                                     // 0x30(0x1)
	char                                                         pad0x7_6M5LA[0x7];                                 // 0x31(0x7)
	class                                                        RequiredEntitlement;                               // 0x38(0x8)
	bool                                                         IsValidatorTypeEntitlement;                        // 0x40(0x1)
	char                                                         pad0x7f_2MH0F[0x7f];                               // 0x41(0x7f)
	class                                                        TargetCompany;                                     // 0xc0(0x8)
	Class EmissaryVoyageInlineVoteConsumerBase*                  Consumer;                                          // 0xc8(0x8)
};


// Size 0x0 (Full Size[0xd0] - InheritedSize[0xd0]
class StartEmissaryVoyageInlineVoteValidator: public EmissaryVoyageVoteValidatorBase
{
public:
};


// Size 0x0 (Full Size[0xd0] - InheritedSize[0xd0]
class StopEmissaryVoyageInlineVoteValidator: public EmissaryVoyageVoteValidatorBase
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class IsAnEmissaryStatCondition: public TargetedStatCondition
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class IsEmissaryStatCondition: public StatCondition
{
public:
	class                                                        RequiredEmissaryCompany;                           // 0x28(0x8)
	bool                                                         RequiresMaxEmissaryLevel;                          // 0x30(0x1)
	char                                                         pad0x9_DLF82[0x9];                                 // 0x2f(0x9)
};


}