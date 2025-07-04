#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x50
struct WaterSlideActionStateConstructionInfo
{
public:
	char                                                         pad0x48_V9R2A[0x48];                               // 0x0(0x48)
	class SceneComponent*                                        SceneComponent;                                    // 0x48(0x8)
};


// Size 0x14
struct RideTransitionActionStateParams
{
public:
	char                                                         pad0x10_MSUYC[0x10];                               // 0x0(0x10)
	float                                                        Duration;                                          // 0x10(0x4)
};


// Size 0x18
struct OnEndZiplineActionStateEvent
{
public:
	class WwiseEvent*                                            ZiplineEnd;                                        // 0x0(0x8)
	class WwiseEvent*                                            ZiplineEndLoop;                                    // 0x8(0x8)
	class WwiseEvent*                                            DetachFromZiplineAdditiveOneShot;                  // 0x10(0x8)
};


// Size 0x30
struct RideTransitionTelemetryEvent
{
public:
	struct FString                                               RideObjectId;                                      // 0x0(0x10)
	struct Vector                                                RideStartLocation;                                 // 0x10(0xc)
	float                                                        AttachAreaSize;                                    // 0x1c(0x4)
	float                                                        MaxDistance;                                       // 0x20(0x4)
	float                                                        AllowedDistance;                                   // 0x24(0x4)
	float                                                        CurrentDistance;                                   // 0x28(0x4)
	bool                                                         IsAllowed;                                         // 0x2c(0x1)
	char                                                         pad0x3_IYNHY[0x3];                                 // 0x2d(0x3)
};


// Size 0x1c
struct ZipLineActionStateParams
{
public:
	struct LookAtOffsetParams                                    LookAtOffsetParams;                                // 0x0(0x1c)
};


// Size 0x60
struct ZiplineActionStateConstructionInfo
{
public:
	char                                                         pad0x48_PF32S[0x48];                               // 0x0(0x48)
	class SceneComponent*                                        SceneComponent;                                    // 0x48(0x8)
	char                                                         MovementDirection;                                 // 0x50(0x1)
	char                                                         InitialSwingDirection;                             // 0x51(0x1)
	char                                                         pad0x6_E5HCN[0x6];                                 // 0x52(0x6)
	double                                                       ZiplineStartSmoothedTime;                          // 0x58(0x8)
};


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
	struct PlayerStat                                            StatToFireForRouteChange;                          // 0x18(0x4)
	char                                                         pad0x4_3W6RK[0x4];                                 // 0x1c(0x4)
	class ParticleSystem*                                        PlayerSplashingVFXOverride;                        // 0x20(0x8)
};


// Size 0x24
struct WaterSlideActionStateParams
{
public:
	float                                                        ForcedFieldOfView;                                 // 0x0(0x4)
	bool                                                         ForceStash;                                        // 0x4(0x1)
	char                                                         pad0x3_RFX8M[0x3];                                 // 0x5(0x3)
	struct LookAtOffsetParams                                    LookAtOffsetParams;                                // 0x8(0x1c)
};


// Size 0x28
struct OnStartZiplineActionStateEvent
{
public:
	class WwiseEvent*                                            ZiplineStart;                                      // 0x0(0x8)
	class WwiseEvent*                                            AttachToZiplineAdditiveOneShot;                    // 0x8(0x8)
	class WwiseEvent*                                            ZiplineLoopStart;                                  // 0x10(0x8)
	class ParticleSystem*                                        ZiplineWindVFX;                                    // 0x18(0x8)
	class ParticleSystem*                                        ZiplineTrailVFX;                                   // 0x20(0x8)
};


// Size 0x310
struct ZiplineFeelParameters
{
public:
	float                                                        MaxSpeed;                                          // 0x0(0x4)
	float                                                        StartingSpeed;                                     // 0x4(0x4)
	float                                                        MinSpeed;                                          // 0x8(0x4)
	float                                                        AccelerationMultiplier;                            // 0xc(0x4)
	float                                                        DecelerationMultiplier;                            // 0x10(0x4)
	char                                                         pad0x4_C0MGE[0x4];                                 // 0x14(0x4)
	struct RuntimeVectorCurve                                    SwingAngleControlDegrees;                          // 0x18(0x170)
	struct RuntimeVectorCurve                                    SwingSpeedControlRPM;                              // 0x188(0x170)
	struct Vector2D                                              WindResistanceMinMaxAngleDegrees;                  // 0x2f8(0x8)
	struct Vector2D                                              FOVMinMaxSpeed;                                    // 0x300(0x8)
	struct Vector2D                                              FOVMinMaxAngleDegrees;                             // 0x308(0x8)
};


// Size 0x10
struct OnStartWaterSlideActionStateEvent
{
public:
	class WwiseEvent*                                            WaterSlideStart;                                   // 0x0(0x8)
	class ParticleSystem*                                        WaterSlideVfxOverride;                             // 0x8(0x8)
};


// Size 0x70
struct RideTransitionActionStateConstructionInfo
{
public:
	char                                                         pad0x48_E5049[0x48];                               // 0x0(0x48)
	class Ride*                                                  Ride;                                              // 0x48(0x8)
	char                                                         Direction;                                         // 0x50(0x1)
	char                                                         pad0x3_6I7UV[0x3];                                 // 0x51(0x3)
	float                                                        Offset;                                            // 0x54(0x4)
	char                                                         pad0x18_56VYF[0x18];                               // 0x58(0x18)
};


// Size 0x1c
struct OnUpdateZiplineActionStateEvent
{
public:
	char                                                         pad0x1c_WGB5Z[0x1c];                               // 0x0(0x1c)
};


// Size 0x1
struct OnExitedRideEvent
{
public:
	char                                                         pad0x1_U89U3[0x1];                                 // 0x0(0x1)
};


// Size 0xc
struct OnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
public:
	char                                                         pad0xc_IPPGM[0xc];                                 // 0x0(0xc)
};


// Size 0x10
struct OnPlayerChangedWaterSlideRouteActionStateEvent
{
public:
	char                                                         pad0x8_BJ0ZL[0x8];                                 // 0x0(0x8)
	class WwiseEvent*                                            WaterSlideChangeForkOneShot;                       // 0x8(0x8)
};


// Size 0x18
struct OnEndWaterSlideActionStateEvent
{
public:
	char                                                         pad0x8_ASFHN[0x8];                                 // 0x0(0x8)
	class WwiseEvent*                                            WaterSlideEnd;                                     // 0x8(0x8)
	class WwiseEvent*                                            WaterSlideIsEndOneShot;                            // 0x10(0x8)
};


