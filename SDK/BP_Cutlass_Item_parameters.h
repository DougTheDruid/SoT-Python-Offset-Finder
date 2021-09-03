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

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect
struct ABP_Cutlass_Item_C_DoBlockEffect_Params
{
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript
struct ABP_Cutlass_Item_C_UserConstructionScript_Params
{
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack
struct ABP_Cutlass_Item_C_OnBlockedAttack_Params
{
	struct FEventBlocked                               Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item
struct ABP_Cutlass_Item_C_ExecuteUbergraph_BP_Cutlass_Item_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
