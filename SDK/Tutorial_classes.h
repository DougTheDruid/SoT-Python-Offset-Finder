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
// Classes
//---------------------------------------------------------------------------

// Class Tutorial.CompanyTutorialVoyageProgress
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UCompanyTutorialVoyageProgress : public UObject
{
public:
	class UClass*                                      AssignedVoyageProposalDescClass;                           // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      AssignedTaleRankDescClass;                                 // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HRLD[0xA8];                                    // 0x0038(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.CompanyTutorialVoyageProgress");
		return ptr;
	}



	bool IsSameVoyage(const struct FText& VoyageName);
	void AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass);
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.ContextualTutorialComponent
// 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
class UContextualTutorialComponent : public UActorComponent
{
public:
	TArray<struct FContextualTutorialPromptDesc>       ContextualTutorialClasses;                                 // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              SpawnedPromptActors;                                       // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_E19H[0x38];                                    // 0x00E8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.ContextualTutorialComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.OnboardingStatusInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOnboardingStatusInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.OnboardingStatusInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.Tutorial2019Component
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UTutorial2019Component : public UActorComponent
{
public:
	bool                                               IsEnabledByServer;                                         // 0x00C8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsInTutorialTale;                                          // 0x00C9(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QF1E[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.Tutorial2019Component");
		return ptr;
	}



	void ReceiveTutorial2019BeginPlayOnServer();
	void ReceiveTutorial2019BeginPlayOnClient();
	void OnRep_IsEnabledByServer(bool OldIsEnabled);
	void ForceDisableComponent_Blueprint();
	void BeginOnServer();
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.Tutorial2019ContextualDelegatingComponent
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UTutorial2019ContextualDelegatingComponent : public UTutorial2019Component
{
public:
	class UContextualTutorialComponent*                ContextualTutorialComponent;                               // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.Tutorial2019ContextualDelegatingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.Tutorial2019FunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTutorial2019FunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.Tutorial2019FunctionLibrary");
		return ptr;
	}



	struct FTeleportLocation STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport);
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.TutorialHelpersBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTutorialHelpersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.TutorialHelpersBlueprintLibrary");
		return ptr;
	}



	void STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject);
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.TutorialManager
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UTutorialManager : public UActorComponent
{
public:
	class UClass*                                      CompanyOnboardingStarterClass;                             // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      MaidenVoyageStarterClass;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BeachNPCSpawnFlowStarterClass;                             // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      SelectedTutorialClass;                                     // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTutorialStarter*                            SelectedTutorial;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasEverPlayedFirstPersonAnimation;                         // 0x00F0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasStartedTutorial;                                        // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasReceivedEntitlements;                                   // 0x00F2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasPosessedPawn;                                           // 0x00F3(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VNYT[0x1C];                                    // 0x00F4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.TutorialManager");
		return ptr;
	}



	void OnRep_SelectedTutorialClass();
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.TutorialStarter
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UTutorialStarter : public UObject
{
public:
	class AAthenaPlayerController*                     AthenaPlayerController;                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               ShouldPlayIntroAnimatic;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldDisableAllIntroBehaviour;                            // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3IFK[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFirstPersonAnimaticSettings                IntroAnimationSettings;                                    // 0x0034(0x002C) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.TutorialStarter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.BeachNPCSpawnFlowStarter
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBeachNPCSpawnFlowStarter : public UTutorialStarter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.BeachNPCSpawnFlowStarter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.CompanyOnboardingStarter
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCompanyOnboardingStarter : public UTutorialStarter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.CompanyOnboardingStarter");
		return ptr;
	}



	bool HasPrerequisites();
	void AfterRead();
	void BeforeDelete();

};

// Class Tutorial.MaidenVoyageStarter
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMaidenVoyageStarter : public UTutorialStarter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tutorial.MaidenVoyageStarter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
