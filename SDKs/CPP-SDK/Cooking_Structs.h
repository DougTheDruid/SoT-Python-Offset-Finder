#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct OnItemStartedCooking
{
public:
	char                                                         pad0x10_JJG89[0x10];                               // 0x0(0x10)
};


// Size 0xc
struct CookingInfo
{
public:
	char                                                         pad0xc_2OXPF[0xc];                                 // 0x0(0xc)
};


// Size 0x30
struct CookStartTelemetryEvent
{
public:
	struct FString                                               ItemName;                                          // 0x0(0x10)
	char                                                         CookState;                                         // 0x10(0x1)
	char                                                         pad0x3_S50H7[0x3];                                 // 0x11(0x3)
	struct Vector                                                Location;                                          // 0x14(0xc)
	struct Guid                                                  CookId;                                            // 0x20(0x10)
};


// Size 0x68
struct CookingClientRepresentation
{
public:
	bool                                                         Cooking;                                           // 0x0(0x1)
	bool                                                         HasItem;                                           // 0x1(0x1)
	char                                                         pad0x6_IO2O3[0x6];                                 // 0x2(0x6)
	class ItemInfo*                                              CurrentlyCookingItem;                              // 0x8(0x8)
	struct FText                                                 CurrentCookingItemDisplayName;                     // 0x10(0x38)
	class UClass*                                                CurrentCookingItemCategory;                        // 0x48(0x8)
	char                                                         SmokeFeedbackLevel;                                // 0x50(0x1)
	char                                                         pad0x3_6C8MX[0x3];                                 // 0x51(0x3)
	float                                                        VisibleCookedExtent;                               // 0x54(0x4)
	float                                                        CurrentItemPlacementAngle;                         // 0x58(0x4)
	struct FName                                                 CurrentCookableTypeName;                           // 0x5c(0x8)
	char                                                         pad0x4_DT365[0x4];                                 // 0x64(0x4)
};


// Size 0x8
struct CookableComponentSmokeFeedbackTimingEntry
{
public:
	float                                                        StateDuration;                                     // 0x0(0x4)
	char                                                         StateFeedbackLevel;                                // 0x4(0x1)
	char                                                         pad0x3_71NWW[0x3];                                 // 0x5(0x3)
};


// Size 0x10
struct OnPlacedItemInCookingPot
{
public:
	class Actor*                                                 Interactor;                                        // 0x0(0x8)
	class ItemInfo*                                              ItemToCook;                                        // 0x8(0x8)
};


// Size 0x30
struct CookEndTelemetryEvent
{
public:
	struct FString                                               ItemName;                                          // 0x0(0x10)
	char                                                         CookState;                                         // 0x10(0x1)
	char                                                         pad0x3_EE94C[0x3];                                 // 0x11(0x3)
	struct Vector                                                Location;                                          // 0x14(0xc)
	struct Guid                                                  CookId;                                            // 0x20(0x10)
};


// Size 0x1
struct OnItemStoppedCooking
{
public:
	char                                                         pad0x1_0R40N[0x1];                                 // 0x0(0x1)
};


// Size 0x8
struct OnRemovedItemFromCookingPot
{
public:
	class Actor*                                                 Interactor;                                        // 0x0(0x8)
};


// Size 0x10
struct CookerSmokeFeedbackEntry
{
public:
	char                                                         FeedbackLevel;                                     // 0x0(0x1)
	char                                                         pad0x7_LT533[0x7];                                 // 0x1(0x7)
	class ParticleSystem*                                        SmokeVFX;                                          // 0x8(0x8)
};


// Size 0x18
struct EventActorStoppedCooking
{
public:
	struct FString                                               FoodType;                                          // 0x0(0x10)
	char                                                         InitialCookingState;                               // 0x10(0x1)
	char                                                         EndCookingState;                                   // 0x11(0x1)
	char                                                         pad0x6_44P37[0x6];                                 // 0x12(0x6)
};


