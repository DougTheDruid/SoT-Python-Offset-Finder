namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ZoomedInOnWieldableItemActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class ZoomInOnWieldableItemInterface: public Interface
{
public:
};


// Size 0x60
class ZoomInOnWieldableItemComponent: public ActorComponent
{
public:
	struct FName                                       FeatureName                                        // 0xd0(0x8)
	float                                              ZoomedInFov                                        // 0xd8(0x4)
	float                                              FreelookPitch                                      // 0xdc(0x4)
	float                                              FreelookYaw                                        // 0xe0(0x4)
	float                                              FreelookOutInterpolationRate                       // 0xe4(0x4)
	float                                              LookSensitivityScaler                              // 0xe8(0x4)
};


}