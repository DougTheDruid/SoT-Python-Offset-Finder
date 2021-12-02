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
// Enums
//---------------------------------------------------------------------------

// Enum AthenaInput.EInputHandlerResult
enum class AthenaInput_EInputHandlerResult : uint8_t
{
	EInputHandlerResult__Handled   = 0,
	EInputHandlerResult__Unhandled = 1,
	EInputHandlerResult__EInputHandlerResult_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaInput.NotificationInputDisplayName
// 0x0040
struct FNotificationInputDisplayName
{
	class UClass*                                      InputID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_VJJ2[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaInput.IdleTimeTracker
// 0x0038
struct FIdleTimeTracker
{
	struct FTimespan                                   InactivityThreshold;                                       // 0x0000(0x0008) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_18YO[0x30];                                    // 0x0008(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaInput.PrioritizedCompositeInputHandler
// 0x0010
struct FPrioritizedCompositeInputHandler
{
	class UCompositeInputHandler*                      InputHandler;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7RY7[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaInput.CompositeInputDelegator
// 0x0060
struct FCompositeInputDelegator
{
	TArray<struct FPrioritizedCompositeInputHandler>   PrioritizedCompositeInputHandlers;                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_O7LM[0x50];                                    // 0x0010(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
