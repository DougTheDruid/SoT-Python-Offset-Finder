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
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_HeightDrop_C::CreateComponentList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList");

	ABP_Placement_HeightDrop_C_CreateComponentList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_HeightDrop_C::CreateParentBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds");

	ABP_Placement_HeightDrop_C_CreateParentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_HeightDrop_C::CheckMobilityState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState");

	ABP_Placement_HeightDrop_C_CheckMobilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FHitResult>                          Hit_Results                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		bool                                               Hit_Success                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USceneComponent*                             Current_Component                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Impact_Position                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Impact_Normal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Placement_HeightDrop_C::Get_Valid_Collision(TArray<struct FHitResult>* Hit_Results, bool Hit_Success, class USceneComponent* Current_Component, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision");

	ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params params;
	params.Hit_Success = Hit_Success;
	params.Current_Component = Current_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit_Results != nullptr)
		*Hit_Results = params.Hit_Results;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Impact_Position != nullptr)
		*Impact_Position = params.Impact_Position;
	if (Impact_Normal != nullptr)
		*Impact_Normal = params.Impact_Normal;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Placement_HeightDrop_C::Drop_Components()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components");

	ABP_Placement_HeightDrop_C_Drop_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript");

	ABP_Placement_HeightDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Placement_HeightDrop_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_Placement_HeightDrop_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
