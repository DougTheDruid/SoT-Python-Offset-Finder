#pragma once

// Name: SoT, Version: 2.4.0


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

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
struct ABP_Placement_HeightDrop_C_CreateComponentList_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
struct ABP_Placement_HeightDrop_C_CreateParentBounds_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
struct ABP_Placement_HeightDrop_C_CheckMobilityState_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
struct ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params
{
	TArray<struct FHitResult>                          Hit_Results;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Hit_Success;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             Current_Component;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Return_Value;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Impact_Position;                                           // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Impact_Normal;                                             // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
struct ABP_Placement_HeightDrop_C_Drop_Components_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
struct ABP_Placement_HeightDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
