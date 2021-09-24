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

// Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
struct ABP_AmmoChest_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
struct ABP_AmmoChest_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
struct ABP_AmmoChest_C_UserConstructionScript_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
struct ABP_AmmoChest_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
struct ABP_AmmoChest_C_Blueprint_OnInteract_Client_Params
{
	class AActor*                                      InInteractor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
struct ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params
{
	class AActor*                                      InInteractor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
struct ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
