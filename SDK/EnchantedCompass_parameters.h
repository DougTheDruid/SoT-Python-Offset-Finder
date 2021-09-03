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

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
struct APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params
{
	float                                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
struct APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params
{
	struct FRotator                                    CompassRotation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
struct APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
