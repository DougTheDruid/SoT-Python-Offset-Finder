// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
struct Default__ScriptStruct
{
public:
};


// Size 0x10
struct Guid
{
public:
	int                                                          A;                                                 // 0x0(0x4)
	int                                                          B;                                                 // 0x4(0x4)
	int                                                          C;                                                 // 0x8(0x4)
	int                                                          D;                                                 // 0xc(0x4)
};


// Size 0xc
struct Vector
{
public:
	float                                                        X;                                                 // 0x0(0x4)
	float                                                        Y;                                                 // 0x4(0x4)
	float                                                        Z;                                                 // 0x8(0x4)
};


// Size 0x10
struct Vector4
{
public:
	float                                                        X;                                                 // 0x0(0x4)
	float                                                        Y;                                                 // 0x4(0x4)
	float                                                        Z;                                                 // 0x8(0x4)
	float                                                        W;                                                 // 0xc(0x4)
};


// Size 0x8
struct Vector2D
{
public:
	float                                                        X;                                                 // 0x0(0x4)
	float                                                        Y;                                                 // 0x4(0x4)
};


// Size 0x18
struct TwoVectors
{
public:
	Struct Vector                                                v1;                                                // 0x0(0xc)
	Struct Vector                                                v2;                                                // 0xc(0xc)
};


// Size 0x10
struct Plane
{
public:
	float                                                        W;                                                 // 0xc(0x4)
};


// Size 0xc
struct Rotator
{
public:
	float                                                        Pitch;                                             // 0x0(0x4)
	float                                                        Yaw;                                               // 0x4(0x4)
	float                                                        Roll;                                              // 0x8(0x4)
};


// Size 0x10
struct Quat
{
public:
	float                                                        X;                                                 // 0x0(0x4)
	float                                                        Y;                                                 // 0x4(0x4)
	float                                                        Z;                                                 // 0x8(0x4)
	float                                                        W;                                                 // 0xc(0x4)
};


// Size 0x4
struct PackedNormal
{
public:
	byte                                                         X;                                                 // 0x0(0x1)
	byte                                                         Y;                                                 // 0x1(0x1)
	byte                                                         Z;                                                 // 0x2(0x1)
	byte                                                         W;                                                 // 0x3(0x1)
};


// Size 0x8
struct IntPoint
{
public:
	int                                                          X;                                                 // 0x0(0x4)
	int                                                          Y;                                                 // 0x4(0x4)
};


// Size 0xc
struct IntVector
{
public:
	int                                                          X;                                                 // 0x0(0x4)
	int                                                          Y;                                                 // 0x4(0x4)
	int                                                          Z;                                                 // 0x8(0x4)
};


// Size 0x4
struct Color
{
public:
	byte                                                         B;                                                 // 0x0(0x1)
	byte                                                         G;                                                 // 0x1(0x1)
	byte                                                         R;                                                 // 0x2(0x1)
	byte                                                         A;                                                 // 0x3(0x1)
};


// Size 0x10
struct LinearColor
{
public:
	float                                                        R;                                                 // 0x0(0x4)
	float                                                        G;                                                 // 0x4(0x4)
	float                                                        B;                                                 // 0x8(0x4)
	float                                                        A;                                                 // 0xc(0x4)
};


// Size 0x1c
struct Box
{
public:
	Struct Vector                                                Min;                                               // 0x0(0xc)
	Struct Vector                                                Max;                                               // 0xc(0xc)
	byte                                                         IsValid;                                           // 0x18(0x1)
};


// Size 0x14
struct Box2D
{
public:
	Struct Vector2D                                              Min;                                               // 0x0(0x8)
	Struct Vector2D                                              Max;                                               // 0x8(0x8)
	byte                                                         IsValid;                                           // 0x10(0x1)
};


// Size 0x1c
struct BoxSphereBounds
{
public:
	Struct Vector                                                Origin;                                            // 0x0(0xc)
	Struct Vector                                                BoxExtent;                                         // 0xc(0xc)
	float                                                        SphereRadius;                                      // 0x18(0x4)
};


// Size 0x3c
struct OrientedBox
{
public:
	Struct Vector                                                Center;                                            // 0x0(0xc)
	Struct Vector                                                AxisX;                                             // 0xc(0xc)
	Struct Vector                                                AxisY;                                             // 0x18(0xc)
	Struct Vector                                                AxisZ;                                             // 0x24(0xc)
	float                                                        ExtentX;                                           // 0x30(0x4)
	float                                                        ExtentY;                                           // 0x34(0x4)
	float                                                        ExtentZ;                                           // 0x38(0x4)
};


// Size 0x40
struct Matrix
{
public:
	Struct Plane                                                 XPlane;                                            // 0x0(0x10)
	Struct Plane                                                 YPlane;                                            // 0x10(0x10)
	Struct Plane                                                 ZPlane;                                            // 0x20(0x10)
	Struct Plane                                                 WPlane;                                            // 0x30(0x10)
};


