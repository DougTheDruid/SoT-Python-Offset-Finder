// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FAnimationSwitchEntry::AfterRead()
{
	READ_PTR_FULL(AnimSetDataId, UClass);
}

void FAnimationSwitchEntry::BeforeDelete()
{
	DELE_PTR_FULL(AnimSetDataId);
}

void FRadialCoordinate::AfterRead()
{
}

void FRadialCoordinate::BeforeDelete()
{
}

void FIPGBlendShape::AfterRead()
{
}

void FIPGBlendShape::BeforeDelete()
{
}

void FIPGDynamicSlider::AfterRead()
{
}

void FIPGDynamicSlider::BeforeDelete()
{
}

void FIPGScalarParameter::AfterRead()
{
}

void FIPGScalarParameter::BeforeDelete()
{
}

void FPirateDescription::AfterRead()
{
}

void FPirateDescription::BeforeDelete()
{
}

void FBlendedSubMeshSpecification::AfterRead()
{
	READ_PTR_FULL(Mesh, USkeletalMesh);
}

void FBlendedSubMeshSpecification::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void FMaterialReferenceEntry::AfterRead()
{
	READ_PTR_FULL(FromMaterial, UMaterialInterface);
	READ_PTR_FULL(ToMaterial, UMaterialInstanceConstant);
}

void FMaterialReferenceEntry::BeforeDelete()
{
	DELE_PTR_FULL(FromMaterial);
	DELE_PTR_FULL(ToMaterial);
}

void FMaterialReferencesEntry::AfterRead()
{
}

void FMaterialReferencesEntry::BeforeDelete()
{
}

void FPirateGeneratorTextureReference::AfterRead()
{
}

void FPirateGeneratorTextureReference::BeforeDelete()
{
}

void FTextureSwitchParameters::AfterRead()
{
}

void FTextureSwitchParameters::BeforeDelete()
{
}

void FTextureSwitchSeedEntry::AfterRead()
{
}

void FTextureSwitchSeedEntry::BeforeDelete()
{
}

void FTextureSwitchGenderEntry::AfterRead()
{
}

void FTextureSwitchGenderEntry::BeforeDelete()
{
}

void FTextureSwitchEthnicityEntry::AfterRead()
{
}

void FTextureSwitchEthnicityEntry::BeforeDelete()
{
}

void FTextureSwitchBodyShapeEntry::AfterRead()
{
}

void FTextureSwitchBodyShapeEntry::BeforeDelete()
{
}

void FTextureSwitchItemEntry::AfterRead()
{
}

void FTextureSwitchItemEntry::BeforeDelete()
{
}

void FColorTextureSwitchSeedEntry::AfterRead()
{
}

void FColorTextureSwitchSeedEntry::BeforeDelete()
{
}

void FMeshPatchEntry::AfterRead()
{
}

void FMeshPatchEntry::BeforeDelete()
{
}

void FWardrobeOutfitCategoryBias::AfterRead()
{
}

void FWardrobeOutfitCategoryBias::BeforeDelete()
{
}

void FWardrobeOutfitResult::AfterRead()
{
}

void FWardrobeOutfitResult::BeforeDelete()
{
}

void FIPGTestSimpleType::AfterRead()
{
}

void FIPGTestSimpleType::BeforeDelete()
{
}

void FIPGTestClass::AfterRead()
{
}

void FIPGTestClass::BeforeDelete()
{
}

void FIPGDynamicSliderName::AfterRead()
{
}

void FIPGDynamicSliderName::BeforeDelete()
{
}

void FIPGBlendingMethod::AfterRead()
{
}

void FIPGBlendingMethod::BeforeDelete()
{
}

void FIPGSetGroup::AfterRead()
{
}

void FIPGSetGroup::BeforeDelete()
{
}

void FIPGCompatibleSet::AfterRead()
{
}

void FIPGCompatibleSet::BeforeDelete()
{
}

void FIPGBodyShape::AfterRead()
{
}

void FIPGBodyShape::BeforeDelete()
{
}

void FIPGBodyShapes::AfterRead()
{
}

void FIPGBodyShapes::BeforeDelete()
{
}

void FIPGBlendRange::AfterRead()
{
}

void FIPGBlendRange::BeforeDelete()
{
}

void FIPGBlendNode::AfterRead()
{
}

void FIPGBlendNode::BeforeDelete()
{
}

void FIPGSetData::AfterRead()
{
}

void FIPGSetData::BeforeDelete()
{
}

void FIPGSetsData::AfterRead()
{
}

void FIPGSetsData::BeforeDelete()
{
}

void FIPGData::AfterRead()
{
}

