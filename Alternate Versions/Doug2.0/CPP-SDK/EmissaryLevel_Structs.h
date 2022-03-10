namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class EmissaryFlagMeshReferences: public None
{
public:
	Struct StringAssetReference                        BackOfShipEmissaryFlagMeshAssetReference           // 0x0(0x10)
	Struct StringAssetReference                        MastEmissaryFlagMeshAssetReference                 // 0x10(0x10)
};


// Size 0x28
class ParticleVisualisation: public None
{
public:
	Struct ActorComponentSelector                      TargetParticles                                    // 0x0(0x10)
	float                                              Delay                                              // 0x10(0x4)
	float                                              DelayAfterPutOutParticles                          // 0x14(0x4)
	Class ParticleSystem*                              PutOutParticles                                    // 0x18(0x8)
	Class ParticleSystemComponent*                     ParticleSystem                                     // 0x20(0x8)
};


// Size 0x28
class LightVisualisation: public None
{
public:
	Struct ActorComponentSelector                      TargetLight                                        // 0x0(0x10)
	float                                              TransitionTime                                     // 0x10(0x4)
	float                                              ActiveValue                                        // 0x14(0x4)
	float                                              InactiveValue                                      // 0x18(0x4)
	Class LightComponent*                              Light                                              // 0x20(0x8)
};


// Size 0x30
class MaterialVisualisation: public None
{
public:
	Struct ActorComponentSelector                      TargetMesh                                         // 0x0(0x10)
	float                                              TransitionTime                                     // 0x10(0x4)
	int                                                MaterialIndex                                      // 0x14(0x4)
	struct FName                                       ParameterName                                      // 0x18(0x8)
	float                                              ActiveValue                                        // 0x20(0x4)
	float                                              InactiveValue                                      // 0x24(0x4)
	Class MaterialInstanceDynamic*                     DynamicMaterial                                    // 0x28(0x8)
};


// Size 0x80
class EmissaryLevelEntry: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	TArray<Struct EmissaryLevelData>                   CompanyLevelData                                   // 0x8(0x10)
	Class DataAsset*                                   MaxRankPopUpToastData                              // 0x18(0x8)
	Class DataAsset*                                   EmissarySunkPopUpToastData                         // 0x20(0x8)
	Struct EmissaryCompanyCosmetics                    CompanyCosmetics                                   // 0x28(0x20)
	Struct PlayerStat                                  TimeSpentAtMaxRankStat                             // 0x48(0x4)
	TArray<Struct TimeSpentAtMaxRankStat>              StatsToFireOnFullEmissaryClothing                  // 0x50(0x10)
	TArray<Struct StatsToFireOnFullEmissaryClothing>   StatsToFireOnFullEmissaryShipCustomizations        // 0x60(0x10)
	TArray<Struct StatsToFireOnFullEmissaryShipCustomizations> StatsToFireOnFullShipCustomizationsAndClothing     // 0x70(0x10)
};


// Size 0x20
class EmissaryCompanyCosmetics: public None
{
public:
	TArray<Class EmissarySunkPopUpToastData>           CompanyCostumeCosmetics                            // 0x0(0x10)
	TArray<Class CompanyCostumeCosmetics>              CompanyShipCosmetics                               // 0x10(0x10)
};


// Size 0x80
class EmissaryLevelData: public None
{
public:
	int                                                LevelTarget                                        // 0x0(0x4)
	Struct EmissaryFlagMeshReferences                  EmissaryFlagMeshAssetReferences                    // 0x8(0x20)
	Struct RewardId                                    EmissaryDeactivationReward                         // 0x48(0x8)
	TArray<Struct EmissaryDeactivationReward>          StatsToFireOnEmissaryLevelReached                  // 0x50(0x10)
	Struct StringAssetReference                        TreasureSoldNotificationFlag                       // 0x60(0x10)
	Struct StringAssetReference                        EmissaryFlagTextureReference                       // 0x70(0x10)
};


