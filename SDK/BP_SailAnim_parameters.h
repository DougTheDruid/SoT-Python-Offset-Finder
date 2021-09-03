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

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
struct UBP_SailAnim_C_Set_Billow_Animation_Rate_Params
{
};

// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
struct UBP_SailAnim_C_InitialiseSail_Params
{
	float                                              PlayRateMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainSail;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
struct UBP_SailAnim_C_ExecuteUbergraph_BP_SailAnim_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
