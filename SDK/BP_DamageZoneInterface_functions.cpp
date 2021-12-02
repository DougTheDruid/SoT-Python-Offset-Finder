// Name: SoT, Version: 2.4.0

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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumExternalHits                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_DamageZoneInterface_C::GetNumExternalHits(int* NumExternalHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits");

	UBP_DamageZoneInterface_C_GetNumExternalHits_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumExternalHits != nullptr)
		*NumExternalHits = params.NumExternalHits;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_DamageZoneInterface_C::ClearDecalFlags()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags");

	UBP_DamageZoneInterface_C_ClearDecalFlags_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHullDamageHit                              Hit_Data                                                   (Parm)
void UBP_DamageZoneInterface_C::AddExternalHit(const struct FHullDamageHit& Hit_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit");

	UBP_DamageZoneInterface_C_AddExternalHit_Params params {};
	params.Hit_Data = Hit_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_DamageZoneInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBP_DamageZoneInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
