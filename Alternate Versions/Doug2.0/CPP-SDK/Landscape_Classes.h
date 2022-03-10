namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ControlPointMeshComponent: public StaticMeshComponent
{
public:
};


// Size 0x1e8
class LandscapeInfo: public Object
{
public:
	Struct Guid                                        LandscapeGuid                                      // 0x44(0x10)
	int                                                ComponentSizeQuads                                 // 0x54(0x4)
	int                                                SubsectionSizeQuads                                // 0x58(0x4)
	int                                                ComponentNumSubsections                            // 0x5c(0x4)
	Struct Vector                                      DrawScale                                          // 0x60(0xc)
};


// Size 0x160
class LandscapeComponent: public PrimitiveComponent
{
public:
	int                                                SectionBaseX                                       // 0x5a8(0x4)
	int                                                SectionBaseY                                       // 0x5ac(0x4)
	int                                                ComponentSizeQuads                                 // 0x5b0(0x4)
	int                                                SubsectionSizeQuads                                // 0x5b4(0x4)
	int                                                NumSubsections                                     // 0x5b8(0x4)
	Class MaterialInterface*                           OverrideMaterial                                   // 0x5c0(0x8)
	Class MaterialInterface*                           OverrideHoleMaterial                               // 0x5c8(0x8)
	Class MaterialInstanceConstant*                    MaterialInstance                                   // 0x5d0(0x8)
	TArray<Struct MaterialInstance>                    WeightmapLayerAllocations                          // 0x5d8(0x10)
	TArray<class WeightmapTextures*>                   WeightmapTextures                                  // 0x5e8(0x10)
	Class Texture2D*                                   XYOffsetmapTexture                                 // 0x5f8(0x8)
	Struct Vector4                                     WeightmapScaleBias                                 // 0x600(0x10)
	float                                              WeightmapSubsectionOffset                          // 0x610(0x4)
	Struct Vector4                                     HeightmapScaleBias                                 // 0x620(0x10)
	Class Texture2D*                                   HeightmapTexture                                   // 0x630(0x8)
	Struct Box                                         CachedLocalBox                                     // 0x638(0x1c)
	TArray<Struct CollisionComponent>                  IrrelevantLights                                   // 0x670(0x10)
	int                                                CollisionMipLevel                                  // 0x690(0x4)
	float                                              StaticLightingResolution                           // 0x694(0x4)
	int                                                ForcedLOD                                          // 0x698(0x4)
	int                                                LODBias                                            // 0x69c(0x4)
	Struct Guid                                        StateId                                            // 0x6a0(0x10)
	Struct Guid                                        BakedTextureMaterialGuid                           // 0x6b0(0x10)
	Class Texture2D*                                   GIBakedBaseColorTexture                            // 0x6c0(0x8)
	byte                                               MobileBlendableLayerMask                           // 0x6c8(0x1)
	Class MaterialInterface*                           MobileMaterialInterface                            // 0x6d0(0x8)
	Class Texture2D*                                   MobileWeightNormalmapTexture                       // 0x6d8(0x8)
};


// Size 0x0
class LandscapeGizmoActor: public Actor
{
public:
};


// Size 0x50
class LandscapeGizmoActiveActor: public LandscapeGizmoActor
{
public:
};


// Size 0x0
class LandscapeGizmoRenderComponent: public PrimitiveComponent
{
public:
};


// Size 0x30
class LandscapeGrassType: public Object
{
public:
	TArray<Struct CookedPhysicalMaterials>             GrassVarieties                                     // 0x28(0x10)
	Class StaticMesh*                                  GrassMesh                                          // 0x38(0x8)
	float                                              GrassDensity                                       // 0x40(0x4)
	float                                              PlacementJitter                                    // 0x44(0x4)
	int                                                StartCullDistance                                  // 0x48(0x4)
	int                                                EndCullDistance                                    // 0x4c(0x4)
	bool                                               RandomRotation                                     // 0x50(0x1)
	bool                                               AlignToSurface                                     // 0x51(0x1)
};


// Size 0xd0
class LandscapeHeightfieldCollisionComponent: public PrimitiveComponent
{
public:
	TArray<class ComponentLayerInfos*>                 ComponentLayerInfos                                // 0x5a8(0x10)
	int                                                SectionBaseX                                       // 0x5b8(0x4)
	int                                                SectionBaseY                                       // 0x5bc(0x4)
	int                                                CollisionSizeQuads                                 // 0x5c0(0x4)
	float                                              CollisionScale                                     // 0x5c4(0x4)
	TArray<Byte CollisionScale>                        CollisionQuadFlags                                 // 0x5c8(0x10)
	Struct Guid                                        HeightfieldGuid                                    // 0x5d8(0x10)
	Struct Box                                         CachedLocalBox                                     // 0x5e8(0x1c)
	TArray<class CookedPhysicalMaterials*>             CookedPhysicalMaterials                            // 0x630(0x10)
};


