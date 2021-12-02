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

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate
struct UBP_Prompt_Sitting_ThirdPerson_C_Evaluate_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_Sitting_ThirdPerson_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_Sitting_ThirdPerson_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingState_Params
{
	struct FEventLocalPlayerEnteredSittingState        Event;                                                     // 0x0000(0x0001)  (Parm)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerExitedSittingState_Params
{
	struct FEventLocalPlayerExittedSittingState        Event;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingThirdPersonCamera_Params
{
	struct FEventLocalPlayerEnteredSittingThirdPersonCameraState Event;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson
struct UBP_Prompt_Sitting_ThirdPerson_C_ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
