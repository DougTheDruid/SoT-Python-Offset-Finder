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

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
struct UBP_HullInterface_C_Apply_Hit_Params
{
	struct FVector                                     HitPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitStrength;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Has_Decal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             Decal;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
