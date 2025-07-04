#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "PirateGenerator_Structs.h"


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class SkeletonsDataAsset: public DataAsset
{
public:
	char                                                         pad0x50_IOIEI[0x50];                               // 0x28(0x50)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PirateGeneratorMaterials: public Object
{
public:
	TArray<class MaterialInterface*>                             Materials;                                         // 0x28(0x10)
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class WardrobeDataAsset: public DataAsset
{
public:
	char                                                         pad0xa0_YJRH8[0xa0];                               // 0x28(0xa0)
	TArray<struct MeshPatchEntry>                                AssetMap;                                          // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WardrobeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WardrobeOutfitDataAsset: public DataAsset
{
public:
	TArray<struct Name>                                          FemaleWardrobeItems;                               // 0x28(0x10)
	TArray<struct Name>                                          MaleWardrobeItems;                                 // 0x38(0x10)
	TArray<struct WardrobeOutfitCategoryBias>                    BiasPerCategory;                                   // 0x48(0x10)
};


// Size 0xe0 (Full Size[0x228] - InheritedSize[0x148]
class TextureSwitch: public TextureProxy
{
public:
	char                                                         pad0x80_EARHK[0x80];                               // 0x148(0x80)
	bool                                                         bDuplicated;                                       // 0x1c8(0x1)
	char                                                         pad0x7_3EZ6Z[0x7];                                 // 0x1c9(0x7)
	struct TextureSwitchParameters                               DefaultParameters;                                 // 0x1d0(0x58)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FileAccessFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x150] - InheritedSize[0x140]
class ColorTexture: public Texture
{
public:
	struct LinearColor                                           Color;                                             // 0x140(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PirateBodyShapeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PirateGeneratorFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WardrobeExcludeDataAsset: public DataAsset
{
public:
};


// Size 0x100 (Full Size[0x138] - InheritedSize[0x38]
class PirateGeneratorSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  WardrobeDataAsset;                                 // 0x38(0x10)
	class WardrobeDataAsset*                                     EditorWardrobeDataAsset;                           // 0x48(0x8)
	struct FString                                               ConfigJson;                                        // 0x50(0x10)
	struct FString                                               PiratesFolder;                                     // 0x60(0x10)
	struct FString                                               WardrobeFolder;                                    // 0x70(0x10)
	TArray<struct Name>                                          DefaultWardrobeItems;                              // 0x80(0x10)
	struct StringAssetReference                                  MaterialReferencesDataAsset;                       // 0x90(0x10)
	struct StringAssetReference                                  SkeletonsDataAsset;                                // 0xa0(0x10)
	TArray<struct StringAssetReference>                          BaseSkeletonMeshes;                                // 0xb0(0x10)
	TArray<struct StringAssetReference>                          Characterization;                                  // 0xc0(0x10)
	TArray<String>                                               SkeletonMeshFormats;                               // 0xd0(0x10)
	struct StringAssetReference                                  FirstPersonAnimations;                             // 0xe0(0x10)
	struct StringAssetReference                                  ThirdPersonAnimations;                             // 0xf0(0x10)
	TArray<float>                                                LODScreenSizes;                                    // 0x100(0x10)
	TArray<float>                                                LODHysteresis;                                     // 0x110(0x10)
	TArray<struct StringAssetReference>                          ExcludeDataAssets;                                 // 0x120(0x10)
	int                                                          DefaultPirateGenerationSeed;                       // 0x130(0x4)
	char                                                         pad0x4_9PTA7[0x4];                                 // 0x134(0x4)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class CharacterMeshBakeSpecification: public Object
{
public:
	bool                                                         StripTopLOD;                                       // 0x28(0x1)
	char                                                         pad0x7_ZIFZN[0x7];                                 // 0x29(0x7)
	class SkeletalMesh*                                          CharacterMesh;                                     // 0x30(0x8)
	class SkeletalMesh*                                          BaseMeshReferenceSkeleton;                         // 0x38(0x8)
	class SkeletonsDataAsset*                                    SourceSkeletons;                                   // 0x40(0x8)
	TArray<struct Name>                                          SourceSkeletonNames;                               // 0x48(0x10)
	TArray<float>                                                SourceSkeletonWeights;                             // 0x58(0x10)
	TArray<struct BlendedSubMeshSpecification>                   BlendedSubMeshes;                                  // 0x68(0x10)
	TArray<class SkeletalMesh*>                                  UnblendedSubMeshes;                                // 0x78(0x10)
	TArray<struct IPGBlendShape>                                 BlendShapes;                                       // 0x88(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CharacterMeshBakeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AnimationSwitchDataAsset: public DataAsset
{
public:
	float                                                        Threshold;                                         // 0x28(0x4)
	char                                                         pad0x4_U9Q91[0x4];                                 // 0x2c(0x4)
	TArray<struct AnimationSwitchEntry>                          Entries;                                           // 0x30(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MaterialReferencesDataAsset: public DataAsset
{
public:
	TArray<struct MaterialReferencesEntry>                       MaterialReferences;                                // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PreparePirateMeshBakeTestFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CharacterMeshBakeTestFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x20 (Full Size[0x248] - InheritedSize[0x228]
class TextureSwitchByItem: public TextureSwitch
{
public:
	struct StringAssetReference                                  FallbackTexture;                                   // 0x228(0x10)
	TArray<struct TextureSwitchItemEntry>                        Entries;                                           // 0x238(0x10)
};


// Size 0x10 (Full Size[0x238] - InheritedSize[0x228]
class TextureSwitchByBodyShape: public TextureSwitch
{
public:
	TArray<struct TextureSwitchBodyShapeEntry>                   Entries;                                           // 0x228(0x10)
};


// Size 0x10 (Full Size[0x238] - InheritedSize[0x228]
class TextureSwitchByGender: public TextureSwitch
{
public:
	TArray<struct TextureSwitchGenderEntry>                      Entries;                                           // 0x228(0x10)
};


// Size 0x10 (Full Size[0x238] - InheritedSize[0x228]
class TextureSwitchByEthnicity: public TextureSwitch
{
public:
	TArray<struct TextureSwitchEthnicityEntry>                   Entries;                                           // 0x228(0x10)
};


// Size 0x38 (Full Size[0x260] - InheritedSize[0x228]
class TextureSwitchBySeed: public TextureSwitch
{
public:
	struct FName                                                 HashSource;                                        // 0x228(0x8)
	float                                                        FallbackProbability;                               // 0x230(0x4)
	struct FName                                                 FallbackReferenceName;                             // 0x234(0x8)
	char                                                         pad0x4_S4INZ[0x4];                                 // 0x23c(0x4)
	struct StringAssetReference                                  FallbackTexture;                                   // 0x240(0x10)
	TArray<struct TextureSwitchSeedEntry>                        Entries;                                           // 0x250(0x10)
};


// Size 0x18 (Full Size[0x240] - InheritedSize[0x228]
class ColorTextureSwitchBySeed: public TextureSwitch
{
public:
	struct FName                                                 HashSource;                                        // 0x228(0x8)
	TArray<struct ColorTextureSwitchSeedEntry>                   Entries;                                           // 0x230(0x10)
};


