#pragma once

// Name: SoT, Version: 2.3.0


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

// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UAsyncTaskDownloadImage*                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm)
};

// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                                   Geometry;                                                  // 0x0008(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LocalCoordinate;                                           // 0x003C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   PixelPosition;                                             // 0x0044(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ViewportPosition;                                          // 0x004C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LocalCoordinate;                                           // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ReturnValue;                                               // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   AbsoluteCoordinate;                                        // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ReturnValue;                                               // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   AbsoluteDesktopCoordinate;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   PixelPosition;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ViewportPosition;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   AbsoluteCoordinate;                                        // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ReturnValue;                                               // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  InVisibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                               // 0x0000(0x001C)  (Parm)
};

// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetRenderAngle
struct UWidget_SetRenderAngle_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.SetKeyboardFocus
struct UWidget_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              InCursor;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.ResetCursor
struct UWidget_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UWidget_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00E8)  (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UWidget_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UWidget_ForceLayoutPrepass_Params
{
};

// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRemoveDPIScale;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.SetOwningLocalPlayer
struct UUserWidget_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                         // 0x0000(0x0030)  (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                   // 0x0000(0x0010)  (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUserWidget_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartAtTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumLoopsToPlay;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UMG_EUMGSequencePlayMode>              Playmode;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InTouchEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InTouchEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               GestureEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InTouchEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FMotionEvent                                InMotionEvent;                                             // 0x0038(0x0058)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FCharacterEvent                             InCharacterEvent;                                          // 0x0038(0x0030)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0068(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0034(0x0008)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0088)  (Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0088)  (Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0088)  (Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnControllerButtonReleased
struct UUserWidget_OnControllerButtonReleased_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FControllerEvent                            ControllerEvent;                                           // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnControllerButtonPressed
struct UUserWidget_OnControllerButtonPressed_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FControllerEvent                            ControllerEvent;                                           // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct UUserWidget_OnControllerAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FControllerEvent                            ControllerEvent;                                           // 0x0038(0x0050)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0088(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // 0x0038(0x0058)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.IsInViewport
struct UUserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.GetOwningPlayer
struct UUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.GetOwningLocalPlayer
struct UUserWidget_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.UserWidget.Destruct
struct UUserWidget_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUserWidget_Construct_Params
{
};

// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
	struct FMargin                                     InOffset;                                                  // 0x0000(0x0010)  (Parm)
};

// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
	struct FAnchorData                                 InLayoutData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
	struct FAnchors                                    InAnchors;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
	struct FMargin                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
	struct FAnchorData                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
	struct FAnchors                                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
	int                                                InRow;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                    // 0x0000(0x0008)  (Parm)
};

// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                    // 0x0000(0x0008)  (Parm)
};

// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.ComboBoxString.RefreshOptions
struct UComboBoxString_RefreshOptions_Params
{
};

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ComboBoxString.ClearSelection
struct UComboBoxString_ClearSelection_Params
{
};

// Function UMG.ComboBoxString.ClearOptions
struct UComboBoxString_ClearOptions_Params
{
};

// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm)
};

// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                                // 0x0000(0x0018)  (Parm)
};

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm)
};

// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                   // 0x0000(0x0018)  (Parm)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.ClearError
struct UEditableTextBox_ClearError_Params
{
};

// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
	float                                              InOpacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMatchSize;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                   // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm)
};

// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                   // 0x0000(0x0018)  (Parm)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
	class UPanelSlot*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm)
};

// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                   // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              InCheckedState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.InvalidationBox.InvalidateCache
struct UInvalidationBox_InvalidateCache_Params
{
};

// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.MenuAnchor.Close
struct UMenuAnchor_Close_Params
{
};

// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SizeBox.ClearWidthOverride
struct USizeBox_ClearWidthOverride_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredWidth
struct USizeBox_ClearMinDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredHeight
struct USizeBox_ClearMinDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredWidth
struct USizeBox_ClearMaxDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredHeight
struct USizeBox_ClearMaxDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearHeightOverride
struct USizeBox_ClearHeightOverride_Params
{
};

// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
	class UWorld*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget*                                     WidgetToFind;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnimateScroll;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.ScrollBox.ScrollToStart
struct UScrollBox_ScrollToStart_Params
{
};

// Function UMG.ScrollBox.ScrollToEnd
struct UScrollBox_ScrollToEnd_Params
{
};

// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
	struct FMargin                                     InSlotPadding;                                             // 0x0000(0x0010)  (Parm)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WrapBox.AddChildWrapBox
struct UWrapBox_AddChildWrapBox_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InThumbSizeFraction;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                         // 0x0000(0x0030)  (Parm)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.SpinBox.ClearMinValue
struct USpinBox_ClearMinValue_Params
{
};

// Function UMG.SpinBox.ClearMinSliderValue
struct USpinBox_ClearMinSliderValue_Params
{
};

// Function UMG.SpinBox.ClearMaxValue
struct USpinBox_ClearMaxValue_Params
{
};

// Function UMG.SpinBox.ClearMaxSliderValue
struct USpinBox_ClearMaxSliderValue_Params
{
};

// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
struct UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TileView.SetItemWidth
struct UTileView_SetItemWidth_Params
{
	float                                              Width;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TileView.SetItemHeight
struct UTileView_SetItemHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TileView.RequestListRefresh
struct UTileView_RequestListRefresh_Params
{
};

// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm)
};

// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TextBlock.SetJustification
struct UTextBlock_SetJustification_Params
{
	TEnumAsByte<Slate_ETextJustify>                    InJustification;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                                // 0x0000(0x0040)  (Parm)
};

// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                         // 0x0000(0x0030)  (Parm)
};

// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00E8(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	class UWidget*                                     FocusWidget;                                               // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInAllUsers;                                               // 0x00F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x00F8(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   NewMousePosition;                                          // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
	class APlayerController*                           Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     InWidgetToFocus;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockMouseToViewport;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class APlayerController*                           Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
	class APlayerController*                           Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     InWidgetToFocus;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockMouseToViewport;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHideCursorDuringCapture;                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  Texture;                                                   // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          Material;                                                  // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00E8(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	bool                                               bInAllJoysticks;                                           // 0x00E8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Width;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 ReturnValue;                                               // 0x0010(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Width;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 ReturnValue;                                               // 0x0010(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
	class USlateBrushAsset*                            BrushAsset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 ReturnValue;                                               // 0x0008(0x0090)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                           // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                                 ReturnValue;                                               // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           Event;                                                     // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKeyEvent                                   ReturnValue;                                               // 0x0058(0x0050)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
	struct FPointerEvent                               Event;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                               // 0x0088(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
	struct FNavigationEvent                            Event;                                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                               // 0x0030(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
	struct FKeyEvent                                   Event;                                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                               // 0x0050(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params
{
	struct FControllerEvent                            Event;                                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                               // 0x0050(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
	struct FCharacterEvent                             Event;                                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                               // 0x0030(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
	class UDragDropOperation*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Interface;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         FoundWidgets;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	bool                                               TopLevelOnly;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         FoundWidgets;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	class UClass*                                      WidgetClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               TopLevelOnly;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00E8(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                      // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                  // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFont*                                       Font;                                                      // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FontTypeFace;                                              // 0x007C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Tint;                                                      // 0x0084(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	struct FString                                     InString;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                                   Position;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Tint;                                                      // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	TArray<struct FVector2D>                           Points;                                                    // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Tint;                                                      // 0x0040(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAntiAlias;                                                // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
};

// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   PositionA;                                                 // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   PositionB;                                                 // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Tint;                                                      // 0x0040(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAntiAlias;                                                // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
};

// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                  // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Size;                                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USlateBrushAsset*                            Brush;                                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Tint;                                                      // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                                     WidgetDetectingDrag;                                       // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        DragKey;                                                   // 0x0090(0x0020)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x00B0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	class UWidget*                                     WidgetDetectingDrag;                                       // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        DragKey;                                                   // 0x00F0(0x0020)  (Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0110(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
	class UClass*                                      OperationClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDragDropOperation*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WidgetType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	bool                                               bInAllUsers;                                               // 0x00E8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                           // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                                 ReturnValue;                                               // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
	struct FEventReply                                 Reply;                                                     // 0x0000(0x00E8)  (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                           // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInAllJoysticks;                                           // 0x00F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x00F8(0x00E8)  (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
};

// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
	class UUserWidget*                                 Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.SetMaxInteractionDistance
struct UWidgetComponent_SetMaxInteractionDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
	class UUserWidget*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.GetMaxInteractionDistance
struct UWidgetComponent_GetMaxInteractionDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldLocation;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ScreenPosition;                                            // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocationX;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocationY;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
