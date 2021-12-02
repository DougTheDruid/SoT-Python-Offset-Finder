#pragma once

// Name: SoT, Version: 2.4.0


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
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScriptDelegate                             Handler;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
struct UCompositeInputHandler_SetAnalogInputHandler_Params
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScriptDelegate                             Handler;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function AthenaInput.InputBinder.SpoofNotificationInput
struct UInputBinder_SpoofNotificationInput_Params
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaInput.InputBinder.SpoofAnalogInput
struct UInputBinder_SpoofAnalogInput_Params
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputBinder.IsContinuousActionActive
struct UInputBinder_IsContinuousActionActive_Params
{
	class UClass*                                      BeginNotificationInputId;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
struct UInputBinder_IgnoreNonSpoofedInput_Params
{
	bool                                               InShouldIgnore;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
struct UInputHandlerInterface_HandleNotificationInput_Params
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
struct UInputHandlerInterface_HandleAnalogInput_Params
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Input;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
struct UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
struct UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params
{
	class UCompositeInputHandler*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName
struct UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params
{
	class UClass*                                      InputID;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
