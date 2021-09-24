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

void FPropertyPathSegment::AfterRead()
{
	READ_PTR_FULL(Struct, UStruct);
	READ_PTR_FULL(Field, UField);
}

void FPropertyPathSegment::BeforeDelete()
{
	DELE_PTR_FULL(Struct);
	DELE_PTR_FULL(Field);
}

void FDynamicPropertyPath::AfterRead()
{
}

void FDynamicPropertyPath::BeforeDelete()
{
}

void FEventReply::AfterRead()
{
}

void FEventReply::BeforeDelete()
{
}

void FWidgetTransform::AfterRead()
{
}

void FWidgetTransform::BeforeDelete()
{
}

void FNamedSlotBinding::AfterRead()
{
	READ_PTR_FULL(Content, UWidget);
}

void FNamedSlotBinding::BeforeDelete()
{
	DELE_PTR_FULL(Content);
}

void FPaintContext::AfterRead()
{
}

void FPaintContext::BeforeDelete()
{
}

void FAnchorData::AfterRead()
{
}

void FAnchorData::BeforeDelete()
{
}

void FSlateChildSize::AfterRead()
{
}

void FSlateChildSize::BeforeDelete()
{
}

void FWidgetAnimationBinding::AfterRead()
{
}

void FWidgetAnimationBinding::BeforeDelete()
{
}

void FDelegateRuntimeBinding::AfterRead()
{
}

void FDelegateRuntimeBinding::BeforeDelete()
{
}

void FWidgetNavigationData::AfterRead()
{
}

void FWidgetNavigationData::BeforeDelete()
{
}

void FMovieScene2DTransformSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene2DTransformSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneMarginSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneMarginSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneWidgetMaterialSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneWidgetMaterialSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE4470
//		Name   -> Function UMG.AsyncTaskDownloadImage.DownloadImage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UAsyncTaskDownloadImage*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::STATIC_DownloadImage(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAsyncTaskDownloadImage::AfterRead()
{
	UBlueprintAsyncActionBase::AfterRead();

}

void UAsyncTaskDownloadImage::BeforeDelete()
{
	UBlueprintAsyncActionBase::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE5080
//		Name   -> Function UMG.DragDropOperation.Drop
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE4630
//		Name   -> Function UMG.DragDropOperation.Dragged
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE4520
//		Name   -> Function UMG.DragDropOperation.DragCancelled
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDragDropOperation::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(payload, UObject);
	READ_PTR_FULL(DefaultDragVisual, UWidget);
}

void UDragDropOperation::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(payload);
	DELE_PTR_FULL(DefaultDragVisual);
}

void UMovieScene2DTransformSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene2DTransformSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene2DTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScene2DTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneMarginSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneMarginSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneMarginTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneMarginTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneWidgetMaterialTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

}

void UMovieSceneWidgetMaterialTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

}

void UNamedSlotInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNamedSlotInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPropertyBinding::AfterRead()
{
	UObject::AfterRead();

}

void UPropertyBinding::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7210
//		Name   -> Function UMG.BoolBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBoolBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	UBoolBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBoolBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UBoolBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7240
//		Name   -> Function UMG.BrushBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UBrushBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	UBrushBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBrushBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UBrushBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE72A0
//		Name   -> Function UMG.CheckedStateBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<SlateCore_ECheckBoxState> UCheckedStateBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	UCheckedStateBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCheckedStateBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UCheckedStateBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE6EA0
//		Name   -> Function UMG.ColorBinding.GetSlateValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UColorBinding::GetSlateValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	UColorBinding_GetSlateValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6780
//		Name   -> Function UMG.ColorBinding.GetLinearValue
//		Flags  -> (Final, Native, Public, HasDefaults, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FLinearColor UColorBinding::GetLinearValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	UColorBinding_GetLinearValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UColorBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UColorBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE72D0
//		Name   -> Function UMG.FloatBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFloatBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	UFloatBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFloatBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UFloatBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7300
//		Name   -> Function UMG.Int32Binding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UInt32Binding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	UInt32Binding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInt32Binding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UInt32Binding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7330
//		Name   -> Function UMG.MouseCursorBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<CoreUObject_EMouseCursor> UMouseCursorBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	UMouseCursorBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMouseCursorBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UMouseCursorBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7190
//		Name   -> Function UMG.TextBinding.GetTextValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTextBinding::GetTextValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	UTextBinding_GetTextValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6F60
//		Name   -> Function UMG.TextBinding.GetStringValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UTextBinding::GetStringValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	UTextBinding_GetStringValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTextBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UTextBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE73C0
//		Name   -> Function UMG.VisibilityBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<UMG_ESlateVisibility> UVisibilityBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	UVisibilityBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVisibilityBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UVisibilityBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE73F0
//		Name   -> Function UMG.WidgetBinding.GetValue
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidgetBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	UWidgetBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetBinding::AfterRead()
{
	UPropertyBinding::AfterRead();

}

void UWidgetBinding::BeforeDelete()
{
	UPropertyBinding::BeforeDelete();

}

void URichTextBlockDecorator::AfterRead()
{
	UObject::AfterRead();

}

void URichTextBlockDecorator::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE7DF0
//		Name   -> Function UMG.SlateBlueprintLibrary.LocalToViewport
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateBlueprintLibrary::STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function:
//		Offset -> 0x01FE7CF0
//		Name   -> Function UMG.SlateBlueprintLibrary.LocalToAbsolute
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D USlateBlueprintLibrary::STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7BC0
//		Name   -> Function UMG.SlateBlueprintLibrary.IsUnderLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   AbsoluteCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USlateBlueprintLibrary::STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE67C0
//		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D USlateBlueprintLibrary::STATIC_GetLocalSize(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3150
//		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   AbsoluteDesktopCoordinate                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateBlueprintLibrary::STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function:
//		Offset -> 0x01FE3050
//		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   AbsoluteCoordinate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D USlateBlueprintLibrary::STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USlateBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USlateBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVisual::AfterRead()
{
	UObject::AfterRead();

}

