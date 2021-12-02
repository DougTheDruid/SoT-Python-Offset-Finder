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
//		Name   -> Function BP_flag_02_f.BP_flag_02_f_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_flag_02_f_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_flag_02_f.BP_flag_02_f_C.UserConstructionScript");

	ABP_flag_02_f_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_flag_02_f_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bld_flag_post_02_flag_f, UStaticMeshComponent);
	READ_PTR_FULL(bld_flag_post_02_b, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_flag_02_f_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bld_flag_post_02_flag_f);
	DELE_PTR_FULL(bld_flag_post_02_b);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
