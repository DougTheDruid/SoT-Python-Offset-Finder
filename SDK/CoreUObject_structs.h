#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.EInterpCurveMode
enum class CoreUObject_EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,

};

// Enum CoreUObject.ERangeBoundTypes
enum class CoreUObject_ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3,

};

// Enum CoreUObject.EUnit
enum class CoreUObject_EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Unspecified             = 47,
	EUnit__EUnit_MAX               = 48,

};

// Enum CoreUObject.EMouseCursor
enum class CoreUObject_EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14,

};

// Enum CoreUObject.EPixelFormat
enum class CoreUObject_EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_A16B16G16R16F_FILTER        = 57,
	PF_BC6H_SF16                   = 58,
	PF_BC6H_UF16                   = 59,
	PF_R32G32_SINT                 = 60,
	PF_Stencil                     = 61,
	PF_Depth                       = 62,
	PF_MAX_VALUE                   = 63,

};

// Enum CoreUObject.EAxis
enum class CoreUObject_EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4,

};

// Enum CoreUObject.ELogTimes
enum class CoreUObject_ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__ELogTimes_MAX       = 3,

};

// Enum CoreUObject.ESearchDir
enum class CoreUObject_ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2,

};

// Enum CoreUObject.ESearchCase
enum class CoreUObject_ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                         // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                B;                                                         // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                C;                                                         // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                D;                                                         // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	inline FVector() : X(0), Y(0), Z(0) {}

	inline FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

	inline FVector operator + (const FVector& other) const { return FVector(X + other.X, Y + other.Y, Z + other.Z); }

	inline FVector operator - (const FVector& other) const { return FVector(X - other.X, Y - other.Y, Z - other.Z); }

	inline FVector operator * (float scalar) const { return FVector(X * scalar, Y * scalar, Z * scalar); }

	inline FVector operator * (const FVector& other) const { return FVector(X * other.X, Y * other.Y, Z * other.Z); }

	inline FVector operator / (float scalar) const { return FVector(X / scalar, Y / scalar, Z / scalar); }

	inline FVector operator / (const FVector& other) const { return FVector(X / other.X, Y / other.Y, Z / other.Z); }

	inline FVector& operator=  (const FVector& other) { X = other.X; Y = other.Y; Z = other.Z; return *this; }

	inline FVector& operator+= (const FVector& other) { X += other.X; Y += other.Y; Z += other.Z; return *this; }

	inline FVector& operator-= (const FVector& other) { X -= other.X; Y -= other.Y; Z -= other.Z; return *this; }

	inline FVector& operator*= (const float other) { X *= other; Y *= other; Z *= other; return *this; }

	inline float Dot(const FVector& b) const { return (X * b.X) + (Y * b.Y) + (Z * b.Z); }

	inline float MagnitudeSqr() const { return Dot(*this); }

	inline float Magnitude() const { return std::sqrtf(MagnitudeSqr()); }

	inline FVector Unit() const
	{
		const float fMagnitude = Magnitude();
		return FVector(X / fMagnitude, Y / fMagnitude, Z / fMagnitude);
	}

	friend bool operator==(const FVector& first, const FVector& second) { return first.X == second.X && first.Y == second.Y && first.Z == second.Z; }

	friend bool operator!=(const FVector& first, const FVector& second) { return !(first == second); }

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	inline FVector2D() : X(0), Y(0) {}

	inline FVector2D(float x, float y) : X(x), Y(y) {}

	inline FVector2D operator + (const FVector2D& other) const { return FVector2D(X + other.X, Y + other.Y); }

	inline FVector2D operator - (const FVector2D& other) const { return FVector2D(X - other.X, Y - other.Y); }

	inline FVector2D operator * (float scalar) const { return FVector2D(X * scalar, Y * scalar); }

	inline FVector2D operator * (const FVector2D& other) const { return FVector2D(X * other.X, Y * other.Y); }

	inline FVector2D operator / (float scalar) const { return FVector2D(X / scalar, Y / scalar); }

	inline FVector2D operator / (const FVector2D& other) const { return FVector2D(X / other.X, Y / other.Y); }

	inline FVector2D& operator=  (const FVector2D& other) { X = other.X; Y = other.Y; return *this; }

	inline FVector2D& operator+= (const FVector2D& other) { X += other.X; Y += other.Y; return *this; }

	inline FVector2D& operator-= (const FVector2D& other) { X -= other.X; Y -= other.Y; return *this; }

	inline FVector2D& operator*= (const float other) { X *= other; Y *= other; return *this; }

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     v2;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	inline FRotator() : Pitch(0), Yaw(0), Roll(0) {}

	inline FRotator(float pitch, float yaw, float roll) : Pitch(pitch), Yaw(yaw), Roll(roll) {}

	inline float Size() { return sqrt(Pitch * Pitch + Yaw * Yaw + Roll * Roll); }

	inline FRotator Clamp()
	{
		FRotator r = { Pitch, Yaw, Roll };
		if (r.Yaw > 180.f)
			r.Yaw -= 360.f;
		else if (r.Yaw < -180.f)
			r.Yaw += 360.f;

		if (r.Pitch > 180.f)
			r.Pitch -= 360.f;
		else if (r.Pitch < -180.f)
			r.Pitch += 360.f;

		if (r.Pitch < -89.f)
			r.Pitch = -89.f;
		else if (r.Pitch > 89.f)
			r.Pitch = 89.f;

		r.Roll = 0.f;
		return r;
	}

	inline FRotator operator + (const FRotator& other) const { return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll); }

	inline FRotator operator - (const FRotator& other) const { return FRotator(Pitch - other.Pitch, Yaw - other.Yaw, Roll - other.Roll); }

	inline FRotator operator * (float scalar) const { return FRotator(Pitch * scalar, Yaw * scalar, Roll * scalar); }

	inline FRotator operator * (const FRotator& other) const { return FRotator(Pitch * other.Pitch, Yaw * other.Yaw, Roll * other.Roll); }

	inline FRotator operator / (float scalar) const { return FRotator(Pitch / scalar, Yaw / scalar, Roll / scalar); }

	inline FRotator operator / (const FRotator& other) const { return FRotator(Pitch / other.Pitch, Yaw / other.Yaw, Roll / other.Roll); }

	inline FRotator& operator=  (const FRotator& other) { Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this; }

	inline FRotator& operator+= (const FRotator& other) { Pitch += other.Pitch; Yaw += other.Yaw; Roll += other.Roll; return *this; }

	inline FRotator& operator-= (const FRotator& other) { Pitch -= other.Pitch; Yaw -= other.Yaw; Roll -= other.Roll; return *this; }

	inline FRotator& operator*= (const float other) { Pitch *= other; Yaw *= other; Roll *= other; return *this; }

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Y;                                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Z;                                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      W;                                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      G;                                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      R;                                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      A;                                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              G;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              B;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              A;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     Max;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      IsValid;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CV9L[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Box2D
// 0x0014
struct FBox2D
{
	struct FVector2D                                   Min;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Max;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      IsValid;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QJL8[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxExtent;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              SphereRadius;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisX;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisY;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisZ;                                                     // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              ExtentX;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtentY;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtentZ;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      YPlane;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      ZPlane;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      WPlane;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutVal;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArriveTangent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LeaveTangent;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GAL9[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_HXBB[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OutVal;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ArriveTangent;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FVector2D                                   LeaveTangent;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T47Q[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RBBA[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutVal;                                                    // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ArriveTangent;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LeaveTangent;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UQWN[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2IZ8[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2QQZ[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       OutVal;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FQuat                                       ArriveTangent;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FQuat                                       LeaveTangent;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6JG3[0xF];                                     // 0x0041(0x000F) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3TW2[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTwoVectors                                 OutVal;                                                    // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTwoVectors                                 ArriveTangent;                                             // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTwoVectors                                 LeaveTangent;                                              // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQB6[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3CSL[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutVal;                                                    // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ArriveTangent;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LeaveTangent;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZGDQ[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7XEJ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopKeyOffset;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Transform
// 0x0030
struct FTransform
{
	struct FQuat                                       Rotation;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     Translation;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L83A[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale3D;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AQJ3[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seed;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData_M847[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData_P5ZT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.StringAssetReference
// 0x0010
struct FStringAssetReference
{
	struct FString                                     AssetLongPathname;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.StringClassReference
// 0x0000 (0x0010 - 0x0010)
struct FStringClassReference : public FStringAssetReference
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData_VV63[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<CoreUObject_ERangeBoundTypes>          Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UC83[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRangeBound                            UpperBound;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<CoreUObject_ERangeBoundTypes>          Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W904[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInt32RangeBound                            UpperBound;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.FloatInterval
// 0x0008
struct FFloatInterval
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CoreUObject.Int32Interval
// 0x0008
struct FInt32Interval
{
	int                                                Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
