namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class EmissaryActionRewardBoostComponent: public ActorComponent
{
public:
};


// Size 0x90
class EmissaryActiveTableVisualiserComponent: public ActorComponent
{
public:
	class                                              TargetCompany                                      // 0xc8(0x8)
	TArray<Struct TargetCompany>                       MaterialChanges                                    // 0xd0(0x10)
	TArray<Struct MaterialChanges>                     LightChanges                                       // 0xf0(0x10)
	TArray<Struct LightChanges>                        ParticleChanges                                    // 0x110(0x10)
};


// Size 0x0
class EmissaryEntitlementCategory: public ItemCategory
{
public:
};


// Size 0x0
class EmissaryEntitlementDesc: public EntitlementDesc
{
public:
};


// Size 0x18
class EmissaryFlotsamItemInfo: public BootyItemInfo
{
public:
	Struct CompanySpecificBootyReward                  HandInOwnFlotsamReward                             // 0x708(0x18)
};


// Size 0x90
class EmissaryFlotsamItemSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0x28
class EmissaryFlotsamTooltipCustomizerComponent: public ActorComponent
{
public:
	bool                                               CheckForDelivery                                   // 0xd8(0x1)
	bool                                               CheckForPickup                                     // 0xd9(0x1)
};


// Size 0x40
class EmissaryLevelSettingsAsset: public DataAsset
{
public:
	TArray<Struct RewardSettings>                      EmissaryLevelData                                  // 0x28(0x10)
	Struct EmissaryPointBoostMultipliers               BoostMultiplers                                    // 0x38(0x8)
	Struct EmissaryFlagMeshReferences                  DefaultEmissaryFlagAssetReferences                 // 0x40(0x20)
};


// Size 0x338
class EmissaryLevelService: public Actor
{
public:
	Class EmissaryLevelSettingsAsset*                  Settings                                           // 0x470(0x8)
	Class EmissaryRewardSettingsAsset*                 RewardSettings                                     // 0x478(0x8)
};


// Size 0x98
class EmissaryMaxRankQuestProvider: public ActorComponent
{
public:
	class                                              MaxRankQuestNotificationID                         // 0xc8(0x8)
	byte                                               MaxRankQuestToolTipPriority                        // 0xd0(0x1)
	Struct FText                                       StartMaxRankQuestToolTipText                       // 0xd8(0x38)
	Struct FText                                       CannotStartMaxRankQuestToolTipText                 // 0x110(0x38)
	Struct StringAssetReference                        QuestDesc                                          // 0x148(0x10)
	class                                              Company                                            // 0x158(0x8)
};


// Size 0x48
class EmissaryParticipantComponent: public ActorComponent
{
public:
	int                                                EmissaryLevel                                      // 0xd0(0x4)
	float                                              EmissaryLevelProgress                              // 0xd4(0x4)
	struct FName                                       AffiliatedCompany                                  // 0xd8(0x8)
	bool                                               IsAtMaxRank                                        // 0xe0(0x1)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession     // 0xe1(0x1)
	TArray<Struct IsEmissaryMaxRankQuestBeenActivatedThisSession> NoteCompletionIdents                               // 0xe8(0x10)
	struct FName                                       VotedCompany                                       // 0x108(0x8)
};


// Size 0x0
class EmissaryRepresentationMeshComponent: public StaticMeshComponent
{
public:
};


// Size 0x10
class EmissaryRewardCampaignSettingsAsset: public DataAsset
{
public:
	TArray<Struct CampaignSettings>                    Companies                                          // 0x28(0x10)
};


// Size 0x20
class EmissaryRewardSettingsAsset: public DataAsset
{
public:
	TArray<Struct OnRep_EmissaryCount>                 EmissaryRewardData                                 // 0x28(0x10)
	float                                              PlayerKilledExpiryTime                             // 0x38(0x4)
	Class EmissaryRewardCampaignSettingsAsset*         CampaignSettings                                   // 0x40(0x8)
};


// Size 0x70
class EmissaryShipAffiliationTrackerComponent: public SceneComponent
{
public:
	int                                                EmissaryCount                                      // 0x2d0(0x4)
	class                                              TrackedCompany                                     // 0x2d8(0x8)
	TArray<Struct EmissaryRepresentationMesh>          EmissaryRepresentationTransforms                   // 0x300(0x10)
	TArray<class EmissaryRepresentationMeshes*>        EmissaryRepresentationMeshes                       // 0x310(0x10)
	class                                              LoadedEmissaryRepresentationMesh                   // 0x320(0x8)
};


// Size 0xf8
class EmissaryVoyageInlineVoteConsumerBase: public VoteConsumerInlineBase
{
public:
	Class EmissaryVoyageVoteValidatorBase*             Validator                                          // 0x30(0x8)
	Struct FText                                       VoyageCinematicHeader                              // 0x80(0x38)
	struct FName                                       VoyageCinematicTag                                 // 0xb8(0x8)
	TArray<Struct VoyageCinematicTag>                  Votes                                              // 0xe0(0x10)
	Class BoxedRpcDispatcherComponent*                 RpcDispatcher                                      // 0xf0(0x8)
	Class Actor*                                       OwningActor                                        // 0x118(0x8)
};


// Size 0x1a0
class StartEmissaryVoyageInlineVoteConsumer: public EmissaryVoyageInlineVoteConsumerBase
{
public:
	Struct FText                                       EmissaryVotingCastVote                             // 0x128(0x38)
	Struct FText                                       EmissaryVotingCantVote                             // 0x160(0x38)
	Struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange   // 0x198(0x38)
	Struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement  // 0x1d0(0x38)
	Struct FText                                       EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany // 0x208(0x38)
	Struct FText                                       EmissaryVotingRemoveVote                           // 0x240(0x38)
	Struct FText                                       EmissaryVotingCantRemoveVote                       // 0x278(0x38)
};


// Size 0x168
class StopEmissaryVoyageInlineVoteConsumer: public EmissaryVoyageInlineVoteConsumerBase
{
public:
	Struct FText                                       EmissaryVotingCastVote                             // 0x128(0x38)
	Struct FText                                       EmissaryVotingCantVote                             // 0x160(0x38)
	Struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange   // 0x198(0x38)
	Struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany // 0x1d0(0x38)
	Struct FText                                       EmissaryVotingRemoveVote                           // 0x208(0x38)
	Struct FText                                       EmissaryVotingCantRemoveVote                       // 0x240(0x38)
};


// Size 0x78
class EmissaryVoyageVoteValidatorBase: public VoteValidatorInlineBase
{
public:
	class                                              TargetCompany                                      // 0x30(0x8)
	class                                              RequiredEntitlement                                // 0x38(0x8)
	Class EmissaryVoyageInlineVoteConsumerBase*        Consumer                                           // 0xa0(0x8)
};


// Size 0x0
class StartEmissaryVoyageInlineVoteValidator: public EmissaryVoyageVoteValidatorBase
{
public:
};


// Size 0x0
class StopEmissaryVoyageInlineVoteValidator: public EmissaryVoyageVoteValidatorBase
{
public:
};


// Size 0x0
class IsAnEmissaryStatCondition: public TargetedStatCondition
{
public:
};


// Size 0x10
class IsEmissaryStatCondition: public StatCondition
{
public:
	class                                              RequiredEmissaryCompany                            // 0x28(0x8)
	bool                                               RequiresMaxEmissaryLevel                           // 0x30(0x1)
};


}