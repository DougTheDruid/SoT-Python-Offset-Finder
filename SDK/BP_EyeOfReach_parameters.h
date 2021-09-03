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

// Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship
struct ABP_EyeOfReach_C_determine_sfx_relationship_Params
{
	TEnumAsByte<RareAudio_EEmitterRelationship>        Relationship;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect
struct ABP_EyeOfReach_C_DoFireEffect_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript
struct ABP_EyeOfReach_C_UserConstructionScript_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired
struct ABP_EyeOfReach_C_OnWeaponFired_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn
struct ABP_EyeOfReach_C_ScopeOn_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff
struct ABP_EyeOfReach_C_ScopeOff_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick
struct ABP_EyeOfReach_C_ScopeTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate
struct ABP_EyeOfReach_C_ScopeOffImmediate_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn
struct ABP_EyeOfReach_C_GlintOn_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff
struct ABP_EyeOfReach_C_GlintOff_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach
struct ABP_EyeOfReach_C_ExecuteUbergraph_BP_EyeOfReach_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
