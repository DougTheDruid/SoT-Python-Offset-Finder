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
// Classes
//---------------------------------------------------------------------------

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0248 (FullSize[0x0310] - InheritedSize[0x00C8])
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                          // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                  // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                                // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                     // 0x0148(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	unsigned char                                      UnknownData_QYJI[0x18];                                    // 0x0158(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      Texture;                                                   // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETextureFilter>                 Filter;                                                    // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bReceiveInput;                                             // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bReceiveInputWhenTransparent;                              // 0x017A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowPerformanceWarnings;                                  // 0x017B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExecuteJSTimersThresholdMs;                                // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateStylesAndLayoutThresholdMs;                          // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecordRenderingCommandsThresholdMs;                        // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PaintWarningThresholdMs;                                   // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayersCountThreshold;                                      // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayerWidthThreshold;                                       // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayerHeightThreshold;                                      // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableAdditionalDefaultStyles;                            // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDelayedUpdate;                                            // 0x0199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LAFC[0x176];                                   // 0x019A(0x0176) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}



	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	struct FString                                     URL;                                                       // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                Width;                                                     // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ManualTexture;                                             // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B1S9[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClickThroughAlphaThreshold;                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Transparent;                                               // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7OFA[0x17];                                    // 0x0331(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      Texture;                                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TV6Q[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}



	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const struct FString& Name, int* Width, int* Height);
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UCoherentUIGTRenderToTextureLiveView : public UCoherentUIGTLiveView
{
public:
	unsigned char                                      UnknownData_2B38[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoherentUIGTAssetReferencer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData_6P4Q[0x50];                                    // 0x03D0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSystem");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData_AAXL[0x80];                                    // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStruct*>                             StructTypes;                                               // 0x00A8(0x0010) (ZeroConstructor, Transient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}



	void AddText(const struct FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const struct FString& Str);
	void AddObject(class UObject* Object);
	void AddName(const struct FName& Name);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E190[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}



	void ReadObject(int Index, class UObject* Object);
	struct FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoherentUIGTEventHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	struct FStringAssetReference                       HUDMaterialName;                                           // 0x0310(0x0010) (ZeroConstructor)
	class UMaterial*                                   HUDMaterial;                                               // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                       // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZHI[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings);
	class UCoherentUIGTJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg);
	void STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0098 (FullSize[0x0560] - InheritedSize[0x04C8])
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                           // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DAM5[0x90];                                    // 0x04D0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}



	void SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
	bool HasSetupUIGTView();
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;                   // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;                     // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                           // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                             // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_3XTY[0x20];                                    // 0x0410(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}



	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<Engine_ECollisionChannel> CollisionChannel, TEnumAsByte<Engine_ETextureAddress> AddressMode, TEnumAsByte<CoherentUIGTPlugin_EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCoherentUIGTSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7IY8[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InspectorPort;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WebdriverPort;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableWebSecurity;                                         // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               EnableLocalization;                                        // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               RunAsynchronous;                                           // 0x0036(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bRecursivelyBindUStructs;                                  // 0x0037(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               LoadSystemFonts;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               AllowPerformanceWarningsInEditor;                          // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               ShowWarningsOnScreen;                                      // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTSettingsSeverity> LogSeverity;                                               // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPaintToBackBuffer;                                        // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bRespectTitleSafeZone;                                     // 0x003D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	bool                                               bRespectLetterboxing;                                      // 0x003E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1VWG[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HUDMaterialName;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     CoUIResourcesRoot;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	bool                                               TickWhileGameIsPaused;                                     // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoherentUIGTPlugin_ECoherentUIGTMSAA>  MSAA;                                                      // 0x0061(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PJ1I[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x02A0 (FullSize[0x03D8] - InheritedSize[0x0138])
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_5N6A[0x20];                                    // 0x0138(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Owner;                                                     // 0x0158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                          // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                          // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                                // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                  // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                              // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                           // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                        // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_39S2[0x18];                                    // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETextureFilter>                 Filter;                                                    // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bReceiveInput;                                             // 0x01F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bReceiveInputWhenTransparent;                              // 0x01FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGammaCorrectedMaterial;                                   // 0x01FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowPerformanceWarnings;                                  // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YH3A[0x3];                                     // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExecuteJSTimersThresholdMs;                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateStylesAndLayoutThresholdMs;                          // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecordRenderingCommandsThresholdMs;                        // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PaintWarningThresholdMs;                                   // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayersCountThreshold;                                      // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayerWidthThreshold;                                       // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LayerHeightThreshold;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableAdditionalDefaultStyles;                            // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PTD2[0x1A3];                                   // 0x021D(0x01A3) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              ClickThroughAlphaThreshold;                                // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Transparent;                                               // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MXO2[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}



	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
