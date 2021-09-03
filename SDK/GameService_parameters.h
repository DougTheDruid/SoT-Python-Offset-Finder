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

// Function GameService.GameServiceMapFunctions.UnregisterService
struct UGameServiceMapFunctions_UnregisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                                // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Service;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameService.GameServiceMapFunctions.RegisterService
struct UGameServiceMapFunctions_RegisterService_Params
{
	struct FGameServiceMap                             ServiceMap;                                                // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Service;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function GameService.GameServiceMapFunctions.GetService
struct UGameServiceMapFunctions_GetService_Params
{
	struct FGameServiceMap                             ServiceMap;                                                // (Parm, OutParm, ReferenceParm)
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameService.GameServiceMapFunctions.GetNumServices
struct UGameServiceMapFunctions_GetNumServices_Params
{
	struct FGameServiceMap                             ServiceMap;                                                // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameService.GameServiceProviderInterface.UnregisterService
struct UGameServiceProviderInterface_UnregisterService_Params
{
	class UObject*                                     Service;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameService.GameServiceProviderInterface.RegisterService
struct UGameServiceProviderInterface_RegisterService_Params
{
	class UObject*                                     Service;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function GameService.GameServiceProviderInterface.GetService
struct UGameServiceProviderInterface_GetService_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
