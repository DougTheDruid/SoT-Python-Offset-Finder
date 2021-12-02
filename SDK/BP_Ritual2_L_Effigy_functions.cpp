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
//		Name   -> Function BP_Ritual2_L_Effigy.BP_Ritual2_L_Effigy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Ritual2_L_Effigy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ritual2_L_Effigy.BP_Ritual2_L_Effigy_C.UserConstructionScript");

	ABP_Ritual2_L_Effigy_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Ritual2_L_Effigy_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Effigy_L, USkeletalMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_Ritual2_L_Effigy_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Effigy_L);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
