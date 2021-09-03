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

// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
struct UCompositeInputHandler_SetNotificationInputHandler_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScriptDelegate                             Handler;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
struct UCompositeInputHandler_SetAnalogInputHandler_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScriptDelegate                             Handler;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function AthenaInput.InputBinder.SpoofNotificationInput
struct UInputBinder_SpoofNotificationInput_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaInput.InputBinder.SpoofAnalogInput
struct UInputBinder_SpoofAnalogInput_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputBinder.IsContinuousActionActive
struct UInputBinder_IsContinuousActionActive_Params
{
	class UClass*                                      BeginNotificationInputId;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
struct UInputBinder_IgnoreNonSpoofedInput_Params
{
	bool                                               InShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
struct UInputHandlerInterface_HandleNotificationInput_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
struct UInputHandlerInterface_HandleAnalogInput_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Input;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
struct UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params
{
	class UCompositeInputHandler*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName
struct UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
