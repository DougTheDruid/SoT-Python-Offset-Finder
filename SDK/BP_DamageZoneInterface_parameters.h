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

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits
struct UBP_DamageZoneInterface_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags
struct UBP_DamageZoneInterface_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit
struct UBP_DamageZoneInterface_C_AddExternalHit_Params
{
	struct FHullDamageHit                              Hit_Data;                                                  // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
