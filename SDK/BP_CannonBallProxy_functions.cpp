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
//		Name   -> Function BP_CannonBallProxy.BP_CannonBallProxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CannonBallProxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBallProxy.BP_CannonBallProxy_C.UserConstructionScript");

	ABP_CannonBallProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CannonBallProxy_C::AfterRead()
{
	AStaticMeshItemProxy::AfterRead();

	READ_PTR_FULL(TrackedOwner, UTrackedOwnerComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_CannonBallProxy_C::BeforeDelete()
{
	AStaticMeshItemProxy::BeforeDelete();

	DELE_PTR_FULL(TrackedOwner);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