void UVisual::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEEB00
//		Name   -> Function UMG.Widget.SetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<UMG_ESlateVisibility>                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget::SetVisibility(TEnumAsByte<UMG_ESlateVisibility> InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEE0E0
//		Name   -> Function UMG.Widget.SetUserFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEE030
//		Name   -> Function UMG.Widget.SetToolTipText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       InToolTipText                                              (ConstParm, Parm, OutParm, ReferenceParm)
void UWidget::SetToolTipText(const struct FText& InToolTipText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEDFB0
//		Name   -> Function UMG.Widget.SetToolTip
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget::SetToolTip(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED480
//		Name   -> Function UMG.Widget.SetRenderTranslation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED400
//		Name   -> Function UMG.Widget.SetRenderTransformPivot
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Pivot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED320
//		Name   -> Function UMG.Widget.SetRenderTransform
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FWidgetTransform                            InTransform                                                (Parm)
void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED2A0
//		Name   -> Function UMG.Widget.SetRenderShear
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Shear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED220
//		Name   -> Function UMG.Widget.SetRenderScale
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED1A0
//		Name   -> Function UMG.Widget.SetRenderAngle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget::SetRenderAngle(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderAngle");

	UWidget_SetRenderAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBC20
//		Name   -> Function UMG.Widget.SetKeyboardFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWidget::SetKeyboardFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	UWidget_SetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB7D0
//		Name   -> Function UMG.Widget.SetIsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA410
//		Name   -> Function UMG.Widget.SetCursor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              InCursor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget::SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8EE0
//		Name   -> Function UMG.Widget.ResetCursor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWidget::ResetCursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	UWidget_ResetCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8DD0
//		Name   -> Function UMG.Widget.RemoveFromParent
//		Flags  -> (Native, Public, BlueprintCallable)
void UWidget::RemoveFromParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	UWidget_RemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.OnReply__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7CC0
//		Name   -> Function UMG.Widget.IsVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::IsVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7AD0
//		Name   -> Function UMG.Widget.IsHovered
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::IsHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	UWidget_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7A50
//		Name   -> Function UMG.Widget.InvalidateLayoutAndVolatility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWidget::InvalidateLayoutAndVolatility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	UWidget_InvalidateLayoutAndVolatility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE79A0
//		Name   -> Function UMG.Widget.HasUserFocusedDescendants
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7910
//		Name   -> Function UMG.Widget.HasUserFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE78B0
//		Name   -> Function UMG.Widget.HasMouseCapture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasMouseCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	UWidget_HasMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7880
//		Name   -> Function UMG.Widget.HasKeyboardFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasKeyboardFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	UWidget_HasKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7850
//		Name   -> Function UMG.Widget.HasFocusedDescendants
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasFocusedDescendants()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	UWidget_HasFocusedDescendants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7790
//		Name   -> Function UMG.Widget.HasAnyUserFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::HasAnyUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	UWidget_HasAnyUserFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetWidget__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE75F0
//		Name   -> Function UMG.Widget.GetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<UMG_ESlateVisibility> UWidget::GetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	UWidget_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetText__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWidget::GetText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<UMG_ESlateVisibility> UWidget::GetSlateVisibility__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6D20
//		Name   -> Function UMG.Widget.GetParent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPanelWidget*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UWidget::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	UWidget_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<CoreUObject_EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
//		Flags  -> (Public, Delegate, HasDefaults)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE64F0
//		Name   -> Function UMG.Widget.GetIsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::GetIsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	UWidget_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetInt32__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWidget::GetInt32__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetFloat__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidget::GetFloat__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	UWidget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5CF0
//		Name   -> Function UMG.Widget.GetDesiredSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UWidget::GetDesiredSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	UWidget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<SlateCore_ECheckBoxState> UWidget::GetCheckBoxState__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GetBool__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget::GetBool__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	UWidget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FString                                     Item                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5360
//		Name   -> Function UMG.Widget.ForceVolatile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget::ForceVolatile(bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE5340
//		Name   -> Function UMG.Widget.ForceLayoutPrepass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWidget::ForceLayoutPrepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	UWidget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidget::AfterRead()
{
	UVisual::AfterRead();

	READ_PTR_FULL(Slot, UPanelSlot);
	READ_PTR_FULL(ToolTipWidget, UWidget);
	READ_PTR_FULL(Navigation, UWidgetNavigation);
}

void UWidget::BeforeDelete()
{
	UVisual::BeforeDelete();

	DELE_PTR_FULL(Slot);
	DELE_PTR_FULL(ToolTipWidget);
	DELE_PTR_FULL(Navigation);
}

// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEF0C0
//		Name   -> Function UMG.UserWidget.StopAnimation
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED060
//		Name   -> Function UMG.UserWidget.SetPositionInViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bRemoveDPIScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC830
//		Name   -> Function UMG.UserWidget.SetOwningLocalPlayer
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningLocalPlayer");

	UUserWidget_SetOwningLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAAC0
//		Name   -> Function UMG.UserWidget.SetForegroundColor
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateColor                                 InForegroundColor                                          (Parm)
void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA490
//		Name   -> Function UMG.UserWidget.SetDesiredSizeInViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA190
//		Name   -> Function UMG.UserWidget.SetColorAndOpacity
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE92A0
//		Name   -> Function UMG.UserWidget.SetAnchorsInViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FAnchors                                    Anchors                                                    (Parm)
void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9190
//		Name   -> Function UMG.UserWidget.SetAlignmentInViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8DF0
//		Name   -> Function UMG.UserWidget.RemoveFromViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void UUserWidget::RemoveFromViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	UUserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8840
//		Name   -> Function UMG.UserWidget.PlaySound
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class USoundBase*                                  SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE86F0
//		Name   -> Function UMG.UserWidget.PlayAnimation
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              Playmode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> Playmode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.Playmode = Playmode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8650
//		Name   -> Function UMG.UserWidget.PauseAnimation
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnTouchStarted
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnTouchMoved
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnTouchGesture
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               GestureEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnTouchEnded
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnPreviewMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnPreviewKeyDown
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnPaint
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	UUserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMouseButtonDoubleClick
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   InMyGeometry                                               (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnMotionDetected
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FMotionEvent                                InMotionEvent                                              (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnKeyChar
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FCharacterEvent                             InCharacterEvent                                           (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnFocusLost
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (Parm)
void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDrop
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (Parm)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDragOver
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (Parm)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDragLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (Parm)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDragEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (Parm)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDragDetected
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnDragCancelled
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnControllerButtonReleased
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FControllerEvent                            ControllerEvent                                            (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnControllerButtonReleased");

	UUserWidget_OnControllerButtonReleased_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnControllerButtonPressed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FControllerEvent                            ControllerEvent                                            (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnControllerButtonPressed");

	UUserWidget_OnControllerButtonPressed_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnControllerAnalogValueChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FControllerEvent                            ControllerEvent                                            (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnControllerAnalogValueChanged");

	UUserWidget_OnControllerAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8530
//		Name   -> Function UMG.UserWidget.OnAnimationStarted
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE84A0
//		Name   -> Function UMG.UserWidget.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.OnAnalogValueChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7B00
//		Name   -> Function UMG.UserWidget.IsInViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::IsInViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	UUserWidget_IsInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.IsInteractable
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::IsInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6CF0
//		Name   -> Function UMG.UserWidget.GetOwningPlayerPawn
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	UUserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6CC0
//		Name   -> Function UMG.UserWidget.GetOwningPlayer
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APlayerController* UUserWidget::GetOwningPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayer");

	UUserWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6C90
//		Name   -> Function UMG.UserWidget.GetOwningLocalPlayer
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningLocalPlayer");

	UUserWidget_GetOwningLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6550
//		Name   -> Function UMG.UserWidget.GetIsVisible
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::GetIsVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	UUserWidget_GetIsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUserWidget::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function UMG.UserWidget.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUserWidget::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3850
//		Name   -> Function UMG.UserWidget.AddToViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
void UUserWidget::AddToViewport(int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE37C0
//		Name   -> Function UMG.UserWidget.AddToPlayerScreen
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUserWidget::AddToPlayerScreen(int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserWidget::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(WidgetTree, UWidgetTree);
}

void UUserWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(WidgetTree);
}

void UUMGSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Animation, UWidgetAnimation);
}

void UUMGSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Animation);
}

void UPanelSlot::AfterRead()
{
	UVisual::AfterRead();

	READ_PTR_FULL(Parent, UPanelWidget);
	READ_PTR_FULL(Content, UWidget);
}

void UPanelSlot::BeforeDelete()
{
	UVisual::BeforeDelete();

	DELE_PTR_FULL(Parent);
	DELE_PTR_FULL(Content);
}

// Function:
//		Offset -> 0x01FEE460
//		Name   -> Function UMG.BorderSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorderSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC940
//		Name   -> Function UMG.BorderSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAD80
//		Name   -> Function UMG.BorderSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBorderSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UBorderSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE4E0
//		Name   -> Function UMG.ButtonSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UButtonSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	UButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC9D0
//		Name   -> Function UMG.ButtonSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	UButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAE00
//		Name   -> Function UMG.ButtonSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UButtonSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UButtonSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEEC80
//		Name   -> Function UMG.CanvasPanelSlot.SetZOrder
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCanvasPanelSlot::SetZOrder(int InZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED8B0
//		Name   -> Function UMG.CanvasPanelSlot.SetSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECFE0
//		Name   -> Function UMG.CanvasPanelSlot.SetPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC620
//		Name   -> Function UMG.CanvasPanelSlot.SetOffsets
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InOffset                                                   (Parm)
void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC370
//		Name   -> Function UMG.CanvasPanelSlot.SetMinimum
//		Flags  -> (Final, Native, Public, HasDefaults)
// Parameters:
//		struct FVector2D                                   InMinimumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBFF0
//		Name   -> Function UMG.CanvasPanelSlot.SetMaximum
//		Flags  -> (Final, Native, Public, HasDefaults)
// Parameters:
//		struct FVector2D                                   InMaximumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBC40
//		Name   -> Function UMG.CanvasPanelSlot.SetLayout
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAnchorData                                 InLayoutData                                               (ConstParm, Parm, OutParm, ReferenceParm)
void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE94E0
//		Name   -> Function UMG.CanvasPanelSlot.SetAutoSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbAutoSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9210
//		Name   -> Function UMG.CanvasPanelSlot.SetAnchors
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FAnchors                                    InAnchors                                                  (Parm)
void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9110
//		Name   -> Function UMG.CanvasPanelSlot.SetAlignment
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InAlignment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE76B0
//		Name   -> Function UMG.CanvasPanelSlot.GetZOrder
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UCanvasPanelSlot::GetZOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	UCanvasPanelSlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6E60
//		Name   -> Function UMG.CanvasPanelSlot.GetSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UCanvasPanelSlot::GetSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	UCanvasPanelSlot_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6D50
//		Name   -> Function UMG.CanvasPanelSlot.GetPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	UCanvasPanelSlot_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6B00
//		Name   -> Function UMG.CanvasPanelSlot.GetOffsets
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMargin                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	UCanvasPanelSlot_GetOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6730
//		Name   -> Function UMG.CanvasPanelSlot.GetLayout
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FAnchorData                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	UCanvasPanelSlot_GetLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5780
//		Name   -> Function UMG.CanvasPanelSlot.GetAutoSize
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCanvasPanelSlot::GetAutoSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	UCanvasPanelSlot_GetAutoSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5740
//		Name   -> Function UMG.CanvasPanelSlot.GetAnchors
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FAnchors                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	UCanvasPanelSlot_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5420
//		Name   -> Function UMG.CanvasPanelSlot.GetAlignment
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	UCanvasPanelSlot_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCanvasPanelSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UCanvasPanelSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE560
//		Name   -> Function UMG.GridSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED600
//		Name   -> Function UMG.GridSlot.SetRowSpan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InRowSpan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetRowSpan(int InRowSpan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED500
//		Name   -> Function UMG.GridSlot.SetRow
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetRow(int InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAE80
//		Name   -> Function UMG.GridSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA310
//		Name   -> Function UMG.GridSlot.SetColumnSpan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InColumnSpan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetColumnSpan(int InColumnSpan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA210
//		Name   -> Function UMG.GridSlot.SetColumn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridSlot::SetColumn(int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGridSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UGridSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE5E0
//		Name   -> Function UMG.HorizontalBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED930
//		Name   -> Function UMG.HorizontalBoxSlot.SetSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateChildSize                             InSize                                                     (Parm)
void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECA60
//		Name   -> Function UMG.HorizontalBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAF00
//		Name   -> Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UHorizontalBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UHorizontalBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE660
//		Name   -> Function UMG.OverlaySlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECAF0
//		Name   -> Function UMG.OverlaySlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAF80
//		Name   -> Function UMG.OverlaySlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOverlaySlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UOverlaySlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

void USafeZoneSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void USafeZoneSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE6E0
//		Name   -> Function UMG.ScaleBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECB80
//		Name   -> Function UMG.ScaleBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB000
//		Name   -> Function UMG.ScaleBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScaleBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UScaleBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FECC10
//		Name   -> Function UMG.ScrollBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB080
//		Name   -> Function UMG.ScrollBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScrollBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UScrollBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE760
//		Name   -> Function UMG.SizeBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECCA0
//		Name   -> Function UMG.SizeBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB100
//		Name   -> Function UMG.SizeBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USizeBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void USizeBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE7E0
//		Name   -> Function UMG.UniformGridSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED580
//		Name   -> Function UMG.UniformGridSlot.SetRow
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridSlot::SetRow(int InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB180
//		Name   -> Function UMG.UniformGridSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA290
//		Name   -> Function UMG.UniformGridSlot.SetColumn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridSlot::SetColumn(int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUniformGridSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UUniformGridSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE860
//		Name   -> Function UMG.VerticalBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEDA50
//		Name   -> Function UMG.VerticalBoxSlot.SetSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateChildSize                             InSize                                                     (Parm)
void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECD30
//		Name   -> Function UMG.VerticalBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB200
//		Name   -> Function UMG.VerticalBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVerticalBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UVerticalBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE8E0
//		Name   -> Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECDC0
//		Name   -> Function UMG.WidgetSwitcherSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB280
//		Name   -> Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidgetSwitcherSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UWidgetSwitcherSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE960
//		Name   -> Function UMG.WrapBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECE50
//		Name   -> Function UMG.WrapBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB300
//		Name   -> Function UMG.WrapBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA800
//		Name   -> Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA770
//		Name   -> Function UMG.WrapBoxSlot.SetFillEmptySpace
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWrapBoxSlot::AfterRead()
{
	UPanelSlot::AfterRead();

}

void UWrapBoxSlot::BeforeDelete()
{
	UPanelSlot::BeforeDelete();

}

// Function:
//		Offset -> 0x01FED120
//		Name   -> Function UMG.CircularThrobber.SetRadius
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCircularThrobber::SetRadius(float InRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FECF60
//		Name   -> Function UMG.CircularThrobber.SetPeriod
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InPeriod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCircularThrobber::SetPeriod(float InPeriod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC520
//		Name   -> Function UMG.CircularThrobber.SetNumberOfPieces
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCircularThrobber::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(PieceImage, USlateBrushAsset);
}

void UCircularThrobber::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(PieceImage);
}

void UComboBox::AfterRead()
{
	UWidget::AfterRead();

}

void UComboBox::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FED700
//		Name   -> Function UMG.ComboBoxString.SetSelectedOption
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UComboBoxString::SetSelectedOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8E10
//		Name   -> Function UMG.ComboBoxString.RemoveOption
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UComboBoxString::RemoveOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE89E0
//		Name   -> Function UMG.ComboBoxString.RefreshOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UComboBoxString::RefreshOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	UComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		struct FString                                     SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE6DC0
//		Name   -> Function UMG.ComboBoxString.GetSelectedOption
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UComboBoxString::GetSelectedOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	UComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6C30
//		Name   -> Function UMG.ComboBoxString.GetOptionCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UComboBoxString::GetOptionCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	UComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6B40
//		Name   -> Function UMG.ComboBoxString.GetOptionAtIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UComboBoxString::GetOptionAtIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5290
//		Name   -> Function UMG.ComboBoxString.FindOptionIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UComboBoxString::FindOptionIndex(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3D30
//		Name   -> Function UMG.ComboBoxString.ClearSelection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UComboBoxString::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	UComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3D10
//		Name   -> Function UMG.ComboBoxString.ClearOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UComboBoxString::ClearOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	UComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3720
//		Name   -> Function UMG.ComboBoxString.AddOption
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UComboBoxString::AddOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	UComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UComboBoxString::AfterRead()
{
	UWidget::AfterRead();

}

void UComboBoxString::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEDC40
//		Name   -> Function UMG.EditableText.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (Parm)
void UEditableText::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	UEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBA10
//		Name   -> Function UMG.EditableText.SetIsReadOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbIsReadyOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB980
//		Name   -> Function UMG.EditableText.SetIsPassword
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbIsPassword                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAC50
//		Name   -> Function UMG.EditableText.SetHintText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InHintText                                                 (Parm)
void UEditableText::SetHintText(const struct FText& InHintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7000
//		Name   -> Function UMG.EditableText.GetText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UEditableText::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	UEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEditableText::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BackgroundImageSelected, USlateBrushAsset);
	READ_PTR_FULL(BackgroundImageComposing, USlateBrushAsset);
	READ_PTR_FULL(CaretImage, USlateBrushAsset);
}

void UEditableText::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BackgroundImageSelected);
	DELE_PTR_FULL(BackgroundImageComposing);
	DELE_PTR_FULL(CaretImage);
}

// Function:
//		Offset -> 0x01FEDCF0
//		Name   -> Function UMG.EditableTextBox.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (Parm)
void UEditableTextBox::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA590
//		Name   -> Function UMG.EditableTextBox.SetError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InError                                                    (Parm)
void UEditableTextBox::SetError(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	UEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7050
//		Name   -> Function UMG.EditableTextBox.GetText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UEditableTextBox::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	UEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3BD0
//		Name   -> Function UMG.EditableTextBox.ClearError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UEditableTextBox::ClearError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	UEditableTextBox_ClearError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEditableTextBox::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UEditableTextBox::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function:
//		Offset -> 0x01FEB860
//		Name   -> Function UMG.ExpandableArea.SetIsExpanded
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE6520
//		Name   -> Function UMG.ExpandableArea.GetIsExpanded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UExpandableArea::GetIsExpanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	UExpandableArea_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UExpandableArea::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(HeaderContent, UWidget);
	READ_PTR_FULL(BodyContent, UWidget);
}

void UExpandableArea::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(HeaderContent);
	DELE_PTR_FULL(BodyContent);
}

// Function:
//		Offset -> 0x01FEC6B0
//		Name   -> Function UMG.Image.SetOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImage::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA000
//		Name   -> Function UMG.Image.SetColorAndOpacity
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9B50
//		Name   -> Function UMG.Image.SetBrushFromTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9A50
//		Name   -> Function UMG.Image.SetBrushFromMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9950
//		Name   -> Function UMG.Image.SetBrushFromAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9720
//		Name   -> Function UMG.Image.SetBrush
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm)
void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE5DD0
//		Name   -> Function UMG.Image.GetDynamicMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	UImage_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UImage::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Image, USlateBrushAsset);
}

void UImage::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
}

// Function:
//		Offset -> 0x01FEDDA0
//		Name   -> Function UMG.MultiLineEditableText.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (Parm)
void UMultiLineEditableText::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE70A0
//		Name   -> Function UMG.MultiLineEditableText.GetText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMultiLineEditableText::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	UMultiLineEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMultiLineEditableText::AfterRead()
{
	UWidget::AfterRead();

}

void UMultiLineEditableText::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEDE50
//		Name   -> Function UMG.MultiLineEditableTextBox.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (Parm)
void UMultiLineEditableTextBox::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA640
//		Name   -> Function UMG.MultiLineEditableTextBox.SetError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InError                                                    (Parm)
void UMultiLineEditableTextBox::SetError(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE70F0
//		Name   -> Function UMG.MultiLineEditableTextBox.GetText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMultiLineEditableTextBox::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	UMultiLineEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMultiLineEditableTextBox::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UMultiLineEditableTextBox::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

void UNativeWidgetHost::AfterRead()
{
	UWidget::AfterRead();

}

void UNativeWidgetHost::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE8D40
//		Name   -> Function UMG.PanelWidget.RemoveChildAt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPanelWidget::RemoveChildAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8CB0
//		Name   -> Function UMG.PanelWidget.RemoveChild
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE77C0
//		Name   -> Function UMG.PanelWidget.HasChild
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPanelWidget::HasChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7760
//		Name   -> Function UMG.PanelWidget.HasAnyChildren
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPanelWidget::HasAnyChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	UPanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5C90
//		Name   -> Function UMG.PanelWidget.GetChildrenCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPanelWidget::GetChildrenCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	UPanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5C00
//		Name   -> Function UMG.PanelWidget.GetChildIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5B70
//		Name   -> Function UMG.PanelWidget.GetChildAt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPanelWidget::GetChildAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3BB0
//		Name   -> Function UMG.PanelWidget.ClearChildren
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPanelWidget::ClearChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	UPanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE32A0
//		Name   -> Function UMG.PanelWidget.AddChild
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPanelSlot*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPanelWidget::AfterRead()
{
	UWidget::AfterRead();

}

void UPanelWidget::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE3330
//		Name   -> Function UMG.CanvasPanel.AddChildToCanvas
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanelSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCanvasPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UCanvasPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE5CC0
//		Name   -> Function UMG.ContentWidget.GetContentSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPanelSlot*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelSlot* UContentWidget::GetContentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	UContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UContentWidget::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UContentWidget::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE3E0
//		Name   -> Function UMG.Border.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorder::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC8B0
//		Name   -> Function UMG.Border.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm)
void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEAD00
//		Name   -> Function UMG.Border.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorder::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA390
//		Name   -> Function UMG.Border.SetContentColorAndOpacity
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InContentColorAndOpacity                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9AD0
//		Name   -> Function UMG.Border.SetBrushFromTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE99D0
//		Name   -> Function UMG.Border.SetBrushFromMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE98D0
//		Name   -> Function UMG.Border.SetBrushFromAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9850
//		Name   -> Function UMG.Border.SetBrushColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InBrushColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE95F0
//		Name   -> Function UMG.Border.SetBrush
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm)
void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE5DA0
//		Name   -> Function UMG.Border.GetDynamicMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	UBorder_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBorder::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(Brush, USlateBrushAsset);
}

