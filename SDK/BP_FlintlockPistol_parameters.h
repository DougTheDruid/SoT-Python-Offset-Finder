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

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn
struct ABP_FlintlockPistol_C_SetScopeEffectOn_Params
{
	bool                                               IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
struct ABP_FlintlockPistol_C_determine_sfx_relationship_Params
{
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
struct ABP_FlintlockPistol_C_DoFireEffect_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
struct ABP_FlintlockPistol_C_UserConstructionScript_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
struct ABP_FlintlockPistol_C_OnWeaponFired_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
struct ABP_FlintlockPistol_C_RadialBlurOn_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
struct ABP_FlintlockPistol_C_RadialBlurOff_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
struct ABP_FlintlockPistol_C_ExecuteUbergraph_BP_FlintlockPistol_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
