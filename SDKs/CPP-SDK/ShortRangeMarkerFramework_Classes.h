// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58 (Full Size[0x420] - InheritedSize[0x3c8]
class ShortRangeMarker: public Actor
{
public:
	char                                                         pad0x10_H6EUL[0x10];                               // 0x3c8(0x10)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x3d8(0x10)
	float                                                        LifetimerTimer;                                    // 0x3e8(0x4)
	float                                                        FadeTimer;                                         // 0x3ec(0x4)
	TArray<Weakclass CachedActors>                               CachedActors;                                      // 0x410(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShortRangeMarkerInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShortRangeMarkerBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ShortRangeMarkerDataAsset: public DataAsset
{
public:
	class ActorSpawnData*                                        RewardMarker;                                      // 0x28(0x8)
	float                                                        RewardMarkerHeight;                                // 0x30(0x4)
	char                                                         pad0x4_ARN7W[0x4];                                 // 0x34(0x4)
};


}