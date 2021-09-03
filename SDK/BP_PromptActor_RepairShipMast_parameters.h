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

// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.UserConstructionScript
struct ABP_PromptActor_RepairShipMast_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveBeginPlay
struct ABP_PromptActor_RepairShipMast_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveEndPlay
struct ABP_PromptActor_RepairShipMast_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ExecuteUbergraph_BP_PromptActor_RepairShipMast
struct ABP_PromptActor_RepairShipMast_C_ExecuteUbergraph_BP_PromptActor_RepairShipMast_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
