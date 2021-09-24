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

void FSlateLoadingScreenImageParams::AfterRead()
{
}

void FSlateLoadingScreenImageParams::BeforeDelete()
{
}

void FEventAthenaLoadingScreenStateResponse::AfterRead()
{
}

void FEventAthenaLoadingScreenStateResponse::BeforeDelete()
{
}

void FEventAthenaLoadingScreenStateRequest::AfterRead()
{
}

void FEventAthenaLoadingScreenStateRequest::BeforeDelete()
{
}

void FEventAthenaLoadingScreenBlockUntilUIIntialisedClear::AfterRead()
{
}

void FEventAthenaLoadingScreenBlockUntilUIIntialisedClear::BeforeDelete()
{
}

void FEventAthenaLoadingScreenBlockUntilUIIntialised::AfterRead()
{
}

void FEventAthenaLoadingScreenBlockUntilUIIntialised::BeforeDelete()
{
}

void FEventAthenaLoadingScreenClose::AfterRead()
{
}

void FEventAthenaLoadingScreenClose::BeforeDelete()
{
}

void FEventAthenaLoadingScreenOpen::AfterRead()
{
}

void FEventAthenaLoadingScreenOpen::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03742FA0
//		Name   -> Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible");

	UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03742F70
//		Name   -> Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenRegistered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered");

	UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAthenaLoadingScreenBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAthenaLoadingScreenBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void USlateLoadingScreenParams::AfterRead()
{
	UDataAsset::AfterRead();

}

void USlateLoadingScreenParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAthenaLoadingScreenParams::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UAthenaLoadingScreenParams::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

// Function:
//		Offset -> 0x03742FD0
//		Name   -> Function AthenaLoadingScreen.LoadingUtilities.IsStreaming
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULoadingUtilities::STATIC_IsStreaming(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.LoadingUtilities.IsStreaming");

	ULoadingUtilities_IsStreaming_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULoadingUtilities::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULoadingUtilities::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
