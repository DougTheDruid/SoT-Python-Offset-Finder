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

// Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial
struct ABP_Lantern_C_CreateLanternDynamicMaterial_Params
{
};

// Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson
struct ABP_Lantern_C_OnAttachThirdPerson_Params
{
};

// Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson
struct ABP_Lantern_C_OnAttachFirstPerson_Params
{
};

// Function BP_Lantern.BP_Lantern_C.TurnOff
struct ABP_Lantern_C_TurnOff_Params
{
};

// Function BP_Lantern.BP_Lantern_C.TurnOn
struct ABP_Lantern_C_TurnOn_Params
{
};

// Function BP_Lantern.BP_Lantern_C.UserConstructionScript
struct ABP_Lantern_C_UserConstructionScript_Params
{
};

// Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson
struct ABP_Lantern_C_ReceiveWieldFirstPerson_Params
{
};

// Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson
struct ABP_Lantern_C_ReceiveWieldThirdPerson_Params
{
};

// Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay
struct ABP_Lantern_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lantern.BP_Lantern_C.ReceiveLightChange
struct ABP_Lantern_C_ReceiveLightChange_Params
{
};

// Function BP_Lantern.BP_Lantern_C.TriggerGlow
struct ABP_Lantern_C_TriggerGlow_Params
{
};

// Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent
struct ABP_Lantern_C_PostMeshChangedBPEvent_Params
{
	bool                                               SkipFlameColourTransition;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Lantern.BP_Lantern_C.ReceiveFlameData
struct ABP_Lantern_C_ReceiveFlameData_Params
{
	bool                                               WantChangeAnimation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
struct ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
