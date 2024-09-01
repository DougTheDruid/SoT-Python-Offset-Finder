#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct MeshPatchEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	struct StringAssetReference                                  Reference;                                         // 0x8(0x10)
};


// Size 0x8
struct IPGDynamicSlider
{
public:
	int                                                          AffectedPriority;                                  // 0x0(0x4)
	float                                                        Value;                                             // 0x4(0x4)
};


// Size 0x30
struct BlendedSubMeshSpecification
{
public:
	class SkeletalMesh*                                          Mesh;                                              // 0x0(0x8)
	float                                                        BaseMeshWeight;                                    // 0x8(0x4)
	TArray<class MeshPatchAsset*>                                MeshPatchAssets;                                   // 0x10(0x10)
	TArray<float>                                                MeshPatchAssetWeights;                             // 0x20(0x10)
};


// Size 0x14
struct IPGBlendShape
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	struct FName                                                 NodeName;                                          // 0x8(0x8)
	float                                                        Value;                                             // 0x10(0x4)
};


// Size 0xc
struct WardrobeOutfitCategoryBias
{
public:
	struct FName                                                 CategoryName;                                      // 0x0(0x8)
	float                                                        EmptyProbability;                                  // 0x8(0x4)
};


// Size 0x20
struct PirateGeneratorAdditionalBakeInfo
{
public:
	TArray<class ParticleSystem*>                                VFXParticles;                                      // 0x0(0x10)
	TArray<struct Name>                                          VFXSockets;                                        // 0x10(0x10)
};


// Size 0x18
struct PirateGeneratorTextureReference
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct Name>                                          References;                                        // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchGenderEntry
{
public:
	char                                                         Gender;                                            // 0x0(0x1)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0xc
struct IPGScalarParameter
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Value;                                             // 0x8(0x4)
};


// Size 0xc
struct IPGDynamicSliderName
{
public:
	int                                                          AffectedPriority;                                  // 0x0(0x4)
	struct FName                                                 Name;                                              // 0x4(0x8)
};


// Size 0x18
struct TextureSwitchBodyShapeEntry
{
public:
	struct FName                                                 BodyShape;                                         // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x58
struct TextureSwitchParameters
{
public:
	bool                                                         bAsync;                                            // 0x8(0x1)
	bool                                                         bHighPriority;                                     // 0x9(0x1)
	int                                                          Seed;                                              // 0xc(0x4)
	char                                                         SelectedGender;                                    // 0x10(0x1)
	char                                                         SelectedEthnicity;                                 // 0x11(0x1)
	struct FName                                                 SelectedBodyShape;                                 // 0x14(0x8)
	TArray<struct Name>                                          SelectedItems;                                     // 0x20(0x10)
	TArray<struct Name>                                          SelectedReferences;                                // 0x30(0x10)
};


// Size 0x20
struct ClothingSlot
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct Name>                                          Tags;                                              // 0x8(0x10)
	char                                                         Type;                                              // 0x18(0x1)
};


// Size 0x10
struct IPGBlendingMethod
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Probability;                                       // 0x8(0x4)
	char                                                         BlendType;                                         // 0xc(0x1)
};


// Size 0x18
struct TextureSwitchItemEntry
{
public:
	struct FName                                                 ItemName;                                          // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x50
struct ClothingCreatorSlotItem
{
public:
	struct FString                                               Name;                                              // 0x0(0x10)
	struct FString                                               DisplayName;                                       // 0x10(0x10)
	struct FString                                               Description;                                       // 0x20(0x10)
	struct FString                                               Category;                                          // 0x30(0x10)
	TArray<String>                                               Slots;                                             // 0x40(0x10)
};


// Size 0x8
struct IPGSetGroup
{
public:
	int                                                          Priority;                                          // 0x0(0x4)
	char                                                         Mode;                                              // 0x4(0x1)
};


// Size 0x28
struct ClothingVFX
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct Name>                                          Sockets;                                           // 0x8(0x10)
	TArray<struct Name>                                          Slots;                                             // 0x18(0x10)
};


