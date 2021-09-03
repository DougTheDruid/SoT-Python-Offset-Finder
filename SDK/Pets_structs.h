#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Enum Pets.EPetDangerHearingResponseType
enum class Pets_EPetDangerHearingResponseType : uint8_t
{
	EPetDangerHearingResponseType__RunAway = 0,
	EPetDangerHearingResponseType__RunToHangoutSpot = 1,
	EPetDangerHearingResponseType__TurnToward = 2,
	EPetDangerHearingResponseType__RunToOwner = 3,
	EPetDangerHearingResponseType__MAX = 4,
	EPetDangerHearingResponseType__EPetDangerHearingResponseType_MAX = 5,

};

// Enum Pets.EPetDangerHearingTarget
enum class Pets_EPetDangerHearingTarget : uint8_t
{
	EPetDangerHearingTarget__None  = 0,
	EPetDangerHearingTarget__Owner = 1,
	EPetDangerHearingTarget__Crew  = 2,
	EPetDangerHearingTarget__Alliance = 3,
	EPetDangerHearingTarget__EPetDangerHearingTarget_MAX = 4,

};

// Enum Pets.EHangoutRotationMode
enum class Pets_EHangoutRotationMode : uint8_t
{
	EHangoutRotationMode__Match    = 0,
	EHangoutRotationMode__Randomise = 1,
	EHangoutRotationMode__EHangoutRotationMode_MAX = 2,

};

// Enum Pets.EWieldablePetDropRequestReason
enum class Pets_EWieldablePetDropRequestReason : uint8_t
{
	EWieldablePetDropRequestReason__None = 0,
	EWieldablePetDropRequestReason__Submerged = 1,
	EWieldablePetDropRequestReason__Escaped = 2,
	EWieldablePetDropRequestReason__EWieldablePetDropRequestReason_MAX = 3,

};