// Size 0x8
class EmissaryPointBoostMultipliers: public None
{
public:
	float                                              PlayerWearningCompanyCostume                       // 0x0(0x4)
	float                                              CrewShipFullyEquippedWithCompanyCosmetics          // 0x4(0x4)
};


// Size 0x4
class EmissaryLevelStatusStatInfo: public None
{
public:
	Struct PlayerStat                                  StatToFire                                         // 0x0(0x4)
};


// Size 0x8
class EmissaryPointsBoostCriteria: public None
{
public:
};


// Size 0x18
class TrackedPlayerKillEntry: public None
{
public:
	Struct FString                                     KilledPlayer                                       // 0x0(0x10)
	int                                                KillCount                                          // 0x10(0x4)
	float                                              KillTime                                           // 0x14(0x4)
};


// Size 0x28
class EmissaryCompanyCampaignSettings: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	TArray<Struct EmissaryCompanyCampaignKillPlayer>   KillPlayers                                        // 0x8(0x10)
	TArray<Struct EmissaryCompanyCampaignGameEvent>    GameEvents                                         // 0x18(0x10)
};


// Size 0x18
class EmissaryCompanyCampaignGameEvent: public None
{
public:
	class                                              EventType                                          // 0x0(0x8)
	TArray<Struct EmissaryCompanyCampaignScale>        Scales                                             // 0x8(0x10)
};


// Size 0xc
class EmissaryCompanyCampaignScale: public None
{
public:
	struct FName                                       Campaign                                           // 0x0(0x8)
	float                                              Scale                                              // 0x8(0x4)
};


// Size 0x18
class EmissaryCompanyCampaignKillPlayer: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	TArray<Struct Company>                             Scales                                             // 0x8(0x10)
};


// Size 0x80
class EmissaryRewardEntry: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	Struct EmissaryActionRewardData                    ActionRewardData                                   // 0x8(0x78)
};


// Size 0x78
class EmissaryActionRewardData: public None
{
public:
	TArray<Struct Company>                             OwnershipChangedRewards                            // 0x0(0x10)
	TArray<Struct OwnershipChangedRewards>             PlacedOnShipRewards                                // 0x10(0x10)
	Struct EmissaryKillPlayerReward                    KillPlayerReward                                   // 0x20(0x28)
	TArray<Struct EmissaryGameEventsReward>            GameEventsRewards                                  // 0x48(0x10)
	TArray<Struct EmissaryEventAward>                  HandinRewards                                      // 0x58(0x10)
	TArray<Struct EmissaryCompanyActionReward>         CompanyActionRewards                               // 0x68(0x10)
};


// Size 0x8
class EmissaryCompanyActionReward: public None
{
public:
	byte                                               CompanyActionType                                  // 0x0(0x1)
	float                                              Amount                                             // 0x4(0x4)
};


// Size 0x8
class EmissaryEventAward: public None
{
public:
	bool                                               FirstTimeOnly                                      // 0x0(0x1)
	bool                                               NotOriginalOwner                                   // 0x1(0x1)
	byte                                               ItemQualityRequirement                             // 0x2(0x1)
	int                                                EmissaryLevelIncrease                              // 0x4(0x4)
};


// Size 0x10
class EmissaryGameEventsReward: public None
{
public:
	class                                              FinishedEventType                                  // 0x0(0x8)
	float                                              Amount                                             // 0x8(0x4)
};


// Size 0x28
class EmissaryKillPlayerReward: public None
{
public:
	int                                                EmissaryLevelIncrease                              // 0x0(0x4)
	TArray<Struct EmissaryKillScaleFactor>             EmissaryLevelKillCountScaleFactors                 // 0x8(0x10)
	TArray<Class EmissaryLevelKillCountScaleFactors>   ValidEmissariesToKill                              // 0x18(0x10)
};


