namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
class CookingInfo: public None
{
public:
};


// Size 0x8
class CookableComponentSmokeFeedbackTimingEntry: public None
{
public:
	float                                              StateDuration                                      // 0x0(0x4)
	byte                                               StateFeedbackLevel                                 // 0x4(0x1)
};


// Size 0x68
class CookingClientRepresentation: public None
{
public:
	bool                                               Cooking                                            // 0x0(0x1)
	bool                                               HasItem                                            // 0x1(0x1)
	Class ItemInfo*                                    CurrentlyCookingItem                               // 0x8(0x8)
	Struct FText                                       CurrentCookingItemDisplayName                      // 0x10(0x38)
	class                                              CurrentCookingItemCategory                         // 0x48(0x8)
	byte                                               SmokeFeedbackLevel                                 // 0x50(0x1)
	float                                              VisibleCookedExtent                                // 0x54(0x4)
	float                                              CurrentItemPlacementAngle                          // 0x58(0x4)
	struct FName                                       CurrentCookableTypeName                            // 0x5c(0x8)
};


// Size 0x10
class CookerSmokeFeedbackEntry: public None
{
public:
	byte                                               FeedbackLevel                                      // 0x0(0x1)
	Class ParticleSystem*                              SmokeVFX                                           // 0x8(0x8)
};


// Size 0x8
class OnRemovedItemFromCookingPot: public None
{
public:
	Class Actor*                                       Interactor                                         // 0x0(0x8)
};


// Size 0x10
class OnPlacedItemInCookingPot: public None
{
public:
	Class Actor*                                       Interactor                                         // 0x0(0x8)
	Class ItemInfo*                                    ItemToCook                                         // 0x8(0x8)
};


// Size 0x10
class OnItemStartedCooking: public None
{
public:
};


// Size 0x1
class OnItemStoppedCooking: public None
{
public:
};


// Size 0x30
class CookEndTelemetryEvent: public None
{
public:
	Struct FString                                     ItemName                                           // 0x0(0x10)
	byte                                               CookState                                          // 0x10(0x1)
	Struct Vector                                      Location                                           // 0x14(0xc)
	Struct Guid                                        CookId                                             // 0x20(0x10)
};


// Size 0x30
class CookStartTelemetryEvent: public None
{
public:
	Struct FString                                     ItemName                                           // 0x0(0x10)
	byte                                               CookState                                          // 0x10(0x1)
	Struct Vector                                      Location                                           // 0x14(0xc)
	Struct Guid                                        CookId                                             // 0x20(0x10)
};


}