// Size 0x20
struct ClothingPart
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct Name>                                          Slots;                                             // 0x8(0x10)
	char                                                         Gender;                                            // 0x18(0x1)
	char                                                         PartType;                                          // 0x19(0x1)
};


// Size 0x18
struct TextureSwitchEthnicityEntry
{
public:
	char                                                         Ethnicity;                                         // 0x0(0x1)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x18
struct ColorTextureSwitchSeedEntry
{
public:
	struct FName                                                 ReferenceName;                                     // 0x0(0x8)
	struct LinearColor                                           Color;                                             // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchSeedEntry
{
public:
	struct FName                                                 ReferenceName;                                     // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x8
struct IPGCompatibleSet
{
public:
	struct FName                                                 SetName;                                           // 0x0(0x8)
};


// Size 0xc
struct IPGBodyShape
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        NormalizedWheelAngle;                              // 0x8(0x4)
};


// Size 0x18
struct MaterialReferenceEntry
{
public:
	bool                                                         bCopyParametersAcross;                             // 0x0(0x1)
	bool                                                         bReplaceAll;                                       // 0x1(0x1)
	class MaterialInterface*                                     FromMaterial;                                      // 0x8(0x8)
	class MaterialInstanceConstant*                              ToMaterial;                                        // 0x10(0x8)
};


// Size 0xc
struct IPGTestSimpleType
{
public:
	struct FName                                                 StringTest;                                        // 0x0(0x8)
	int                                                          IntTest;                                           // 0x8(0x4)
};


// Size 0x10
struct AnimationSwitchEntry
{
public:
	struct FName                                                 BodyShape;                                         // 0x0(0x8)
	class UClass*                                                AnimSetDataId;                                     // 0x8(0x8)
};


// Size 0x8
struct RadialCoordinate
{
public:
	float                                                        NormalizedAngle;                                   // 0x0(0x4)
	float                                                        RadialDistance;                                    // 0x4(0x4)
};


// Size 0x80
struct PirateDescription
{
public:
	char                                                         Type;                                              // 0x0(0x1)
	int                                                          Version;                                           // 0x4(0x4)
	char                                                         Gender;                                            // 0x8(0x1)
	char                                                         Ethnicity;                                         // 0x9(0x1)
	struct RadialCoordinate                                      BodyShapeCoordinate;                               // 0xc(0x8)
	TArray<struct IPGBlendShape>                                 BlendShapes;                                       // 0x18(0x10)
	TArray<struct IPGDynamicSlider>                              DynamicSliders;                                    // 0x28(0x10)
	int                                                          Seed;                                              // 0x38(0x4)
	TArray<struct Name>                                          Items;                                             // 0x40(0x10)
	TArray<struct Name>                                          TextureReferences;                                 // 0x50(0x10)
	TArray<struct Name>                                          MaterialReferences;                                // 0x60(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x70(0x10)
};


// Size 0x18
struct MaterialReferencesEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct MaterialReferenceEntry>                        References;                                        // 0x8(0x10)
};


// Size 0x50
struct WardrobeOutfitResult
{
public:
	TArray<class SkeletalMesh*>                                  Meshes;                                            // 0x0(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x10(0x10)
	TArray<struct Name>                                          MaterialReferences;                                // 0x20(0x10)
	TArray<class ParticleSystem*>                                VFXParticles;                                      // 0x30(0x10)
	TArray<struct Name>                                          VFXSockets;                                        // 0x40(0x10)
};


// Size 0x50
struct Outfit
{
public:
	TArray<struct Name>                                          PartNames;                                         // 0x0(0x10)
	TArray<struct Name>                                          FreeSlots;                                         // 0x10(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x20(0x10)
	TArray<struct Name>                                          MaterialReferences;                                // 0x30(0x10)
	TArray<struct ClothingVFX>                                   VFXs;                                              // 0x40(0x10)
};


// Size 0x88
struct ClothingItem
{
public:
	struct FName                                                 Type;                                              // 0x0(0x8)
	struct FName                                                 Name;                                              // 0x8(0x8)
	TArray<char>                                                 CompatiblePirateTypes;                             // 0x10(0x10)
	TArray<struct Name>                                          Variants;                                          // 0x20(0x10)
	TArray<struct Name>                                          NewSlots;                                          // 0x30(0x10)
	struct FName                                                 Parent;                                            // 0x40(0x8)
	TArray<struct ClothingPart>                                  Parts;                                             // 0x48(0x10)
	TArray<struct ClothingVFX>                                   VFXs;                                              // 0x58(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x68(0x10)
	TArray<struct Name>                                          MaterialReferences;                                // 0x78(0x10)
};


// Size 0x10
struct ClothingCreatorSlotItemConfig
{
public:
	TArray<struct ClothingCreatorSlotItem>                       Items;                                             // 0x0(0x10)
};


// Size 0x20
struct WardrobeConfig
{
public:
	TArray<struct ClothingSlot>                                  Slots;                                             // 0x0(0x10)
	TArray<struct Name>                                          Priority;                                          // 0x10(0x10)
};


// Size 0x28
struct IPGBlendRange
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Min;                                               // 0x8(0x4)
	float                                                        Max;                                               // 0xc(0x4)
	float                                                        Env;                                               // 0x10(0x4)
	TArray<struct IPGCompatibleSet>                              Compatibility;                                     // 0x18(0x10)
};


