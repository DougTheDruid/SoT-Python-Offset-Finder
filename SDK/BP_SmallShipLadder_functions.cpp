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
//		Name   -> Function BP_SmallShipLadder.BP_SmallShipLadder_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_SmallShipLadder_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadder.BP_SmallShipLadder_C.GetDockableInfo");

	ABP_SmallShipLadder_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SmallShipLadder.BP_SmallShipLadder_C.Setup Spline
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FVector>                             Positions                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_SmallShipLadder_C::Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadder.BP_SmallShipLadder_C.Setup Spline");

	ABP_SmallShipLadder_C_Setup_Spline_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SmallShipLadder.BP_SmallShipLadder_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SmallShipLadder_C::CanInteract(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadder.BP_SmallShipLadder_C.CanInteract");

	ABP_SmallShipLadder_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SmallShipLadder.BP_SmallShipLadder_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShipLadder_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipLadder.BP_SmallShipLadder_C.UserConstructionScript");

	ABP_SmallShipLadder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShipLadder_C::AfterRead()
{
	ALadder::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_SmallShipLadder_C::BeforeDelete()
{
	ALadder::BeforeDelete();

	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
