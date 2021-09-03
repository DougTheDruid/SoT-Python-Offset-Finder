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

// Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
struct ABP_AmmoChest_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
struct ABP_AmmoChest_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
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
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
struct ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
struct ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
