// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function BP_EmissaryFlotsam_Proxy_Base.BP_EmissaryFlotsam_Proxy_Base_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryFlotsam_Proxy_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryFlotsam_Proxy_Base.BP_EmissaryFlotsam_Proxy_Base_C.UserConstructionScript");

	ABP_EmissaryFlotsam_Proxy_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryFlotsam_Proxy_Base_C::AfterRead()
{
	AStaticSimpleBootyItemProxy::AfterRead();

	READ_PTR_FULL(EmissaryFlotsamTooltipCustomizer, UEmissaryFlotsamTooltipCustomizerComponent);
	READ_PTR_FULL(Glint, UGlintComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_EmissaryFlotsam_Proxy_Base_C::BeforeDelete()
{
	AStaticSimpleBootyItemProxy::BeforeDelete();

	DELE_PTR_FULL(EmissaryFlotsamTooltipCustomizer);
	DELE_PTR_FULL(Glint);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
