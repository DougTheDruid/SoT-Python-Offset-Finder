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

void FDebugMenuDataAssetEntry::AfterRead()
{
}

void FDebugMenuDataAssetEntry::BeforeDelete()
{
}

void FDebugMenuButtonShortcut::AfterRead()
{
}

void FDebugMenuButtonShortcut::BeforeDelete()
{
}

void FDebugMenuUserItem::AfterRead()
{
}

void FDebugMenuUserItem::BeforeDelete()
{
}

void FDebugErrorHappeningEvent::AfterRead()
{
}

void FDebugErrorHappeningEvent::BeforeDelete()
{
}

void FDebugMenuOptionExecutedEvent::AfterRead()
{
}

void FDebugMenuOptionExecutedEvent::BeforeDelete()
{
}

void UDebugMenuComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DebugMenuInstance, ADebugMenu);
}

void UDebugMenuComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DebugMenuInstance);
}

void UDebugMenuEntryGenerator::AfterRead()
{
	UObject::AfterRead();

}

void UDebugMenuEntryGenerator::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDebugMenuDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UDebugMenuDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void ADebugMenu::AfterRead()
{
	AActor::AfterRead();

}

void ADebugMenu::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UDebugMenuComponentMock::AfterRead()
{
	UDebugMenuComponent::AfterRead();

}

void UDebugMenuComponentMock::BeforeDelete()
{
	UDebugMenuComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x030F1470
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugMenuTestFunctions::STATIC_IsDebugMenuReady(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady");

	UDebugMenuTestFunctions_IsDebugMenuReady_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F13F0
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugMenuTestFunctions::STATIC_IsDebugMenuOpen(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen");

	UDebugMenuTestFunctions_IsDebugMenuOpen_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F13C0
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugMenuTestFunctions::STATIC_IsDebugMenuAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable");

	UDebugMenuTestFunctions_IsDebugMenuAvailable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F1330
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboBetaKeyboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard");

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F12A0
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard");

	UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F1210
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboBetaGamepad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad");

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030F1180
//		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboAlphaGamepad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad");

	UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDebugMenuTestFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDebugMenuTestFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
