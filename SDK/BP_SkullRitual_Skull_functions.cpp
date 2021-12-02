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
//		Name   -> Function BP_SkullRitual_Skull.BP_SkullRitual_Skull_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SkullRitual_Skull_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkullRitual_Skull.BP_SkullRitual_Skull_C.UserConstructionScript");

	ABP_SkullRitual_Skull_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SkullRitual_Skull_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(trs_briggsys_skull_01_c, UStaticMeshComponent);
}

void ABP_SkullRitual_Skull_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(trs_briggsys_skull_01_c);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
