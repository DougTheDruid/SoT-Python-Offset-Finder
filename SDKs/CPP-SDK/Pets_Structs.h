#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x20
struct PetRefusedFoodTelemetryEvent
{
public:
	struct FString                                               TryingToFeedPlayerId;                              // 0x0(0x10)
	struct Guid                                                  FeedingInteractionId;                              // 0x10(0x10)
};


// Size 0x8
struct HangoutSpotId
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
};


// Size 0x10
struct EventPetReactRequest
{
public:
	class Actor*                                                 ReactSource;                                       // 0x0(0x8)
	struct FName                                                 ReactId;                                           // 0x8(0x8)
};


// Size 0x14
struct PetReactedToFoodTelemetryEvent
{
public:
	struct Guid                                                  FeedingInteractionId;                              // 0x0(0x10)
	char                                                         FeedingReaction;                                   // 0x10(0x1)
};


// Size 0xc
struct EventPetPickedUp
{
public:
	bool                                                         IsOnPerch;                                         // 0x0(0x1)
	class Actor*                                                 PetInfo;                                           // 0x4(0x8)
};


// Size 0xd8
struct ReactStateMapping
{
public:
	struct FName                                                 AnimationId;                                       // 0x0(0x8)
	bool                                                         CanTimeout;                                        // 0x8(0x1)
	float                                                        AnimationTimeout;                                  // 0xc(0x4)
	struct WeightedPetAnimationSelector                          PetStateSelector;                                  // 0x10(0xa0)
	float                                                        AnimationChance;                                   // 0xb0(0x4)
	struct FloatRange                                            AnimationDelay;                                    // 0xb4(0x10)
	TArray<class Class*>                                         IgnoringStrategies;                                // 0xc8(0x10)
};


// Size 0x18
struct PetCustomiationOverrideMappingEntry
{
public:
	struct FString                                               Identifier;                                        // 0x0(0x10)
	class PetCustomisationOverrideDataAsset*                     OverrideAsset;                                     // 0x10(0x8)
};


// Size 0x1
struct EventWieldablePetPendingDrop
{
public:
	char                                                         DropRequestReason;                                 // 0x0(0x1)
};


// Size 0xc
struct EventPetReactBegun
{
public:
	struct FName                                                 ReactId;                                           // 0x0(0x8)
	char                                                         ReactState;                                        // 0x8(0x1)
};


// Size 0x8
struct WieldablePetDropTimeout
{
public:
	char                                                         RequestReason;                                     // 0x0(0x1)
	float                                                        DropDelay;                                         // 0x4(0x4)
};


// Size 0x38
struct PetsServiceParams
{
public:
	uint32                                                       MaximumDistanceFromOwner;                          // 0x0(0x4)
	uint32                                                       ProximityRadius;                                   // 0x4(0x4)
	int                                                          MaxPetsInProximity;                                // 0x8(0x4)
	float                                                        RespawnRequestTimeout;                             // 0xc(0x4)
	float                                                        SpawnTimeDelay;                                    // 0x10(0x4)
	float                                                        MinPetProximityLifespan;                           // 0x14(0x4)
	float                                                        MaxPetProximityLifespan;                           // 0x18(0x4)
	float                                                        MinPetProximityRespawnDelay;                       // 0x1c(0x4)
	float                                                        MaxPetProximityRespawnDelay;                       // 0x20(0x4)
	float                                                        HeldPetDespawnDelay;                               // 0x24(0x4)
	TArray<class Class*>                                         IllegalShipsSizesForSpawn;                         // 0x28(0x10)
};


// Size 0x20
struct PetNotFedTelemetryEvent
{
public:
	struct FString                                               IgnoringPlayerId;                                  // 0x0(0x10)
	struct Guid                                                  FeedingInteractionId;                              // 0x10(0x10)
};


// Size 0x20
struct PetTurnToFaceData
{
public:
	struct Quat                                                  EndRotation;                                       // 0x0(0x10)
	float                                                        RotationTime;                                      // 0x10(0x4)
};


// Size 0x8
struct PetFeedingAnimationData
{
public:
	char                                                         AnimationState;                                    // 0x0(0x1)
	float                                                        AnimationTimeout;                                  // 0x4(0x4)
};


// Size 0x8
struct EventPetInfoAssigned
{
public:
	class ItemInfo*                                              PetInfo;                                           // 0x0(0x8)
};


// Size 0x10
struct EventPetSpawnedForShip
{
public:
	class Pawn*                                                  LinkedPet;                                         // 0x0(0x8)
	class Actor*                                                 LinkedShip;                                        // 0x8(0x8)
};


// Size 0x18
struct EventPetNotFed
{
public:
	class Actor*                                                 FeedingActor;                                      // 0x10(0x8)
};


// Size 0x8
struct EventPetEndPlay
{
public:
	class Pawn*                                                  LinkedPet;                                         // 0x0(0x8)
};


