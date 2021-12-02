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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_HarpoonLauncher.BP_HarpoonLauncher_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_HarpoonLauncher_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HarpoonLauncher.BP_HarpoonLauncher_C.UserConstructionScript");

	ABP_HarpoonLauncher_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_HarpoonLauncher_C::AfterRead()
{
	AHarpoonLauncher::AfterRead();

	READ_PTR_FULL(CubeNotWalkable, UStaticMeshComponent);
	READ_PTR_FULL(MountCollision, UCapsuleComponent);
	READ_PTR_FULL(BarrelCollision, UCapsuleComponent);
}

void ABP_HarpoonLauncher_C::BeforeDelete()
{
	AHarpoonLauncher::BeforeDelete();

	DELE_PTR_FULL(CubeNotWalkable);
	DELE_PTR_FULL(MountCollision);
	DELE_PTR_FULL(BarrelCollision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
