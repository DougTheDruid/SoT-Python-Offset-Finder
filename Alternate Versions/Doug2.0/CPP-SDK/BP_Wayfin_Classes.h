namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_Wayfinder_MultiTargetCompass_ItemDesc_C: public ItemDesc
{
public:
};


// Size 0x11
class BP_Wayfinder_MultiTargetCompass_ItemInfo_C: public ItemInfo
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x500(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x508(0x8)
	bool                                               NewVar                                             // 0x510(0x1)
};


// Size 0xb8
class BP_Wayfinder_MultiTargetCompass_Wieldable_C: public PrototypeMultiTargetEnchantedCompass
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x8a0(0x8)
	Class MaterialInstanceDynamic*                     RetargetGlowDynamicMaterial                        // 0x8a8(0x8)
	Struct ObjectMessagingHandle                       OnWieldedHandle                                    // 0x8b0(0x48)
	float                                              MinTrackingDistance                                // 0x8f8(0x4)
	float                                              MaxTrackingDistance                                // 0x8fc(0x4)
	float                                              TargetDistance                                     // 0x900(0x4)
	Struct Vector                                      TargetLocation                                     // 0x904(0xc)
	float                                              TargetYaw                                          // 0x910(0x4)
	float                                              BaseYaw                                            // 0x914(0x4)
	float                                              OutputYaw                                          // 0x918(0x4)
	TArray<Struct V>                                   WobbleCurves                                       // 0x920(0x10)
	TArray<Float None>                                 WobbleTimes                                        // 0x930(0x10)
	Class CurveFloat*                                  SpinCurve                                          // 0x940(0x8)
	float                                              YawVelocity                                        // 0x948(0x4)
	float                                              YawAcceleration                                    // 0x94c(0x4)
	float                                              YawTargetSpeed                                     // 0x950(0x4)
	float                                              YawDamping                                         // 0x954(0x4)
};


}