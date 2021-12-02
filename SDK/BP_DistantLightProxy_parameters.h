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

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
struct ABP_DistantLightProxy_C_FindExistingLight_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor)
	bool                                               Result;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
struct ABP_DistantLightProxy_C_Create_Lights_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
struct ABP_DistantLightProxy_C_UserConstructionScript_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
struct ABP_DistantLightProxy_C_Add_Light_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Size;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
struct ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
