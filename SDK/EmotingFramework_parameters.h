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

// Function EmotingFramework.EmoteDice.SetDiceMesh
struct AEmoteDice_SetDiceMesh_Params
{
	TEnumAsByte<EmotingFramework_EDiceType>            DiceType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EmotingFramework.EmoteDice.SendTelemetryData
struct AEmoteDice_SendTelemetryData_Params
{
	struct FTransform                                  OrientationUsed;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                RollNumber;                                                // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EmotingFramework_EDiceType>            DiceType;                                                  // 0x0034(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EmotingFramework.EmoteDice.RollDice
struct AEmoteDice_RollDice_Params
{
	int                                                RollNumber;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EmotingFramework_EDiceType>            DiceType;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
