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

void AAsymmetricClientObject::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BaseComponent, UBoxComponent);
	READ_PTR_FULL(ThirdPersonMesh, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(WaterInteractionComponent, UWaterInteractionComponent);
	READ_PTR_FULL(BuoyancyComponent, UBuoyancyComponent);
	READ_PTR_FULL(SpawnDependentTrackedOwnerComponent, USpawnDependentTrackedOwnerComponent);
}

void AAsymmetricClientObject::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BaseComponent);
	DELE_PTR_FULL(ThirdPersonMesh);
	DELE_PTR_FULL(WaterInteractionComponent);
	DELE_PTR_FULL(BuoyancyComponent);
	DELE_PTR_FULL(SpawnDependentTrackedOwnerComponent);
}

// Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset
// (Final, RequiredAPI, Native, Private)
void AAsymmetricObjectServerManager::OnRep_AsymmetricObjectAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset");

	AAsymmetricObjectServerManager_OnRep_AsymmetricObjectAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAsymmetricObjectServerManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpawnedObject, AAsymmetricClientObject);
	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void AAsymmetricObjectServerManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpawnedObject);
	DELE_PTR_FULL(SceneComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
