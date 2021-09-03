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

// Class StudiosAutomation.TestablePlayerController
// 0x0000 (FullSize[0x0728] - InheritedSize[0x0728])
class ATestablePlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.TestablePlayerController");
		return ptr;
	}



	void YieldToServer();
	void PerformPostTestCleanup();
	void DisconnectClientFromTest();
	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.TestLevelScriptActor
// 0x00C0 (FullSize[0x0498] - InheritedSize[0x03D8])
class ATestLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData_TX44[0x8];                                     // 0x03D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<StudiosAutomation_ETestCategory>       Category;                                                  // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_ETestArea>           Area;                                                      // 0x03E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VisualTest;                                                // 0x03E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunInEditor;                                               // 0x03E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunOnServer;                                               // 0x03E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RequiresServices;                                          // 0x03E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_79TQ[0x2];                                     // 0x03E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTestLevelMetadataEntry>             AdditionalMetadata;                                        // 0x03E8(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)
	TEnumAsByte<StudiosAutomation_EPerformanceCaptureType> CaptureType;                                               // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_ETestAutomationPlayModeOverride> PlayModeOverride;                                          // 0x03F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YUIK[0x2];                                     // 0x03FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TestTimeout;                                               // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TestPausedTimeout;                                         // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DAUX[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             VerboseLogCategories;                                      // 0x0408(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ClientsRunning;                                            // 0x0418(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        ClientIds;                                                 // 0x0428(0x0010) (Net, ZeroConstructor)
	TArray<struct FClientPawnDetails>                  ClientPawns;                                               // 0x0438(0x0010) (Net, ZeroConstructor)
	TArray<class AActor*>                              SpawnedActors;                                             // 0x0448(0x0010) (Net, ZeroConstructor)
	int                                                NextSpawnedActorIndex;                                     // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5VKQ[0x3C];                                    // 0x045C(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.TestLevelScriptActor");
		return ptr;
	}



	void STATIC_YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex);
	void STATIC_YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId);
	void STATIC_WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers);
	void STATIC_WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients);
	void TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex);
	bool TestCloseConnection(int ConnectionIdx);
	void STATIC_SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings);
	class AActor* STATIC_SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SendServerMigrationTestValueInt32(int TestValue);
	void STATIC_RegisterPawnsForMPTesting(class UObject* WorldContextObject);
	void RegisterActorForMPTestingRecursively(class AActor* TargetActor);
	void RegisterActorForMPTesting(class AActor* TargetActor);
	void PostTestCleanup();
	void OnServerMigrationTestValueInt32Received(int TestValue);
	void OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players);
	void OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers);
	void OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors);
	void OnIncomingServerMigrationAborted(const struct FGuid& MigrationId);
	void OnClientServerMigrationStarted(const struct FGuid& MigrationId);
	void OnClientServerMigrationCompleted(const struct FGuid& MigrationId);
	void OnClientServerMigrationAborted(const struct FGuid& MigrationId);
	int GetServerIndex(class UObject* WorldContextObject);
	struct FString GetRemoteServerMigrationURL(int TargetServerIndex);
	int GetPlayerIndexFromClientId(int ClientId);
	int GetNumClientsForMultiplayerTest();
	int GetNumAutomationClients();
	class APawn* GetClientPawn(int ClientId, int SplitScreenIndex);
	int GetClientId(bool ErrorOnFailure);
	void DoServerPostTestCleanup();
	void STATIC_ClearPawnInputBindings(class UObject* WorldContextObject);
	void AddServerOnNewMap(const struct FString& Name, const struct FString& MapPath);
	void AddServer(const struct FString& Name);
	void AddClient(int Port, const struct FString& Name);
	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.ActorThatLogsErrorWhenTicked
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class AActorThatLogsErrorWhenTicked : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.ActorThatLogsErrorWhenTicked");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.AutomationBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.AutomationBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_TestFinished(class UObject* ContextObject);
	void STATIC_TestFailed(const struct FString& Message, class UObject* ContextObject);
	void STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, float DelayBeforeScreenshotSeconds);
	void STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name);
	void STATIC_StepStarted(const struct FString& StepName);
	void STATIC_StepFinished();
	void STATIC_SetTestTimeoutAsFatal(bool TimeoutIsFatal);
	void STATIC_PreventGarbageCollection();
	void STATIC_OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute);
	void STATIC_LogPlatformMemoryStats();
	bool STATIC_IsTravelFinished(class UObject* WorldContextObject);
	bool STATIC_IsFeatureToggleEnabled(const struct FName& FeatureToggleName);
	bool STATIC_IsEditor();
	bool STATIC_HasPerformanceDataBeenCaptured();
	class ATestLevelScriptActor* STATIC_GetTestLevelScriptActor(bool ErrorOnFailure);
	int STATIC_GetPlayerId(class APlayerState* State);
	struct FString STATIC_GetLevelUrl(class UObject* WorldContextObject);
	struct FString STATIC_GetCurrentMapTestName();
	void STATIC_EndPerformanceCapture(bool DumpMemReport);
	void STATIC_DumpFullMemReportDelayed(int FrameDelay);
	void STATIC_DumpFullMemReport();
	void STATIC_DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const struct FString& Description);
	void STATIC_DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames);
	void STATIC_CollectGarbageNow(bool FullPurge);
	void STATIC_BlockAsyncLoading(bool EnableBlock);
	void STATIC_BeginPerformanceCapture(const struct FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection);
	void STATIC_AssertValue_Int(int Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertValue_Float(float Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject);
	void STATIC_AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject);
	void STATIC_AssertIsNotValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject);
	void STATIC_AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject);
	void STATIC_AssertErrorOccurred(const struct FString& ErrorMessage);
	void STATIC_AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void STATIC_AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void STATIC_AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, class UObject* ContextObject);
	void STATIC_AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	void STATIC_AddExpectedError(const struct FString& ErrorMessage);
	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.AutomationLatentActionCallback
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAutomationLatentActionCallback : public UObject
{
public:
	unsigned char                                      UnknownData_HQDI[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.AutomationLatentActionCallback");
		return ptr;
	}



	void LatentCallback(int Linkage);
	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.BPNamedObjectMock
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPNamedObjectMock : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.BPNamedObjectMock");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.DummyReplicatedActor
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class ADummyReplicatedActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.DummyReplicatedActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.MapFixtureTestGameMode
// 0x0000 (FullSize[0x04C8] - InheritedSize[0x04C8])
class AMapFixtureTestGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.MapFixtureTestGameMode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.ObjectWithSettableWorld
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectWithSettableWorld : public UObject
{
public:
	class UWorld*                                      World;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.ObjectWithSettableWorld");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.TestUObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestUObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.TestUObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.OtherTestUObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOtherTestUObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.OtherTestUObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.RunUnitTestsCommandlet
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class URunUnitTestsCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.RunUnitTestsCommandlet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StudiosAutomation.TestAbstractActor
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class ATestAbstractActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StudiosAutomation.TestAbstractActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
