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
//		Name   -> Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InteractableShipRailingLight_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.UserConstructionScript");

	ABP_InteractableShipRailingLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.LightStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_InteractableShipRailingLight_C::LightStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.LightStateChanged");

	ABP_InteractableShipRailingLight_C_LightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_InteractableShipRailingLight_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ReceiveBeginPlay");

	ABP_InteractableShipRailingLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ExecuteUbergraph_BP_InteractableShipRailingLight
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_InteractableShipRailingLight_C::ExecuteUbergraph_BP_InteractableShipRailingLight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ExecuteUbergraph_BP_InteractableShipRailingLight");

	ABP_InteractableShipRailingLight_C_ExecuteUbergraph_BP_InteractableShipRailingLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_InteractableShipRailingLight_C::AfterRead()
{
	AShipInteractableLight::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(LanternGlow, UStaticMeshComponent);
	READ_PTR_FULL(Light, UStaticMeshComponent);
	READ_PTR_FULL(DynamicGlowMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_InteractableShipRailingLight_C::BeforeDelete()
{
	AShipInteractableLight::BeforeDelete();

	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(LanternGlow);
	DELE_PTR_FULL(Light);
	DELE_PTR_FULL(DynamicGlowMaterial);
	DELE_PTR_FULL(DynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
