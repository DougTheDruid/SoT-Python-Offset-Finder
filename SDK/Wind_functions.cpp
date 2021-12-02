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

void FWindZoneParams::AfterRead()
{
}

void FWindZoneParams::BeforeDelete()
{
}

void FWindZoneTurbulence::AfterRead()
{
}

void FWindZoneTurbulence::BeforeDelete()
{
}

void FWindServiceParams::AfterRead()
{
}

void FWindServiceParams::BeforeDelete()
{
}

void FWindTurbulenceParameters::AfterRead()
{
}

void FWindTurbulenceParameters::BeforeDelete()
{
}

void FWindMagnitudeChanged::AfterRead()
{
}

void FWindMagnitudeChanged::BeforeDelete()
{
}

void FWindDirectionChanged::AfterRead()
{
}

void FWindDirectionChanged::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03246320
//		Name   -> Function Wind.WindZoneInterface.GetWindZoneParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FWindZoneParams                             ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWindZoneParams UWindZoneInterface::GetWindZoneParams()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneParams");

	UWindZoneInterface_GetWindZoneParams_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x032462E0
//		Name   -> Function Wind.WindZoneInterface.GetWindZoneLocation
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UWindZoneInterface::GetWindZoneLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneLocation");

	UWindZoneInterface_GetWindZoneLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245D00
