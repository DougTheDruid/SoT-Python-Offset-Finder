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
// Classes
//---------------------------------------------------------------------------

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}



	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.DragDropOperation
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                                     payload;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWidget*                                     DefaultDragVisual;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<UMG_EDragPivot>                        Pivot;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_79RW[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn)
	unsigned char                                      UnknownData_Q4Z8[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDrop;                                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}



	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MovieScene2DTransformSection
// 0x0350 (FullSize[0x03E8] - InheritedSize[0x0098])
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_J2L8[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x2];                                          // 0x00A0(0x00F0)
	struct FRichCurve                                  Rotation;                                                  // 0x0190(0x0078)
	struct FRichCurve                                  Scale[0x2];                                                // 0x0208(0x00F0)
	struct FRichCurve                                  Shear[0x2];                                                // 0x02F8(0x00F0)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MovieSceneMarginSection
// 0x01E8 (FullSize[0x0280] - InheritedSize[0x0098])
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_63BF[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  TopCurve;                                                  // 0x00A0(0x0078)
	struct FRichCurve                                  LeftCurve;                                                 // 0x0118(0x0078)
	struct FRichCurve                                  RightCurve;                                                // 0x0190(0x0078)
	struct FRichCurve                                  BottomCurve;                                               // 0x0208(0x0078)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MovieSceneMarginTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x0098(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                 // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.PropertyBinding
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0030(0x0010)
	struct FName                                       DestinationProperty;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}



	bool GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.BrushBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_0CRZ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}



	struct FSlateBrush GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.CheckedStateBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_XGMP[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}



	TEnumAsByte<SlateCore_ECheckBoxState> GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ColorBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_QY29[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}



	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}



	float GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}



	int GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}



	TEnumAsByte<CoreUObject_EMouseCursor> GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.TextBinding
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_Z1QB[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}



	struct FText GetTextValue();
	struct FString GetStringValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}



	TEnumAsByte<UMG_ESlateVisibility> GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}



	class UWidget* GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.RichTextBlockDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HZX3[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}



	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Visual
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Widget
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UWidget : public UVisual
{
public:
	bool                                               bIsVariable;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCreatedByConstructionScript;                              // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IDMP[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelSlot*                                  Slot;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsEnabled;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J2RT[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             bIsEnabledDelegate;                                        // 0x003C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_T9UE[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ToolTipText;                                               // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_78BK[0x20];                                    // 0x004C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             ToolTipTextDelegate;                                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	class UWidget*                                     ToolTipWidget;                                             // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                     // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	TEnumAsByte<UMG_ESlateVisibility>                  Visiblity;                                                 // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UMG_ESlateVisibility>                  Visibility;                                                // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W2T0[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             VisibilityDelegate;                                        // 0x00B4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      bOverride_Cursor : 1;                                      // 0x00C4(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_HNBO[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<CoreUObject_EMouseCursor>              Cursor;                                                    // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bIsVolatile;                                               // 0x00C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_P9JQ[0x2];                                     // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTransform                            RenderTransform;                                           // 0x00CC(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetNavigation*                           Navigation;                                                // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EFVE[0x30];                                    // 0x00F8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyBinding*>                    NativeBindings;                                            // 0x0128(0x0010) (ZeroConstructor, Transient, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}



	void SetVisibility(TEnumAsByte<UMG_ESlateVisibility> InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	TEnumAsByte<UMG_ESlateVisibility> GetVisibility();
	struct FText GetText__DelegateSignature();
	TEnumAsByte<UMG_ESlateVisibility> GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	TEnumAsByte<CoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	TEnumAsByte<SlateCore_ECheckBoxState> GetCheckBoxState__DelegateSignature();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.UserWidget
// 0x00F8 (FullSize[0x0230] - InheritedSize[0x0138])
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_3GJR[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0150(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0160(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                   // 0x0190(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	bool                                               bSupportsKeyboardFocus;                                    // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TDQ8[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetTree*                                 WidgetTree;                                                // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                     // 0x01B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                    // 0x01C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                         // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_3LP8[0x50];                                    // 0x01E0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void RemoveFromViewport();
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> Playmode);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	bool IsInViewport();
	bool IsInteractable();
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.UMGSequencePlayer
// 0x05A0 (FullSize[0x05C8] - InheritedSize[0x0028])
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_GXB6[0x368];                                   // 0x0028(0x0368) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            Animation;                                                 // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L03Y[0x230];                                   // 0x0398(0x0230) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.PanelSlot
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Content;                                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.BorderSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, Protected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PRMD[0x1E];                                    // 0x004A(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ButtonSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CWWW[0x1E];                                    // 0x004A(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.CanvasPanelSlot
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                                // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_MHHC[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8CKR[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}



	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.GridSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KA5A[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RowSpan;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Column;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColumnSpan;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Layer;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Nudge;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FD9V[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.HorizontalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RD6E[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.OverlaySlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ETME[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SafeZoneSlot
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VAlign;                                                    // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IB01[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_IKYO[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ScaleBoxSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QDDE[0x1E];                                    // 0x004A(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ScrollBoxSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U9FB[0xF];                                     // 0x0049(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}



	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SizeBoxSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PD2B[0x1E];                                    // 0x004A(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.UniformGridSlot
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YFPZ[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Column;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NK0E[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.VerticalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HVQ7[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetSwitcherSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4A24[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WrapBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bFillEmptySpace;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1L76[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SDHZ[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.CircularThrobber
// 0x00C0 (FullSize[0x01F8] - InheritedSize[0x0138])
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Period;                                                    // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1LQC[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0148(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 Image;                                                     // 0x0150(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_VBN7[0x18];                                    // 0x01E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}



	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ComboBox
// 0x0038 (FullSize[0x0170] - InheritedSize[0x0138])
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                     // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0148(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_UTH5[0x18];                                    // 0x0158(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ComboBoxString
// 0x04E8 (FullSize[0x0620] - InheritedSize[0x0138])
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                            // 0x0138(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                            // 0x0148(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FComboBoxStyle                              WidgetStyle;                                               // 0x0158(0x0428) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxListHeight;                                             // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               HasDownArrow;                                              // 0x0594(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_XGJT[0x3];                                     // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0598(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_GKKD[0x58];                                    // 0x05C8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}



	void SetSelectedOption(const struct FString& Option);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.EditableText
// 0x0390 (FullSize[0x04C8] - InheritedSize[0x0138])
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_80SO[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             TextDelegate;                                              // 0x0170(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FText                                       HintText;                                                  // 0x0180(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_WHGL[0x20];                                    // 0x0180(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FEditableTextStyle                          WidgetStyle;                                               // 0x01C8(0x0228) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x03F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            BackgroundImageSelected;                                   // 0x03F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            BackgroundImageComposing;                                  // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            CaretImage;                                                // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x0410(0x0040) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0450(0x0030) (Deprecated)
	bool                                               IsReadOnly;                                                // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsPassword;                                                // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5OFT[0x2];                                     // 0x0482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0489(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               RevertTextOnEscape;                                        // 0x048A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x048B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               SelectAllTextOnCommit;                                     // 0x048C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_U0JZ[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_79L8[0x18];                                    // 0x04B0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.EditableTextBox
// 0x09C0 (FullSize[0x0AF8] - InheritedSize[0x0138])
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_ZDMX[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             TextDelegate;                                              // 0x0170(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0180(0x0860) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x09E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       HintText;                                                  // 0x09E8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_VV55[0x20];                                    // 0x09E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0A20(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FSlateFontInfo                              Font;                                                      // 0x0A30(0x0040) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                           // 0x0A70(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FLinearColor                                BackgroundColor;                                           // 0x0A80(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0A90(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               IsReadOnly;                                                // 0x0AA0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsPassword;                                                // 0x0AA1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_25D5[0x2];                                     // 0x0AA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0AA4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     Padding;                                                   // 0x0AA8(0x0010) (Deprecated)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0AB8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0AB9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               RevertTextOnEscape;                                        // 0x0ABA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0ABB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               SelectAllTextOnCommit;                                     // 0x0ABC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_S9LN[0x3];                                     // 0x0ABD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0AC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0AD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_M59I[0x18];                                    // 0x0AE0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	void ClearError();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ExpandableArea
// 0x0058 (FullSize[0x0190] - InheritedSize[0x0138])
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData_B08P[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsExpanded;                                               // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BUGG[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     AreaPadding;                                               // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                             // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWidget*                                     BodyContent;                                               // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UTYX[0x18];                                    // 0x0178(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}



	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Image
// 0x00F0 (FullSize[0x0228] - InheritedSize[0x0138])
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                     // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 Brush;                                                     // 0x0140(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                             // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x0200(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_YTZT[0x18];                                    // 0x0210(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}



	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MultiLineEditableText
// 0x0218 (FullSize[0x0350] - InheritedSize[0x0138])
class UMultiLineEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_OYKI[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FTextBlockStyle                             WidgetStyle;                                               // 0x0170(0x0160) (Edit, BlueprintVisible)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoWrapText;                                             // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FZZ1[0x2];                                     // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x02D8(0x0040) (Deprecated)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_AJ3X[0x18];                                    // 0x0338(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MultiLineEditableTextBox
// 0x0AB0 (FullSize[0x0BE8] - InheritedSize[0x0138])
class UMultiLineEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_5Q3I[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0170(0x0860) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x09D0(0x0160) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0B30(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0B38(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoWrapText;                                             // 0x0B39(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TFZQ[0x2];                                     // 0x0B3A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x0B3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x0B40(0x0040) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                           // 0x0B80(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FLinearColor                                BackgroundColor;                                           // 0x0B90(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0BA0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0BB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0BC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_T805[0x18];                                    // 0x0BD0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.NativeWidgetHost
// 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData_W8KD[0x18];                                    // 0x0138(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.PanelWidget
// 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                     // 0x0138(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_GRM0[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}



	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.CanvasPanel
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_DHKM[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}



	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ContentWidget
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}



	class UPanelSlot* GetContentSlot();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Border
// 0x0160 (FullSize[0x02B0] - InheritedSize[0x0150])
class UBorder : public UContentWidget
{
public:
	struct FLinearColor                                ContentColorAndOpacity;                                    // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                            // 0x0160(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FMargin                                     Padding;                                                   // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0180(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0181(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KRAQ[0x6];                                     // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Background;                                                // 0x0188(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FLinearColor                                BrushColor;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             BrushColorDelegate;                                        // 0x0238(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	bool                                               bShowEffectWhenDisabled;                                   // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_QFMA[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x024C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                      // 0x025C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	struct FScriptDelegate                             OnMouseMoveEvent;                                          // 0x026C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                   // 0x027C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_YWX9[0x1C];                                    // 0x028C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            Brush;                                                     // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Button
// 0x0320 (FullSize[0x0470] - InheritedSize[0x0150])
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0150(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                WidgetStyle;                                               // 0x0158(0x02A8) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                BackgroundColor;                                           // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x0420(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x0421(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               IsFocusable;                                               // 0x0422(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_19FZ[0x5];                                     // 0x0423(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_8ZTU[0x18];                                    // 0x0458(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}



	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.CheckBox
// 0x06C8 (FullSize[0x0818] - InheritedSize[0x0150])
class UCheckBox : public UContentWidget
{
public:
	TEnumAsByte<SlateCore_ECheckBoxState>              CheckedState;                                              // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FOT1[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x0154(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_9QR4[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x0168(0x05F0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UncheckedImage;                                            // 0x0760(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                     // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UncheckedPressedImage;                                     // 0x0770(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            CheckedImage;                                              // 0x0778(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            CheckedHoveredImage;                                       // 0x0780(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            CheckedPressedImage;                                       // 0x0788(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UndeterminedImage;                                         // 0x0790(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                  // 0x0798(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                  // 0x07A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x07A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_89QK[0x3];                                     // 0x07A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x07AC(0x0010) (Deprecated)
	unsigned char                                      UnknownData_GRD9[0x4];                                     // 0x07BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x07C0(0x0030) (Deprecated)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                       // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_S7K1[0x18];                                    // 0x0800(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(TEnumAsByte<SlateCore_ECheckBoxState> InCheckedState);
	bool IsPressed();
	bool IsChecked();
	TEnumAsByte<SlateCore_ECheckBoxState> GetCheckedState();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.InvalidationBox
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               CacheRelativeTransforms;                                   // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9WOR[0x1F];                                    // 0x0151(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}



	void InvalidateCache();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.MenuAnchor
// 0x0048 (FullSize[0x0198] - InheritedSize[0x0150])
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                 // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                     // 0x0158(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	TEnumAsByte<SlateCore_EMenuPlacement>              Placement;                                                 // 0x0168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AWC9[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_DD3W[0x18];                                    // 0x0180(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}



	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.NamedSlot
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData_BY2V[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SafeZone
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData_2IDY[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ScaleBox
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<Slate_EStretchDirection>               StretchDirection;                                          // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Slate_EStretch>                        Stretch;                                                   // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YTW1[0x2];                                     // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserSpecifiedScale;                                        // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T4TQ[0x18];                                    // 0x0158(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SizeBox
// 0x0038 (FullSize[0x0188] - InheritedSize[0x0150])
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                               // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_HeightOverride : 1;                              // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                             // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                            // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                             // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                            // 0x0150(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FNTV[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidthOverride;                                             // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeightOverride;                                            // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDesiredWidth;                                           // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDesiredHeight;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDesiredWidth;                                           // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDesiredHeight;                                          // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CRQ8[0x1C];                                    // 0x016C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}



	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearHeightOverride();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Viewport
// 0x0040 (FullSize[0x0190] - InheritedSize[0x0150])
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                           // 0x0150(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R7EN[0x30];                                    // 0x0160(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}



	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.GridPanel
// 0x0038 (FullSize[0x0188] - InheritedSize[0x0150])
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                                // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                   // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData_Z28E[0x18];                                    // 0x0170(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}



	class UGridSlot* AddChildToGrid(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.HorizontalBox
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_MA7Y[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}



	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Overlay
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_35NO[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}



	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ScrollBox
// 0x07A0 (FullSize[0x08F0] - InheritedSize[0x0150])
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x0150(0x0248) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x0398(0x0518) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x08B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateWidgetStyleAsset*                      BarStyle;                                                  // 0x08B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x08C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UMG_ESlateVisibility>                  ScrollBarVisibility;                                       // 0x08C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EConsumeMouseWheel>          ConsumeMouseWheel;                                         // 0x08C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_POKZ[0x1];                                     // 0x08C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x08C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AlwaysShowScrollbar;                                       // 0x08CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JD60[0x23];                                    // 0x08CD(0x0023) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}



	void SetScrollOffset(float NewScrollOffset);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.UniformGridPanel
// 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                               // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredSlotWidth;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDesiredSlotHeight;                                      // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CXRM[0x18];                                    // 0x0168(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}



	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.VerticalBox
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_RDH5[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}



	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetSwitcher
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                         // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GDIM[0x1C];                                    // 0x0154(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WrapBox
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H6VO[0x18];                                    // 0x0158(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ProgressBar
// 0x0228 (FullSize[0x0360] - InheritedSize[0x0138])
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x0138(0x01B8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x02F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            BackgroundImage;                                           // 0x02F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            FillImage;                                                 // 0x0300(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlateBrushAsset*                            MarqueeImage;                                              // 0x0308(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Percent;                                                   // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsMarquee;                                                // 0x0315(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GY7Z[0x2];                                     // 0x0316(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             PercentDelegate;                                           // 0x0318(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x0338(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_703H[0x18];                                    // 0x0348(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}



	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.RichTextBlock
// 0x0240 (FullSize[0x0378] - InheritedSize[0x0138])
class URichTextBlock : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Protected)
	unsigned char                                      UnknownData_XT8B[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             TextDelegate;                                              // 0x0170(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected)
	struct FSlateFontInfo                              Font;                                                      // 0x0180(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, Protected)
	struct FLinearColor                                Color;                                                     // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               AutoWrapText;                                              // 0x01D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_WCMZ[0x2];                                     // 0x01D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash)
	struct FMargin                                     Margin;                                                    // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected)
	float                                              LineHeightPercentage;                                      // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3PWG[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URichTextBlockDecorator*>             Decorators;                                                // 0x01F0(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)
	unsigned char                                      UnknownData_CQHT[0x178];                                   // 0x0200(0x0178) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ScrollBar
// 0x0548 (FullSize[0x0680] - InheritedSize[0x0138])
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                               // 0x0138(0x0518) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0650(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAlwaysShowScrollbar;                                      // 0x0658(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0659(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AEN3[0x2];                                     // 0x065A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Thickness;                                                 // 0x065C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FY2A[0x1C];                                    // 0x0664(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}



	void SetState(float InOffsetFraction, float InThumbSizeFraction);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Slider
// 0x02D0 (FullSize[0x0408] - InheritedSize[0x0138])
class USlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x013C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_CFQW[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0150(0x0248) (Edit, BlueprintVisible)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_06D5[0x3];                                     // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x039C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                SliderHandleColor;                                         // 0x03AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndentHandle;                                              // 0x03BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               Locked;                                                    // 0x03BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_ODOF[0x2];                                     // 0x03BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_LPII[0x18];                                    // 0x03F0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Spacer
// 0x0020 (FullSize[0x0158] - InheritedSize[0x0138])
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                      // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RS2Q[0x18];                                    // 0x0140(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}



	void SetSize(const struct FVector2D& InSize);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.SpinBox
// 0x0428 (FullSize[0x0560] - InheritedSize[0x0138])
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                     // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x013C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_JAZP[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpinBoxStyle                               WidgetStyle;                                               // 0x0150(0x0318) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0468(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delta;                                                     // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderExponent;                                            // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x0478(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredWidth;                                           // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x04BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               SelectAllTextOnCommit;                                     // 0x04BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_GFAR[0x2];                                     // 0x04BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x04C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                          // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                     // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                       // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                    // 0x0530(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bOverride_MaxValue : 1;                                    // 0x0530(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bOverride_MinSliderValue : 1;                              // 0x0530(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                              // 0x0530(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_ZTUF[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinSliderValue;                                            // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxSliderValue;                                            // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WWD7[0x1C];                                    // 0x0544(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}



	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.TableViewBase
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UTableViewBase : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TableViewBase");
		return ptr;
	}



	class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.ListView
// 0x0048 (FullSize[0x0180] - InheritedSize[0x0138])
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                                // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2HRV[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             Items;                                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6ELW[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateRowEvent;                                        // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_6M1C[0x1C];                                    // 0x0164(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.TileView
// 0x0048 (FullSize[0x0180] - InheritedSize[0x0138])
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                 // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ItemHeight;                                                // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                             Items;                                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QAQU[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateTileEvent;                                       // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_5VF5[0x1C];                                    // 0x0164(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}



	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.TextBlock
// 0x0130 (FullSize[0x0268] - InheritedSize[0x0138])
class UTextBlock : public UWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0140(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_YOVU[0x20];                                    // 0x0140(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             TextDelegate;                                              // 0x0178(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0188(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FSlateFontInfo                              Font;                                                      // 0x01C8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                              // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                             // 0x0220(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoWrapText;                                              // 0x0231(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H7IK[0x2];                                     // 0x0232(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              MinDesiredWidth;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FMargin                                     Margin;                                                    // 0x023C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay)
	float                                              LineHeightPercentage;                                      // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4AR8[0x18];                                    // 0x0250(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText GetText();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.Throbber
// 0x00B8 (FullSize[0x01F0] - InheritedSize[0x0138])
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAnimateHorizontally;                                      // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAnimateVertically;                                        // 0x013D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAnimateOpacity;                                           // 0x013E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QRAS[0x1];                                     // 0x013F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 Image;                                                     // 0x0148(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_Y1JU[0x18];                                    // 0x01D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}



	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetAnimation
// 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                        // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                       // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                         // 0x02D0(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}



	float GetStartTime();
	float GetEndTime();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                                // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                  // 0x0230(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                                // 0x0240(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                                // 0x0250(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}



	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
	void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	class UObject* STATIC_GetBrushResource(struct FSlateBrush* Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	void STATIC_DrawText(struct FPaintContext* Context, const struct FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void STATIC_CancelDragDrop();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetComponent
// 0x00F8 (FullSize[0x0680] - InheritedSize[0x0588])
class UWidgetComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_4S6P[0x8];                                     // 0x0588(0x0008) Fix Super Size
	class UClass*                                      WidgetClass;                                               // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	struct FIntPoint                                   DrawSize;                                                  // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FVector2D                                   Pivot;                                                     // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	float                                              MaxInteractionDistance;                                    // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JX8E[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocalPlayer*                                OwnerPlayer;                                               // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FLinearColor                                BackgroundColor;                                           // 0x05B8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	TEnumAsByte<UMG_EWidgetBlendMode>                  BlendMode;                                                 // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bIsOpaque;                                                 // 0x05C9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected)
	bool                                               bIsTwoSided;                                               // 0x05CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_JKM8[0x1];                                     // 0x05CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParabolaDistortion;                                        // 0x05CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               TickWhenOffscreen;                                         // 0x05D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_7WTE[0x7];                                     // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Widget;                                                    // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBodySetup*                                  BodySetup;                                                 // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          TranslucentMaterial;                                       // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                              // 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          OpaqueMaterial;                                            // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                   // 0x0600(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          MaskedMaterial;                                            // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                   // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bUseLegacyRotation;                                        // 0x0628(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bAddedToScreen;                                            // 0x0629(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_1P3K[0x56];                                    // 0x062A(0x0056) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}



	void SetWidget(class UUserWidget* Widget);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetMaxInteractionDistance(float Distance);
	void SetDrawSize(const struct FVector2D& Size);
	class UUserWidget* GetUserWidgetObject();
	class ULocalPlayer* GetOwnerPlayer();
	float GetMaxInteractionDistance();
	struct FVector2D GetDrawSize();
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}



	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetNavigation
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                        // 0x0028(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                      // 0x003C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                      // 0x0050(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                     // 0x0064(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                      // 0x0078(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                  // 0x008C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UMG.WidgetTree
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                             AllWidgets;                                                // 0x0030(0x0010) (ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