// Enum Pets.EPetFeedingReactionType
enum class Pets_EPetFeedingReactionType : uint8_t
{
	EPetFeedingReactionType__None  = 0,
	EPetFeedingReactionType__Sick  = 1,
	EPetFeedingReactionType__Happy = 2,
	EPetFeedingReactionType__EPetFeedingReactionType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pets.HangoutSpotId
// 0x0008
struct FHangoutSpotId
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetHangoutSpotParams
// 0x00B8
struct FPetHangoutSpotParams
{
	class UClass*                                      PetType;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFloatRange                                 HangoutTime;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWeightedPetAnimationSelector               AnimationSelector;                                         // 0x0018(0x00A0) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.HangoutSpotParams
// 0x0028
struct FHangoutSpotParams
{
	struct FName                                       HangoutSpotName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R73E[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetHangoutSpotParams>               PetParams;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetCustomiationOverrideMappingEntry
// 0x0018
struct FPetCustomiationOverrideMappingEntry
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPetCustomisationOverrideDataAsset*          OverrideAsset;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetDangerHearingThreatResponse
// 0x0003
struct FPetDangerHearingThreatResponse
{
	TEnumAsByte<Pets_EPetDangerHearingResponseType>    Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Pets_EPetDangerHearingTarget>          IgnoredTarget;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InvertIgnoredTarget;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetDangerHearingThreat
// 0x0020
struct FPetDangerHearingThreat
{
	struct FName                                       SoundTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeForgotten;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F1OQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetDangerHearingThreatResponse>     Responses;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetFeedingAnimationData
// 0x0008
struct FPetFeedingAnimationData
{
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> AnimationState;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YFZ1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTimeout;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetFeedingParams
// 0x0038
struct FPetFeedingParams
{
	struct FPetFeedingAnimationData                    EatingAnimData;                                            // 0x0000(0x0008) (Edit)
	struct FPetFeedingAnimationData                    FedAnimData;                                               // 0x0008(0x0008) (Edit)
	struct FPetFeedingAnimationData                    NotFedAnimData;                                            // 0x0010(0x0008) (Edit)
	struct FPetFeedingAnimationData                    SickAnimData;                                              // 0x0018(0x0008) (Edit)
	struct FPetFeedingAnimationData                    RefusalAnimData;                                           // 0x0020(0x0008) (Edit)
	float                                              TimeToStartEating;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilGivingUp;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistToleranceSquared;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationTolerance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.HangoutSpotPosition
// 0x0080
struct FHangoutSpotPosition
{
	struct FHangoutSpotId                              Id;                                                        // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData_8V6R[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor)
	TEnumAsByte<Pets_EHangoutRotationMode>             RotationMode;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EShipDeck>                      ShipDeck;                                                  // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H5Y2[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       Occupier;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9NXZ[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsPerch;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NeedOverrideInteractionPoint;                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T845[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OverrideInteractionPointPosition;                          // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlockPetEmoteReactions;                                    // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset;               // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1W7M[0xE];                                     // 0x0072(0x000E) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetCustomisation
// 0x0018
struct FPetCustomisation
{
	struct FString                                     PetName;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAIPartId                                   PetPartId;                                                 // 0x0010(0x0008) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetListingTypeEntry
// 0x0038
struct FPetListingTypeEntry
{
	struct FStringAssetReference                       PetPartsCategory;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringClassReference                       PetType;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggleName;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PetListingName;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetsServiceParams
// 0x0038
struct FPetsServiceParams
{
	uint32_t                                           MaximumDistanceFromOwner;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           ProximityRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPetsInProximity;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RespawnRequestTimeout;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnTimeDelay;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPetProximityLifespan;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPetProximityLifespan;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPetProximityRespawnDelay;                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPetProximityRespawnDelay;                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeldPetDespawnDelay;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              IllegalShipsSizesForSpawn;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetRelationship
// 0x0020
struct FPetRelationship
{
	class APetItemInfo*                                PetInfo;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZC3S[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.ReactStateMapping
// 0x00D8
struct FReactStateMapping
{
	struct FName                                       AnimationID;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanTimeout;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z739[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTimeout;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedPetAnimationSelector               PetStateSelector;                                          // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	float                                              AnimationChance;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 AnimationDelay;                                            // 0x00B4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3DC[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoringStrategies;                                        // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.WieldablePetDropTimeout
// 0x0008
struct FWieldablePetDropTimeout
{
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   RequestReason;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1CMK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DropDelay;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.WieldablePetFoodSourceEntry
// 0x0010
struct FWieldablePetFoodSourceEntry
{
	class AActor*                                      FoodSourceActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilConsumption;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_17XW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.WieldablePetHungerAnimationData
// 0x0008
struct FWieldablePetHungerAnimationData
{
	TEnumAsByte<Athena_EAthenaAnimationPetHeldReactionState> AnimState;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YW2G[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimTimeout;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetTurnToFaceData
// 0x0020
struct FPetTurnToFaceData
{
	struct FQuat                                       EndRotation;                                               // 0x0000(0x0010) (IsPlainOldData, NoDestructor)
	float                                              RotationTime;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_APHD[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventWieldablePetPendingDrop
// 0x0001
struct FEventWieldablePetPendingDrop
{
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   DropRequestReason;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventNewPetThreatDetected
// 0x0001
struct FEventNewPetThreatDetected
{
	unsigned char                                      UnknownData_VIPS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetDismissed
// 0x0008
struct FEventPetDismissed
{
	class AActor*                                      DismissingActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.DismissPetNotificationEvent
// 0x0001
struct FDismissPetNotificationEvent
{
	unsigned char                                      UnknownData_WCM8[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetFoodBase
// 0x0010
struct FEventPetFoodBase
{
	struct FGuid                                       FeedingInteractionId;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetRefusedFood
// 0x0008 (0x0018 - 0x0010)
struct FEventPetRefusedFood : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetReactedToFood
// 0x0004 (0x0014 - 0x0010)
struct FEventPetReactedToFood : public FEventPetFoodBase
{
	TEnumAsByte<Pets_EPetFeedingReactionType>          ReactionType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_09YO[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetNotFed
// 0x0008 (0x0018 - 0x0010)
struct FEventPetNotFed : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetFed
// 0x0010 (0x0020 - 0x0010)
struct FEventPetFed : public FEventPetFoodBase
{
	class AActor*                                      FedWithActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      FeedingActor;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetPerchSpotEnabledStateChanged
// 0x0001
struct FEventPetPerchSpotEnabledStateChanged
{
	unsigned char                                      UnknownData_ZS9R[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetLeftHangout
// 0x0008
struct FEventPetLeftHangout
{
	class AActor*                                      Pet;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetEnteredHangout
// 0x0002
struct FEventPetEnteredHangout
{
	unsigned char                                      UnknownData_8N6W[0x2];                                     // 0x0000(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetSadnessEnd
// 0x0001
struct FEventPetSadnessEnd
{
	unsigned char                                      UnknownData_HPH9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetSadnessBegin
// 0x0001
struct FEventPetSadnessBegin
{
	unsigned char                                      UnknownData_J2VT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetOwnerAssigned
// 0x0008
struct FEventPetOwnerAssigned
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetCustomisationComplete
// 0x0001
struct FEventPetCustomisationComplete
{
	unsigned char                                      UnknownData_JSCH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetCustomisationReady
// 0x0010
struct FEventPetCustomisationReady
{
	unsigned char                                      UnknownData_SCWV[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventWieldablePetPutOnPerch
// 0x0020
struct FEventWieldablePetPutOnPerch
{
	class AActor*                                      Pet;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HangoutSpotName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           HangoutSpotIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TWeakObjectPtr<class AActor>                       WieldingActor;                                             // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_DOWX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetDropped
// 0x0001
struct FEventPetDropped
{
	unsigned char                                      UnknownData_UGR3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetPickedUp
// 0x0001
struct FEventPetPickedUp
{
	bool                                               IsOnPerch;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetReactBegun
// 0x000C
struct FEventPetReactBegun
{
	struct FName                                       ReactId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> ReactState;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G2F5[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetReactCancellation
// 0x0010
struct FEventPetReactCancellation
{
	class AActor*                                      ReactSource;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReactId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetReactRequest
// 0x0010
struct FEventPetReactRequest
{
	class AActor*                                      ReactSource;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReactId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.RespawnPetEvent
// 0x0008
struct FRespawnPetEvent
{
	class AActor*                                      PetOwner;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetEndPlay
// 0x0008
struct FEventPetEndPlay
{
	class APawn*                                       LinkedPet;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPetSpawnedForShip
// 0x0010
struct FEventPetSpawnedForShip
{
	class APawn*                                       LinkedPet;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LinkedShip;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetBaseTelemetryFragmentInput
// 0x0008
struct FPetBaseTelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class AActor>                       PetInfo;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetBaseTelemetryFragment
// 0x0030
struct FPetBaseTelemetryFragment
{
	struct FString                                     OwnerId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PetPartId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EItemRepresentation>            CurrentPetRepresentation;                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7WEA[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PetLocation;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.WieldablePetPutOnPerchTelemetryEvent
// 0x0028
struct FWieldablePetPutOnPerchTelemetryEvent
{
	struct FString                                     HangoutSpotName;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           HangoutSpotIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VVBZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WieldingActorTelemetrySubjectId;                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetDismissedTelemetryEvent
// 0x0001
struct FPetDismissedTelemetryEvent
{
	unsigned char                                      UnknownData_GV8U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetRefusedFoodTelemetryEvent
// 0x0020
struct FPetRefusedFoodTelemetryEvent
{
	struct FString                                     TryingToFeedPlayerId;                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetReactedToFoodTelemetryEvent
// 0x0014
struct FPetReactedToFoodTelemetryEvent
{
	struct FGuid                                       FeedingInteractionId;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Pets_EPetFeedingReactionType>          FeedingReaction;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9O9R[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetNotFedTelemetryEvent
// 0x0020
struct FPetNotFedTelemetryEvent
{
	struct FString                                     IgnoringPlayerId;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetFedTelemetryEvent
// 0x0030
struct FPetFedTelemetryEvent
{
	struct FString                                     FedWithItemId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FeedingPlayerId;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetReactedTelemetryEvent
// 0x0018
struct FPetReactedTelemetryEvent
{
	struct FString                                     ReactId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> AnimationState;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0ZQA[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetDroppedTelemetryEvent
// 0x0001
struct FPetDroppedTelemetryEvent
{
	unsigned char                                      UnknownData_SXEI[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetPickedUpTelemetryEvent
// 0x0001
struct FPetPickedUpTelemetryEvent
{
	bool                                               IsOnPerch;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetControllerSetTickOrderEvent
// 0x0008
struct FPetControllerSetTickOrderEvent
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventPerchHangoutSpotSetEnabledState
// 0x000C
struct FEventPerchHangoutSpotSetEnabledState
{
	unsigned char                                      UnknownData_4YPH[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventHangoutSpotMadeAvailable
// 0x0050
struct FEventHangoutSpotMadeAvailable
{
	unsigned char                                      UnknownData_3W1Y[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventHangoutSpotMadeUnavailable
// 0x0050
struct FEventHangoutSpotMadeUnavailable
{
	unsigned char                                      UnknownData_OJM3[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetDespawnActionStateParams
// 0x0040
struct FPetDespawnActionStateParams
{
	float                                              TakeOffHeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOffTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalGhostShaderTime;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToTriggerVFX;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     DespawnVFX;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DespawnVFXColour;                                          // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 DespawnSFX;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopDespawnSFX;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDespawningTime;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1T53[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetSpawnActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPetSpawnActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.PetSpawnActionStateParams
// 0x0040
struct FPetSpawnActionStateParams
{
	float                                              LandingHeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandingTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalGhostShaderTime;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToTriggerVFX;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SpawnVFX;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SpawnVFXColour;                                            // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 SpawnSFX;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopSpawnSFX;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalSpawningTime;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9A0[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Pets.EventWieldablePetHungerStateUpdated
// 0x0001
struct FEventWieldablePetHungerStateUpdated
{
	TEnumAsByte<Athena_EAthenaAnimationPetHeldReactionState> NewState;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
