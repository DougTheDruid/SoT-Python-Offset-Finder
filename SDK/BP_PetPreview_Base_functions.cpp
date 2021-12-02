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
//		Name   -> Function BP_PetPreview_Base.BP_PetPreview_Base_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PetPreview_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PetPreview_Base.BP_PetPreview_Base_C.UserConstructionScript");

	ABP_PetPreview_Base_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PetPreview_Base_C::AfterRead()
{
	APreviewPet::AfterRead();

	READ_PTR_FULL(CosmeticItemAnimation, UCosmeticItemAnimationComponent);
}

void ABP_PetPreview_Base_C::BeforeDelete()
{
	APreviewPet::BeforeDelete();

	DELE_PTR_FULL(CosmeticItemAnimation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
