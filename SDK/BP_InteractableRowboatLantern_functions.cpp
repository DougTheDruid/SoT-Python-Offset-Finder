// Name: SoT, Version: 2.2.1.1

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

// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InteractableRowboatLantern_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript");

	ABP_InteractableRowboatLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged
// (Event, Public, BlueprintEvent)
void ABP_InteractableRowboatLantern_C::LightStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged");

	ABP_InteractableRowboatLantern_C_LightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_InteractableRowboatLantern_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay");

	ABP_InteractableRowboatLantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_InteractableRowboatLantern_C::ExecuteUbergraph_BP_InteractableRowboatLantern(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern");

	ABP_InteractableRowboatLantern_C_ExecuteUbergraph_BP_InteractableRowboatLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_InteractableRowboatLantern_C::AfterRead()
{
	AInteractableLight::AfterRead();

	READ_PTR_FULL(LanternGlow, UStaticMeshComponent);
	READ_PTR_FULL(Lantern, UStaticMeshComponent);
	READ_PTR_FULL(Hook, UStaticMeshComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(DynamicGlowMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_InteractableRowboatLantern_C::BeforeDelete()
{
	AInteractableLight::BeforeDelete();

	DELE_PTR_FULL(LanternGlow);
	DELE_PTR_FULL(Lantern);
	DELE_PTR_FULL(Hook);
	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(DynamicGlowMaterial);
	DELE_PTR_FULL(DynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
