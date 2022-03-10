namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class PetCustomisation: public None
{
public:
	Struct FString                                     PetName                                            // 0x0(0x10)
	Struct AIPartId                                    PetPartId                                          // 0x10(0x8)
};


// Size 0x8
class HangoutSpotId: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
};


// Size 0x20
class PetTurnToFaceData: public None
{
public:
	Struct Quat                                        EndRotation                                        // 0x0(0x10)
	float                                              RotationTime                                       // 0x10(0x4)
};


// Size 0x3
class PetDangerHearingThreatResponse: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	byte                                               IgnoredTarget                                      // 0x1(0x1)
	bool                                               InvertIgnoredTarget                                // 0x2(0x1)
};


// Size 0x28
class HangoutSpotParams: public None
{
public:
	struct FName                                       HangoutSpotName                                    // 0x0(0x8)
	float                                              Weight                                             // 0x8(0x4)
	TArray<Struct PetHangoutSpotParams>                PetParams                                          // 0x10(0x10)
	struct FName                                       FeatureName                                        // 0x20(0x8)
};


// Size 0xb8
class PetHangoutSpotParams: public None
{
public:
	class                                              PetType                                            // 0x0(0x8)
	Struct FloatRange                                  HangoutTime                                        // 0x8(0x10)
	Struct WeightedPetAnimationSelector                AnimationSelector                                  // 0x18(0xa0)
};


// Size 0x18
class PetCustomiationOverrideMappingEntry: public None
{
public:
	Struct FString                                     Identifier                                         // 0x0(0x10)
	Class PetCustomisationOverrideDataAsset*           OverrideAsset                                      // 0x10(0x8)
};


// Size 0x20
class PetDangerHearingThreat: public None
{
public:
	struct FName                                       SoundTag                                           // 0x0(0x8)
	float                                              TimeBeforeForgotten                                // 0x8(0x4)
	TArray<Struct TimeBeforeForgotten>                 Responses                                          // 0x10(0x10)
};


// Size 0x38
class PetFeedingParams: public None
{
public:
	Struct PetFeedingAnimationData                     EatingAnimData                                     // 0x0(0x8)
	Struct PetFeedingAnimationData                     FedAnimData                                        // 0x8(0x8)
	Struct PetFeedingAnimationData                     NotFedAnimData                                     // 0x10(0x8)
	Struct PetFeedingAnimationData                     SickAnimData                                       // 0x18(0x8)
	Struct PetFeedingAnimationData                     RefusalAnimData                                    // 0x20(0x8)
	float                                              TimeToStartEating                                  // 0x28(0x4)
	float                                              TimeUntilGivingUp                                  // 0x2c(0x4)
	float                                              DistToleranceSquared                               // 0x30(0x4)
	float                                              RotationTolerance                                  // 0x34(0x4)
};


// Size 0x8
class PetFeedingAnimationData: public None
{
public:
	byte                                               AnimationState                                     // 0x0(0x1)
	float                                              AnimationTimeout                                   // 0x4(0x4)
};


// Size 0x80
class HangoutSpotPosition: public None
{
public:
	Struct HangoutSpotId                               Id                                                 // 0x0(0x8)
	Struct Transform                                   Transform                                          // 0x10(0x30)
	byte                                               RotationMode                                       // 0x40(0x1)
	byte                                               ShipDeck                                           // 0x41(0x1)
	Class Pawn*                                        Occupier                                           // 0x48(0x8)
	bool                                               IsPerch                                            // 0x60(0x1)
	bool                                               NeedOverrideInteractionPoint                       // 0x61(0x1)
	Struct Vector                                      OverrideInteractionPointPosition                   // 0x64(0xc)
	bool                                               BlockPetEmoteReactions                             // 0x70(0x1)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset        // 0x71(0x1)
};


// Size 0x38
class PetListingTypeEntry: public None
{
public:
	Struct StringAssetReference                        PetPartsCategory                                   // 0x0(0x10)
	Struct StringClassReference                        PetType                                            // 0x10(0x10)
	struct FName                                       FeatureToggleName                                  // 0x20(0x8)
	Struct FString                                     PetListingName                                     // 0x28(0x10)
};


// Size 0x38
class PetsServiceParams: public None
{
public:
	int                                                MaxPetsInProximity                                 // 0x8(0x4)
	float                                              RespawnRequestTimeout                              // 0xc(0x4)
	float                                              SpawnTimeDelay                                     // 0x10(0x4)
	float                                              MinPetProximityLifespan                            // 0x14(0x4)
	float                                              MaxPetProximityLifespan                            // 0x18(0x4)
	float                                              MinPetProximityRespawnDelay                        // 0x1c(0x4)
	float                                              MaxPetProximityRespawnDelay                        // 0x20(0x4)
	float                                              HeldPetDespawnDelay                                // 0x24(0x4)
	TArray<Class HeldPetDespawnDelay>                  IllegalShipsSizesForSpawn                          // 0x28(0x10)
};


