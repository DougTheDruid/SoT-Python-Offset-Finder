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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tutorial.ContextualTutorialPromptDesc
// 0x0020
struct FContextualTutorialPromptDesc
{
	class UClass*                                      PromptActorClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      AccessKey;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       FeatureName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MustBeUnderCount;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BCKR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tutorial.BeachNPCSpawnFlowNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FBeachNPCSpawnFlowNetworkEvent : public FNetworkEventStruct
{
	bool                                               HasTaleCheckpointVoyage;                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VZSU[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tutorial.TutorialStepEndedTelemetryEvent
// 0x0028
struct FTutorialStepEndedTelemetryEvent
{
	struct FString                                     SequenceName;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     StepName;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               StepCompleted;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsFinalStep;                                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9DWD[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tutorial.TutorialShowTutorialLegendaryTavernStrangerEvent
// 0x0001
struct FTutorialShowTutorialLegendaryTavernStrangerEvent
{
	unsigned char                                      UnknownData_X5PC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
