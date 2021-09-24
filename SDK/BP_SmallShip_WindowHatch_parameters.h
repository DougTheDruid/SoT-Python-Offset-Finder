#pragma once

// Name: SoT, Version: 2.3.0


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

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint
struct ABP_SmallShip_WindowHatch_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript
struct ABP_SmallShip_WindowHatch_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted
struct ABP_SmallShip_WindowHatch_C_OnAnimationStarted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted
struct ABP_SmallShip_WindowHatch_C_OnAnimationCompleted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch
struct ABP_SmallShip_WindowHatch_C_ExecuteUbergraph_BP_SmallShip_WindowHatch_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