// Size 0x14
struct InterpCurvePointFloat
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	float                                                        OutVal;                                            // 0x4(0x4)
	float                                                        ArriveTangent;                                     // 0x8(0x4)
	float                                                        LeaveTangent;                                      // 0xc(0x4)
	byte                                                         InterpMode;                                        // 0x10(0x1)
};


// Size 0x18
struct InterpCurveFloat
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_9SKQ5[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x20
struct InterpCurvePointVector2D
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	Struct Vector2D                                              OutVal;                                            // 0x4(0x8)
	Struct Vector2D                                              ArriveTangent;                                     // 0xc(0x8)
	Struct Vector2D                                              LeaveTangent;                                      // 0x14(0x8)
	byte                                                         InterpMode;                                        // 0x1c(0x1)
};


// Size 0x18
struct InterpCurveVector2D
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_TSD1F[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x2c
struct InterpCurvePointVector
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	Struct Vector                                                OutVal;                                            // 0x4(0xc)
	Struct Vector                                                ArriveTangent;                                     // 0x10(0xc)
	Struct Vector                                                LeaveTangent;                                      // 0x1c(0xc)
	byte                                                         InterpMode;                                        // 0x28(0x1)
};


// Size 0x18
struct InterpCurveVector
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_RQ4B2[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x50
struct InterpCurvePointQuat
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	char                                                         pad0xc_4Y8KA[0xc];                                 // 0x4(0xc)
	Struct Quat                                                  OutVal;                                            // 0x10(0x10)
	Struct Quat                                                  ArriveTangent;                                     // 0x20(0x10)
	Struct Quat                                                  LeaveTangent;                                      // 0x30(0x10)
	byte                                                         InterpMode;                                        // 0x40(0x1)
};


// Size 0x18
struct InterpCurveQuat
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_KF478[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x50
struct InterpCurvePointTwoVectors
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	Struct TwoVectors                                            OutVal;                                            // 0x4(0x18)
	Struct TwoVectors                                            ArriveTangent;                                     // 0x1c(0x18)
	Struct TwoVectors                                            LeaveTangent;                                      // 0x34(0x18)
	byte                                                         InterpMode;                                        // 0x4c(0x1)
};


// Size 0x18
struct InterpCurveTwoVectors
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_0VWT9[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x38
struct InterpCurvePointLinearColor
{
public:
	float                                                        InVal;                                             // 0x0(0x4)
	Struct LinearColor                                           OutVal;                                            // 0x4(0x10)
	Struct LinearColor                                           ArriveTangent;                                     // 0x14(0x10)
	Struct LinearColor                                           LeaveTangent;                                      // 0x24(0x10)
	byte                                                         InterpMode;                                        // 0x34(0x1)
};


// Size 0x18
struct InterpCurveLinearColor
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	bool                                                         bIsLooped;                                         // 0x10(0x1)
	char                                                         pad0x3_R2RDO[0x3];                                 // 0x11(0x3)
	float                                                        LoopKeyOffset;                                     // 0x14(0x4)
};


// Size 0x30
struct Transform
{
public:
	Struct Quat                                                  Rotation;                                          // 0x0(0x10)
	Struct Vector                                                Translation;                                       // 0x10(0xc)
	char                                                         pad0x4_CKXK6[0x4];                                 // 0x1c(0x4)
	Struct Vector                                                Scale3D;                                           // 0x20(0xc)
};


// Size 0x8
struct RandomStream
{
public:
	int                                                          InitialSeed;                                       // 0x0(0x4)
	int                                                          Seed;                                              // 0x4(0x4)
};


// Size 0x8
struct DateTime
{
public:
};


// Size 0x8
struct Timespan
{
public:
};


// Size 0x10
struct StringAssetReference
{
public:
	Struct FString                                               AssetLongPathname;                                 // 0x0(0x10)
};


// Size 0x10
struct StringClassReference
{
public:
};


// Size 0x1
struct FallbackStruct
{
public:
};


// Size 0x8
struct FloatRangeBound
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	char                                                         pad0x3_161JY[0x3];                                 // 0x1(0x3)
	float                                                        Value;                                             // 0x4(0x4)
};


// Size 0x10
struct FloatRange
{
public:
	Struct FloatRangeBound                                       LowerBound;                                        // 0x0(0x8)
	Struct FloatRangeBound                                       UpperBound;                                        // 0x8(0x8)
};


// Size 0x8
struct Int32RangeBound
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	char                                                         pad0x3_AN15B[0x3];                                 // 0x1(0x3)
	int                                                          Value;                                             // 0x4(0x4)
};


// Size 0x10
struct Int32Range
{
public:
	Struct Int32RangeBound                                       LowerBound;                                        // 0x0(0x8)
	Struct Int32RangeBound                                       UpperBound;                                        // 0x8(0x8)
};


// Size 0x8
struct FloatInterval
{
public:
	float                                                        Min;                                               // 0x0(0x4)
	float                                                        Max;                                               // 0x4(0x4)
};


// Size 0x8
struct Int32Interval
{
public:
	int                                                          Min;                                               // 0x0(0x4)
	int                                                          Max;                                               // 0x4(0x4)
};


}