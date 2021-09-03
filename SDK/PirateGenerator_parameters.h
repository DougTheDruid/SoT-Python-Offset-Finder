#pragma once

// Name: SoT, Version: 2.2.1.1


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
	struct FPirateDescription                          Desc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
{
	class UCharacterMeshBakeSpecification*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
{
	class USkeletalMesh*                               BaseMesh;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseMeshWeight;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      MeshPatchAssetWeights;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               TargetMesh;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
{
	class UClass*                                      CharacterMeshBakeSpecificationClass;                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
{
	class USkeletalMesh*                               MeshA;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               MeshB;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
{
	struct FString                                     MeshPath;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TypeName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     TypeName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMeshPatchAsset*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
{
	float                                              BaseMeshBlendWeight;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Threshold;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
{
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate;                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      BodyShapeBlendWeights;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
{
	struct FVector2D                                   UV;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
{
	struct FRadialCoordinate                           Coord;                                                     // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
{
	struct FString                                     RelativePath;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPirateDescription                          InDesc;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadialCoordinate                           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
{
	struct FString                                     RelativePath;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPirateDescription                          OutDesc;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
{
	struct FPirateDescription                          Desc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               OutMesh;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPirateDescription                          OutDesc;                                                   // (Parm, OutParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
struct UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
{
	struct FString                                     RefName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Str;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
{
	class USkeletalMesh*                               Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPirateGeneratorTextureReference>    OutReferences;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Version;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOverrideBodyShape;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           BodyShapeOverride;                                         // (Parm)
	TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                            // (Parm, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                         // (Parm, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                          // (Parm, ZeroConstructor)
	struct FPirateDescription                          ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOverrideBodyShape;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRadialCoordinate                           BodyShapeOverride;                                         // (Parm)
	TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                            // (Parm, ZeroConstructor)
	TArray<struct FName>                               TextureReferences;                                         // (Parm, ZeroConstructor)
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                          // (Parm, ZeroConstructor)
	struct FPirateDescription                          ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               MeshWithBaseSkeleton;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletonsDataAsset*                         SkeletonsDataAsset;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MeshTypeSkeletonFileFormat;                                // (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              BaseMeshBlendWeight;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       SubMeshes;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BaseMeshBlendWeight;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             BodyShapeBlendNames;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      BodyShapeBlendWeights;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             AsyncResult;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
struct UWardrobeFunctionLibrary_PickOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWardrobeOutfitResult                       Result;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               InputItems;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               InputItems;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
{
	class UWardrobeOutfitDataAsset*                    Outfit;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
{
	struct FString                                     TypeName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWithExclusions;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
{
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
struct UWardrobeFunctionLibrary_CanLoadOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Tags;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PirateGenerator_EIPGGender>            Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                       Meshes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
