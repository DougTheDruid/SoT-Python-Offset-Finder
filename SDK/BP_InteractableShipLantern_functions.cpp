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
//		Name   -> Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InteractableShipLantern_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript");

	ABP_InteractableShipLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_InteractableShipLantern_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay");

	ABP_InteractableShipLantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_InteractableShipLantern_C::LightStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged");

	ABP_InteractableShipLantern_C_LightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_InteractableShipLantern_C::ExecuteUbergraph_BP_InteractableShipLantern(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern");

	ABP_InteractableShipLantern_C_ExecuteUbergraph_BP_InteractableShipLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_InteractableShipLantern_C::AfterRead()
{
	AShipInteractableLight::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(LanternGlow, UStaticMeshComponent);
	READ_PTR_FULL(Lantern, UStaticMeshComponent);
	READ_PTR_FULL(Hook, UStaticMeshComponent);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DynamicGlowMaterial, UMaterialInstanceDynamic);
}

void ABP_InteractableShipLantern_C::BeforeDelete()
{
	AShipInteractableLight::BeforeDelete();

	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(LanternGlow);
	DELE_PTR_FULL(Lantern);
	DELE_PTR_FULL(Hook);
	DELE_PTR_FULL(DynamicMaterial);
	DELE_PTR_FULL(DynamicGlowMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
