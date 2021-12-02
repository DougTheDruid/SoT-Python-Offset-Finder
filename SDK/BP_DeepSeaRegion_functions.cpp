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
//		Name   -> Function BP_DeepSeaRegion.BP_DeepSeaRegion_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DeepSeaRegion_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeepSeaRegion.BP_DeepSeaRegion_C.UserConstructionScript");

	ABP_DeepSeaRegion_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DeepSeaRegion_C::AfterRead()
{
	ADeepSeaRegion::AfterRead();

	READ_PTR_FULL(PreviewCapsuleTwo, UCapsuleComponent);
	READ_PTR_FULL(PreviewCapsuleOne, UCapsuleComponent);
}

void ABP_DeepSeaRegion_C::BeforeDelete()
{
	ADeepSeaRegion::BeforeDelete();

	DELE_PTR_FULL(PreviewCapsuleTwo);
	DELE_PTR_FULL(PreviewCapsuleOne);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
