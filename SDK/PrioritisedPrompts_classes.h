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

// Class PrioritisedPrompts.BasePromptCoordinator
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UBasePromptCoordinator : public UObject
{
public:
	class AAthenaPlayerController*                     PlayerController;                                          // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G60H[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrioritisedPromptsManager*                  PrioritisedPromptsManager;                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                                  CharacterWithRegisteredEvents;                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V54I[0xA8];                                    // 0x0050(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.BasePromptCoordinator");
		return ptr;
	}



	void UpdateVisiblePrompt();
	void UnregisterOtherEvents_Implementable();
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Uninitialize_Implementable();
	void Uninitialize();
	void Start();
	void SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt);
	void RegisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void MarkAsComplete_Implementable();
	struct FPromptEvaluation STATIC_MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt);
	struct FPromptEvaluation STATIC_MakeHideCurrentPrompts();
	struct FPromptEvaluation STATIC_MakeCompleteCoordinator();
	void Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager);
	bool GetCompleted();
	struct FPromptEvaluation EvaluatePromptDisplayState();
	void DismissAllPrompts();
	void AfterRead();
	void BeforeDelete();

};

// Class PrioritisedPrompts.GetPromptsLocalService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGetPromptsLocalService : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Loaded;                                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.GetPromptsLocalService");
		return ptr;
	}



	class UGetPromptsLocalService* STATIC_GetPromptsLocalService(class UObject* WorldContextObject);
	void AfterRead();
	void BeforeDelete();

};

// Class PrioritisedPrompts.PrioritisedPromptsManager
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UPrioritisedPromptsManager : public UObject
{
public:
	TArray<struct FPrioritisedPromptWithHandle>        AllPrompts;                                                // 0x0028(0x0010) (ZeroConstructor)
	class APlayerController*                           PlayerController;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U4VS[0x28];                                    // 0x0040(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.PrioritisedPromptsManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PrioritisedPrompts.PromptCounterAccessKey
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPromptCounterAccessKey : public UObject
{
public:
	struct FString                                     Key;                                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.PromptCounterAccessKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PrioritisedPrompts.PromptsLocalServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPromptsLocalServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.PromptsLocalServiceInterface");
		return ptr;
	}



	void IncrementCountForKey(class UClass* AccessKey);
	int GetCountForKey(class UClass* AccessKey);
	void AfterRead();
	void BeforeDelete();

};

// Class PrioritisedPrompts.PromptsLocalService
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UPromptsLocalService : public UObject
{
public:
	unsigned char                                      UnknownData_AXFM[0x70];                                    // 0x0028(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PrioritisedPrompts.PromptsLocalService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
