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

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
struct UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params
{
	class AAthenaCharacter*                            Athena_Character;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Size;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
struct UBP_MathAndTrigAnimation_C_DecrementFloat_Params
{
	float                                              Float;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              DecrementValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
struct UBP_MathAndTrigAnimation_C_Increment_Float_Params
{
	float                                              Float;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Incement_Value;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
struct UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params
{
	struct FTransform                                  RelativeTransform;                                         // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  BaseTransform;                                             // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  CombinedTransform;                                         // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
struct UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params
{
	struct FTransform                                  RelativeObjectsWorldTransform;                             // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  BaseObjectsWorldTransform;                                 // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  RealtiveOffsetTransform;                                   // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
