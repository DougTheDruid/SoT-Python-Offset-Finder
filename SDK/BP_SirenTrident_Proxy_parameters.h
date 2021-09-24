#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint
struct ABP_SirenTrident_Proxy_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript
struct ABP_SirenTrident_Proxy_C_UserConstructionScript_Params
{
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay
struct ABP_SirenTrident_Proxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy
struct ABP_SirenTrident_Proxy_C_ExecuteUbergraph_BP_SirenTrident_Proxy_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
