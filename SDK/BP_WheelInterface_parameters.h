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

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
struct UBP_WheelInterface_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WheelAnimationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EWheel_EWheel>                         EWheel;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WheelRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