// Size 0x20
class LandscapeMeshCollisionComponent: public LandscapeHeightfieldCollisionComponent
{
public:
	Struct Guid                                        MeshGuid                                           // 0x680(0x10)
};


// Size 0x50
class LandscapeInfoMap: public Object
{
public:
};


// Size 0x18
class LandscapeLayerInfoObject: public Object
{
public:
	struct FName                                       LayerName                                          // 0x28(0x8)
	Class PhysicalMaterial*                            PhysMaterial                                       // 0x30(0x8)
	float                                              Hardness                                           // 0x38(0x4)
};


// Size 0x10
class LandscapeMaterialInstanceConstant: public MaterialInstanceConstant
{
public:
	bool                                               bIsLayerThumbnail                                  // 0x1b8(0x1)
	int                                                DataWeightmapIndex                                 // 0x1bc(0x4)
	int                                                DataWeightmapSize                                  // 0x1c0(0x4)
};


// Size 0x8
class LandscapeMeshProxyActor: public Actor
{
public:
	Class LandscapeMeshProxyComponent*                 LandscapeMeshProxyComponent                        // 0x3d0(0x8)
};


// Size 0x390
class LandscapeProxy: public Actor
{
public:
	Class LandscapeSplinesComponent*                   SplineComponent                                    // 0x3d8(0x8)
	Struct Guid                                        LandscapeGuid                                      // 0x3e0(0x10)
	Struct IntPoint                                    LandscapeSectionOffset                             // 0x3f0(0x8)
	int                                                MaxLODLevel                                        // 0x3f8(0x4)
	int                                                StaticLightingLOD                                  // 0x3fc(0x4)
	Class PhysicalMaterial*                            DefaultPhysMaterial                                // 0x400(0x8)
	float                                              StreamingDistanceMultiplier                        // 0x408(0x4)
	Class MaterialInterface*                           LandscapeMaterial                                  // 0x410(0x8)
	Class MaterialInterface*                           LandscapeHoleMaterial                              // 0x418(0x8)
	float                                              LODDistanceFactor                                  // 0x420(0x4)
	TArray<class LandscapeComponents*>                 LandscapeComponents                                // 0x428(0x10)
	TArray<class CollisionComponents*>                 CollisionComponents                                // 0x438(0x10)
	TArray<class FoliageComponents*>                   FoliageComponents                                  // 0x448(0x10)
	float                                              StaticLightingResolution                           // 0x4d0(0x4)
	bool                                               bCastStaticShadow                                  // 0x4f0(0x1)
	bool                                               bCastShadowAsTwoSided                              // 0x4f0(0x1)
	bool                                               bAffectDynamicIndirectLighting                     // 0x4f0(0x1)
	bool                                               bCastFarShadow                                     // 0x4f0(0x1)
	bool                                               bIsProxy                                           // 0x4f0(0x1)
	bool                                               bUseFarCascadeLPVBiasMultiplier                    // 0x4f0(0x1)
	float                                              LpvIntensityMultiplier                             // 0x4f4(0x4)
	float                                              LpvBiasMultiplier                                  // 0x4f8(0x4)
	float                                              FarCascadeLPVBiasMultiplier                        // 0x4fc(0x4)
	Struct LightmassPrimitiveSettings                  LightmassSettings                                  // 0x500(0x18)
	int                                                CollisionMipLevel                                  // 0x518(0x4)
	float                                              CollisionThickness                                 // 0x51c(0x4)
	Struct BodyInstance                                BodyInstance                                       // 0x520(0x180)
	int                                                ComponentSizeQuads                                 // 0x6a0(0x4)
	int                                                SubsectionSizeQuads                                // 0x6a4(0x4)
	int                                                NumSubsections                                     // 0x6a8(0x4)
	bool                                               bUsedForNavigation                                 // 0x6ac(0x1)
	bool                                               bReflected                                         // 0x6ac(0x1)
	byte                                               NavigationGeometryGatheringMode                    // 0x6b0(0x1)
	byte                                               LODFalloff                                         // 0x6b1(0x1)
};


