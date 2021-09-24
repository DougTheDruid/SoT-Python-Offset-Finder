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

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint
struct ABP_ShipStorageBarrel_Grog_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace
struct ABP_ShipStorageBarrel_Grog_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DesiredTooltipWorldPosition;                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript
struct ABP_ShipStorageBarrel_Grog_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