// Size 0x20
class PetRelationship: public None
{
public:
	Class PetItemInfo*                                 PetInfo                                            // 0x0(0x8)
};


// Size 0xd8
class ReactStateMapping: public None
{
public:
	struct FName                                       AnimationID                                        // 0x0(0x8)
	bool                                               CanTimeout                                         // 0x8(0x1)
	float                                              AnimationTimeout                                   // 0xc(0x4)
	Struct WeightedPetAnimationSelector                PetStateSelector                                   // 0x10(0xa0)
	float                                              AnimationChance                                    // 0xb0(0x4)
	Struct FloatRange                                  AnimationDelay                                     // 0xb4(0x10)
	TArray<Class AnimationDelay>                       IgnoringStrategies                                 // 0xc8(0x10)
};


// Size 0x1
class EventWieldablePetPendingDrop: public None
{
public:
	byte                                               DropRequestReason                                  // 0x0(0x1)
};


// Size 0x8
class WieldablePetDropTimeout: public None
{
public:
	byte                                               RequestReason                                      // 0x0(0x1)
	float                                              DropDelay                                          // 0x4(0x4)
};


// Size 0x10
class WieldablePetFoodSourceEntry: public None
{
public:
	Class Actor*                                       FoodSourceActor                                    // 0x0(0x8)
	float                                              TimeUntilConsumption                               // 0x8(0x4)
};


// Size 0x8
class WieldablePetHungerAnimationData: public None
{
public:
	byte                                               AnimState                                          // 0x0(0x1)
	float                                              AnimTimeout                                        // 0x4(0x4)
};


// Size 0x1
class EventNewPetThreatDetected: public None
{
public:
};


// Size 0x8
class EventPetDismissed: public None
{
public:
	Class Actor*                                       DismissingActor                                    // 0x0(0x8)
};


// Size 0x1
class DismissPetNotificationEvent: public None
{
public:
};


// Size 0x18
class EventPetRefusedFood: public None
{
public:
	Class Actor*                                       FeedingActor                                       // 0x10(0x8)
};


// Size 0x10
class EventPetFoodBase: public None
{
public:
	Struct Guid                                        FeedingInteractionId                               // 0x0(0x10)
};


// Size 0x14
class EventPetReactedToFood: public None
{
public:
	byte                                               ReactionType                                       // 0x10(0x1)
};


// Size 0x18
class EventPetNotFed: public None
{
public:
	Class Actor*                                       FeedingActor                                       // 0x10(0x8)
};


// Size 0x20
class EventPetFed: public None
{
public:
	Class Actor*                                       FedWithActor                                       // 0x10(0x8)
	Class Actor*                                       FeedingActor                                       // 0x18(0x8)
};


// Size 0x1
class EventPetPerchSpotEnabledStateChanged: public None
{
public:
};


// Size 0x8
class EventPetLeftHangout: public None
{
public:
	Class Actor*                                       Pet                                                // 0x0(0x8)
};


// Size 0x2
class EventPetEnteredHangout: public None
{
public:
};


// Size 0x1
class EventPetSadnessEnd: public None
{
public:
};


// Size 0x1
class EventPetSadnessBegin: public None
{
public:
};


// Size 0x8
class EventPetOwnerAssigned: public None
{
public:
	Class Actor*                                       Owner                                              // 0x0(0x8)
};


// Size 0x1
class EventPetCustomisationComplete: public None
{
public:
};


// Size 0x10
class EventPetCustomisationReady: public None
{
public:
};


// Size 0x20
class EventWieldablePetPutOnPerch: public None
{
public:
	Class Actor*                                       Pet                                                // 0x0(0x8)
	struct FName                                       HangoutSpotName                                    // 0x8(0x8)
};


// Size 0x1
class EventPetDropped: public None
{
public:
};


// Size 0x1
class EventPetPickedUp: public None
{
public:
	bool                                               IsOnPerch                                          // 0x0(0x1)
};


// Size 0xc
class EventPetReactBegun: public None
{
public:
	struct FName                                       ReactId                                            // 0x0(0x8)
	byte                                               ReactState                                         // 0x8(0x1)
};


// Size 0x10
class EventPetReactCancellation: public None
{
public:
	Class Actor*                                       ReactSource                                        // 0x0(0x8)
	struct FName                                       ReactId                                            // 0x8(0x8)
};


// Size 0x10
class EventPetReactRequest: public None
{
public:
	Class Actor*                                       ReactSource                                        // 0x0(0x8)
	struct FName                                       ReactId                                            // 0x8(0x8)
};


// Size 0x8
class RespawnPetEvent: public None
{
public:
	Class Actor*                                       PetOwner                                           // 0x0(0x8)
};


// Size 0x8
class EventPetEndPlay: public None
{
public:
	Class Pawn*                                        LinkedPet                                          // 0x0(0x8)
};