// Size 0x8
class EmissaryKillScaleFactor: public None
{
public:
	int                                                KillCount                                          // 0x0(0x4)
	float                                              ScaleFactor                                        // 0x4(0x4)
};


// Size 0x8
class EmissaryVoteRemovedEvent: public None
{
public:
	struct FName                                       Company                                            // 0x0(0x8)
};


// Size 0x8
class EmissaryVoteAddedEvent: public None
{
public:
	struct FName                                       Company                                            // 0x0(0x8)
};


// Size 0x20
class CrewMemberVotes: public None
{
public:
	Struct Guid                                        CrewId                                             // 0x0(0x10)
	TArray<Struct PerCompanyVotes>                     CompanyVotes                                       // 0x10(0x10)
};


// Size 0x18
class PerCompanyVotes: public None
{
public:
	TArray<class MemberVotes*>                         MemberVotes                                        // 0x0(0x10)
	struct FName                                       CompanyIdentifier                                  // 0x10(0x8)
};


// Size 0x4
class ChaliceStatuePhaseUpdate: public None
{
public:
	int                                                NewLevel                                           // 0x0(0x4)
};


// Size 0x18
class EmissaryEncounteredSkellyFortNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x8
class EmissaryEncounteredAIShipEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x0(0x8)
};


// Size 0x8
class EmissaryEncounteredTinySharkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x0(0x8)
};


// Size 0x8
class EmissaryEncounteredKrakenEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x0(0x8)
};


// Size 0x10
class EmissaryEntitlementPurchasedEvent: public None
{
public:
	Struct Guid                                        OfferId                                            // 0x0(0x10)
};


// Size 0xc
class EmissaryLevelRankChange: public None
{
public:
	int                                                NewLevel                                           // 0x0(0x4)
	struct FName                                       CompanyName                                        // 0x4(0x8)
};


// Size 0x8
class EmissaryActivated: public None
{
public:
	struct FName                                       CompanyName                                        // 0x0(0x8)
};


// Size 0x20
class EmissaryKilledAnotherEmissaryNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
	struct FName                                       VictimCompanyName                                  // 0x18(0x8)
};


// Size 0x18
class EmissarySoldLootNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x18
class EmissaryStoleLootNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x18
class EmissaryDiscoveredCargoRunCrateNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x18
class EmissaryDiscoveredLootNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x18
class EmissarySecuredLootOnShipNetworkEvent: public None
{
public:
	struct FName                                       CompanyName                                        // 0x10(0x8)
};


// Size 0x20
class EmissarySunkNetworkEvent: public None
{
public:
	Class DataAsset*                                   PopUpDesc                                          // 0x10(0x8)
	struct FName                                       CompanyName                                        // 0x18(0x8)
};


// Size 0x18
class EmissaryMaxLevelReachedNetworkEvent: public None
{
public:
	Class DataAsset*                                   PopUpDesc                                          // 0x10(0x8)
};


// Size 0x10
class EmissaryDeactivatedNetworkEvent: public None
{
public:
};


// Size 0xc
class EmissaryStateUpdateEvent: public None
{
public:
	float                                              CurrentRepTotal                                    // 0x0(0x4)
	struct FName                                       CompanyId                                          // 0x4(0x8)
};


// Size 0x20
class EmissaryProgressUpdatedNetworkEvent: public None
{
public:
	float                                              OldRepTotal                                        // 0x10(0x4)
	float                                              NewRepTotal                                        // 0x14(0x4)
	struct FName                                       CompanyId                                          // 0x18(0x8)
};


// Size 0x14
class EmissaryLevelProgressUpdatedEvent: public None
{
public:
	float                                              LevelProgress                                      // 0x0(0x4)
	Struct Guid                                        AssociatedCrew                                     // 0x4(0x10)
};


// Size 0x1
class ActivateEmissaryMaxRankQuestForSession: public None
{
public:
};


