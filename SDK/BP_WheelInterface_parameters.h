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

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
struct UBP_WheelInterface_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WheelAnimationTime;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EWheel_EWheel>                         EWheel;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Direction;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WheelRate;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
