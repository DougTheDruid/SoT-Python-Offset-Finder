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
//		Name   -> Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Repair_ERepairableState>               RepairableState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UDecalComponent*                             DecalComponent                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RelativeTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor)
//		class UMaterialInterface*                          NewDecalMaterial                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::AttemptToAddDamageDecal(TEnumAsByte<Repair_ERepairableState> RepairableState, class UDecalComponent** DecalComponent, const struct FTransform& RelativeTransform, class UMaterialInterface* NewDecalMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal");

	ABP_Mast_C_AttemptToAddDamageDecal_Params params {};
	params.RepairableState = RepairableState;
	params.RelativeTransform = RelativeTransform;
	params.NewDecalMaterial = NewDecalMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DecalComponent != nullptr)
		*DecalComponent = params.DecalComponent;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Mast_C::IsMastVisuallyFractured()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured");

	ABP_Mast_C_IsMastVisuallyFractured_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Customise Static Mesh
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UStaticMesh*                                 New_Static_Mesh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStaticMeshComponent*                        Static_Mesh_Component                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Customise Static Mesh");

	ABP_Mast_C_Customise_Static_Mesh_Params params {};
	params.New_Static_Mesh = New_Static_Mesh;
	params.Static_Mesh_Component = Static_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Trim Array Func
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UObject*>                             TargetArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		int                                                Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::Trim_Array_Func(TArray<class UObject*>* TargetArray, int Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Trim Array Func");

	ABP_Mast_C_Trim_Array_Func_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Mast_C::Initialise_Sail_Parameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Initialise Sail Parameters");

	ABP_Mast_C_Initialise_Sail_Parameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Mast_C::Populate_Lists_of_Yards_and_Sails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails");

	ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Cull Excess Components
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UActorComponent*>                     TargetArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_Mast_C::Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Cull Excess Components");

	ABP_Mast_C_Cull_Excess_Components_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.Initialise Sails
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Mast_C::Initialise_Sails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Initialise Sails");

	ABP_Mast_C_Initialise_Sails_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Mast_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.UserConstructionScript");

	ABP_Mast_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.OnMastDescLoaded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UMastDescAsset*                              MastDesc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.OnMastDescLoaded");

	ABP_Mast_C_OnMastDescLoaded_Params params {};
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UStaticMesh*                                 NewMeshBottom                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStaticMesh*                                 NewMeshTop                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::OnMastMeshSwapRequested(class UStaticMesh* NewMeshBottom, class UStaticMesh* NewMeshTop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested");

	ABP_Mast_C_OnMastMeshSwapRequested_Params params {};
	params.NewMeshBottom = NewMeshBottom;
	params.NewMeshTop = NewMeshTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<Repair_ERepairableState>               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Repair_ERepairableState>               PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class URepairableComponent*                        RepairableComponent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature_Params params {};
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<Repair_ERepairableState>               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Repair_ERepairableState>               PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class URepairableComponent*                        RepairableComponent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature_Params params {};
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<Repair_ERepairableState>               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Repair_ERepairableState>               PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class URepairableComponent*                        RepairableComponent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature_Params params {};
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::ExecuteUbergraph_BP_Mast(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast");

	ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Mast_C::AfterRead()
{
	AMast::AfterRead();

	READ_PTR_FULL(MastTopComponent, UStaticMeshComponent);
	READ_PTR_FULL(TopgallantActor, UChildActorComponent);
	READ_PTR_FULL(MainsailActor, UChildActorComponent);
	READ_PTR_FULL(TopsailActor, UChildActorComponent);
	READ_PTR_FULL(Main_Yard, UStaticMeshComponent);
	READ_PTR_FULL(Topgallant_Yard, UStaticMeshComponent);
	READ_PTR_FULL(Top_Yard, UStaticMeshComponent);
	READ_PTR_FULL(MastBaseComponent, UStaticMeshComponent);
	READ_PTR_FULL(Sail_Material, UMaterialInstance);
	READ_PTR_FULL(DamageDecalRight, UDecalComponent);
	READ_PTR_FULL(DamageDecalLeft, UDecalComponent);
}

void ABP_Mast_C::BeforeDelete()
{
	AMast::BeforeDelete();

	DELE_PTR_FULL(MastTopComponent);
	DELE_PTR_FULL(TopgallantActor);
	DELE_PTR_FULL(MainsailActor);
	DELE_PTR_FULL(TopsailActor);
	DELE_PTR_FULL(Main_Yard);
	DELE_PTR_FULL(Topgallant_Yard);
	DELE_PTR_FULL(Top_Yard);
	DELE_PTR_FULL(MastBaseComponent);
	DELE_PTR_FULL(Sail_Material);
	DELE_PTR_FULL(DamageDecalRight);
	DELE_PTR_FULL(DamageDecalLeft);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
