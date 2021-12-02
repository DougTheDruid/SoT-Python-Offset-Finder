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

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters
struct ABP_GeyserHole_C_SetFadeOutParameters_Params
{
	float                                              FadeTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters
struct ABP_GeyserHole_C_SetFadeInParameters_Params
{
	float                                              FadeTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript
struct ABP_GeyserHole_C_UserConstructionScript_Params
{
};

// Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay
struct ABP_GeyserHole_C_ReceiveBeginPlay_Params
{
};

// Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged
struct ABP_GeyserHole_C_OnStateChanged_Params
{
	TEnumAsByte<Athena_EHoleState>                     InState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole
struct ABP_GeyserHole_C_ExecuteUbergraph_BP_GeyserHole_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
