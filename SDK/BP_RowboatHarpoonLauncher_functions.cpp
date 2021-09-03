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

// Function BP_RowboatHarpoonLauncher.BP_RowboatHarpoonLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RowboatHarpoonLauncher_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RowboatHarpoonLauncher.BP_RowboatHarpoonLauncher_C.UserConstructionScript");

	ABP_RowboatHarpoonLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_RowboatHarpoonLauncher_C::AfterRead()
{
	AHarpoonLauncher::AfterRead();

	READ_PTR_FULL(BarrelNoseCollision, USphereComponent);
	READ_PTR_FULL(CubeNotWalkable, UStaticMeshComponent);
	READ_PTR_FULL(MountCollision, UCapsuleComponent);
	READ_PTR_FULL(BarrelCollision, UCapsuleComponent);
}

void ABP_RowboatHarpoonLauncher_C::BeforeDelete()
{
	AHarpoonLauncher::BeforeDelete();

	DELE_PTR_FULL(BarrelNoseCollision);
	DELE_PTR_FULL(CubeNotWalkable);
	DELE_PTR_FULL(MountCollision);
	DELE_PTR_FULL(BarrelCollision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
