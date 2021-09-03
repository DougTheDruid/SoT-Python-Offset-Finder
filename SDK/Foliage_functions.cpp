// Name: SoT, Version: 2.2.1.1

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

void FFoliageTypeObject::AfterRead()
{
	READ_PTR_FULL(FoliageTypeObject, UObject);
	READ_PTR_FULL(TypeInstance, UFoliageType_InstancedStaticMesh);
	READ_PTR_FULL(Type, UClass);
}

void FFoliageTypeObject::BeforeDelete()
{
	DELE_PTR_FULL(FoliageTypeObject);
	DELE_PTR_FULL(TypeInstance);
	DELE_PTR_FULL(Type);
}

void FProceduralFoliageInstance::AfterRead()
{
	READ_PTR_FULL(Type, UFoliageType_InstancedStaticMesh);
}

void FProceduralFoliageInstance::BeforeDelete()
{
	DELE_PTR_FULL(Type);
}

void FConsoleCommands::AfterRead()
{
}

void FConsoleCommands::BeforeDelete()
{
}

void UFoliageInstancedStaticMeshComponent::AfterRead()
{
	UHierarchicalInstancedStaticMeshComponent::AfterRead();

}

void UFoliageInstancedStaticMeshComponent::BeforeDelete()
{
	UHierarchicalInstancedStaticMeshComponent::BeforeDelete();

}

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 CenterPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UFoliageStatistics::STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                    Box                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UFoliageStatistics::STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFoliageStatistics::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UFoliageStatistics::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UFoliageType::AfterRead()
{
	UObject::AfterRead();

}

void UFoliageType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFoliageType_InstancedStaticMesh::AfterRead()
{
	UFoliageType::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMesh);
	READ_PTR_FULL(ComponentClass, UClass);
}

void UFoliageType_InstancedStaticMesh::BeforeDelete()
{
	UFoliageType::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(ComponentClass);
}

void AInstancedFoliageActor::AfterRead()
{
	AActor::AfterRead();

}

void AInstancedFoliageActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AInteractiveFoliageActor::CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AInteractiveFoliageActor::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(CapsuleComponent, UCapsuleComponent);
}

void AInteractiveFoliageActor::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(CapsuleComponent);
}

void UInteractiveFoliageComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UInteractiveFoliageComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void AProceduralFoliageBlockingVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(ProceduralFoliageVolume, AProceduralFoliageVolume);
}

void AProceduralFoliageBlockingVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(ProceduralFoliageVolume);
}

void UProceduralFoliageComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(FoliageSpawner, UProceduralFoliageSpawner);
	READ_PTR_FULL(SpawningVolume, AVolume);
}

void UProceduralFoliageComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(FoliageSpawner);
	DELE_PTR_FULL(SpawningVolume);
}

// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UProceduralFoliageSpawner::AfterRead()
{
	UObject::AfterRead();

}

void UProceduralFoliageSpawner::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UProceduralFoliageTile::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(FoliageSpawner, UProceduralFoliageSpawner);
}

void UProceduralFoliageTile::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(FoliageSpawner);
}

void AProceduralFoliageVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(ProceduralComponent, UProceduralFoliageComponent);
}

void AProceduralFoliageVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(ProceduralComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
