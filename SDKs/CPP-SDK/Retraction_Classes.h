// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38 (Full Size[0x100] - InheritedSize[0xc8]
class RetractableComponent: public ActorComponent
{
public:
	char                                                         pad0x28_5LZ2K[0x28];                               // 0xc8(0x28)
	struct FName                                                 FeatureToggle;                                     // 0xf0(0x8)
	Struct RetractorOrientationAdjustmentFlags                   OrientationAdjustmentOnRetractFlags;               // 0xf8(0x3)
	byte                                                         RetractorBoxAxis;                                  // 0xfb(0x1)
	bool                                                         ShouldAutoReleaseOnSuccessfulRetract;              // 0xfc(0x1)
	bool                                                         MigrateAttachedWithRetractor;                      // 0xfd(0x1)
	bool                                                         WasSimulatingPhysicsBeforeRetract;                 // 0xfe(0x1)
	char                                                         pad0x3_3VTKQ[0x3];                                 // 0xfd(0x3)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RetractorInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RetractableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RetractableProviderInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x110] - InheritedSize[0x100]
class RetractableFloatingBarrelComponent: public RetractableComponent
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class RetractorComponent: public ActorComponent
{
public:
	char                                                         pad0x48_T9IIT[0x48];                               // 0xc8(0x48)
	Class SceneComponent*                                        RetractDestinationComponent;                       // 0x110(0x8)
	Class SceneComponent*                                        RetractingComponent;                               // 0x118(0x8)
	char                                                         pad0x18_NWK2B[0x18];                               // 0x11e(0x18)
};


}