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
// Parameters
//---------------------------------------------------------------------------

// Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
struct UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params
{
	struct FPirateDescription                          Desc;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                               // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
{
	class UCharacterMeshBakeSpecification*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
{
	class USkeletalMesh*                               BaseMesh;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseMeshWeight;                                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      MeshPatchAssetWeights;                                     // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               TargetMesh;                                                // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
{
	class UClass*                                      CharacterMeshBakeSpecificationClass;                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMesh*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
{
	class USkeletalMesh*                               MeshA;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               MeshB;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
{
	struct FString                                     MeshPath;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TypeName;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     TypeName;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMeshPatchAsset*                             ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
{
	float                                              BaseMeshBlendWeight;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Threshold;                                                 // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
{
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate;                            // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      BodyShapeBlendWeights;                                     // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
{
	struct FVector2D                                   UV;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
{
	struct FRadialCoordinate                           Coord;                                                     // 0x0000(0x0008)  (Parm)
	struct FVector2D                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
{
	struct FString                                     RelativePath;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPirateDescription                          InDesc;                                                    // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadialCoordinate                           ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
{
	struct FString                                     RelativePath;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPirateDescription                          OutDesc;                                                   // 0x0010(0x0080)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
{
	struct FPirateDescription                          Desc;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags;                                                     // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               OutMesh;                                                   // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPirateDescription                          OutDesc;                                                   // 0x0090(0x0080)  (Parm, OutParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
struct UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
{
	struct FString                                     RefName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Str;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPirateGeneratorTextureReference>    OutReferences;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Version;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOverrideBodyShape;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           BodyShapeOverride;                                         // 0x000C(0x0008)  (Parm)
	TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity;                                         // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                         // 0x0028(0x0010)  (Parm, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                          // 0x0038(0x0010)  (Parm, ZeroConstructor)
	struct FPirateDescription                          ReturnValue;                                               // 0x0048(0x0080)  (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOverrideBodyShape;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           BodyShapeOverride;                                         // 0x0008(0x0008)  (Parm)
	TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                         // 0x0028(0x0010)  (Parm, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                          // 0x0038(0x0010)  (Parm, ZeroConstructor)
	struct FPirateDescription                          ReturnValue;                                               // 0x0048(0x0080)  (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags;                                                     // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // 0x0084(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               MeshWithBaseSkeleton;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletonsDataAsset*                         SkeletonsDataAsset;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MeshTypeSkeletonFileFormat;                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              BaseMeshBlendWeight;                                       // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       SubMeshes;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                       // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
struct UWardrobeFunctionLibrary_PickOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWardrobeOutfitResult                       Result;                                                    // 0x0028(0x0030)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               InputItems;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               InputItems;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
{
	class UWardrobeOutfitDataAsset*                    Outfit;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seed;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
{
	struct FString                                     TypeName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWithExclusions;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
{
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
struct UWardrobeFunctionLibrary_CanLoadOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                       Meshes;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
