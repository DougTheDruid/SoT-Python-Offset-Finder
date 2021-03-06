// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class RetractableComponent: public ActorComponent
{
public:
	struct FName                                                 FeatureToggle;                                     // 0xf0(0x8)
	Struct RetractorOrientationAdjustmentFlags                   OrientationAdjustmentOnRetractFlags;               // 0xf8(0x3)
	byte                                                         RetractorBoxAxis;                                  // 0xfb(0x1)
	bool                                                         ShouldAutoReleaseOnSuccessfulRetract;              // 0xfc(0x1)
	bool                                                         MigrateAttachedWithRetractor;                      // 0xfd(0x1)
	bool                                                         WasSimulatingPhysicsBeforeRetract;                 // 0xfe(0x1)
};


// Size 0x0
class RetractorInterface: public Interface
{
public:
};


// Size 0x0
class RetractableInterface: public Interface
{
public:
};


// Size 0x0
class RetractableProviderInterface: public Interface
{
public:
};


// Size 0x10
class RetractableFloatingBarrelComponent: public RetractableComponent
{
public:
};


// Size 0x60
class RetractorComponent: public ActorComponent
{
public:
	Class SceneComponent*                                        RetractDestinationComponent;                       // 0x110(0x8)
	Class SceneComponent*                                        RetractingComponent;                               // 0x118(0x8)
};


}