// Size 0x60
struct IPGTestClass
{
public:
	struct FName                                                 StringTest;                                        // 0x0(0x8)
	float                                                        FloatTest;                                         // 0x8(0x4)
	int                                                          IntTest;                                           // 0xc(0x4)
	char                                                         EnumTest;                                          // 0x10(0x1)
	struct IPGTestSimpleType                                     ObjectTest;                                        // 0x14(0xc)
	struct IPGTestSimpleType                                     ObjectNoneTest;                                    // 0x20(0xc)
	TArray<struct IPGTestSimpleType>                             VectorTest;                                        // 0x30(0x10)
	TArray<struct Name>                                          StrVectorTest;                                     // 0x40(0x10)
	TArray<char>                                                 EnumVectorTest;                                    // 0x50(0x10)
};


// Size 0x20
struct IPGBodyShapes
{
public:
	TArray<struct IPGBodyShape>                                  Male;                                              // 0x0(0x10)
	TArray<struct IPGBodyShape>                                  Female;                                            // 0x10(0x10)
};


// Size 0x18
struct IPGBlendNode
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct IPGBlendRange>                                 Ranges;                                            // 0x8(0x10)
};


// Size 0x20
struct IPGSetData
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	char                                                         Gender;                                            // 0x8(0x1)
	char                                                         Ethnicity;                                         // 0x9(0x1)
	int                                                          Priority;                                          // 0xc(0x4)
	TArray<struct IPGBlendNode>                                  Nodes;                                             // 0x10(0x10)
};


// Size 0x18
struct IPGSetsData
{
public:
	int                                                          Version;                                           // 0x0(0x4)
	TArray<struct IPGSetData>                                    Sets;                                              // 0x8(0x10)
};


// Size 0x48
struct IPGData
{
public:
	TArray<struct IPGDynamicSliderName>                          DynamicSliderNames;                                // 0x0(0x10)
	TArray<struct IPGBlendingMethod>                             BlendingMethods;                                   // 0x10(0x10)
	TArray<struct IPGSetGroup>                                   Groups;                                            // 0x20(0x10)
	int                                                          CurrentVersion;                                    // 0x30(0x4)
	TArray<struct IPGSetsData>                                   Versions;                                          // 0x38(0x10)
};


// Size 0x78
struct Config
{
public:
	struct IPGData                                               IPG;                                               // 0x0(0x48)
	struct FName                                                 MaleBaseShape;                                     // 0x48(0x8)
	struct FName                                                 FemaleBaseShape;                                   // 0x50(0x8)
	struct IPGBodyShapes                                         BodyShapes;                                        // 0x58(0x20)
};


