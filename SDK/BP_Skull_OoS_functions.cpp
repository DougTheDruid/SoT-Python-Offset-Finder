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
//		Name   -> Function BP_Skull_OoS.BP_Skull_OoS_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Skull_OoS_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Skull_OoS.BP_Skull_OoS_C.UserConstructionScript");

	ABP_Skull_OoS_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Skull_OoS_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(gmp_bounty_skull_01_b, UStaticMeshComponent);
}

void ABP_Skull_OoS_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(gmp_bounty_skull_01_b);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
