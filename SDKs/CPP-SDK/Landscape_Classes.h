#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Landscape_Structs.h"


// Size 0x160 (Full Size[0x730] - InheritedSize[0x5d0]
class LandscapeComponent: public PrimitiveComponent
{
public:
	int                                                          SectionBaseX;                                      // 0x5c8(0x4)
	int                                                          SectionBaseY;                                      // 0x5cc(0x4)
	int                                                          ComponentSizeQuads;                                // 0x5d0(0x4)
	int                                                          SubsectionSizeQuads;                               // 0x5d4(0x4)
	int                                                          NumSubsections;                                    // 0x5d8(0x4)
	class MaterialInterface*                                     OverrideMaterial;                                  // 0x5e0(0x8)
	class MaterialInterface*                                     OverrideHoleMaterial;                              // 0x5e8(0x8)
	class MaterialInstanceConstant*                              MaterialInstance;                                  // 0x5f0(0x8)
	TArray<struct WeightmapLayerAllocationInfo>                  WeightmapLayerAllocations;                         // 0x5f8(0x10)
	TArray<class Texture2D*>                                     WeightmapTextures;                                 // 0x608(0x10)
	class Texture2D*                                             XYOffsetmapTexture;                                // 0x618(0x8)
	struct Vector4                                               WeightmapScaleBias;                                // 0x620(0x10)
	float                                                        WeightmapSubsectionOffset;                         // 0x630(0x4)
	struct Vector4                                               HeightmapScaleBias;                                // 0x640(0x10)
	class Texture2D*                                             HeightmapTexture;                                  // 0x650(0x8)
	struct Box                                                   CachedLocalBox;                                    // 0x658(0x1c)
	lazyobject                                                   CollisionComponent;                                // 0x674(0x1c)
	TArray<struct Guid>                                          IrrelevantLights;                                  // 0x690(0x10)
	int                                                          CollisionMipLevel;                                 // 0x6b0(0x4)
	float                                                        StaticLightingResolution;                          // 0x6b4(0x4)
	int                                                          ForcedLOD;                                         // 0x6b8(0x4)
	int                                                          LODBias;                                           // 0x6bc(0x4)
	struct Guid                                                  StateId;                                           // 0x6c0(0x10)
	struct Guid                                                  BakedTextureMaterialGuid;                          // 0x6d0(0x10)
	class Texture2D*                                             GIBakedBaseColorTexture;                           // 0x6e0(0x8)
	char                                                         MobileBlendableLayerMask;                          // 0x6e8(0x1)
	class MaterialInterface*                                     MobileMaterialInterface;                           // 0x6f0(0x8)
	class Texture2D*                                             MobileWeightNormalmapTexture;                      // 0x6f8(0x8)
};


// Size 0x90 (Full Size[0x100] - InheritedSize[0x70]
class MaterialExpressionLandscapeLayerSwitch: public MaterialExpression
{
public:
	struct ExpressionInput                                       LayerUsed;                                         // 0x70(0x38)
	struct ExpressionInput                                       LayerNotUsed;                                      // 0xa8(0x38)
	struct FName                                                 ParameterName;                                     // 0xe0(0x8)
	bool                                                         PreviewUsed;                                       // 0xe8(0x1)
	struct Guid                                                  ExpressionGUID;                                    // 0xec(0x10)
};


// Size 0x20 (Full Size[0x90] - InheritedSize[0x70]
class MaterialExpressionLandscapeLayerSample: public MaterialExpression
{
public:
	struct FName                                                 ParameterName;                                     // 0x70(0x8)
	float                                                        PreviewWeight;                                     // 0x78(0x4)
	struct Guid                                                  ExpressionGUID;                                    // 0x7c(0x10)
};


// Size 0x10 (Full Size[0x80] - InheritedSize[0x70]
class MaterialExpressionLandscapeGrassOutput: public MaterialExpressionCustomOutput
{
public:
	TArray<struct GrassInput>                                    GrassTypes;                                        // 0x70(0x10)
};


// Size 0x10 (Full Size[0x80] - InheritedSize[0x70]
class MaterialExpressionLandscapeVisibilityMask: public MaterialExpression
{
public:
	struct Guid                                                  ExpressionGUID;                                    // 0x70(0x10)
};


