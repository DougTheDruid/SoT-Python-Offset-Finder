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

// Class AthenaInput.NotificationInputId
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNotificationInputId : public UObject
{
public:
	unsigned char                                      UnknownData_GC8G[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.NotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.CompositeInputHandler
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UCompositeInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData_AEN5[0xB0];                                    // 0x0028(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.CompositeInputHandler");
		return ptr;
	}



	void SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
	void SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.AnalogInputId
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAnalogInputId : public UObject
{
public:
	unsigned char                                      UnknownData_D8SB[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.AnalogInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.InputBinder
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UInputBinder : public UObject
{
public:
	class UInputComponent*                             InputComponent;                                            // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WT0B[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.InputBinder");
		return ptr;
	}



	void SpoofNotificationInput(class UClass* Id);
	void SpoofAnalogInput(class UClass* Id, float Value);
	bool IsContinuousActionActive(class UClass* BeginNotificationInputId);
	void IgnoreNonSpoofedInput(bool InShouldIgnore);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.InputHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.InputHandlerInterface");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> HandleNotificationInput(class UClass* Id);
	TEnumAsByte<AthenaInput_EInputHandlerResult> HandleAnalogInput(class UClass* Id, float Input);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.TestAnalogInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestAnalogInputId : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.TestAnalogInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.TestAnalogInput2Id
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestAnalogInput2Id : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.TestAnalogInput2Id");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UCompositeInputDelegatorTestsCallbackHelper : public UObject
{
public:
	unsigned char                                      UnknownData_PH8F[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> OnSecondNotificationHandler();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnSecondHandler(float Value);
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnFirstNotificationHandler();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnFirstHandler(float Value);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.MockDerivedCompositeInputHandler
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UMockDerivedCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData_FBJE[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.MockDerivedCompositeInputHandler");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.InputHandlerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputHandlerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.InputHandlerFunctionLibrary");
		return ptr;
	}



	class UCompositeInputHandler* STATIC_MakeCompositeInputHandler();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.MockInputHandlerCharacter
// 0x0008 (FullSize[0x05E0] - InheritedSize[0x05D8])
class AMockInputHandlerCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_QE0U[0x8];                                     // 0x05D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.MockInputHandlerCharacter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.NamedNotificationInputInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNamedNotificationInputInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.NamedNotificationInputInterface");
		return ptr;
	}



	struct FText GetNotificationInputDisplayName(class UClass* InputID);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.NamedNotificationInputComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UNamedNotificationInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_U34O[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNotificationInputDisplayName>       NotificationInputDisplayNames;                             // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.NamedNotificationInputComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.CrewNameplatesToggleInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UCrewNameplatesToggleInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.CrewNameplatesToggleInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.OpenQuickMenuNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UOpenQuickMenuNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.OpenQuickMenuNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.PressedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UPressedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.PressedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.ReleasedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UReleasedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.ReleasedNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.ScrambleGamertagsToggleInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UScrambleGamertagsToggleInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.ScrambleGamertagsToggleInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.TestNotificationInput2Id
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestNotificationInput2Id : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.TestNotificationInput2Id");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.TestNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.TestNotificationInputId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInput.ReceivesInputInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReceivesInputInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInput.ReceivesInputInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
