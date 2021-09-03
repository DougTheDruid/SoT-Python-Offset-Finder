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

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UCoherentUIGTJSEvent*                        EventData;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
struct UCoherentUIGTBaseComponent_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
{
	bool                                               show;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
{
	float                                              Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
struct UCoherentUIGTBaseComponent_Resize_Params
{
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
struct UCoherentUIGTBaseComponent_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
struct UCoherentUIGTBaseComponent_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
struct UCoherentUIGTBaseComponent_Load_Params
{
	struct FString                                     path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
struct UCoherentUIGTBaseComponent_IsTransparent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
struct UCoherentUIGTBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
struct UCoherentUIGTBaseComponent_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
struct UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
struct UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
struct UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     Model;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
struct UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
{
	class UCoherentUIGTBaseComponent*                  BaseComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Width;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
struct UCoherentUIGTJSEvent_AddText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
struct UCoherentUIGTJSEvent_AddStructArg_Params
{
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
struct UCoherentUIGTJSEvent_AddString_Params
{
	struct FString                                     Str;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
struct UCoherentUIGTJSEvent_AddObject_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
struct UCoherentUIGTJSEvent_AddName_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
struct UCoherentUIGTJSEvent_AddInt32_Params
{
	int                                                integer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
struct UCoherentUIGTJSEvent_AddFloat_Params
{
	float                                              fl;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
struct UCoherentUIGTJSEvent_AddByte_Params
{
	unsigned char                                      byte;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
struct UCoherentUIGTJSEvent_AddBool_Params
{
	bool                                               B;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
struct UCoherentUIGTJSEvent_AddArray_Params
{
	TArray<int>                                        Array;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
struct UCoherentUIGTJSPayload_ReadObject_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
struct UCoherentUIGTJSPayload_GetString_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
struct UCoherentUIGTJSPayload_GetNumber_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
struct UCoherentUIGTJSPayload_GetInt32_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
struct UCoherentUIGTJSPayload_GetBool_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params
{
	class UCoherentUIGTBaseComponent*                  Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
struct UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCoherentUIGTLoadingScreenSettings          Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCoherentUIGTJSEvent*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
struct UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
struct UCoherentUIGTBlueprintFunctionLibrary_AddString_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Arg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
struct UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Arg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
struct UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Arg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
struct UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Arg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
struct UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Arg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
struct UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Arg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
struct UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        Arg;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
struct UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        Arg;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ArrayType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
struct ACoherentUIGTGameHUD_SetupUIGTView_Params
{
	struct FString                                     PageUrl;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsTransparent;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClickThroughAlphaThreshold;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimationFrameDefer;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDelayedUpdate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
struct ACoherentUIGTGameHUD_HasSetupUIGTView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
struct ACoherentUIGTInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetLineTraceMode> Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> Propagation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
{
	class UCoherentUIGTBaseComponent*                  NewFocusedView;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
{
	bool                                               FocusUI;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
struct ACoherentUIGTInputActor_Initialize_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETextureAddress>                AddressMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetRaycastQuality> RaycastQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UVChannel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
{
	bool                                               bAllow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
struct UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
struct UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
struct UCoherentUIGTWidget_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UCoherentUIGTJSEvent*                        EventData;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
struct UCoherentUIGTWidget_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
struct UCoherentUIGTWidget_ShowPaintRects_Params
{
	bool                                               show;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
{
	float                                              Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
struct UCoherentUIGTWidget_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
struct UCoherentUIGTWidget_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
struct UCoherentUIGTWidget_Load_Params
{
	struct FString                                     path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
struct UCoherentUIGTWidget_IsTransparent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
struct UCoherentUIGTWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
struct UCoherentUIGTWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
struct UCoherentUIGTWidget_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
struct UCoherentUIGTWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
struct UCoherentUIGTWidget_GetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
struct UCoherentUIGTWidget_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
struct UCoherentUIGTWidget_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
struct UCoherentUIGTWidget_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
struct UCoherentUIGTWidget_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UStructProperty*                             Arg;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
struct UCoherentUIGTWidget_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     Model;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
struct UCoherentUIGTWidget_BeginDebugFrameSave_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
