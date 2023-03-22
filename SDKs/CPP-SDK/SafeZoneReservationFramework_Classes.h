// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x140 (Full Size[0x720] - InheritedSize[0x5e0]
class SafeZoneComponent: public CapsuleComponent
{
public:
	char                                                         pad0x10_DGCWG[0x10];                               // 0x5e0(0x10)
	float                                                        ExclusionRadius;                                   // 0x5f0(0x4)
	char                                                         pad0x4_0PNG7[0x4];                                 // 0x5f4(0x4)
	float                                                        ExclusionHeight;                                   // 0x5f8(0x4)
	struct FName                                                 SafeZoneEmptyCollisionProfile;                     // 0x5fc(0x8)
	bool                                                         AutoActivateSafeZone;                              // 0x604(0x1)
	bool                                                         DeactivateSafeZoneAfterExclusionRadiusIsEmpty;     // 0x605(0x1)
	bool                                                         UsePlayerTeleport;                                 // 0x606(0x1)
	char                                                         pad0x1_PQX78[0x1];                                 // 0x607(0x1)
	float                                                        PlayerTeleportRadius;                              // 0x608(0x4)
	char                                                         pad0x4_WLYUU[0x4];                                 // 0x60c(0x4)
	bool                                                         UseRepelForce;                                     // 0x610(0x1)
	char                                                         pad0x3_UVA1A[0x3];                                 // 0x611(0x3)
	float                                                        RepelForceRadius;                                  // 0x614(0x4)
	char                                                         pad0x4_JSCXJ[0x4];                                 // 0x618(0x4)
	float                                                        RepelForceExtents;                                 // 0x61c(0x4)
	float                                                        RepelForceMin;                                     // 0x620(0x4)
	float                                                        RepelForceMax;                                     // 0x624(0x4)
	bool                                                         ApplyRepelForceAtCentreOfMass;                     // 0x628(0x1)
	char                                                         pad0x7_X0SXN[0x7];                                 // 0x629(0x7)
	Struct RuntimeFloatCurve                                     RepelForceGradientCurve;                           // 0x630(0x80)
	bool                                                         UseAngularImpulse;                                 // 0x6b0(0x1)
	char                                                         pad0x3_G2U7T[0x3];                                 // 0x6b1(0x3)
	float                                                        AngularImpulseRadius;                              // 0x6b4(0x4)
	char                                                         pad0x4_BCNX7[0x4];                                 // 0x6b8(0x4)
	float                                                        AngularImpulseForce;                               // 0x6bc(0x4)
	float                                                        TargetDeflectionAngle;                             // 0x6c0(0x4)
	bool                                                         IsSafeZoneEmpty;                                   // 0x6c4(0x1)
	bool                                                         StopAISpawning;                                    // 0x6c5(0x1)
	char                                                         pad0x2_KU74B[0x2];                                 // 0x6c6(0x2)
	struct FName                                                 CurrentCollisionProfile;                           // 0x6c8(0x8)
	byte                                                         SafeZoneState;                                     // 0x6d0(0x1)
	char                                                         pad0x4f_5JIO5[0x4f];                               // 0x6d1(0x4f)
};


}