// Size 0x388 (Full Size[0x750] - InheritedSize[0x3c8]
class LandscapeProxy: public Actor
{
public:
	class LandscapeSplinesComponent*                             SplineComponent;                                   // 0x3d0(0x8)
	struct Guid                                                  LandscapeGuid;                                     // 0x3d8(0x10)
	struct IntPoint                                              LandscapeSectionOffset;                            // 0x3e8(0x8)
	int                                                          MaxLODLevel;                                       // 0x3f0(0x4)
	int                                                          StaticLightingLOD;                                 // 0x3f4(0x4)
	class PhysicalMaterial*                                      DefaultPhysMaterial;                               // 0x3f8(0x8)
	float                                                        StreamingDistanceMultiplier;                       // 0x400(0x4)
	class MaterialInterface*                                     LandscapeMaterial;                                 // 0x408(0x8)
	class MaterialInterface*                                     LandscapeHoleMaterial;                             // 0x410(0x8)
	float                                                        LODDistanceFactor;                                 // 0x418(0x4)
	TArray<class LandscapeComponent*>                            LandscapeComponents;                               // 0x420(0x10)
	TArray<class LandscapeHeightfieldCollisionComponent*>        CollisionComponents;                               // 0x430(0x10)
	TArray<class HierarchicalInstancedStaticMeshComponent*>      FoliageComponents;                                 // 0x440(0x10)
	float                                                        StaticLightingResolution;                          // 0x4c0(0x4)
	lazyobject                                                   LandscapeActor;                                    // 0x4c4(0x1c)
	bool                                                         bCastStaticShadow;                                 // 0x4e0(0x1)
	bool                                                         bCastShadowAsTwoSided;                             // 0x4e0(0x1)
	bool                                                         bAffectDynamicIndirectLighting;                    // 0x4e0(0x1)
	bool                                                         bCastFarShadow;                                    // 0x4e0(0x1)
	bool                                                         bIsProxy;                                          // 0x4e0(0x1)
	bool                                                         bUseFarCascadeLPVBiasMultiplier;                   // 0x4e0(0x1)
	float                                                        LpvIntensityMultiplier;                            // 0x4e4(0x4)
	float                                                        LpvBiasMultiplier;                                 // 0x4e8(0x4)
	float                                                        FarCascadeLPVBiasMultiplier;                       // 0x4ec(0x4)
	struct LightmassPrimitiveSettings                            LightmassSettings;                                 // 0x4f0(0x18)
	int                                                          CollisionMipLevel;                                 // 0x508(0x4)
	float                                                        CollisionThickness;                                // 0x50c(0x4)
	struct BodyInstance                                          BodyInstance;                                      // 0x510(0x180)
	int                                                          ComponentSizeQuads;                                // 0x690(0x4)
	int                                                          SubsectionSizeQuads;                               // 0x694(0x4)
	int                                                          NumSubsections;                                    // 0x698(0x4)
	bool                                                         bUsedForNavigation;                                // 0x69c(0x1)
	bool                                                         bReflected;                                        // 0x69c(0x1)
	char                                                         NavigationGeometryGatheringMode;                   // 0x6a0(0x1)
	char                                                         LODFalloff;                                        // 0x6a1(0x1)
};


// Size 0x30 (Full Size[0x660] - InheritedSize[0x630]
class LandscapeMeshProxyComponent: public StaticMeshComponent
{
public:
	struct Guid                                                  LandscapeGuid;                                     // 0x630(0x10)
	TArray<struct IntPoint>                                      ProxyComponentBases;                               // 0x640(0x10)
	int8                                                         ProxyLOD;                                          // 0x650(0x1)
};


