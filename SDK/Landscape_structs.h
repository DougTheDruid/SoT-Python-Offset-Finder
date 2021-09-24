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

// Enum Landscape.ELandscapeGizmoType
enum class Landscape_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Landscape.ELandscapeLODFalloff
enum class Landscape_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,

};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class Landscape_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 3,

};

// Enum Landscape.ELandscapeSetupErrors
enum class Landscape_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class Landscape_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,

};

// Enum Landscape.ELandscapeLayerBlendType
enum class Landscape_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,

};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class Landscape_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,

};

// Enum Landscape.ETerrainCoordMappingType
enum class Landscape_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      WeightmapTextureIndex;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      WeightmapTextureChannel;                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      GrassMapChannelIndex;                                      // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LI6[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.GrassVariety
// 0x0030
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GrassDensity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseGrid;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RKFC[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlacementJitter;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartCullDistance;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndCullDistance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinLOD;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomRotation;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XI8O[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlignToSurface;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleVariationMin;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleVariationMax;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TangentLen;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NDHG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Left;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Right;                                                     // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FalloffLeft;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FalloffRight;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartEndFalloff;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      End : 1;                                                   // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_JBRO[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.GrassInput
// 0x0048
struct FGrassInput
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULandscapeGrassType*                         GrassType;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FExpressionInput                            Input;                                                     // 0x0010(0x0038) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Landscape_ELandscapeLayerBlendType>    BlendType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_769Z[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerInput;                                                // 0x0010(0x0038) (ZeroConstructor)
	struct FExpressionInput                            HeightInput;                                               // 0x0048(0x0038) (ZeroConstructor)
	float                                              PreviewWeight;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ConstLayerInput;                                           // 0x0084(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ConstHeightInput;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2Z53[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LayerName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData_XDOP[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData_0BZS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData_EC9U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0000(0x0020) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)
	unsigned char                                      bCenterH : 1;                                              // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_8SSK[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CenterAdjust;                                              // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      bScaleToWidth : 1;                                         // 0x0024(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_ELVZ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale;                                                     // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Landscape_ELandscapeSplineMeshOrientation> Orientation;                                               // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESplineMeshAxis>                ForwardAxis;                                               // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESplineMeshAxis>                UpAxis;                                                    // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RC8C[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData_GUWT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData_EGJZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData_3IY7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
