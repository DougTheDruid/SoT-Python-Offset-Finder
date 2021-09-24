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

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters
struct ABP_ShovelHole_C_SetFadeInParameters_Params
{
	float                                              FadeTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters
struct ABP_ShovelHole_C_SetFadeOutParameters_Params
{
	float                                              FadeTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript
struct ABP_ShovelHole_C_UserConstructionScript_Params
{
};

// Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged
struct ABP_ShovelHole_C_OnStateChanged_Params
{
	TEnumAsByte<Athena_EHoleState>                     InState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay
struct ABP_ShovelHole_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole
struct ABP_ShovelHole_C_ExecuteUbergraph_BP_ShovelHole_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
