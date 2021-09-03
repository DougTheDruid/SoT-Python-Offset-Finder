#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
struct ABP_Mast_C_AttemptToAddDamageDecal_Params
{
	TEnumAsByte<Repair_ERepairableState>               RepairableState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             DecalComponent;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  RelativeTransform;                                         // (ConstParm, Parm, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          NewDecalMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured
struct ABP_Mast_C_IsMastVisuallyFractured_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.Customise Static Mesh
struct ABP_Mast_C_Customise_Static_Mesh_Params
{
	class UStaticMesh*                                 New_Static_Mesh;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        Static_Mesh_Component;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.Trim Array Func
struct ABP_Mast_C_Trim_Array_Func_Params
{
	TArray<class UObject*>                             TargetArray;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
struct ABP_Mast_C_Initialise_Sail_Parameters_Params
{
};

// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
struct ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.Cull Excess Components
struct ABP_Mast_C_Cull_Excess_Components_Params
{
	TArray<class UActorComponent*>                     TargetArray;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Mast.BP_Mast_C.Initialise Sails
struct ABP_Mast_C_Initialise_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.UserConstructionScript
struct ABP_Mast_C_UserConstructionScript_Params
{
};

// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
struct ABP_Mast_C_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
struct ABP_Mast_C_OnMastMeshSwapRequested_Params
{
	class UStaticMesh*                                 NewMeshBottom;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 NewMeshTop;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<Repair_ERepairableState>               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Repair_ERepairableState>               PreviousState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URepairableComponent*                        RepairableComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<Repair_ERepairableState>               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Repair_ERepairableState>               PreviousState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URepairableComponent*                        RepairableComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<Repair_ERepairableState>               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Repair_ERepairableState>               PreviousState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URepairableComponent*                        RepairableComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
struct ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
