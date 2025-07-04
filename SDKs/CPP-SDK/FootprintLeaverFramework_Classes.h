#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "FootprintLeaverFramework_Structs.h"


// Size 0x110 (Full Size[0x3e0] - InheritedSize[0x2d0]
class FootprintLeaverComponent: public SceneComponent
{
public:
	char                                                         pad0x30_YLRPB[0x30];                               // 0x2d0(0x30)
	TArray<class DecalComponent*>                                SpawnedDecalComponents;                            // 0x300(0x10)
	int                                                          NumberOfFootprintsBoarsCanSpawnBeforeReusing;      // 0x310(0x4)
	char                                                         pad0x4_1DQNL[0x4];                                 // 0x314(0x4)
	class DecalComponent*                                        RecentlySpawnedAndDetachedDecalComponent;          // 0x318(0x8)
	class MaterialInterface*                                     GeneratedDecalMaterial;                            // 0x320(0x8)
	TArray<struct BoarFootprintProperties>                       DecalMaterialArray;                                // 0x328(0x10)
	struct Vector                                                DecalUniformScale;                                 // 0x338(0xc)
	struct Vector                                                DecalRotation;                                     // 0x344(0xc)
	float                                                        DistanceToReDrawDecal;                             // 0x350(0x4)
	float                                                        MinDistanceToReDrawDecal;                          // 0x354(0x4)
	float                                                        MaxDistanceToReDrawDecal;                          // 0x358(0x4)
	char                                                         pad0x10_D9D6T[0x10];                               // 0x35c(0x10)
	float                                                        MinHorizontalLocationToPlaceDecal;                 // 0x36c(0x4)
	float                                                        MaxHorizontalLocationToPlaceDecal;                 // 0x370(0x4)
	float                                                        DecalLifespan;                                     // 0x374(0x4)
	float                                                        DecalZOffset;                                      // 0x378(0x4)
	float                                                        FadeOutModifier;                                   // 0x37c(0x4)
	class Actor*                                                 Owner;                                             // 0x380(0x8)
	char                                                         pad0x1_WOUB5[0x1];                                 // 0x388(0x1)
	bool                                                         ShouldCullGrass;                                   // 0x389(0x1)
	bool                                                         ShouldStopCullingGrassWhenReused;                  // 0x38a(0x1)
	char                                                         pad0x1_4V0LH[0x1];                                 // 0x38b(0x1)
	struct Vector                                                GrassCullVelocity;                                 // 0x38c(0xc)
	float                                                        GrassCullSize;                                     // 0x398(0x4)
	float                                                        GrassCullScale;                                    // 0x39c(0x4)
	struct Vector                                                GrassUnCullVelocity;                               // 0x3a0(0xc)
	float                                                        GrassUnCullSize;                                   // 0x3ac(0x4)
	float                                                        GrassUnCullScale;                                  // 0x3b0(0x4)
	char                                                         pad0x4_OH13V[0x4];                                 // 0x3b4(0x4)
	class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0x3b8(0x8)
	char                                                         pad0x20_LYGGA[0x20];                               // 0x3c0(0x20)
};


