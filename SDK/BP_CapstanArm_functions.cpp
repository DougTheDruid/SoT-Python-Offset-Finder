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
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_CapstanArm_C::GetLookAtPosBasisSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace");

	ABP_CapstanArm_C_GetLookAtPosBasisSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_CapstanArm_C::GetFrontFacingVector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector");

	ABP_CapstanArm_C_GetFrontFacingVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_CapstanArm_C::DoesRequireFacingFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront");

	ABP_CapstanArm_C_DoesRequireFacingFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_CapstanArm_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo");

	ABP_CapstanArm_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_CapstanArm_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint");

	ABP_CapstanArm_C_GetClosestInteractionPoint_Params params;
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
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_CapstanArm_C::GetLookAtPos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos");

	ABP_CapstanArm_C_GetLookAtPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CapstanArm_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript");

	ABP_CapstanArm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CapstanArm_C::AfterRead()
{
	ACapstanArm::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(LookAtPos, USceneComponent);
}

void ABP_CapstanArm_C::BeforeDelete()
{
	ACapstanArm::BeforeDelete();

	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(LookAtPos);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