void UBorder::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(Brush);
}

// Function:
//		Offset -> 0x01FE9F80
//		Name   -> Function UMG.Button.SetColorAndOpacity
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9570
//		Name   -> Function UMG.Button.SetBackgroundColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InBackgroundColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7B60
//		Name   -> Function UMG.Button.IsPressed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UButton::IsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	UButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UButton::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UButton::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function:
//		Offset -> 0x01FEB740
//		Name   -> Function UMG.CheckBox.SetIsChecked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9F00
//		Name   -> Function UMG.CheckBox.SetCheckedState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_ECheckBoxState>              InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCheckBox::SetCheckedState(TEnumAsByte<SlateCore_ECheckBoxState> InCheckedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7B90
//		Name   -> Function UMG.CheckBox.IsPressed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCheckBox::IsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	UCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7A70
//		Name   -> Function UMG.CheckBox.IsChecked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCheckBox::IsChecked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	UCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5B40
//		Name   -> Function UMG.CheckBox.GetCheckedState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<SlateCore_ECheckBoxState> UCheckBox::GetCheckedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	UCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCheckBox::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(UncheckedImage, USlateBrushAsset);
	READ_PTR_FULL(UncheckedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(UncheckedPressedImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(CheckedPressedImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedHoveredImage, USlateBrushAsset);
	READ_PTR_FULL(UndeterminedPressedImage, USlateBrushAsset);
}

void UCheckBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(UncheckedImage);
	DELE_PTR_FULL(UncheckedHoveredImage);
	DELE_PTR_FULL(UncheckedPressedImage);
	DELE_PTR_FULL(CheckedImage);
	DELE_PTR_FULL(CheckedHoveredImage);
	DELE_PTR_FULL(CheckedPressedImage);
	DELE_PTR_FULL(UndeterminedImage);
	DELE_PTR_FULL(UndeterminedHoveredImage);
	DELE_PTR_FULL(UndeterminedPressedImage);
}