// Size 0x8
struct PetBaseTelemetryFragmentInput
{
public:
	class Actor*                                                 PetInfo;                                           // 0x0(0x8)
};


// Size 0x38
struct PetListingTypeEntry
{
public:
	struct StringAssetReference                                  PetPartsCategory;                                  // 0x0(0x10)
	struct StringClassReference                                  PetType;                                           // 0x10(0x10)
	struct FName                                                 FeatureToggleName;                                 // 0x20(0x8)
	struct FString                                               PetListingName;                                    // 0x28(0x10)
};


// Size 0x20
struct EventPetFed
{
public:
	class Actor*                                                 FedWithActor;                                      // 0x10(0x8)
	class Actor*                                                 FeedingActor;                                      // 0x18(0x8)
};


// Size 0x8
struct EventPetDropped
{
public:
	class Actor*                                                 PetInfo;                                           // 0x0(0x8)
};


// Size 0x3
struct PetDangerHearingThreatResponse
{
public:
	char                                                         Type;                                              // 0x0(0x1)
	char                                                         IgnoredTarget;                                     // 0x1(0x1)
	bool                                                         InvertIgnoredTarget;                               // 0x2(0x1)
};


// Size 0xb8
struct PetHangoutSpotParams
{
public:
	class UClass*                                                PetType;                                           // 0x0(0x8)
	struct FloatRange                                            HangoutTime;                                       // 0x8(0x10)
	struct WeightedPetAnimationSelector                          AnimationSelector;                                 // 0x18(0xa0)
};


// Size 0x1
struct EventPetUGCBlockStateChanged
{
public:
	bool                                                         IsPetUGCBlocked;                                   // 0x0(0x1)
};


// Size 0x40
struct PetSpawnActionStateParams
{
public:
	float                                                        LandingHeight;                                     // 0x0(0x4)
	float                                                        LandingTime;                                       // 0x4(0x4)
	float                                                        TotalGhostShaderTime;                              // 0x8(0x4)
	float                                                        TimeToTriggerVFX;                                  // 0xc(0x4)
	class Object*                                                SpawnVFX;                                          // 0x10(0x8)
	struct LinearColor                                           SpawnVFXColour;                                    // 0x18(0x10)
	class WwiseEvent*                                            SpawnSFX;                                          // 0x28(0x8)
	class WwiseEvent*                                            StopSpawnSFX;                                      // 0x30(0x8)
	float                                                        TotalSpawningTime;                                 // 0x38(0x4)
};


// Size 0x30
struct PetFedTelemetryEvent
{
public:
	struct FString                                               FedWithItemId;                                     // 0x0(0x10)
	struct FString                                               FeedingPlayerId;                                   // 0x10(0x10)
	struct Guid                                                  FeedingInteractionId;                              // 0x20(0x10)
};


// Size 0x40
struct PetDespawnActionStateParams
{
public:
	float                                                        TakeOffHeight;                                     // 0x0(0x4)
	float                                                        TakeOffTime;                                       // 0x4(0x4)
	float                                                        TotalGhostShaderTime;                              // 0x8(0x4)
	float                                                        TimeToTriggerVFX;                                  // 0xc(0x4)
	class Object*                                                DespawnVFX;                                        // 0x10(0x8)
	struct LinearColor                                           DespawnVFXColour;                                  // 0x18(0x10)
	class WwiseEvent*                                            DespawnSFX;                                        // 0x28(0x8)
	class WwiseEvent*                                            StopDespawnSFX;                                    // 0x30(0x8)
	float                                                        TotalDespawningTime;                               // 0x38(0x4)
};


// Size 0x1
struct EventWieldablePetHungerStateUpdated
{
public:
	char                                                         NewState;                                          // 0x0(0x1)
};


// Size 0x18
struct EventPetRefusedFood
{
public:
	class Actor*                                                 FeedingActor;                                      // 0x10(0x8)
};


// Size 0x1
struct PetPickedUpTelemetryEvent
{
public:
	bool                                                         IsOnPerch;                                         // 0x0(0x1)
};


// Size 0x8
struct EventPetLeftHangout
{
public:
	class Actor*                                                 Pet;                                               // 0x0(0x8)
};


// Size 0x20
struct EventWieldablePetPutOnPerch
{
public:
	class Actor*                                                 Pet;                                               // 0x0(0x8)
	struct FName                                                 HangoutSpotName;                                   // 0x8(0x8)
	uint32                                                       HangoutSpotIndex;                                  // 0x10(0x4)
	class Actor*                                                 WieldingActor;                                     // 0x14(0x8)
};


// Size 0x28
struct WieldablePetPutOnPerchTelemetryEvent
{
public:
	struct FString                                               HangoutSpotName;                                   // 0x0(0x10)
	uint32                                                       HangoutSpotIndex;                                  // 0x10(0x4)
	struct FString                                               WieldingActorTelemetrySubjectId;                   // 0x18(0x10)
};


