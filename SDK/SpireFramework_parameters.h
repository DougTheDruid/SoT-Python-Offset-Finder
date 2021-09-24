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

// Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
struct UHeightTriggerableEffectsComponent_SetMovementDirection_Params
{
	TEnumAsByte<SpireFramework_EDirectionOfMovement>   InMovement;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SpireFramework.SpireService.OnRep_SpireLevels
struct ASpireService_OnRep_SpireLevels_Params
{
	TArray<struct FSpireInfo>                          InPreviousSpireLevels;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
struct UTaleSpireService_RegisterResetMechanismInterface_Params
{
	class AActor*                                      InMechanismResetInterface;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SpireFramework.TaleSpireService.IsSpireVisible
struct UTaleSpireService_IsSpireVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
