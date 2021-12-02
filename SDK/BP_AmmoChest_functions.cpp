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
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText ABP_AmmoChest_C::GetObjectDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName");

	ABP_AmmoChest_C_GetObjectDisplayName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_AmmoChest_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint");

	ABP_AmmoChest_C_GetClosestInteractionPoint_Params params {};
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AmmoChest_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript");

	ABP_AmmoChest_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_AmmoChest_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay");

	ABP_AmmoChest_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AmmoChest_C::Blueprint_OnInteract_Client(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client");

	ABP_AmmoChest_C_Blueprint_OnInteract_Client_Params params {};
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AmmoChest_C::Blueprint_OnInteract_Server(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server");

	ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params params {};
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AmmoChest_C::ExecuteUbergraph_BP_AmmoChest(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest");

	ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AmmoChest_C::AfterRead()
{
	AAmmoChest::AfterRead();

	READ_PTR_FULL(Hits, UBoxComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_AmmoChest_C::BeforeDelete()
{
	AAmmoChest::BeforeDelete();

	DELE_PTR_FULL(Hits);
	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(DynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