// Size 0x20
struct PetRelationship
{
public:
	class PetItemInfo*                                           PetInfo;                                           // 0x0(0x8)
};


// Size 0x30
struct PetBaseTelemetryFragment
{
public:
	struct FString                                               OwnerId;                                           // 0x0(0x10)
	struct FString                                               PetPartId;                                         // 0x10(0x10)
	char                                                         CurrentPetRepresentation;                          // 0x20(0x1)
	struct Vector                                                PetLocation;                                       // 0x24(0xc)
};


// Size 0x8
struct EventPetOwnerAssigned
{
public:
	class Actor*                                                 Owner;                                             // 0x0(0x8)
};


// Size 0x10
struct WieldablePetFoodSourceEntry
{
public:
	class Actor*                                                 FoodSourceActor;                                   // 0x0(0x8)
	float                                                        TimeUntilConsumption;                              // 0x8(0x4)
};


// Size 0x10
struct EventPetFoodBase
{
public:
	struct Guid                                                  FeedingInteractionId;                              // 0x0(0x10)
};


// Size 0x8
struct RespawnPetEvent
{
public:
	class Actor*                                                 PetOwner;                                          // 0x0(0x8)
};


// Size 0x8
struct WieldablePetHungerAnimationData
{
public:
	char                                                         AnimState;                                         // 0x0(0x1)
	float                                                        AnimTimeout;                                       // 0x4(0x4)
};


// Size 0x18
struct PetReactedTelemetryEvent
{
public:
	struct FString                                               ReactId;                                           // 0x0(0x10)
	char                                                         AnimationState;                                    // 0x10(0x1)
};


// Size 0x28
struct PetCustomisation
{
public:
	struct FString                                               DefaultPetName;                                    // 0x0(0x10)
	struct FString                                               PetName;                                           // 0x10(0x10)
	struct AIPartId                                              PetPartId;                                         // 0x20(0x8)
};


// Size 0x10
struct EventPetReactCancellation
{
public:
	class Actor*                                                 ReactSource;                                       // 0x0(0x8)
	struct FName                                                 ReactId;                                           // 0x8(0x8)
};


// Size 0x14
struct EventPetReactedToFood
{
public:
	char                                                         ReactionType;                                      // 0x10(0x1)
};


// Size 0x8
struct PetControllerSetTickOrderEvent
{
public:
	class Actor*                                                 Actor;                                             // 0x0(0x8)
};


// Size 0x8
struct EventPetDismissed
{
public:
	class Actor*                                                 DismissingActor;                                   // 0x0(0x8)
};


// Size 0x28
struct HangoutSpotParams
{
public:
	struct FName                                                 HangoutSpotName;                                   // 0x0(0x8)
	float                                                        Weight;                                            // 0x8(0x4)
	TArray<struct PetHangoutSpotParams>                          PetParams;                                         // 0x10(0x10)
	struct FName                                                 FeatureName;                                       // 0x20(0x8)
};


// Size 0x38
struct PetFeedingParams
{
public:
	struct PetFeedingAnimationData                               EatingAnimData;                                    // 0x0(0x8)
	struct PetFeedingAnimationData                               FedAnimData;                                       // 0x8(0x8)
	struct PetFeedingAnimationData                               NotFedAnimData;                                    // 0x10(0x8)
	struct PetFeedingAnimationData                               SickAnimData;                                      // 0x18(0x8)
	struct PetFeedingAnimationData                               RefusalAnimData;                                   // 0x20(0x8)
	float                                                        TimeToStartEating;                                 // 0x28(0x4)
	float                                                        TimeUntilGivingUp;                                 // 0x2c(0x4)
	float                                                        DistToleranceSquared;                              // 0x30(0x4)
	float                                                        RotationTolerance;                                 // 0x34(0x4)
};


// Size 0x20
struct PetDangerHearingThreat
{
public:
	struct FName                                                 SoundTag;                                          // 0x0(0x8)
	float                                                        TimeBeforeForgotten;                               // 0x8(0x4)
	TArray<struct PetDangerHearingThreatResponse>                Responses;                                         // 0x10(0x10)
};


// Size 0x80
struct HangoutSpotPosition
{
public:
	struct HangoutSpotId                                         Id;                                                // 0x0(0x8)
	struct Transform                                             Transform;                                         // 0x10(0x30)
	char                                                         RotationMode;                                      // 0x40(0x1)
	char                                                         ShipDeck;                                          // 0x41(0x1)
	class Pawn*                                                  Occupier;                                          // 0x48(0x8)
	bool                                                         IsPerch;                                           // 0x60(0x1)
	bool                                                         NeedOverrideInteractionPoint;                      // 0x61(0x1)
	struct Vector                                                OverrideInteractionPointPosition;                  // 0x64(0xc)
	bool                                                         BlockPetEmoteReactions;                            // 0x70(0x1)
	bool                                                         IgnorePickupFromHangoutTooltipDisplayOffset;       // 0x71(0x1)
};


