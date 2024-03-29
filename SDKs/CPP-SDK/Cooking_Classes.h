#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Cooking_Structs.h"


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class BurntItemConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CookingStatusPublisherInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CookingStateInterface: public Interface
{
public:
};


// Size 0x78 (Full Size[0xa0] - InheritedSize[0x28]
class CookingComponentAudioParams: public DataAsset
{
public:
	class WwiseObjectPoolWrapper*                                CookingPool;                                       // 0x28(0x8)
	struct Vector                                                EmitterOffsetVector;                               // 0x30(0xc)
	char                                                         pad0x4_JUF8R[0x4];                                 // 0x3c(0x4)
	class WwiseEvent*                                            FoodPlaceInPot;                                    // 0x40(0x8)
	class WwiseEvent*                                            CookingStart;                                      // 0x48(0x8)
	class WwiseEvent*                                            CookingStop;                                       // 0x50(0x8)
	struct FName                                                 CookingTypeSwitchGroup;                            // 0x58(0x8)
	struct FName                                                 CookingTypeSizzle;                                 // 0x60(0x8)
	struct FName                                                 CookingTypeSimmer;                                 // 0x68(0x8)
	struct FName                                                 FoodTypeSwitchGroup;                               // 0x70(0x8)
	struct FName                                                 FoodTypeFruit;                                     // 0x78(0x8)
	struct FName                                                 FoodTypeMeat;                                      // 0x80(0x8)
	struct FName                                                 FoodTypeRareMeat;                                  // 0x88(0x8)
	struct FName                                                 FoodCookedAmount;                                  // 0x90(0x8)
	float                                                        MaxCookingRtpcAmount;                              // 0x98(0x4)
	char                                                         pad0x4_6EQRS[0x4];                                 // 0x9c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PottableInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class HasRequiredCookingStateStatCondition: public TargetedStatCondition
{
public:
	char                                                         RequiredState;                                     // 0x30(0x1)
	char                                                         pad0x7_6B7MA[0x7];                                 // 0x31(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MixableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CookingDefaultsInterface: public Interface
{
public:
};


// Size 0x180 (Full Size[0x248] - InheritedSize[0xc8]
class CookerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_ZN7CD[0x8];                                 // 0xc8(0x8)
	TArray<struct Status>                                        StatusToApplyToContents;                           // 0xd0(0x10)
	TArray<struct CookerSmokeFeedbackEntry>                      VFXFeedback;                                       // 0xe0(0x10)
	class StaticMeshMemoryConstraintComponent*                   CookableStaticMeshComponent;                       // 0xf0(0x8)
	class SkeletalMeshMemoryConstraintComponent*                 CookableSkeletalMeshComponent;                     // 0xf8(0x8)
	struct FName                                                 CookedMaterialParameterName;                       // 0x100(0x8)
	struct FName                                                 BurnDownDirectionParameterName;                    // 0x108(0x8)
	float                                                        PlacementVarianceAngleBound;                       // 0x110(0x4)
	bool                                                         OnByDefault;                                       // 0x114(0x1)
	char                                                         pad0x3_J21AO[0x3];                                 // 0x115(0x3)
	class CookingComponentAudioParams*                           AudioParams;                                       // 0x118(0x8)
	char                                                         VfxLocation;                                       // 0x120(0x1)
	char                                                         pad0x7_YIPAA[0x7];                                 // 0x121(0x7)
	class ItemInfo*                                              CurrentlyCookingItem;                              // 0x128(0x8)
	struct CookingClientRepresentation                           CookingState;                                      // 0x130(0x68)
	class ParticleSystemComponent*                               SmokeParticleComponent;                            // 0x198(0x8)
	class MaterialInstanceDynamic*                               VisibleCookableMaterial;                           // 0x1a0(0x8)
	bool                                                         TurnedOn;                                          // 0x1a8(0x1)
	bool                                                         OnIsland;                                          // 0x1a9(0x1)
	char                                                         pad0x9e_P0ECK[0x9e];                               // 0x1aa(0x9e)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CookableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class CookItemConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class CookItemFromRawConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class BurntItemOnShipConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class CookableComponent: public ActorComponent
{
public:
	char                                                         pad0x20_78XUB[0x20];                               // 0xc8(0x20)
	class UClass*                                                NextCookState;                                     // 0xe8(0x8)
	float                                                        TimeToNextCookState;                               // 0xf0(0x4)
	char                                                         pad0x4_HDBHX[0x4];                                 // 0xf4(0x4)
	TArray<struct CookableComponentSmokeFeedbackTimingEntry>     SmokeFeedbackLevels;                               // 0xf8(0x10)
	class CurveFloat*                                            VisibleCookedExtentOverTime;                       // 0x108(0x8)
	float                                                        DefaultVisibleCookedExtent;                        // 0x110(0x4)
	struct FName                                                 CookableTypeName;                                  // 0x114(0x8)
	struct PlayerStat                                            CookedStat;                                        // 0x11c(0x4)
	struct PlayerStat                                            ShipCookedStat;                                    // 0x120(0x4)
	char                                                         CookingState;                                      // 0x124(0x1)
	char                                                         InitialCookingState;                               // 0x125(0x1)
	char                                                         RemovedCookingState;                               // 0x126(0x1)
	bool                                                         IgnoreCookedFromRawStats;                          // 0x127(0x1)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CookerInterface: public Interface
{
public:
};


// Size 0x1e0 (Full Size[0x5e0] - InheritedSize[0x400]
class CookingPot: public InteractableBase
{
public:
	char                                                         pad0x8_H2MTJ[0x8];                                 // 0x400(0x8)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0x408(0x8)
	class ActionRulesInteractableComponent*                      InteractableComponent;                             // 0x410(0x8)
	class CookerComponent*                                       CookerComponent;                                   // 0x418(0x8)
	float                                                        HoldToInteractTime;                                // 0x420(0x4)
	char                                                         pad0x4_4XFSI[0x4];                                 // 0x424(0x4)
	struct FText                                                 NotWieldingCookableItemTooltip;                    // 0x428(0x38)
	struct FText                                                 WieldingCookableItemTooltip;                       // 0x460(0x38)
	struct FText                                                 TakeItemTooltip;                                   // 0x498(0x38)
	struct FText                                                 CannotTakeItemTooltip;                             // 0x4d0(0x38)
	struct FText                                                 MixInItemTooltip;                                  // 0x508(0x38)
	char                                                         pad0xa0_PACA1[0xa0];                               // 0x540(0xa0)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class PottableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_2NVLL[0x8];                                 // 0xc8(0x8)
	bool                                                         CanBePutInPot;                                     // 0xd0(0x1)
	char                                                         pad0x7_X1LL0[0x7];                                 // 0xd1(0x7)
};