// Function:
//		Offset -> 0x01FE7A30
//		Name   -> Function UMG.InvalidationBox.InvalidateCache
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UInvalidationBox::InvalidateCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	UInvalidationBox_InvalidateCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInvalidationBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void UInvalidationBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEF140
//		Name   -> Function UMG.MenuAnchor.ToggleOpen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bFocusOnOpen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEED00
//		Name   -> Function UMG.MenuAnchor.ShouldOpenDueToClick
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMenuAnchor::ShouldOpenDueToClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	UMenuAnchor_ShouldOpenDueToClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE85C0
//		Name   -> Function UMG.MenuAnchor.Open
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bFocusMenu                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuAnchor::Open(bool bFocusMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7B30
//		Name   -> Function UMG.MenuAnchor.IsOpen
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMenuAnchor::IsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	UMenuAnchor_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE78E0
//		Name   -> Function UMG.MenuAnchor.HasOpenSubMenus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMenuAnchor::HasOpenSubMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	UMenuAnchor_HasOpenSubMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6910
//		Name   -> Function UMG.MenuAnchor.GetMenuPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	UMenuAnchor_GetMenuPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3EB0
//		Name   -> Function UMG.MenuAnchor.Close
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMenuAnchor::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	UMenuAnchor_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMenuAnchor::AfterRead()
{
	UContentWidget::AfterRead();

	READ_PTR_FULL(MenuClass, UClass);
}

void UMenuAnchor::BeforeDelete()
{
	UContentWidget::BeforeDelete();

	DELE_PTR_FULL(MenuClass);
}

void UNamedSlot::AfterRead()
{
	UContentWidget::AfterRead();

}

void UNamedSlot::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

void USafeZone::AfterRead()
{
	UContentWidget::AfterRead();

}

void USafeZone::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

void UScaleBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void UScaleBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEEC00
//		Name   -> Function UMG.SizeBox.SetWidthOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InWidthOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC1F0
//		Name   -> Function UMG.SizeBox.SetMinDesiredWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC070
//		Name   -> Function UMG.SizeBox.SetMinDesiredHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMinDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBDF0
//		Name   -> Function UMG.SizeBox.SetMaxDesiredWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMaxDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBD70
//		Name   -> Function UMG.SizeBox.SetMaxDesiredHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMaxDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEABD0
//		Name   -> Function UMG.SizeBox.SetHeightOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InHeightOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3E90
//		Name   -> Function UMG.SizeBox.ClearWidthOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearWidthOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	USizeBox_ClearWidthOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3CB0
//		Name   -> Function UMG.SizeBox.ClearMinDesiredWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearMinDesiredWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	USizeBox_ClearMinDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3C90
//		Name   -> Function UMG.SizeBox.ClearMinDesiredHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearMinDesiredHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	USizeBox_ClearMinDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3C30
//		Name   -> Function UMG.SizeBox.ClearMaxDesiredWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearMaxDesiredWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	USizeBox_ClearMaxDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3C10
//		Name   -> Function UMG.SizeBox.ClearMaxDesiredHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearMaxDesiredHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	USizeBox_ClearMaxDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3BF0
//		Name   -> Function UMG.SizeBox.ClearHeightOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USizeBox::ClearHeightOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	USizeBox_ClearHeightOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USizeBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void USizeBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEF030
//		Name   -> Function UMG.Viewport.Spawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEEA70
//		Name   -> Function UMG.Viewport.SetViewRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEE9E0
//		Name   -> Function UMG.Viewport.SetViewLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UViewport::SetViewLocation(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	UViewport_SetViewLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7460
//		Name   -> Function UMG.Viewport.GetViewRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator UViewport::GetViewRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	UViewport_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE75C0
//		Name   -> Function UMG.Viewport.GetViewportWorld
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UWorld*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWorld* UViewport::GetViewportWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	UViewport_GetViewportWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7420
//		Name   -> Function UMG.Viewport.GetViewLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UViewport::GetViewLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	UViewport_GetViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UViewport::AfterRead()
{
	UContentWidget::AfterRead();

}

void UViewport::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE33C0
//		Name   -> Function UMG.GridPanel.AddChildToGrid
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGridSlot*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGridPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UGridPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE3450
//		Name   -> Function UMG.HorizontalBox.AddChildToHorizontalBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UHorizontalBoxSlot*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UHorizontalBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UHorizontalBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE34E0
//		Name   -> Function UMG.Overlay.AddChildToOverlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UOverlaySlot*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UOverlay::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UOverlay::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FED680
//		Name   -> Function UMG.ScrollBox.SetScrollOffset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewScrollOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8F40
//		Name   -> Function UMG.ScrollBox.ScrollWidgetIntoView
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     WidgetToFind                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AnimateScroll                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8F20
//		Name   -> Function UMG.ScrollBox.ScrollToStart
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UScrollBox::ScrollToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	UScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8F00
//		Name   -> Function UMG.ScrollBox.ScrollToEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UScrollBox::ScrollToEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	UScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE6D90
//		Name   -> Function UMG.ScrollBox.GetScrollOffset
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UScrollBox::GetScrollOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	UScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UScrollBox::AfterRead()
{
	UPanelWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BarStyle, USlateWidgetStyleAsset);
}

void UScrollBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BarStyle);
}

// Function:
//		Offset -> 0x01FEDAF0
//		Name   -> Function UMG.UniformGridPanel.SetSlotPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InSlotPadding                                              (Parm)
void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC170
//		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMinDesiredSlotWidth                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC0F0
//		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMinDesiredSlotHeight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3570
//		Name   -> Function UMG.UniformGridPanel.AddChildToUniformGrid
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUniformGridSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUniformGridPanel::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UUniformGridPanel::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE3600
//		Name   -> Function UMG.VerticalBox.AddChildToVerticalBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UVerticalBoxSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVerticalBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UVerticalBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FE9090
//		Name   -> Function UMG.WidgetSwitcher.SetActiveWidgetIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetSwitcher::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9010
//		Name   -> Function UMG.WidgetSwitcher.SetActiveWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7620
//		Name   -> Function UMG.WidgetSwitcher.GetWidgetAtIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6AD0
//		Name   -> Function UMG.WidgetSwitcher.GetNumWidgets
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWidgetSwitcher::GetNumWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	UWidgetSwitcher_GetNumWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE53F0
//		Name   -> Function UMG.WidgetSwitcher.GetActiveWidgetIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetSwitcher::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UWidgetSwitcher::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEB410
//		Name   -> Function UMG.WrapBox.SetInnerSlotPadding
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3690
//		Name   -> Function UMG.WrapBox.AddChildWrapBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWrapBoxSlot*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildWrapBox");

	UWrapBox_AddChildWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWrapBox::AfterRead()
{
	UPanelWidget::AfterRead();

}

