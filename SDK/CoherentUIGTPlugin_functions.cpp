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

void FCoherentUIGTLoadingScreenSettings::AfterRead()
{
}

void FCoherentUIGTLoadingScreenSettings::BeforeDelete()
{
}

void FCoherentUIGTViewInfo::AfterRead()
{
}

void FCoherentUIGTViewInfo::BeforeDelete()
{
}

// Function:
//		Offset -> 0x0461D740
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct");

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params params {};
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D640
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject");

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params params {};
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D370
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UCoherentUIGTJSEvent*                        EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent");

	UCoherentUIGTBaseComponent_TriggerJSEvent_Params params {};
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D310
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCoherentUIGTBaseComponent::SynchronizeModels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels");

	UCoherentUIGTBaseComponent_SynchronizeModels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D1F0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoherentUIGTBaseComponent::ShowPaintRects(bool show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects");

	UCoherentUIGTBaseComponent_ShowPaintRects_Params params {};
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CC30
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float Threshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold");

	UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params {};
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CB70
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::Resize(int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize");

	UCoherentUIGTBaseComponent_Resize_Params params {};
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CB30
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTBaseComponent::Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload");

	UCoherentUIGTBaseComponent_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CAF0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCoherentUIGTBaseComponent::Redraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw");

	UCoherentUIGTBaseComponent_Redraw_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C760
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::Load(const struct FString& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load");

	UCoherentUIGTBaseComponent_Load_Params params {};
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C700
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTBaseComponent::IsTransparent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent");

	UCoherentUIGTBaseComponent_IsTransparent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C6A0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView");

	UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C640
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTBaseComponent::IsReadyForBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings");

	UCoherentUIGTBaseComponent_IsReadyForBindings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C5B0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTBaseComponent::IsDocumentReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady");

	UCoherentUIGTBaseComponent_IsDocumentReady_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C3A0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTBaseComponent::HasRequestedView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView");

	UCoherentUIGTBaseComponent_HasRequestedView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C0D0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold");

	UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C000
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTBaseComponent::EndDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave");

	UCoherentUIGTBaseComponent_EndDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BF70
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate");

	UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BF30
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTBaseComponent::DebugSaveNextFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame");

	UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BE50
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent");

	UCoherentUIGTBaseComponent_CreateJSEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461BBA0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct");

	UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params params {};
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B9E0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBaseComponent::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject");

	UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params params {};
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B9A0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTBaseComponent::BeginDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave");

	UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCoherentUIGTBaseComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Texture, UTextureRenderTarget2D);
}

void UCoherentUIGTBaseComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UCoherentUIGTComponent::AfterRead()
{
	UCoherentUIGTBaseComponent::AfterRead();

}

void UCoherentUIGTComponent::BeforeDelete()
{
	UCoherentUIGTBaseComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x0461C8A0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTBaseComponent*                  BaseComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const struct FString& Name, int* Width, int* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest");

	UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params {};
	params.BaseComponent = BaseComponent;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

}


void UCoherentUIGTLiveView::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Texture, UTextureRenderTarget2D);
}

void UCoherentUIGTLiveView::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UCoherentUIGTRenderToTextureLiveView::AfterRead()
{
	UCoherentUIGTLiveView::AfterRead();

}

void UCoherentUIGTRenderToTextureLiveView::BeforeDelete()
{
	UCoherentUIGTLiveView::BeforeDelete();

}

void UCoherentUIGTAssetReferencer::AfterRead()
{
	UObject::AfterRead();

}

void UCoherentUIGTAssetReferencer::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ACoherentUIGTSystem::AfterRead()
{
	AActor::AfterRead();

}