// Size 0x18 (Full Size[0x88] - InheritedSize[0x70]
class MaterialExpressionLandscapeLayerCoords: public MaterialExpression
{
public:
	char                                                         MappingType;                                       // 0x70(0x1)
	char                                                         CustomUVType;                                      // 0x71(0x1)
	float                                                        MappingScale;                                      // 0x74(0x4)
	float                                                        MappingRotation;                                   // 0x78(0x4)
	float                                                        MappingPanU;                                       // 0x7c(0x4)
	float                                                        MappingPanV;                                       // 0x80(0x4)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class LandscapeGrassType: public Object
{
public:
	TArray<struct GrassVariety>                                  GrassVarieties;                                    // 0x28(0x10)
	class StaticMesh*                                            GrassMesh;                                         // 0x38(0x8)
	float                                                        GrassDensity;                                      // 0x40(0x4)
	float                                                        PlacementJitter;                                   // 0x44(0x4)
	int                                                          StartCullDistance;                                 // 0x48(0x4)
	int                                                          EndCullDistance;                                   // 0x4c(0x4)
	bool                                                         RandomRotation;                                    // 0x50(0x1)
	bool                                                         AlignToSurface;                                    // 0x51(0x1)
};


// Size 0x10 (Full Size[0x1c8] - InheritedSize[0x1b8]
class LandscapeMaterialInstanceConstant: public MaterialInstanceConstant
{
public:
	bool                                                         bIsLayerThumbnail;                                 // 0x1b8(0x1)
	int                                                          DataWeightmapIndex;                                // 0x1bc(0x4)
	int                                                          DataWeightmapSize;                                 // 0x1c0(0x4)
};


// Size 0x30 (Full Size[0x600] - InheritedSize[0x5d0]
class LandscapeSplinesComponent: public PrimitiveComponent
{
public:
	TArray<class LandscapeSplineControlPoint*>                   ControlPoints;                                     // 0x5c8(0x10)
	TArray<class LandscapeSplineSegment*>                        Segments;                                          // 0x5d8(0x10)
	TArray<class MeshComponent*>                                 CookedForeignMeshComponents;                       // 0x5e8(0x10)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class LandscapeMeshProxyActor: public Actor
{
public:
	class LandscapeMeshProxyComponent*                           LandscapeMeshProxyComponent;                       // 0x3c8(0x8)
};


// Size 0x98 (Full Size[0x108] - InheritedSize[0x70]
class MaterialExpressionLandscapeLayerWeight: public MaterialExpression
{
public:
	struct ExpressionInput                                       Base;                                              // 0x70(0x38)
	struct ExpressionInput                                       Layer;                                             // 0xa8(0x38)
	struct FName                                                 ParameterName;                                     // 0xe0(0x8)
	float                                                        PreviewWeight;                                     // 0xe8(0x4)
	struct Vector                                                ConstBase;                                         // 0xec(0xc)
	struct Guid                                                  ExpressionGUID;                                    // 0xf8(0x10)
};


// Size 0xd0 (Full Size[0x6a0] - InheritedSize[0x5d0]
class LandscapeHeightfieldCollisionComponent: public PrimitiveComponent
{
public:
	TArray<class LandscapeLayerInfoObject*>                      ComponentLayerInfos;                               // 0x5c8(0x10)
	int                                                          SectionBaseX;                                      // 0x5d8(0x4)
	int                                                          SectionBaseY;                                      // 0x5dc(0x4)
	int                                                          CollisionSizeQuads;                                // 0x5e0(0x4)
	float                                                        CollisionScale;                                    // 0x5e4(0x4)
	TArray<char>                                                 CollisionQuadFlags;                                // 0x5e8(0x10)
	struct Guid                                                  HeightfieldGuid;                                   // 0x5f8(0x10)
	struct Box                                                   CachedLocalBox;                                    // 0x608(0x1c)
	lazyobject                                                   RenderComponent;                                   // 0x624(0x1c)
	TArray<class PhysicalMaterial*>                              CookedPhysicalMaterials;                           // 0x650(0x10)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class LandscapeSplineControlPoint: public Object
{
public:
	struct Vector                                                Location;                                          // 0x28(0xc)
	struct Rotator                                               Rotation;                                          // 0x34(0xc)
	float                                                        Width;                                             // 0x40(0x4)
	float                                                        SideFalloff;                                       // 0x44(0x4)
	float                                                        EndFalloff;                                        // 0x48(0x4)
	TArray<struct LandscapeSplineConnection>                     ConnectedSegments;                                 // 0x50(0x10)
	TArray<struct LandscapeSplineInterpPoint>                    Points;                                            // 0x60(0x10)
	struct Box                                                   Bounds;                                            // 0x70(0x1c)
	class ControlPointMeshComponent*                             LocalMeshComponent;                                // 0x90(0x8)
};


// Size 0x20 (Full Size[0x90] - InheritedSize[0x70]
class MaterialExpressionLandscapeLayerBlend: public MaterialExpression
{
public:
	TArray<struct LayerBlendInput>                               Layers;                                            // 0x70(0x10)
	struct Guid                                                  ExpressionGUID;                                    // 0x80(0x10)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class LandscapeLayerInfoObject: public Object
{
public:
	struct FName                                                 LayerName;                                         // 0x28(0x8)
	class PhysicalMaterial*                                      PhysMaterial;                                      // 0x30(0x8)
	float                                                        Hardness;                                          // 0x38(0x4)
};


// Size 0x1e8 (Full Size[0x210] - InheritedSize[0x28]
class LandscapeInfo: public Object
{
public:
	lazyobject                                                   LandscapeActor;                                    // 0x28(0x1c)
	struct Guid                                                  LandscapeGuid;                                     // 0x44(0x10)
	int                                                          ComponentSizeQuads;                                // 0x54(0x4)
	int                                                          SubsectionSizeQuads;                               // 0x58(0x4)
	int                                                          ComponentNumSubsections;                           // 0x5c(0x4)
	struct Vector                                                DrawScale;                                         // 0x60(0xc)
};


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class LandscapeSplineSegment: public Object
{
public:
	struct LandscapeSplineSegmentConnection                      Connections;                                       // 0x28(0x18)
	struct InterpCurveVector                                     SplineInfo;                                        // 0x58(0x18)
	TArray<struct LandscapeSplineInterpPoint>                    Points;                                            // 0x70(0x10)
	struct Box                                                   Bounds;                                            // 0x80(0x1c)
	TArray<class SplineMeshComponent*>                           LocalMeshComponents;                               // 0xa0(0x10)
};


// Size 0x20 (Full Size[0x6c0] - InheritedSize[0x6a0]
class LandscapeMeshCollisionComponent: public LandscapeHeightfieldCollisionComponent
{
public:
	struct Guid                                                  MeshGuid;                                          // 0x6a0(0x10)
};


