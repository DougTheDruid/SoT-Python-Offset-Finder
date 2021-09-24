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

// Function:
//		Offset -> 0x030D80A0
//		Name   -> Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCalmWaterMappingInterface::GetDampeningFactor(const struct FVector2D& InPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor");

	UCalmWaterMappingInterface_GetDampeningFactor_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D8000
//		Name   -> Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCalmWaterMappingInterface::GetChoppinessFactor(const struct FVector2D& InPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor");

	UCalmWaterMappingInterface_GetChoppinessFactor_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCalmWaterMappingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCalmWaterMappingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAthenaCalmWaterZone::AfterRead()
{
	ACalmWaterZone::AfterRead();

}

void AAthenaCalmWaterZone::BeforeDelete()
{
	ACalmWaterZone::BeforeDelete();

}

// Function:
//		Offset -> 0x030D8140
//		Name   -> Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCalmWaterMappingService::STATIC_GetMaxWindSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed");

	UCalmWaterMappingService_GetMaxWindSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCalmWaterMappingService::AfterRead()
{
	UObject::AfterRead();

}

void UCalmWaterMappingService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