void ACoherentUIGTSystem::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x0461B7D0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
void UCoherentUIGTJSEvent::AddText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText");

	UCoherentUIGTJSEvent_AddText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B710
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg");

	UCoherentUIGTJSEvent_AddStructArg_Params params {};
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B590
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddString(const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString");

	UCoherentUIGTJSEvent_AddString_Params params {};
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B440
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject");

	UCoherentUIGTJSEvent_AddObject_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B300
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddName(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName");

	UCoherentUIGTJSEvent_AddName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B280
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                integer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddInt32(int integer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32");

	UCoherentUIGTJSEvent_AddInt32_Params params {};
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B150
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              fl                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddFloat(float fl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat");

	UCoherentUIGTJSEvent_AddFloat_Params params {};
	params.fl = fl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B010
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      byte                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte");

	UCoherentUIGTJSEvent_AddByte_Params params {};
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AED0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoherentUIGTJSEvent::AddBool(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool");

	UCoherentUIGTJSEvent_AddBool_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AB90
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCoherentUIGTJSEvent::AddArray(TArray<int> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray");

	UCoherentUIGTJSEvent_AddArray_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCoherentUIGTJSEvent::AfterRead()
{
	UObject::AfterRead();

}

void UCoherentUIGTJSEvent::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0461CA30
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTJSPayload::ReadObject(int Index, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject");

	UCoherentUIGTJSPayload_ReadObject_Params params {};
	params.Index = Index;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C2B0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UCoherentUIGTJSPayload::GetString(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString");

	UCoherentUIGTJSPayload_GetString_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C1F0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCoherentUIGTJSPayload::GetNumber(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber");

	UCoherentUIGTJSPayload_GetNumber_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C160
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UCoherentUIGTJSPayload::GetInt32(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32");

	UCoherentUIGTJSPayload_GetInt32_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C040
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTJSPayload::GetBool(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool");

	UCoherentUIGTJSPayload_GetBool_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCoherentUIGTJSPayload::AfterRead()
{
	UObject::AfterRead();

}

void UCoherentUIGTJSPayload::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UCoherentUIGTEventHelpers::AfterRead()
{
	UObject::AfterRead();

}

void UCoherentUIGTEventHelpers::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UCoherentUIGTHUD::AfterRead()
{
	UCoherentUIGTBaseComponent::AfterRead();

	READ_PTR_FULL(HUDMaterial, UMaterial);
	READ_PTR_FULL(HUDMaterialInstance, UMaterialInstanceDynamic);
}

void UCoherentUIGTHUD::BeforeDelete()
{
	UCoherentUIGTBaseComponent::BeforeDelete();

	DELE_PTR_FULL(HUDMaterial);
	DELE_PTR_FULL(HUDMaterialInstance);
}

// Function:
//		Offset -> 0x0461D450
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTBaseComponent*                  Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent");

	UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params {};
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CF40
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCoherentUIGTLoadingScreenSettings          Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen");

	UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BE80
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCoherentUIGTJSEvent*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent");

	UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461B630
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg");

	UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B4C0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Arg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString");

	UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B390
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject");

	UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B1D0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32");

	UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B090
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat");

	UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AF60
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte");

	UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AE10
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool");

	UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AC80
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs");

	UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461AA60
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		int                                                ArrayType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray");

	UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCoherentUIGTBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCoherentUIGTBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0461D020
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     PageUrl                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bIsTransparent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              ClickThroughAlphaThreshold                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AnimationFrameDefer                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bDelayedUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACoherentUIGTGameHUD::SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView");

	ACoherentUIGTGameHUD_SetupUIGTView_Params params {};
	params.PageUrl = PageUrl;
	params.bIsTransparent = bIsTransparent;
	params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	params.AnimationFrameDefer = AnimationFrameDefer;
	params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C400
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACoherentUIGTGameHUD::HasSetupUIGTView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView");

	ACoherentUIGTGameHUD_HasSetupUIGTView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ACoherentUIGTGameHUD::AfterRead()
{
	AHUD::AfterRead();

	READ_PTR_FULL(CoherentUIGTHUD, UCoherentUIGTHUD);
}

void ACoherentUIGTGameHUD::BeforeDelete()
{
	AHUD::BeforeDelete();

	DELE_PTR_FULL(CoherentUIGTHUD);
}

// Function:
//		Offset -> 0x0461D350
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus");

	ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CEC0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetLineTraceMode> Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetLineTraceMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode");

	ACoherentUIGTInputActor_SetLineTraceMode_Params params {};
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CE40
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> Propagation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour");

	ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params {};
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CDC0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTBaseComponent*                  NewFocusedView                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus");

	ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params {};
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CD30
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               FocusUI                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus");

	ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params {};
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C610
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED");

	ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C580
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused");

	ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C430
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_ETextureAddress>                AddressMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetRaycastQuality> RaycastQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                UVChannel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACoherentUIGTInputActor::Initialize(TEnumAsByte<Engine_ECollisionChannel> CollisionChannel, TEnumAsByte<Engine_ETextureAddress> AddressMode, TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize");

	ACoherentUIGTInputActor_Initialize_Params params {};
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C130
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> ACoherentUIGTInputActor::GetInputPropagationBehaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour");

	ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461B910
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput");

	ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params {};
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B880
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED");

	ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params {};
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ACoherentUIGTInputActor::AfterRead()
{
	AActor::AfterRead();

}

void ACoherentUIGTInputActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UCoherentUIGTSettings::AfterRead()
{
	UObject::AfterRead();

}

void UCoherentUIGTSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0461D830
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct");

	UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params params {};
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D6C0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject");

	UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params params {};
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D560
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UCoherentUIGTJSEvent*                        EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent");

	UCoherentUIGTWidget_TriggerJSEvent_Params params {};
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D330
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCoherentUIGTWidget::SynchronizeModels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels");

	UCoherentUIGTWidget_SynchronizeModels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461D280
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoherentUIGTWidget::ShowPaintRects(bool show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects");

	UCoherentUIGTWidget_ShowPaintRects_Params params {};
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CCB0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float Threshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold");

	UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params {};
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CB50
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTWidget::Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload");

	UCoherentUIGTWidget_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461CB10
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCoherentUIGTWidget::Redraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw");

	UCoherentUIGTWidget_Redraw_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C800
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::Load(const struct FString& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Load");

	UCoherentUIGTWidget_Load_Params params {};
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461C730
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTWidget::IsTransparent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent");

	UCoherentUIGTWidget_IsTransparent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C6D0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTWidget::IsReadyToCreateView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView");

	UCoherentUIGTWidget_IsReadyToCreateView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C670
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTWidget::IsReadyForBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings");

	UCoherentUIGTWidget_IsReadyForBindings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C5E0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTWidget::IsDocumentReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady");

	UCoherentUIGTWidget_IsDocumentReady_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C3D0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCoherentUIGTWidget::HasRequestedView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView");

	UCoherentUIGTWidget_HasRequestedView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C280
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextureRenderTarget2D* UCoherentUIGTWidget::GetRenderTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture");

	UCoherentUIGTWidget_GetRenderTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C100
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold");

	UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461C020
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTWidget::EndDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave");

	UCoherentUIGTWidget_EndDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BF50
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTWidget::DebugSaveNextFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame");

	UCoherentUIGTWidget_DebugSaveNextFrame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BF00
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoherentUIGTJSEvent*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent");

	UCoherentUIGTWidget_CreateJSEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0461BCF0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct");

	UCoherentUIGTWidget_CreateDataModelFromStruct_Params params {};
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461BAC0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoherentUIGTWidget::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject");

	UCoherentUIGTWidget_CreateDataModelFromObject_Params params {};
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0461B9C0
//		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoherentUIGTWidget::BeginDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave");

	UCoherentUIGTWidget_BeginDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCoherentUIGTWidget::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Owner, AActor);
}

void UCoherentUIGTWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Owner);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