// Size 0x30
class LandscapeMeshProxyComponent: public StaticMeshComponent
{
public:
	Struct Guid                                        LandscapeGuid                                      // 0x610(0x10)
	TArray<Struct LandscapeGuid>                       ProxyComponentBases                                // 0x620(0x10)
};


// Size 0x0
class Landscape: public LandscapeProxy
{
public:
};


// Size 0x30
class LandscapeSplinesComponent: public PrimitiveComponent
{
public:
	TArray<class ControlPoints*>                       ControlPoints                                      // 0x5a8(0x10)
	TArray<class Segments*>                            Segments                                           // 0x5b8(0x10)
	TArray<class CookedForeignMeshComponents*>         CookedForeignMeshComponents                        // 0x5c8(0x10)
};


// Size 0x88
class LandscapeSplineSegment: public Object
{
public:
	Struct LandscapeSplineSegmentConnection            Connections                                        // 0x28(0x18)
	Struct InterpCurveVector                           SplineInfo                                         // 0x58(0x18)
	TArray<Struct SplineInfo>                          Points                                             // 0x70(0x10)
	Struct Box                                         Bounds                                             // 0x80(0x1c)
	TArray<class LocalMeshComponents*>                 LocalMeshComponents                                // 0xa0(0x10)
};


// Size 0x70
class LandscapeSplineControlPoint: public Object
{
public:
	Struct Vector                                      Location                                           // 0x28(0xc)
	Struct Rotator                                     Rotation                                           // 0x34(0xc)
	float                                              Width                                              // 0x40(0x4)
	float                                              SideFalloff                                        // 0x44(0x4)
	float                                              EndFalloff                                         // 0x48(0x4)
	TArray<Struct EndFalloff>                          ConnectedSegments                                  // 0x50(0x10)
	TArray<Struct ConnectedSegments>                   Points                                             // 0x60(0x10)
	Struct Box                                         Bounds                                             // 0x70(0x1c)
	Class ControlPointMeshComponent*                   LocalMeshComponent                                 // 0x90(0x8)
};


// Size 0x10
class MaterialExpressionLandscapeGrassOutput: public MaterialExpressionCustomOutput
{
public:
	TArray<Struct ExpressionGUID>                      GrassTypes                                         // 0x70(0x10)
};


// Size 0x20
class MaterialExpressionLandscapeLayerBlend: public MaterialExpression
{
public:
	TArray<Struct MappingPanV>                         Layers                                             // 0x70(0x10)
	Struct Guid                                        ExpressionGUID                                     // 0x80(0x10)
};


// Size 0x18
class MaterialExpressionLandscapeLayerCoords: public MaterialExpression
{
public:
	byte                                               MappingType                                        // 0x70(0x1)
	byte                                               CustomUVType                                       // 0x71(0x1)
	float                                              MappingScale                                       // 0x74(0x4)
	float                                              MappingRotation                                    // 0x78(0x4)
	float                                              MappingPanU                                        // 0x7c(0x4)
	float                                              MappingPanV                                        // 0x80(0x4)
};


// Size 0x20
class MaterialExpressionLandscapeLayerSample: public MaterialExpression
{
public:
	struct FName                                       ParameterName                                      // 0x70(0x8)
	float                                              PreviewWeight                                      // 0x78(0x4)
	Struct Guid                                        ExpressionGUID                                     // 0x7c(0x10)
};


// Size 0x90
class MaterialExpressionLandscapeLayerSwitch: public MaterialExpression
{
public:
	Struct ExpressionInput                             LayerUsed                                          // 0x70(0x38)
	Struct ExpressionInput                             LayerNotUsed                                       // 0xa8(0x38)
	struct FName                                       ParameterName                                      // 0xe0(0x8)
	bool                                               PreviewUsed                                        // 0xe8(0x1)
	Struct Guid                                        ExpressionGUID                                     // 0xec(0x10)
};


// Size 0x98
class MaterialExpressionLandscapeLayerWeight: public MaterialExpression
{
public:
	Struct ExpressionInput                             Base                                               // 0x70(0x38)
	Struct ExpressionInput                             Layer                                              // 0xa8(0x38)
	struct FName                                       ParameterName                                      // 0xe0(0x8)
	float                                              PreviewWeight                                      // 0xe8(0x4)
	Struct Vector                                      ConstBase                                          // 0xec(0xc)
	Struct Guid                                        ExpressionGUID                                     // 0xf8(0x10)
};


// Size 0x10
class MaterialExpressionLandscapeVisibilityMask: public MaterialExpression
{
public:
	Struct Guid                                        ExpressionGUID                                     // 0x70(0x10)
};


}