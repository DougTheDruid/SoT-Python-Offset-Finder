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

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
struct UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params
{
};

// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
struct UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params
{
};

// Function Reviving.ReviveComponent.OnRep_ReviveState
struct UReviveComponent_OnRep_ReviveState_Params
{
	TEnumAsByte<Reviving_EReviveState>                 PreviousReviveState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
struct UReviveComponent_HandleOwningCharacterEndPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
