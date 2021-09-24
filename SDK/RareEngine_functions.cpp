// Name: SoT, Version: 2.3.0

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

void FMemoryVisualiserStat::AfterRead()
{
}

void FMemoryVisualiserStat::BeforeDelete()
{
}

void FMemoryVisualiserClass::AfterRead()
{
	READ_PTR_FULL(ClassType, UClass);
}

void FMemoryVisualiserClass::BeforeDelete()
{
	DELE_PTR_FULL(ClassType);
}

void FMemoryVisualiserCategory::AfterRead()
{
}

void FMemoryVisualiserCategory::BeforeDelete()
{
}

void FStaticMeshComponentList::AfterRead()
{
}

void FStaticMeshComponentList::BeforeDelete()
{
}

void FStaticMeshActorList::AfterRead()
{
}

void FStaticMeshActorList::BeforeDelete()
{
}

void FMemoryCommonData::AfterRead()
{
}

void FMemoryCommonData::BeforeDelete()
{
}

void URareGameEngine::AfterRead()
{
	UGameEngine::AfterRead();

}

void URareGameEngine::BeforeDelete()
{
	UGameEngine::BeforeDelete();

}

void UAssetReferencer::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAssetReferencer::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAudioHardwareDeviceService::AfterRead()
{
	UObject::AfterRead();

}

void UAudioHardwareDeviceService::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x02EE37C0
//		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                InThreshold                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_SetHitchThreshold(int InThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold");

	UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params;
	params.InThreshold = InThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EE3720
//		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchNameThisFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EE36F0
//		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchLengthThisFrameMs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EE32D0
//		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DumpThisFramesHitchesToLog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog");

	UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EE32A0
//		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DidHitchOccurThisFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UHitchDiagnosisBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UHitchDiagnosisBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UMemoryUsageVisualiserSettings::AfterRead()
{
	UObject::AfterRead();

}

void UMemoryUsageVisualiserSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ARareHUD::AfterRead()
{
	AHUD::AfterRead();

}

void ARareHUD::BeforeDelete()
{
	AHUD::BeforeDelete();

}

// Function:
//		Offset -> 0x02EE3280
//		Name   -> Function RareEngine.StallDetector.Deactivate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UStallDetector::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Deactivate");

	UStallDetector_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EE31B0
//		Name   -> Function RareEngine.StallDetector.CreateStallDetector
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CreateActive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStallDetector*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStallDetector* UStallDetector::STATIC_CreateStallDetector(float Delay, bool CreateActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.CreateStallDetector");

	UStallDetector_CreateStallDetector_Params params;
	params.Delay = Delay;
	params.CreateActive = CreateActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EE3190
//		Name   -> Function RareEngine.StallDetector.Activate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UStallDetector::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Activate");

	UStallDetector_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStallDetector::AfterRead()
{
	UObject::AfterRead();

}

void UStallDetector::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x02EE34F0
//		Name   -> Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UStaticMesh*>                         MeshFilter                                                 (ConstParm, Parm, ZeroConstructor)
//		TArray<struct FStaticMeshComponentList>            OutComponentLists                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
//		class ULevel*                                      RestrictToLevel                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutComponentLists != nullptr)
		*OutComponentLists = params.OutComponentLists;

}


// Function:
//		Offset -> 0x02EE32F0
//		Name   -> Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UStaticMesh*>                         MeshFilter                                                 (ConstParm, Parm, ZeroConstructor)
//		TArray<struct FStaticMeshActorList>                OutActorLists                                              (Parm, OutParm, ZeroConstructor)
//		class ULevel*                                      RestrictToLevel                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActorLists != nullptr)
		*OutActorLists = params.OutActorLists;

}


void UStaticMeshActorBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UStaticMeshActorBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
