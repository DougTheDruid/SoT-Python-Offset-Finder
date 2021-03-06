// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class AnimationSwitchDataAsset: public DataAsset
{
public:
	float                                                        Threshold;                                         // 0x28(0x4)
	TArray<Struct AnimationSwitchEntry>                          Entries;                                           // 0x30(0x10)
};


// Size 0x0
class CharacterMeshBakeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x50
class SkeletonsDataAsset: public DataAsset
{
public:
};


// Size 0x70
class CharacterMeshBakeSpecification: public Object
{
public:
	bool                                                         StripTopLOD;                                       // 0x28(0x1)
	Class SkeletalMesh*                                          CharacterMesh;                                     // 0x30(0x8)
	Class SkeletalMesh*                                          BaseMeshReferenceSkeleton;                         // 0x38(0x8)
	Class SkeletonsDataAsset*                                    SourceSkeletons;                                   // 0x40(0x8)
	TArray<Struct FName>                                         SourceSkeletonNames;                               // 0x48(0x10)
	TArray<Float SourceSkeletonWeights>                          SourceSkeletonWeights;                             // 0x58(0x10)
	TArray<Struct BlendedSubMeshSpecification>                   BlendedSubMeshes;                                  // 0x68(0x10)
	TArray<class UnblendedSubMeshes*>                            UnblendedSubMeshes;                                // 0x78(0x10)
	TArray<Struct IPGBlendShape>                                 BlendShapes;                                       // 0x88(0x10)
};


// Size 0x0
class CharacterMeshBakeTestFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class ColorTexture: public Texture
{
public:
	Struct LinearColor                                           Color;                                             // 0x138(0x10)
};


// Size 0x0
class FileAccessFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class MaterialReferencesDataAsset: public DataAsset
{
public:
	TArray<Struct MaterialReferencesEntry>                       MaterialReferences;                                // 0x28(0x10)
};


// Size 0x0
class PirateBodyShapeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class PirateGeneratorMaterials: public Object
{
public:
	TArray<class Materials*>                                     Materials;                                         // 0x28(0x10)
};


// Size 0x0
class PirateGeneratorFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0xe8
class PirateGeneratorSettings: public Object
{
public:
	Struct FString                                               ConfigJson;                                        // 0x28(0x10)
	Struct FString                                               PiratesFolder;                                     // 0x38(0x10)
	Struct FString                                               WardrobeFolder;                                    // 0x48(0x10)
	Struct StringAssetReference                                  WardrobeDataAsset;                                 // 0x58(0x10)
	TArray<Struct FName>                                         DefaultWardrobeItems;                              // 0x68(0x10)
	Struct StringAssetReference                                  MaterialReferencesDataAsset;                       // 0x78(0x10)
	Struct StringAssetReference                                  SkeletonsDataAsset;                                // 0x88(0x10)
	TArray<Struct StringAssetReference>                          BaseSkeletonMeshes;                                // 0x98(0x10)
	TArray<Struct StringAssetReference>                          Characterization;                                  // 0xa8(0x10)
	TArray<Str SkeletonMeshFormats>                              SkeletonMeshFormats;                               // 0xb8(0x10)
	Struct StringAssetReference                                  FirstPersonAnimations;                             // 0xc8(0x10)
	Struct StringAssetReference                                  ThirdPersonAnimations;                             // 0xd8(0x10)
	TArray<Float LODScreenSizes>                                 LODScreenSizes;                                    // 0xe8(0x10)
	TArray<Float LODHysteresis>                                  LODHysteresis;                                     // 0xf8(0x10)
	int                                                          DefaultPirateGenerationSeed;                       // 0x108(0x4)
};


// Size 0x0
class PreparePirateMeshBakeTestFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0xe0
class TextureSwitch: public TextureProxy
{
public:
	bool                                                         bDuplicated;                                       // 0x1c0(0x1)
	Struct TextureSwitchParameters                               DefaultParameters;                                 // 0x1c8(0x58)
};


// Size 0x38
class TextureSwitchBySeed: public TextureSwitch
{
public:
	struct FName                                                 HashSource;                                        // 0x220(0x8)
	float                                                        FallbackProbability;                               // 0x228(0x4)
	struct FName                                                 FallbackReferenceName;                             // 0x22c(0x8)
	Struct StringAssetReference                                  FallbackTexture;                                   // 0x238(0x10)
	TArray<Struct TextureSwitchSeedEntry>                        Entries;                                           // 0x248(0x10)
};


// Size 0x10
class TextureSwitchByGender: public TextureSwitch
{
public:
	TArray<Struct TextureSwitchGenderEntry>                      Entries;                                           // 0x220(0x10)
};


// Size 0x10
class TextureSwitchByEthnicity: public TextureSwitch
{
public:
	TArray<Struct TextureSwitchEthnicityEntry>                   Entries;                                           // 0x220(0x10)
};


// Size 0x10
class TextureSwitchByBodyShape: public TextureSwitch
{
public:
	TArray<Struct TextureSwitchBodyShapeEntry>                   Entries;                                           // 0x220(0x10)
};


// Size 0x20
class TextureSwitchByItem: public TextureSwitch
{
public:
	Struct StringAssetReference                                  FallbackTexture;                                   // 0x220(0x10)
	TArray<Struct TextureSwitchItemEntry>                        Entries;                                           // 0x230(0x10)
};


// Size 0x18
class ColorTextureSwitchBySeed: public TextureSwitch
{
public:
	struct FName                                                 HashSource;                                        // 0x220(0x8)
	TArray<Struct ColorTextureSwitchSeedEntry>                   Entries;                                           // 0x228(0x10)
};


// Size 0x10
class WardrobeExcludeDataAsset: public DataAsset
{
public:
	TArray<Struct FName>                                         ExcludeItems;                                      // 0x28(0x10)
};


// Size 0xc0
class WardrobeDataAsset: public DataAsset
{
public:
	TArray<class ExcludeDataAssets*>                             ExcludeDataAssets;                                 // 0xc8(0x10)
	TArray<Struct MeshPatchEntry>                                AssetMap;                                          // 0xd8(0x10)
};


// Size 0x30
class WardrobeOutfitDataAsset: public DataAsset
{
public:
	TArray<Struct FName>                                         FemaleWardrobeItems;                               // 0x28(0x10)
	TArray<Struct FName>                                         MaleWardrobeItems;                                 // 0x38(0x10)
	TArray<Struct WardrobeOutfitCategoryBias>                    BiasPerCategory;                                   // 0x48(0x10)
};


// Size 0x0
class WardrobeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


}