void UWrapBox::BeforeDelete()
{
	UPanelWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FECEE0
//		Name   -> Function UMG.ProgressBar.SetPercent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressBar::SetPercent(float InPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB8F0
//		Name   -> Function UMG.ProgressBar.SetIsMarquee
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbIsMarquee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA6F0
//		Name   -> Function UMG.ProgressBar.SetFillColorAndOpacity
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UProgressBar::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
	READ_PTR_FULL(BackgroundImage, USlateBrushAsset);
	READ_PTR_FULL(FillImage, USlateBrushAsset);
	READ_PTR_FULL(MarqueeImage, USlateBrushAsset);
}

void UProgressBar::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
	DELE_PTR_FULL(BackgroundImage);
	DELE_PTR_FULL(FillImage);
	DELE_PTR_FULL(MarqueeImage);
}

void URichTextBlock::AfterRead()
{
	UWidget::AfterRead();

}

void URichTextBlock::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEDB80
//		Name   -> Function UMG.ScrollBar.SetState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InOffsetFraction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InThumbSizeFraction                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UScrollBar::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UScrollBar::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function:
//		Offset -> 0x01FEE2E0
//		Name   -> Function UMG.Slider.SetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USlider::SetValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	USlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBCE0
//		Name   -> Function UMG.Slider.SetLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlider::SetLocked(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	USlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB380
//		Name   -> Function UMG.Slider.SetIndentHandle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlider::SetIndentHandle(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7360
//		Name   -> Function UMG.Slider.GetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USlider::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	USlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USlider::AfterRead()
{
	UWidget::AfterRead();

}

