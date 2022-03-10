namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class ShortRangeMarker: public Actor
{
public:
	TArray<class DynamicMaterials*>                    DynamicMaterials                                   // 0x3e0(0x10)
	float                                              LifetimerTimer                                     // 0x3f0(0x4)
	float                                              FadeTimer                                          // 0x3f4(0x4)
	TArray<Weakclass TriggerFadeOut>                   CachedActors                                       // 0x418(0x10)
};


// Size 0x0
class ShortRangeMarkerInterface: public Interface
{
public:
};


// Size 0x0
class ShortRangeMarkerBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class ShortRangeMarkerDataAsset: public DataAsset
{
public:
	Class ActorSpawnData*                              RewardMarker                                       // 0x28(0x8)
	float                                              RewardMarkerHeight                                 // 0x30(0x4)
};


}