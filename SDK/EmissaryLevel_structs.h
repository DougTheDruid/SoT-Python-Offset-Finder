#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EmissaryLevel.EBootyRewardType
enum class EmissaryLevel_EBootyRewardType : uint8_t
{
	EBootyRewardType__OwnershipChanged = 0,
	EBootyRewardType__ItemDroppedOnItem = 1,
	EBootyRewardType__PlayerKilled = 2,
	EBootyRewardType__GameEventsFinished = 3,
	EBootyRewardType__Handin       = 4,
	EBootyRewardType__MAX          = 5,
	EBootyRewardType__EBootyRewardType_MAX = 6,

};

// Enum EmissaryLevel.EEmissaryDeactivateReason
enum class EmissaryLevel_EEmissaryDeactivateReason : uint8_t
{
	EEmissaryDeactivateReason__DissociateFromShip = 0,
	EEmissaryDeactivateReason__Cancelled = 1,
	EEmissaryDeactivateReason__EEmissaryDeactivateReason_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryLevel.ParticleVisualisation
// 0x0028
struct FParticleVisualisation
{
	struct FActorComponentSelector                     TargetParticles;                                           // 0x0000(0x0010) (Edit, ContainsInstancedReference)
	float                                              Delay;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayAfterPutOutParticles;                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             PutOutParticles;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.LightVisualisation
// 0x0028
struct FLightVisualisation
{
	struct FActorComponentSelector                     TargetLight;                                               // 0x0000(0x0010) (Edit, ContainsInstancedReference)
	float                                              TransitionTime;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActiveValue;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InactiveValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5R1L[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULightComponent*                             Light;                                                     // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.MaterialVisualisation
// 0x0030
struct FMaterialVisualisation
{
	struct FActorComponentSelector                     TargetMesh;                                                // 0x0000(0x0010) (Edit, ContainsInstancedReference)
	float                                              TransitionTime;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaterialIndex;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ParameterName;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActiveValue;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InactiveValue;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyCosmetics
// 0x0020
struct FEmissaryCompanyCosmetics
{
	TArray<class UClass*>                              CompanyCostumeCosmetics;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<class UClass*>                              CompanyShipCosmetics;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryPointBoostMultipliers
// 0x0008
struct FEmissaryPointBoostMultipliers
{
	float                                              PlayerWearningCompanyCostume;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrewShipFullyEquippedWithCompanyCosmetics;                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryFlagMeshReferences
// 0x0020
struct FEmissaryFlagMeshReferences
{
	struct FStringAssetReference                       BackOfShipEmissaryFlagMeshAssetReference;                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       MastEmissaryFlagMeshAssetReference;                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelData
// 0x0080
struct FEmissaryLevelData
{
	int                                                LevelTarget;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9YGL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEmissaryFlagMeshReferences                 EmissaryFlagMeshAssetReferences;                           // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UWeightedItemDescSpawnDataAsset>   EmissaryFlotsamSpawnDataAsset;                             // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PHSA[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FRewardId                                   EmissaryDeactivationReward;                                // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnEmissaryLevelReached;                         // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       TreasureSoldNotificationFlag;                              // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       EmissaryFlagTextureReference;                              // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelEntry
// 0x0078
struct FEmissaryLevelEntry
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FEmissaryLevelData>                  CompanyLevelData;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDataAsset*                                  MaxRankPopUpToastData;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                                  EmissarySunkPopUpToastData;                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEmissaryCompanyCosmetics                   CompanyCosmetics;                                          // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullEmissaryClothing;                         // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullEmissaryShipCustomizations;               // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnFullShipCustomizationsAndClothing;            // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignScale
// 0x000C
struct FEmissaryCompanyCampaignScale
{
	struct FName                                       Campaign;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignGameEvent
// 0x0018
struct FEmissaryCompanyCampaignGameEvent
{
	class UClass*                                      EventType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FEmissaryCompanyCampaignScale>       Scales;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignKillPlayer
// 0x0018
struct FEmissaryCompanyCampaignKillPlayer
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FEmissaryCompanyCampaignScale>       Scales;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignSettings
// 0x0028
struct FEmissaryCompanyCampaignSettings
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FEmissaryCompanyCampaignKillPlayer>  KillPlayers;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryCompanyCampaignGameEvent>   GameEvents;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEventAward
// 0x0008
struct FEmissaryEventAward
{
	bool                                               FirstTimeOnly;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NotOriginalOwner;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemQuality_EEmissaryQualityLevel>     ItemQualityRequirement;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6ER0[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EmissaryLevelIncrease;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryKillScaleFactor
// 0x0008
struct FEmissaryKillScaleFactor
{
	int                                                KillCount;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleFactor;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryGameEventsReward
// 0x0010
struct FEmissaryGameEventsReward
{
	class UClass*                                      FinishedEventType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Amount;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YPQE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryCompanyActionReward
// 0x0008
struct FEmissaryCompanyActionReward
{
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UJER[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Amount;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryKillPlayerReward
// 0x0028
struct FEmissaryKillPlayerReward
{
	int                                                EmissaryLevelIncrease;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8GXD[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEmissaryKillScaleFactor>            EmissaryLevelKillCountScaleFactors;                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ValidEmissariesToKill;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryActionRewardData
// 0x0078
struct FEmissaryActionRewardData
{
	TArray<struct FEmissaryEventAward>                 OwnershipChangedRewards;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryEventAward>                 PlacedOnShipRewards;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryKillPlayerReward                   KillPlayerReward;                                          // 0x0020(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FEmissaryGameEventsReward>           GameEventsRewards;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryEventAward>                 HandinRewards;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryCompanyActionReward>        CompanyActionRewards;                                      // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryRewardEntry
// 0x0080
struct FEmissaryRewardEntry
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FEmissaryActionRewardData                   ActionRewardData;                                          // 0x0008(0x0078) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.PerCompanyVotes
// 0x0018
struct FPerCompanyVotes
{
	TArray<class APlayerState*>                        MemberVotes;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FName                                       CompanyIdentifier;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.CrewMemberVotes
// 0x0020
struct FCrewMemberVotes
{
	struct FGuid                                       CrewId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FPerCompanyVotes>                    CompanyVotes;                                              // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
// 0x0004
struct FEmissaryLevelStatusStatInfo
{
	struct FPlayerStat                                 StatToFire;                                                // 0x0000(0x0004) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryPointsBoostCriteria
// 0x0008
struct FEmissaryPointsBoostCriteria
{
	unsigned char                                      UnknownData_9099[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.TrackedPlayerKillEntry
// 0x0018
struct FTrackedPlayerKillEntry
{
	struct FString                                     KilledPlayer;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                KillCount;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KillTime;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryVoteRemovedEvent
// 0x0008
struct FEmissaryVoteRemovedEvent
{
	struct FName                                       Company;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryVoteAddedEvent
// 0x0008
struct FEmissaryVoteAddedEvent
{
	struct FName                                       Company;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.ChaliceStatuePhaseUpdate
// 0x0004
struct FChaliceStatuePhaseUpdate
{
	int                                                NewLevel;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEncounteredSkellyFortNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryEncounteredSkellyFortNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEncounteredAIShipEvent
// 0x0008
struct FEmissaryEncounteredAIShipEvent
{
	struct FName                                       CompanyName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEncounteredTinySharkEvent
// 0x0008
struct FEmissaryEncounteredTinySharkEvent
{
	struct FName                                       CompanyName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEncounteredKrakenEvent
// 0x0008
struct FEmissaryEncounteredKrakenEvent
{
	struct FName                                       CompanyName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryEntitlementPurchasedEvent
// 0x0010
struct FEmissaryEntitlementPurchasedEvent
{
	struct FGuid                                       OfferId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelRankChange
// 0x000C
struct FEmissaryLevel_FEmissaryLevelRankChange
{
	int                                                NewLevel;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompanyName;                                               // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryActivated
// 0x0008
struct FEmissaryLevel_FEmissaryActivated
{
	struct FName                                       CompanyName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryKilledAnotherEmissaryNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissaryKilledAnotherEmissaryNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       VictimCompanyName;                                         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissarySoldLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissarySoldLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryStoleLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryStoleLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredCargoRunCrateNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryDiscoveredCargoRunCrateNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredLootNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryDiscoveredLootNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissarySecuredLootOnShipNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissarySecuredLootOnShipNetworkEvent : public FNetworkEventStruct
{
	struct FName                                       CompanyName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissarySunkNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissarySunkNetworkEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompanyName;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryMaxLevelReachedNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FEmissaryMaxLevelReachedNetworkEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryDeactivatedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FEmissaryDeactivatedNetworkEvent : public FNetworkEventStruct
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryStateUpdateEvent
// 0x000C
struct FEmissaryStateUpdateEvent
{
	float                                              CurrentRepTotal;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompanyId;                                                 // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryProgressUpdatedNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissaryProgressUpdatedNetworkEvent : public FNetworkEventStruct
{
	float                                              OldRepTotal;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewRepTotal;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompanyId;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelProgressUpdatedEvent
// 0x0014
struct FEmissaryLevelProgressUpdatedEvent
{
	float                                              LevelProgress;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.ActivateEmissaryMaxRankQuestForSession
// 0x0001
struct FActivateEmissaryMaxRankQuestForSession
{
	unsigned char                                      UnknownData_6HEU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.UpdateEmissaryValueForCompany
// 0x0030
struct FUpdateEmissaryValueForCompany
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Company;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EmissaryLevel_EBootyRewardType>        RewardType;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PZD9[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UpdateAmount;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.ReactivateEmissaryForMigratedCrew
// 0x0028
struct FReactivateEmissaryForMigratedCrew
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Company;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.DeactivateEmissaryForCrew
// 0x0030
struct FDeactivateEmissaryForCrew
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Company;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EmissaryLevel_EEmissaryDeactivateReason> EmissaryDeactivateReason;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B4NE[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EmissaryTotal;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.ActivateEmissaryForCrew
// 0x0028
struct FActivateEmissaryForCrew
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Company;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelChanged
// 0x001C
struct FEmissaryLevelChanged
{
	int                                                NewLevel;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       CompanyName;                                               // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryLevelResetProgress
// 0x0001
struct FEmissaryLevelResetProgress
{
	unsigned char                                      UnknownData_BLTL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.PlayerRemovedFromEmissaryCrew
// 0x0001
struct FPlayerRemovedFromEmissaryCrew
{
	unsigned char                                      UnknownData_M2YJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.PlayerAddedToEmissaryCrew
// 0x0010
struct FPlayerAddedToEmissaryCrew
{
	int                                                EmissaryLevel;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmissaryLevelProgress;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EmissaryCompany;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissaryRoleplayActionTelemetryEvent
// 0x002C
struct FEmissaryRoleplayActionTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EmissaryCompany;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EmissaryRank;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EmissaryLevel_EBootyRewardType>        ActionName;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J1R3[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PointsRewarded;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointsAccumulated;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointsRequiredToNextRank;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissarySessionEndTelemetryEvent
// 0x001C
struct FEmissarySessionEndTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EmissaryCompany;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EmissaryLevel_EEmissaryDeactivateReason> DisbandedReason;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5TBO[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.EmissarySessionStartTelemetryEvent
// 0x001C
struct FEmissarySessionStartTelemetryEvent
{
	struct FGuid                                       EmissarySessionId;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EmissaryCompany;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EmisarriesOnServerCount;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.VoteAddedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FVoteAddedNetworkEvent : public FBoxedRpc
{
	struct FName                                       CompanyId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryLevel.VoteRemovedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FVoteRemovedNetworkEvent : public FBoxedRpc
{
	struct FName                                       CompanyId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
