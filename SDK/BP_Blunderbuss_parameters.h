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

// Function BP_Blunderbuss.BP_Blunderbuss_C.SetScopeEffectOn
struct ABP_Blunderbuss_C_SetScopeEffectOn_Params
{
	bool                                               IsOn;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.determine sfx relationship
struct ABP_Blunderbuss_C_determine_sfx_relationship_Params
{
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.DoFireEffect
struct ABP_Blunderbuss_C_DoFireEffect_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.UserConstructionScript
struct ABP_Blunderbuss_C_UserConstructionScript_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.OnWeaponFired
struct ABP_Blunderbuss_C_OnWeaponFired_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOn
struct ABP_Blunderbuss_C_RadialBlurOn_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOff
struct ABP_Blunderbuss_C_RadialBlurOff_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.ExecuteUbergraph_BP_Blunderbuss
struct ABP_Blunderbuss_C_ExecuteUbergraph_BP_Blunderbuss_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