// Size 0x30
class UpdateEmissaryValueForCompany: public None
{
public:
	Struct Guid                                        SessionId                                          // 0x0(0x10)
	struct FName                                       Company                                            // 0x10(0x8)
	Struct Guid                                        AssociatedCrew                                     // 0x18(0x10)
	byte                                               RewardType                                         // 0x28(0x1)
	int                                                UpdateAmount                                       // 0x2c(0x4)
};


// Size 0x28
class ReactivateEmissaryForMigratedCrew: public None
{
public:
	Struct Guid                                        SessionId                                          // 0x0(0x10)
	struct FName                                       Company                                            // 0x10(0x8)
	Struct Guid                                        AssociatedCrew                                     // 0x18(0x10)
};


// Size 0x30
class DeactivateEmissaryForCrew: public None
{
public:
	Struct Guid                                        SessionId                                          // 0x0(0x10)
	struct FName                                       Company                                            // 0x10(0x8)
	Struct Guid                                        AssociatedCrew                                     // 0x18(0x10)
	byte                                               EmissaryDeactivateReason                           // 0x28(0x1)
	int                                                EmissaryTotal                                      // 0x2c(0x4)
};


// Size 0x28
class ActivateEmissaryForCrew: public None
{
public:
	Struct Guid                                        SessionId                                          // 0x0(0x10)
	struct FName                                       Company                                            // 0x10(0x8)
	Struct Guid                                        AssociatedCrew                                     // 0x18(0x10)
};


// Size 0x1c
class EmissaryLevelChanged: public None
{
public:
	int                                                NewLevel                                           // 0x0(0x4)
	Struct Guid                                        AssociatedCrew                                     // 0x4(0x10)
	struct FName                                       CompanyName                                        // 0x14(0x8)
};


// Size 0x1
class EmissaryLevelResetProgress: public None
{
public:
};


// Size 0x1
class PlayerRemovedFromEmissaryCrew: public None
{
public:
};


// Size 0x10
class PlayerAddedToEmissaryCrew: public None
{
public:
	int                                                EmissaryLevel                                      // 0x0(0x4)
	float                                              EmissaryLevelProgress                              // 0x4(0x4)
	struct FName                                       EmissaryCompany                                    // 0x8(0x8)
};


// Size 0x2c
class EmissaryRoleplayActionTelemetryEvent: public None
{
public:
	Struct Guid                                        EmissarySessionId                                  // 0x0(0x10)
	struct FName                                       EmissaryCompany                                    // 0x10(0x8)
	int                                                EmissaryRank                                       // 0x18(0x4)
	byte                                               ActionName                                         // 0x1c(0x1)
	int                                                PointsRewarded                                     // 0x20(0x4)
	int                                                PointsAccumulated                                  // 0x24(0x4)
	int                                                PointsRequiredToNextRank                           // 0x28(0x4)
};


// Size 0x1c
class EmissarySessionEndTelemetryEvent: public None
{
public:
	Struct Guid                                        EmissarySessionId                                  // 0x0(0x10)
	struct FName                                       EmissaryCompany                                    // 0x10(0x8)
	byte                                               DisbandedReason                                    // 0x18(0x1)
};


// Size 0x1c
class EmissarySessionStartTelemetryEvent: public None
{
public:
	Struct Guid                                        EmissarySessionId                                  // 0x0(0x10)
	struct FName                                       EmissaryCompany                                    // 0x10(0x8)
	int                                                EmisarriesOnServerCount                            // 0x18(0x4)
};


// Size 0x28
class VoteAddedNetworkEvent: public None
{
public:
	struct FName                                       CompanyId                                          // 0x10(0x8)
	Struct Guid                                        CrewId                                             // 0x18(0x10)
};


// Size 0x28
class VoteRemovedNetworkEvent: public None
{
public:
	struct FName                                       CompanyId                                          // 0x10(0x8)
	Struct Guid                                        CrewId                                             // 0x18(0x10)
};


}