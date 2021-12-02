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
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_CustomisableLadder_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetDockableInfo");

	ABP_CustomisableLadder_C_GetDockableInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.Construct Ladder
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CustomisableLadder_C::Construct_Ladder()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.Construct Ladder");

	ABP_CustomisableLadder_C_Construct_Ladder_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Total Height Before Cap
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CustomisableLadder_C::Get_Total_Height_Before_Cap(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Total Height Before Cap");

	ABP_CustomisableLadder_C_Get_Total_Height_Before_Cap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Steps
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Num_Steps                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CustomisableLadder_C::Get_Steps(int* Num_Steps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Steps");

	ABP_CustomisableLadder_C_Get_Steps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Num_Steps != nullptr)
		*Num_Steps = params.Num_Steps;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetBottomLadderRungTransform
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ABP_CustomisableLadder_C::GetBottomLadderRungTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetBottomLadderRungTransform");

	ABP_CustomisableLadder_C_GetBottomLadderRungTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetTopLadderRungTransform
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ABP_CustomisableLadder_C::GetTopLadderRungTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetTopLadderRungTransform");

	ABP_CustomisableLadder_C_GetTopLadderRungTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get World Loc at Height Along Z
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Relative_Z                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CustomisableLadder_C::Get_World_Loc_at_Height_Along_Z(float Relative_Z, struct FVector* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get World Loc at Height Along Z");

	ABP_CustomisableLadder_C_Get_World_Loc_at_Height_Along_Z_Params params {};
	params.Relative_Z = Relative_Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.SetupSpline
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USplineComponent*                            Spline_Component                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FVector>                             Positions                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CustomisableLadder_C::SetupSpline(class USplineComponent* Spline_Component, TArray<struct FVector>* Positions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.SetupSpline");

	ABP_CustomisableLadder_C_SetupSpline_Params params {};
	params.Spline_Component = Spline_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CustomisableLadder_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.UserConstructionScript");

	ABP_CustomisableLadder_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CustomisableLadder_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.ReceiveBeginPlay");

	ABP_CustomisableLadder_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_CustomisableLadder.BP_CustomisableLadder_C.ExecuteUbergraph_BP_CustomisableLadder
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CustomisableLadder_C::ExecuteUbergraph_BP_CustomisableLadder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder.BP_CustomisableLadder_C.ExecuteUbergraph_BP_CustomisableLadder");

	ABP_CustomisableLadder_C_ExecuteUbergraph_BP_CustomisableLadder_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CustomisableLadder_C::AfterRead()
{
	ALadder::AfterRead();

	READ_PTR_FULL(InteractableComponent, UInteractableComponent);
	READ_PTR_FULL(Ladder_Cap, UStaticMeshComponent);
	READ_PTR_FULL(Material_Override, UMaterialInterface);
}

void ABP_CustomisableLadder_C::BeforeDelete()
{
	ALadder::BeforeDelete();

	DELE_PTR_FULL(InteractableComponent);
	DELE_PTR_FULL(Ladder_Cap);
	DELE_PTR_FULL(Material_Override);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
