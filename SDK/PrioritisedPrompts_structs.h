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
// Enums
//---------------------------------------------------------------------------

// Enum PrioritisedPrompts.EPromptPriority
enum class PrioritisedPrompts_EPromptPriority : uint8_t
{
	EPromptPriority__Low           = 0,
	EPromptPriority__High          = 1,
	EPromptPriority__EPromptPriority_MAX = 2,

};

// Enum PrioritisedPrompts.EPromptEvaluatedType
enum class PrioritisedPrompts_EPromptEvaluatedType : uint8_t
{
	EPromptEvaluatedType__ShowPrompt = 0,
	EPromptEvaluatedType__ShowNoPrompt = 1,
	EPromptEvaluatedType__CompleteCoordinator = 2,
	EPromptEvaluatedType__EPromptEvaluatedType_MAX = 3,

};

// Enum PrioritisedPrompts.EPromptStartStop
enum class PrioritisedPrompts_EPromptStartStop : uint8_t
{
	EPromptStartStop__Start        = 0,
	EPromptStartStop__Stop         = 1,
	EPromptStartStop__EPromptStartStop_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0058
struct FPrioritisedPrompt
{
	struct FText                                       Message;                                                   // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_QIVA[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     Key;                                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UPopUpMessageDesc*                           PopUpMessageDesc;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PrioritisedPrompts_EPromptPriority>    BasePriority;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YELG[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
// 0x0010
struct FPrioritisedPromptHandle
{
	struct FGuid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0068
struct FPrioritisedPromptWithHandle
{
	struct FPrioritisedPromptHandle                    PromptHandle;                                              // 0x0000(0x0010)
	struct FPrioritisedPrompt                          Prompt;                                                    // 0x0010(0x0058) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// 0x0070
struct FPromptEvaluation
{
	TEnumAsByte<PrioritisedPrompts_EPromptEvaluatedType> PromptType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L8U9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt;                                                    // 0x0008(0x0068) (BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0070 (0x0080 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	struct FPrioritisedPromptWithHandle                Prompt;                                                    // 0x0010(0x0068)
	TEnumAsByte<PrioritisedPrompts_EPromptStartStop>   StartOrStop;                                               // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_58LS[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
// 0x0008
struct FPromptsCounterIncrementEvent
{
	class UClass*                                      AccessKey;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
// 0x0020
struct FPlayerPromptTelemetryEvent
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
