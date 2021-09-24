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
//		Name   -> Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_SirenTrident_Proxy_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint");

	ABP_SirenTrident_Proxy_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SirenTrident_Proxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript");

	ABP_SirenTrident_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_SirenTrident_Proxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay");

	ABP_SirenTrident_Proxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SirenTrident_Proxy_C::ExecuteUbergraph_BP_SirenTrident_Proxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy");

	ABP_SirenTrident_Proxy_C_ExecuteUbergraph_BP_SirenTrident_Proxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SirenTrident_Proxy_C::AfterRead()
{
	AStaticSimpleBootyItemProxy::AfterRead();

	READ_PTR_FULL(Glint, UGlintComponent);
	READ_PTR_FULL(AmmoEffects, UAmmoEffectsComponent);
	READ_PTR_FULL(AmmoTransfer, UAmmoTransferComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_SirenTrident_Proxy_C::BeforeDelete()
{
	AStaticSimpleBootyItemProxy::BeforeDelete();

	DELE_PTR_FULL(Glint);
	DELE_PTR_FULL(AmmoEffects);
	DELE_PTR_FULL(AmmoTransfer);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