void FIPGData::BeforeDelete()
{
}

void FConfig::AfterRead()
{
}

void FConfig::BeforeDelete()
{
}

void FClothingSlot::AfterRead()
{
}

void FClothingSlot::BeforeDelete()
{
}

void FWardrobeConfig::AfterRead()
{
}

void FWardrobeConfig::BeforeDelete()
{
}

void FOutfit::AfterRead()
{
}

void FOutfit::BeforeDelete()
{
}

void FClothingPart::AfterRead()
{
}

void FClothingPart::BeforeDelete()
{
}

void FClothingItem::AfterRead()
{
}

void FClothingItem::BeforeDelete()
{
}

// Function:
//		Offset -> 0x0149B680
//		Name   -> Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* UAnimationSwitchDataAsset::GetAnimSetIdForDesc(const struct FPirateDescription& Desc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc");

	UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params params {};
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimationSwitchDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAnimationSwitchDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x01499F90
//		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FScriptDelegate                             AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync");

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params params {};
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01499F10
//		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMesh* UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh");

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params params {};
	params.CharacterMeshSpecification = CharacterMeshSpecification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature");

	UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01499D70
//		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FIPGBlendShape>                      BlendShapes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCharacterMeshBakeFunctionLibrary::STATIC_AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes");

	UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params params {};
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.BlendShapes = BlendShapes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCharacterMeshBakeFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCharacterMeshBakeFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void USkeletonsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USkeletonsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCharacterMeshBakeSpecification::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CharacterMesh, USkeletalMesh);
	READ_PTR_FULL(BaseMeshReferenceSkeleton, USkeletalMesh);
	READ_PTR_FULL(SourceSkeletons, USkeletonsDataAsset);
}

void UCharacterMeshBakeSpecification::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CharacterMesh);
	DELE_PTR_FULL(BaseMeshReferenceSkeleton);
	DELE_PTR_FULL(SourceSkeletons);
}

// Function:
//		Offset -> 0x0149C5A0
//		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::STATIC_MakeCharacterMeshSpecification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification");

	UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A2A0
//		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               BaseMesh                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BaseMeshWeight                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UMeshPatchAsset*>                     MeshPatchAssets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      MeshPatchAssetWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class USkeletalMesh*                               TargetMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMeshBakeTestFunctionLibrary::STATIC_BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets");

	UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params params {};
	params.BaseMesh = BaseMesh;
	params.BaseMeshWeight = BaseMeshWeight;
	params.MeshPatchAssets = MeshPatchAssets;
	params.MeshPatchAssetWeights = MeshPatchAssetWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetMesh != nullptr)
		*TargetMesh = params.TargetMesh;

}


// Function:
//		Offset -> 0x0149A080
//		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      CharacterMeshBakeSpecificationClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::STATIC_BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault");

	UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params params {};
	params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01499E50
//		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               MeshA                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               MeshB                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCharacterMeshBakeTestFunctionLibrary::STATIC_AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria");

	UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params params {};
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCharacterMeshBakeTestFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCharacterMeshBakeTestFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UColorTexture::AfterRead()
{
	UTexture::AfterRead();

}

void UColorTexture::BeforeDelete()
{
	UTexture::BeforeDelete();

}

// Function:
//		Offset -> 0x0149BB60
//		Name   -> Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MeshPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetPathFromMeshPathAndTypeName(const struct FString& MeshPath, const struct FString& TypeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName");

	UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params params {};
	params.MeshPath = MeshPath;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149BA80
//		Name   -> Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               Mesh                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UMeshPatchAsset*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMeshPatchAsset* UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const struct FString& TypeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName");

	UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params params {};
	params.Mesh = Mesh;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFileAccessFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UFileAccessFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UMaterialReferencesDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UMaterialReferencesDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x0149B860
//		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              Threshold                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UPirateBodyShapeFunctionLibrary::STATIC_GetHighestWeighted(float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted");

	UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params params {};
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A760
//		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TEnumAsByte<PirateGenerator_EIPGGender>            Gender                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate                             (ConstParm, Parm, OutParm, ReferenceParm)
//		float                                              BaseMeshBlendWeight                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             BodyShapeBlendNames                                        (Parm, OutParm, ZeroConstructor)
//		TArray<float>                                      BodyShapeBlendWeights                                      (Parm, OutParm, ZeroConstructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPirateBodyShapeFunctionLibrary::STATIC_FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<PirateGenerator_EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<struct FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params params {};
	params.Gender = Gender;
	params.BodyShapeWheelRadialCoordinate = BodyShapeWheelRadialCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BaseMeshBlendWeight != nullptr)
		*BaseMeshBlendWeight = params.BaseMeshBlendWeight;
	if (BodyShapeBlendNames != nullptr)
		*BodyShapeBlendNames = params.BodyShapeBlendNames;
	if (BodyShapeBlendWeights != nullptr)
		*BodyShapeBlendWeights = params.BodyShapeBlendWeights;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A6E0
