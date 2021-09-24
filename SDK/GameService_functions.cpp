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

void FGameServiceMap::AfterRead()
{
}

void FGameServiceMap::BeforeDelete()
{
}

void FGameServiceCoordinatorUnit::AfterRead()
{
	READ_PTR_FULL(Service, UObject);
}

void FGameServiceCoordinatorUnit::BeforeDelete()
{
	DELE_PTR_FULL(Service);
}

void FGameServiceCoordinator::AfterRead()
{
}

void FGameServiceCoordinator::BeforeDelete()
{
}

void AServiceProviderGameState::AfterRead()
{
	AGameState::AfterRead();

}

void AServiceProviderGameState::BeforeDelete()
{
	AGameState::BeforeDelete();

}

void UGameServiceLifecycleInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameServiceLifecycleInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x02FAA4C0
//		Name   -> Function GameService.GameServiceMapFunctions.UnregisterService
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
//		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameServiceMapFunctions::STATIC_UnregisterService(struct FGameServiceMap* ServiceMap, class UObject* Service)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.UnregisterService");

	UGameServiceMapFunctions_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

}


// Function:
//		Offset -> 0x02FAA270
//		Name   -> Function GameService.GameServiceMapFunctions.RegisterService
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
//		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UGameServiceMapFunctions::STATIC_RegisterService(struct FGameServiceMap* ServiceMap, class UObject* Service, class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.RegisterService");

	UGameServiceMapFunctions_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

}


// Function:
//		Offset -> 0x02FAA030
//		Name   -> Function GameService.GameServiceMapFunctions.GetService
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UGameServiceMapFunctions::STATIC_GetService(struct FGameServiceMap* ServiceMap, class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetService");

	UGameServiceMapFunctions_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FA9E50
//		Name   -> Function GameService.GameServiceMapFunctions.GetNumServices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UGameServiceMapFunctions::STATIC_GetNumServices(struct FGameServiceMap* ServiceMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetNumServices");

	UGameServiceMapFunctions_GetNumServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;


	return params.ReturnValue;
}


void UGameServiceMapFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UGameServiceMapFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x02FAA430
//		Name   -> Function GameService.GameServiceProviderInterface.UnregisterService
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameServiceProviderInterface::UnregisterService(class UObject* Service)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.UnregisterService");

	UGameServiceProviderInterface_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FAA1B0
//		Name   -> Function GameService.GameServiceProviderInterface.RegisterService
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.RegisterService");

	UGameServiceProviderInterface_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FA9F90
//		Name   -> Function GameService.GameServiceProviderInterface.GetService
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.GetService");

	UGameServiceProviderInterface_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameServiceProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameServiceProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UGameServiceTickInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameServiceTickInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
