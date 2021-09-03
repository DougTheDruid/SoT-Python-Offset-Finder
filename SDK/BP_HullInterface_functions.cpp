// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Has_Decal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HullInterface_C::Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HullInterface.BP_HullInterface_C.Apply Hit");

	UBP_HullInterface_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;

}


void UBP_HullInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBP_HullInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