void USlider::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FED9D0
//		Name   -> Function UMG.Spacer.SetSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USpacer::SetSize(const struct FVector2D& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	USpacer_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USpacer::AfterRead()
{
	UWidget::AfterRead();

}

void USpacer::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEE360
//		Name   -> Function UMG.SpinBox.SetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::SetValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC2F0
//		Name   -> Function UMG.SpinBox.SetMinValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::SetMinValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC270
//		Name   -> Function UMG.SpinBox.SetMinSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::SetMinSliderValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBF70
//		Name   -> Function UMG.SpinBox.SetMaxValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::SetMaxValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBEF0
//		Name   -> Function UMG.SpinBox.SetMaxSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::SetMaxSliderValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA9B0
//		Name   -> Function UMG.SpinBox.SetForegroundColor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateColor                                 InForegroundColor                                          (Parm)
void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7390
//		Name   -> Function UMG.SpinBox.GetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USpinBox::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	USpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6980
//		Name   -> Function UMG.SpinBox.GetMinValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USpinBox::GetMinValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	USpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6950
//		Name   -> Function UMG.SpinBox.GetMinSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USpinBox::GetMinSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	USpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE68E0
//		Name   -> Function UMG.SpinBox.GetMaxValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USpinBox::GetMaxValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	USpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE68B0
//		Name   -> Function UMG.SpinBox.GetMaxSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USpinBox::GetMaxSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	USpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3CF0
//		Name   -> Function UMG.SpinBox.ClearMinValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpinBox::ClearMinValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	USpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3CD0
//		Name   -> Function UMG.SpinBox.ClearMinSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpinBox::ClearMinSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	USpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3C70
//		Name   -> Function UMG.SpinBox.ClearMaxValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpinBox::ClearMaxValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	USpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE3C50
//		Name   -> Function UMG.SpinBox.ClearMaxSliderValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpinBox::ClearMaxSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	USpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USpinBox::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void USpinBox::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature");

	UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTableViewBase::AfterRead()
{
	UWidget::AfterRead();

}

void UTableViewBase::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void UListView::AfterRead()
{
	UTableViewBase::AfterRead();

}

void UListView::BeforeDelete()
{
	UTableViewBase::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEBB20
//		Name   -> Function UMG.TileView.SetItemWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileView::SetItemWidth(float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetItemWidth");

	UTileView_SetItemWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBAA0
//		Name   -> Function UMG.TileView.SetItemHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileView::SetItemHeight(float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetItemHeight");

	UTileView_SetItemHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE8EC0
//		Name   -> Function UMG.TileView.RequestListRefresh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UTileView::RequestListRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.RequestListRefresh");

	UTileView_RequestListRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTileView::AfterRead()
{
	UTableViewBase::AfterRead();

}

void UTileView::BeforeDelete()
{
	UTableViewBase::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEDF00
//		Name   -> Function UMG.TextBlock.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (Parm)
void UTextBlock::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	UTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED830
//		Name   -> Function UMG.TextBlock.SetShadowOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FED7B0
//		Name   -> Function UMG.TextBlock.SetShadowColorAndOpacity
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC730
//		Name   -> Function UMG.TextBlock.SetOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextBlock::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBBA0
//		Name   -> Function UMG.TextBlock.SetJustification
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<Slate_ETextJustify>                    InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextBlock::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetJustification");

	UTextBlock_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA8A0
//		Name   -> Function UMG.TextBlock.SetFont
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateFontInfo                              InFontInfo                                                 (Parm)
void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA080
//		Name   -> Function UMG.TextBlock.SetColorAndOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSlateColor                                 InColorAndOpacity                                          (Parm)
void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE7140
//		Name   -> Function UMG.TextBlock.GetText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTextBlock::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	UTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTextBlock::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(Style, USlateWidgetStyleAsset);
}

void UTextBlock::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(Style);
}

// Function:
//		Offset -> 0x01FEC5A0
//		Name   -> Function UMG.Throbber.SetNumberOfPieces
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9450
//		Name   -> Function UMG.Throbber.SetAnimateVertically
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAnimateVertically                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE93C0
//		Name   -> Function UMG.Throbber.SetAnimateOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAnimateOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9330
//		Name   -> Function UMG.Throbber.SetAnimateHorizontally
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAnimateHorizontally                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UThrobber::AfterRead()
{
	UWidget::AfterRead();

	READ_PTR_FULL(PieceImage, USlateBrushAsset);
}

void UThrobber::BeforeDelete()
{
	UWidget::BeforeDelete();

	DELE_PTR_FULL(PieceImage);
}

// Function:
//		Offset -> 0x01FE6F30
//		Name   -> Function UMG.WidgetAnimation.GetStartTime
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidgetAnimation::GetStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	UWidgetAnimation_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5F30
//		Name   -> Function UMG.WidgetAnimation.GetEndTime
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidgetAnimation::GetEndTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	UWidgetAnimation_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetAnimation::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UWidgetAnimation::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void UWidgetBlueprintGeneratedClass::AfterRead()
{
	UBlueprintGeneratedClass::AfterRead();

	READ_PTR_FULL(WidgetTree, UWidgetTree);
}

void UWidgetBlueprintGeneratedClass::BeforeDelete()
{
	UBlueprintGeneratedClass::BeforeDelete();

	DELE_PTR_FULL(WidgetTree);
}

