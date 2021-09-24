// Name: SoT, Version: 2.3.0

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

void AMultiTargetEnchantedCompass::AfterRead()
{
	ACompass::AfterRead();

	READ_PTR_FULL(InventoryItem, UInventoryItemComponent);
}

void AMultiTargetEnchantedCompass::BeforeDelete()
{
	ACompass::BeforeDelete();

	DELE_PTR_FULL(InventoryItem);
}

// Function:
//		Offset -> 0x03DC7F60
//		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APrototypeMultiTargetEnchantedCompass::GetFloatMax()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax");

	APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
//		struct FRotator                                    CompassRotation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APrototypeMultiTargetEnchantedCompass::CalculateDesiredYaw(const struct FRotator& CompassRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw");

	APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params params;
	params.CompassRotation = CompassRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03DC7EB0
//		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FVector> APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations");

	APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void APrototypeMultiTargetEnchantedCompass::AfterRead()
{
	AMultiTargetEnchantedCompass::AfterRead();

}

void APrototypeMultiTargetEnchantedCompass::BeforeDelete()
{
	AMultiTargetEnchantedCompass::BeforeDelete();

}

void UTaleQuestMultiTargetCompassAddTrackedLocationStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc);
}

void UTaleQuestMultiTargetCompassAddTrackedLocationStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestMultiTargetCompassRemoveTrackedLocationStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestMultiTargetCompassRemoveTrackedLocationStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestMultiTargetCompassService::AfterRead()
{
	UTaleQuestToolService::AfterRead();

}

void UTaleQuestMultiTargetCompassService::BeforeDelete()
{
	UTaleQuestToolService::BeforeDelete();

}

void UTaleQuestMultiTargetCompassServiceDesc::AfterRead()
{
	UTaleQuestToolServiceDesc::AfterRead();

	READ_PTR_FULL(CompassDesc, UClass);
}

void UTaleQuestMultiTargetCompassServiceDesc::BeforeDelete()
{
	UTaleQuestToolServiceDesc::BeforeDelete();

	DELE_PTR_FULL(CompassDesc);
}

void UTaleQuestSetCompassTargetToTargetStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSetCompassTargetToTargetStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSetCompassTargetBaseStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSetCompassTargetBaseStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSetCompassTargetToActorStepDesc::AfterRead()
{
	UTaleQuestSetCompassTargetBaseStepDesc::AfterRead();

}

void UTaleQuestSetCompassTargetToActorStepDesc::BeforeDelete()
{
	UTaleQuestSetCompassTargetBaseStepDesc::BeforeDelete();

}

void UTaleQuestSetCompassTargetToPointStepDesc::AfterRead()
{
	UTaleQuestSetCompassTargetBaseStepDesc::AfterRead();

}

void UTaleQuestSetCompassTargetToPointStepDesc::BeforeDelete()
{
	UTaleQuestSetCompassTargetBaseStepDesc::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