// Size 0x10
class EventPetSpawnedForShip: public None
{
public:
	Class Pawn*                                        LinkedPet                                          // 0x0(0x8)
	Class Actor*                                       LinkedShip                                         // 0x8(0x8)
};


// Size 0x8
class PetBaseTelemetryFragmentInput: public None
{
public:
};


// Size 0x30
class PetBaseTelemetryFragment: public None
{
public:
	Struct FString                                     OwnerId                                            // 0x0(0x10)
	Struct FString                                     PetPartId                                          // 0x10(0x10)
	byte                                               CurrentPetRepresentation                           // 0x20(0x1)
	Struct Vector                                      PetLocation                                        // 0x24(0xc)
};


// Size 0x28
class WieldablePetPutOnPerchTelemetryEvent: public None
{
public:
	Struct FString                                     HangoutSpotName                                    // 0x0(0x10)
	Struct FString                                     WieldingActorTelemetrySubjectId                    // 0x18(0x10)
};


// Size 0x1
class PetDismissedTelemetryEvent: public None
{
public:
};


// Size 0x20
class PetRefusedFoodTelemetryEvent: public None
{
public:
	Struct FString                                     TryingToFeedPlayerId                               // 0x0(0x10)
	Struct Guid                                        FeedingInteractionId                               // 0x10(0x10)
};


// Size 0x14
class PetReactedToFoodTelemetryEvent: public None
{
public:
	Struct Guid                                        FeedingInteractionId                               // 0x0(0x10)
	byte                                               FeedingReaction                                    // 0x10(0x1)
};


// Size 0x20
class PetNotFedTelemetryEvent: public None
{
public:
	Struct FString                                     IgnoringPlayerId                                   // 0x0(0x10)
	Struct Guid                                        FeedingInteractionId                               // 0x10(0x10)
};


// Size 0x30
class PetFedTelemetryEvent: public None
{
public:
	Struct FString                                     FedWithItemId                                      // 0x0(0x10)
	Struct FString                                     FeedingPlayerId                                    // 0x10(0x10)
	Struct Guid                                        FeedingInteractionId                               // 0x20(0x10)
};


// Size 0x18
class PetReactedTelemetryEvent: public None
{
public:
	Struct FString                                     ReactId                                            // 0x0(0x10)
	byte                                               AnimationState                                     // 0x10(0x1)
};


// Size 0x1
class PetDroppedTelemetryEvent: public None
{
public:
};


// Size 0x1
class PetPickedUpTelemetryEvent: public None
{
public:
	bool                                               IsOnPerch                                          // 0x0(0x1)
};


// Size 0x8
class PetControllerSetTickOrderEvent: public None
{
public:
	Class Actor*                                       Actor                                              // 0x0(0x8)
};


// Size 0xc
class EventPerchHangoutSpotSetEnabledState: public None
{
public:
};


// Size 0x50
class EventHangoutSpotMadeAvailable: public None
{
public:
};


// Size 0x50
class EventHangoutSpotMadeUnavailable: public None
{
public:
};


// Size 0x40
class PetDespawnActionStateParams: public None
{
public:
	float                                              TakeOffHeight                                      // 0x0(0x4)
	float                                              TakeOffTime                                        // 0x4(0x4)
	float                                              TotalGhostShaderTime                               // 0x8(0x4)
	float                                              TimeToTriggerVFX                                   // 0xc(0x4)
	Class Object*                                      DespawnVFX                                         // 0x10(0x8)
	Struct LinearColor                                 DespawnVFXColour                                   // 0x18(0x10)
	Class WwiseEvent*                                  DespawnSFX                                         // 0x28(0x8)
	Class WwiseEvent*                                  StopDespawnSFX                                     // 0x30(0x8)
	float                                              TotalDespawningTime                                // 0x38(0x4)
};


// Size 0x30
class PetSpawnActionStateConstructionInfo: public None
{
public:
};


// Size 0x40
class PetSpawnActionStateParams: public None
{
public:
	float                                              LandingHeight                                      // 0x0(0x4)
	float                                              LandingTime                                        // 0x4(0x4)
	float                                              TotalGhostShaderTime                               // 0x8(0x4)
	float                                              TimeToTriggerVFX                                   // 0xc(0x4)
	Class Object*                                      SpawnVFX                                           // 0x10(0x8)
	Struct LinearColor                                 SpawnVFXColour                                     // 0x18(0x10)
	Class WwiseEvent*                                  SpawnSFX                                           // 0x28(0x8)
	Class WwiseEvent*                                  StopSpawnSFX                                       // 0x30(0x8)
	float                                              TotalSpawningTime                                  // 0x38(0x4)
};


// Size 0x1
class EventWieldablePetHungerStateUpdated: public None
{
public:
	byte                                               NewState                                           // 0x0(0x1)
};


}