//		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   UV                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRadialCoordinate                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRadialCoordinate UPirateBodyShapeFunctionLibrary::STATIC_ConvertToRadialCoordinate(const struct FVector2D& UV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params params {};
	params.UV = UV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A650
//		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRadialCoordinate                           Coord                                                      (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UPirateBodyShapeFunctionLibrary::STATIC_ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate");

	UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params params {};
	params.Coord = Coord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPirateBodyShapeFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UPirateBodyShapeFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UPirateGeneratorMaterials::AfterRead()
{
	UObject::AfterRead();

}

void UPirateGeneratorMaterials::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0149CF80
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FPirateDescription                          InDesc                                                     (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPirateGeneratorFunctionLibrary::STATIC_SavePirateDescription(const struct FString& RelativePath, const struct FPirateDescription& InDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription");

	UPirateGeneratorFunctionLibrary_SavePirateDescription_Params params {};
	params.RelativePath = RelativePath;
	params.InDesc = InDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149CEF0
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRadialCoordinate                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRadialCoordinate UPirateGeneratorFunctionLibrary::STATIC_RandomBodyShape(int Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape");

	UPirateGeneratorFunctionLibrary_RandomBodyShape_Params params {};
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149C450
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FPirateDescription                          OutDesc                                                    (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPirateGeneratorFunctionLibrary::STATIC_LoadPirateDescription(const struct FString& RelativePath, struct FPirateDescription* OutDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription");

	UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params params {};
	params.RelativePath = RelativePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149C220
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPirateDescription                          OutDesc                                                    (Parm, OutParm)
void UPirateGeneratorFunctionLibrary::STATIC_K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<PirateGenerator_EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread");

	UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params params {};
	params.Desc = Desc;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;

}


// Function:
//		Offset -> 0x0149C1F0
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPirateGeneratorFunctionLibrary::STATIC_IPGLatestVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion");

	UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149C0F0
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     RefName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPirateGeneratorFunctionLibrary::STATIC_GetSeedFromString(const struct FString& RefName, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString");

	UPirateGeneratorFunctionLibrary_GetSeedFromString_Params params {};
	params.RefName = RefName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149B270
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FPirateGeneratorTextureReference>    OutReferences                                              (Parm, OutParm, ZeroConstructor)
void UPirateGeneratorFunctionLibrary::STATIC_GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences");

	UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutReferences != nullptr)
		*OutReferences = params.OutReferences;

}


// Function:
//		Offset -> 0x0149B160
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FString> UPirateGeneratorFunctionLibrary::STATIC_GetAllDescriptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions");

	UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149AD50
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bOverrideBodyShape                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRadialCoordinate                           BodyShapeOverride                                          (Parm)
//		TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FIPGDynamicSlider>                   DynamicSliders                                             (Parm, ZeroConstructor)
//		TArray<struct FName>                               TextureReferences                                          (Parm, ZeroConstructor)
//		TArray<struct FIPGScalarParameter>                 ScalarParameters                                           (Parm, ZeroConstructor)
//		struct FPirateDescription                          ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<PirateGenerator_EIPGGender> SpecificGender, TEnumAsByte<PirateGenerator_EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion");

	UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params params {};
	params.Seed = Seed;
	params.Version = Version;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A980
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bOverrideBodyShape                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRadialCoordinate                           BodyShapeOverride                                          (Parm)
//		TEnumAsByte<PirateGenerator_EIPGGender>            SpecificGender                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGEthnicity>         SpecificEthnicity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FIPGDynamicSlider>                   DynamicSliders                                             (Parm, ZeroConstructor)
//		TArray<struct FName>                               TextureReferences                                          (Parm, ZeroConstructor)
//		TArray<struct FIPGScalarParameter>                 ScalarParameters                                           (Parm, ZeroConstructor)
//		struct FPirateDescription                          ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<PirateGenerator_EIPGGender> SpecificGender, TEnumAsByte<PirateGenerator_EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate");

	UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params params {};
	params.Seed = Seed;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A100
//		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<PirateGenerator_EPirateBakeFlags>      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FScriptDelegate                             AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UPirateGeneratorFunctionLibrary::STATIC_BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<PirateGenerator_EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync");

	UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params params {};
	params.Desc = Desc;
	params.Flags = Flags;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPirateGeneratorFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UPirateGeneratorFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UPirateGeneratorSettings::AfterRead()
{
	UObject::AfterRead();

}

void UPirateGeneratorSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0149CC50
//		Name   -> Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               MeshWithBaseSkeleton                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletonsDataAsset*                         SkeletonsDataAsset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MeshTypeSkeletonFileFormat                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const struct FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification");

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params params {};
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.MeshWithBaseSkeleton = MeshWithBaseSkeleton;
	params.SkeletonsDataAsset = SkeletonsDataAsset;
	params.MeshTypeSkeletonFileFormat = MeshTypeSkeletonFileFormat;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0149CA20
//		Name   -> Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class USkeletalMesh*>                       SubMeshes                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification");

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params params {};
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.SubMeshes = SubMeshes;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPreparePirateMeshBakeTestFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UPreparePirateMeshBakeTestFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UTextureSwitch::AfterRead()
{
	UTextureProxy::AfterRead();

}

void UTextureSwitch::BeforeDelete()
{
	UTextureProxy::BeforeDelete();

}

void UTextureSwitchBySeed::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UTextureSwitchBySeed::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UTextureSwitchByGender::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UTextureSwitchByGender::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UTextureSwitchByEthnicity::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UTextureSwitchByEthnicity::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UTextureSwitchByBodyShape::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UTextureSwitchByBodyShape::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UTextureSwitchByItem::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UTextureSwitchByItem::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UColorTextureSwitchBySeed::AfterRead()
{
	UTextureSwitch::AfterRead();

}

void UColorTextureSwitchBySeed::BeforeDelete()
{
	UTextureSwitch::BeforeDelete();

}

void UWardrobeExcludeDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWardrobeExcludeDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UWardrobeDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWardrobeDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x0149B780
//		Name   -> Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWardrobeOutfitDataAsset::GetBiasForCategory(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory");

	UWardrobeOutfitDataAsset_GetBiasForCategory_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWardrobeOutfitDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWardrobeOutfitDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x0149C810
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FName>                               Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGGender>            Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FScriptDelegate                             AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UWardrobeFunctionLibrary::STATIC_PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<PirateGenerator_EIPGPirateType> PirateType, TEnumAsByte<PirateGenerator_EIPGGender> Gender, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync");

	UWardrobeFunctionLibrary_PickOutfitAsync_Params params {};
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0149C5D0
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FName>                               Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGGender>            Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FWardrobeOutfitResult                       Result                                                     (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWardrobeFunctionLibrary::STATIC_PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<PirateGenerator_EIPGPirateType> PirateType, TEnumAsByte<PirateGenerator_EIPGGender> Gender, struct FWardrobeOutfitResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit");

	UWardrobeFunctionLibrary_PickOutfit_Params params {};
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149BF40
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FName>                               InputItems                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias");

	UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params params {};
	params.Seed = Seed;
	params.InputItems = InputItems;
	params.BiasPerCategory = BiasPerCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149BE00
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FName>                               InputItems                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems");

	UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params params {};
	params.Seed = Seed;
	params.InputItems = InputItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149BCB0
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UWardrobeOutfitDataAsset*                    Outfit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGGender>            Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<PirateGenerator_EIPGGender> Gender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit");

	UWardrobeFunctionLibrary_GetRandomOutfit_Params params {};
	params.Outfit = Outfit;
	params.Seed = Seed;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149B5E0
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeTypes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes");

	UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149B470
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWithExclusions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItemsForType(const struct FString& TypeName, TEnumAsByte<PirateGenerator_EIPGPirateType> PirateType, bool bWithExclusions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType");

	UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params params {};
	params.TypeName = TypeName;
	params.PirateType = PirateType;
	params.bWithExclusions = bWithExclusions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149B390
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItems(TEnumAsByte<PirateGenerator_EIPGPirateType> PirateType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems");

	UWardrobeFunctionLibrary_GetAllWardrobeItems_Params params {};
	params.PirateType = PirateType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A490
//		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FName>                               ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FName>                               Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TEnumAsByte<PirateGenerator_EIPGPirateType>        PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PirateGenerator_EIPGGender>            Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWardrobeFunctionLibrary::STATIC_CanLoadOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<PirateGenerator_EIPGPirateType> PirateType, TEnumAsByte<PirateGenerator_EIPGGender> Gender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit");

	UWardrobeFunctionLibrary_CanLoadOutfit_Params params {};
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class USkeletalMesh*>                       Meshes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature");

	UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params params {};
	params.Success = Success;
	params.Meshes = Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWardrobeFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWardrobeFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