// Function:
//		Offset -> 0x01FEF250
//		Name   -> Function UMG.WidgetBlueprintLibrary.UnlockMouse
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_UnlockMouse(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	UWidgetBlueprintLibrary_UnlockMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEF1D0
//		Name   -> Function UMG.WidgetBlueprintLibrary.Unhandled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_Unhandled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	UWidgetBlueprintLibrary_Unhandled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEE160
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetUserFocus
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEC3F0
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetMousePosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		struct FVector2D                                   NewMousePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEB640
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB5D0
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEB490
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA880
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE9D90
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function:
//		Offset -> 0x01FE9C20
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function:
//		Offset -> 0x01FE8B40
//		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseMouseCapture(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8A00
//		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8440
//		Name   -> Function UMG.WidgetBlueprintLibrary.NoResourceBrush
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidgetBlueprintLibrary::STATIC_NoResourceBrush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8300
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE81C0
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8110
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USlateBrushAsset*                            BrushAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7FD0
//		Name   -> Function UMG.WidgetBlueprintLibrary.LockMouse
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7AA0
//		Name   -> Function UMG.WidgetBlueprintLibrary.IsDragDropping
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidgetBlueprintLibrary::STATIC_IsDragDropping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	UWidgetBlueprintLibrary_IsDragDropping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE76E0
//		Name   -> Function UMG.WidgetBlueprintLibrary.Handled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_Handled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	UWidgetBlueprintLibrary_Handled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6580
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAnalogInputEvent                           Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FKeyEvent                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FKeyEvent UWidgetBlueprintLibrary::STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE63C0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPointerEvent                               Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE62D0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FNavigationEvent                            Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE61B0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKeyEvent                                   Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6060
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FControllerEvent                            Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent");

	UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5F60
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FCharacterEvent                             Event                                                      (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5E00
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5D30
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_GetDragDroppingContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5A10
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTexture2D* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE58E0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInterface* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE57B0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResource
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UWidgetBlueprintLibrary::STATIC_GetBrushResource(struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	UWidgetBlueprintLibrary_GetBrushResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE55D0
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Interface                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor)
//		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function:
//		Offset -> 0x01FE5460
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor)
//		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function:
//		Offset -> 0x01FE5190
//		Name   -> Function UMG.WidgetBlueprintLibrary.EndDragDrop
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_EndDragDrop(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE4E10
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UFont*                                       Font                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       FontTypeFace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01FE4C70
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
//		struct FString                                     InString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_DrawText(struct FPaintContext* Context, const struct FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.InString = InString;
	params.Position = Position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01FE4AB0
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLines
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
//		TArray<struct FVector2D>                           Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
void UWidgetBlueprintLibrary::STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01FE48F0
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLine
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
//		struct FVector2D                                   PositionA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   PositionB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
void UWidgetBlueprintLibrary::STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01FE4740
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm)
//		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USlateBrushAsset*                            Brush                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetBlueprintLibrary::STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x01FE4450
//		Name   -> Function UMG.WidgetBlueprintLibrary.DismissAllMenus
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE4220
//		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        DragKey                                                    (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE4040
//		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDrag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        DragKey                                                    (Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3FC0
//		Name   -> Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      OperationClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_CreateDragDropOperation(class UClass* OperationClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3ED0
//		Name   -> Function UMG.WidgetBlueprintLibrary.Create
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      WidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UWidgetBlueprintLibrary::STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3D50
//		Name   -> Function UMG.WidgetBlueprintLibrary.ClearUserFocus
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE3A70
//		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureMouse
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE38F0
//		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureJoystick
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE38D0
//		Name   -> Function UMG.WidgetBlueprintLibrary.CancelDragDrop
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UWidgetBlueprintLibrary::STATIC_CancelDragDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWidgetBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWidgetBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x01FEEB80
//		Name   -> Function UMG.WidgetComponent.SetWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEC7B0
//		Name   -> Function UMG.WidgetComponent.SetOwnerPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEBE70
//		Name   -> Function UMG.WidgetComponent.SetMaxInteractionDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetComponent::SetMaxInteractionDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetMaxInteractionDistance");

	UWidgetComponent_SetMaxInteractionDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FEA510
//		Name   -> Function UMG.WidgetComponent.SetDrawSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE71E0
//		Name   -> Function UMG.WidgetComponent.GetUserWidgetObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	UWidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6C60
//		Name   -> Function UMG.WidgetComponent.GetOwnerPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	UWidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE6880
//		Name   -> Function UMG.WidgetComponent.GetMaxInteractionDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidgetComponent::GetMaxInteractionDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaxInteractionDistance");

	UWidgetComponent_GetMaxInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE5D60
//		Name   -> Function UMG.WidgetComponent.GetDrawSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UWidgetComponent::GetDrawSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	UWidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWidgetComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(WidgetClass, UClass);
	READ_PTR_FULL(OwnerPlayer, ULocalPlayer);
	READ_PTR_FULL(Widget, UUserWidget);
	READ_PTR_FULL(BodySetup, UBodySetup);
	READ_PTR_FULL(TranslucentMaterial, UMaterialInterface);
	READ_PTR_FULL(TranslucentMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(OpaqueMaterial, UMaterialInterface);
	READ_PTR_FULL(OpaqueMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(MaskedMaterial, UMaterialInterface);
	READ_PTR_FULL(MaskedMaterial_OneSided, UMaterialInterface);
	READ_PTR_FULL(RenderTarget, UTextureRenderTarget2D);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceDynamic);
}

void UWidgetComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(WidgetClass);
	DELE_PTR_FULL(OwnerPlayer);
	DELE_PTR_FULL(Widget);
	DELE_PTR_FULL(BodySetup);
	DELE_PTR_FULL(TranslucentMaterial);
	DELE_PTR_FULL(TranslucentMaterial_OneSided);
	DELE_PTR_FULL(OpaqueMaterial);
	DELE_PTR_FULL(OpaqueMaterial_OneSided);
	DELE_PTR_FULL(MaskedMaterial);
	DELE_PTR_FULL(MaskedMaterial_OneSided);
	DELE_PTR_FULL(RenderTarget);
	DELE_PTR_FULL(MaterialInstance);
}

// Function:
//		Offset -> 0x01FEEFB0
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UVerticalBoxSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UVerticalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEEF30
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUniformGridSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUniformGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEEEB0
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UOverlaySlot*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOverlaySlot* UWidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEEE30
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UHorizontalBoxSlot*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UHorizontalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEEDB0
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGridSlot*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FEED30
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanelSlot*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanelSlot* UWidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE8C40
//		Name   -> Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01FE88C0
//		Name   -> Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ScreenPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE7530
//		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportSize
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector2D UWidgetLayoutLibrary::STATIC_GetViewportSize(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE74A0
//		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportScale
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidgetLayoutLibrary::STATIC_GetViewportScale(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01FE69B0
//		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidgetLayoutLibrary::STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;


	return params.ReturnValue;
}


void UWidgetLayoutLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UWidgetLayoutLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UWidgetNavigation::AfterRead()
{
	UObject::AfterRead();

}

void UWidgetNavigation::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWidgetTree::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RootWidget, UWidget);
}

void UWidgetTree::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RootWidget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
