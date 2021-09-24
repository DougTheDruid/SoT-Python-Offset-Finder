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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_wil_monkey_02.BP_wil_monkey_02_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_wil_monkey_02_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wil_monkey_02.BP_wil_monkey_02_C.UserConstructionScript");

	ABP_wil_monkey_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_wil_monkey_02_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
}

void ABP_wil_monkey_02_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(SkeletalMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
