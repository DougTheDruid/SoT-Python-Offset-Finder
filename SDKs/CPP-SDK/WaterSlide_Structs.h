// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct WaterSlideParams
{
public:
	float                                                        ForwardSpeed;                                      // 0x0(0x4)
	float                                                        IncreaseForwardSpeedMultiplier;                    // 0x4(0x4)
	float                                                        DecreaseForwardSpeedMultiplier;                    // 0x8(0x4)
	float                                                        VeeringSpeed;                                      // 0xc(0x4)
	float                                                        LeftVeeringDistance;                               // 0x10(0x4)
	float                                                        RightVeeringDistance;                              // 0x14(0x4)
	Struct PlayerStat                                            StatToFireForRouteChange;                          // 0x18(0x4)
	char                                                         pad0x4_SJ21Z[0x4];                                 // 0x1c(0x4)
	Class ParticleSystem*                                        PlayerSplashingVFXOverride;                        // 0x20(0x8)
};


// Size 0x38
struct WaterSlideActionStateConstructionInfo
{
public:
	Class SceneComponent*                                        SceneComponent;                                    // 0x30(0x8)
};


// Size 0x24
struct WaterSlideActionStateParams
{
public:
	float                                                        ForcedFieldOfView;                                 // 0x0(0x4)
	bool                                                         ForceStash;                                        // 0x4(0x1)
	char                                                         pad0x3_RB4IK[0x3];                                 // 0x5(0x3)
	Struct LookAtOffsetParams                                    LookAtOffsetParams;                                // 0x8(0x1c)
};


// Size 0xc
struct OnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
public:
};


// Size 0x10
struct OnPlayerChangedWaterSlideRouteActionStateEvent
{
public:
	Class WwiseEvent*                                            WaterSlideChangeForkOneShot;                       // 0x8(0x8)
};


// Size 0x18
struct OnEndWaterSlideActionStateEvent
{
public:
	Class WwiseEvent*                                            WaterSlideEnd;                                     // 0x8(0x8)
	Class WwiseEvent*                                            WaterSlideIsEndOneShot;                            // 0x10(0x8)
};


// Size 0x10
struct OnStartWaterSlideActionStateEvent
{
public:
	Class WwiseEvent*                                            WaterSlideStart;                                   // 0x0(0x8)
	Class ParticleSystem*                                        WaterSlideVfxOverride;                             // 0x8(0x8)
};


// Size 0x1
struct OnExitedWaterSlideEvent
{
public:
};


}