//		Name   -> Function Wind.WindZoneInterface.GetTurbulence
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FWindZoneTurbulence                         ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWindZoneTurbulence UWindZoneInterface::GetTurbulence(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetTurbulence");

	UWindZoneInterface_GetTurbulence_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWindZoneInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWindZoneInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03246880
//		Name   -> Function Wind.WindInterface.UnregisterWindZone
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UWindInterface::UnregisterWindZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.UnregisterWindZone");

	UWindInterface_UnregisterWindZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032467F0
//		Name   -> Function Wind.WindInterface.TriggerChange
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ChangeInstantly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWindInterface::TriggerChange(bool ChangeInstantly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.TriggerChange");

	UWindInterface_TriggerChange_Params params {};
	params.ChangeInstantly = ChangeInstantly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246750
//		Name   -> Function Wind.WindInterface.SetParams
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWindServiceParams                          Params                                                     (ConstParm, Parm, OutParm, ReferenceParm)
void UWindInterface::SetParams(const struct FWindServiceParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetParams");

	UWindInterface_SetParams_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032466C0
//		Name   -> Function Wind.WindInterface.SetGlobalWindVector
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InWindVector                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWindInterface::SetGlobalWindVector(const struct FVector& InWindVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindVector");

	UWindInterface_SetGlobalWindVector_Params params {};
	params.InWindVector = InWindVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246640
//		Name   -> Function Wind.WindInterface.SetGlobalWindMagnitude
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InWindMagnitude                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWindInterface::SetGlobalWindMagnitude(float InWindMagnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindMagnitude");

	UWindInterface_SetGlobalWindMagnitude_Params params {};
	params.InWindMagnitude = InWindMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032465B0
//		Name   -> Function Wind.WindInterface.SetGlobalWindDirection
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InWindDirection                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWindInterface::SetGlobalWindDirection(const struct FVector& InWindDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindDirection");

	UWindInterface_SetGlobalWindDirection_Params params {};
	params.InWindDirection = InWindDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246530
//		Name   -> Function Wind.WindInterface.SetGlobalWindAngle
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InAngle                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWindInterface::SetGlobalWindAngle(float InAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindAngle");

	UWindInterface_SetGlobalWindAngle_Params params {};
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246430
//		Name   -> Function Wind.WindInterface.SetCustomMode
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InCustomMode                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWindInterface::SetCustomMode(bool InCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetCustomMode");

	UWindInterface_SetCustomMode_Params params {};
	params.InCustomMode = InCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246390
//		Name   -> Function Wind.WindInterface.RegisterWindZone
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UWindInterface::RegisterWindZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.RegisterWindZone");

	UWindInterface_RegisterWindZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246230
//		Name   -> Function Wind.WindInterface.GetWindZoneAtLocation
//		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWindInterface::GetWindZoneAtLocation(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindZoneAtLocation");

	UWindInterface_GetWindZoneAtLocation_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246180
//		Name   -> Function Wind.WindInterface.GetWindVector
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UWindInterface::GetWindVector(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindVector");

	UWindInterface_GetWindVector_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03246090
//		Name   -> Function Wind.WindInterface.GetWindMagnitude
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWindInterface::GetWindMagnitude(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindMagnitude");

	UWindInterface_GetWindMagnitude_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245FE0
//		Name   -> Function Wind.WindInterface.GetWindDirection
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UWindInterface::GetWindDirection(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindDirection");

	UWindInterface_GetWindDirection_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245E60
//		Name   -> Function Wind.WindInterface.GetWindAngle
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWindInterface::GetWindAngle(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindAngle");

	UWindInterface_GetWindAngle_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245DB0
//		Name   -> Function Wind.WindInterface.GetTurbulenceForTrees
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FWindZoneTurbulence                         ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWindZoneTurbulence UWindInterface::GetTurbulenceForTrees(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulenceForTrees");

	UWindInterface_GetTurbulenceForTrees_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245C50
//		Name   -> Function Wind.WindInterface.GetTurbulence
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FWindZoneTurbulence                         ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWindZoneTurbulence UWindInterface::GetTurbulence(const struct FVector& SamplePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulence");

	UWindInterface_GetTurbulence_Params params {};
	params.SamplePosition = SamplePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03245C20
//		Name   -> Function Wind.WindInterface.GetMaxWindMagnitude
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWindInterface::GetMaxWindMagnitude()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetMaxWindMagnitude");

	UWindInterface_GetMaxWindMagnitude_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWindInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWindInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDebugWindInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDebugWindInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMockWindService::AfterRead()
{
	UObject::AfterRead();

}

void UMockWindService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTestWindInterface::AfterRead()
{
	UObject::AfterRead();

}

void UTestWindInterface::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTestWindZone::AfterRead()
{
	UObject::AfterRead();

}

void UTestWindZone::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x032464C0
//		Name   -> Function Wind.WindFunctions.SetDefaultWindBlowingNorth
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWindFunctions::STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.SetDefaultWindBlowingNorth");

	UWindFunctions_SetDefaultWindBlowingNorth_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03245F00
//		Name   -> Function Wind.WindFunctions.GetWindAtLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UWindFunctions::STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.GetWindAtLocation");

	UWindFunctions_GetWindAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWindFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWindFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x03246370
//		Name   -> Function Wind.WindService.OnRep_WindMagnitude
//		Flags  -> (Final, Native, Private)
void AWindService::OnRep_WindMagnitude()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindMagnitude");

	AWindService_OnRep_WindMagnitude_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246350
//		Name   -> Function Wind.WindService.OnRep_WindAngle
//		Flags  -> (Final, Native, Private)
void AWindService::OnRep_WindAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindAngle");

	AWindService_OnRep_WindAngle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03246130
//		Name   -> Function Wind.WindService.GetWindParams
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FWindServiceParams                          ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWindServiceParams AWindService::GetWindParams()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindService.GetWindParams");

	AWindService_GetWindParams_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AWindService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GlobalWindSource, AWindDirectionalSource);
}

void AWindService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GlobalWindSource);
}

void ADebugWindService::AfterRead()
{
	AWindService::AfterRead();

}

void ADebugWindService::BeforeDelete()
{
	AWindService::BeforeDelete();

}

// Function:
//		Offset -> 0x03245B20
//		Name   -> Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FWindServiceParams                          Params1                                                    (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FWindServiceParams                          Params2                                                    (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWindServiceParamsFunctionLibrary::STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual");

	UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params params {};
	params.Params1 = Params1;
	params.Params2 = Params2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWindServiceParamsFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWindServiceParamsFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWindZoneComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UWindZoneComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UTestWindZoneComponent::AfterRead()
{
	UWindZoneComponent::AfterRead();

}

void UTestWindZoneComponent::BeforeDelete()
{
	UWindZoneComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
