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

// Class GameplayDebugger.GameplayDebuggingComponent
// 0x0230 (FullSize[0x07B8] - InheritedSize[0x0588])
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_O9YO[0x8];                                     // 0x0588(0x0008) Fix Super Size
	struct FString                                     DebugComponentClassName;                                   // 0x0590(0x0010) (ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash)
	int                                                ShowExtendedInformatiomCounter;                            // 0x05A0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P0WH[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ReplicateViewDataCounters;                                 // 0x05A8(0x0010) (Net, ZeroConstructor)
	struct FString                                     ControllerName;                                            // 0x05B8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PawnName;                                                  // 0x05C8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PawnClass;                                                 // 0x05D8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DebugIcon;                                                 // 0x05E8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MovementBaseInfo;                                          // 0x05F8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MovementModeInfo;                                          // 0x0608(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PathFollowingInfo;                                         // 0x0618(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAITask;                                             // 0x0628(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAIState;                                            // 0x0638(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAIAssets;                                           // 0x0648(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameplayTasksState;                                        // 0x0658(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NavDataInfo;                                               // 0x0668(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AbilityInfo;                                               // 0x0678(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MontageInfo;                                               // 0x0688(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     BrainComponentName;                                        // 0x0698(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     BrainComponentString;                                      // 0x06A8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	TArray<unsigned char>                              BlackboardRepData;                                         // 0x06B8(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_LREX[0x10];                                    // 0x06C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             PathPoints;                                                // 0x06D8(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                          // 0x06E8(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_ZU8J[0x10];                                    // 0x06F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              NavmeshRepData;                                            // 0x0708(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<unsigned char>                              EQSRepData;                                                // 0x0718(0x0010) (Net, ZeroConstructor, RepNotify)
	struct FVector                                     SensingComponentLocation;                                  // 0x0728(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextPathPointIndex;                                        // 0x0734(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIsUsingPathFollowing : 1;                                 // 0x0738(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingCharacter : 1;                                     // 0x0738(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                  // 0x0738(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingAbilities : 1;                                     // 0x0738(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      UnknownData_YBX6[0x7];                                     // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0740(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QOCN[0x70];                                    // 0x0748(0x0070) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingComponent");
		return ptr;
	}



	void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
	void ServerDiscardNavmeshData();
	void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
	void OnRep_UpdateNavmesh();
	void OnRep_UpdateEQS();
	void OnRep_UpdateBlackboard();
	void OnRep_PathCorridorData();
	void OnCycleDetailsView();
	void ClientEnableTargetSelection(bool bEnable);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayDebugger.GameplayDebuggingHUDComponent
// 0x00F0 (FullSize[0x04C0] - InheritedSize[0x03D0])
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                                // 0x03D0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MenuStartY;                                                // 0x03D4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebugInfoStartX;                                           // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebugInfoStartY;                                           // 0x03DC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                     Canvas;                                                    // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class APlayerController*                           PlayerOwner;                                               // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HPMK[0xD0];                                    // 0x03F0(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingHUDComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayDebugger.GameplayDebuggerSettings
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UGameplayDebuggerSettings : public UObject
{
public:
	struct FGDTCustomViewNames                         CustomViewNames;                                           // 0x0028(0x0050) (Edit, Config, Protected)
	bool                                               OverHead;                                                  // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               Basic;                                                     // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               BehaviorTree;                                              // 0x007A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               EQS;                                                       // 0x007B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               EnableEQSOnHUD;                                            // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_QSGS[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActiveEQSIndex;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               Perception;                                                // 0x0084(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView1;                                                 // 0x0085(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView2;                                                 // 0x0086(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView3;                                                 // 0x0087(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView4;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView5;                                                 // 0x0089(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_GPJC[0x1E];                                    // 0x008A(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x02A0 (FullSize[0x0368] - InheritedSize[0x00C8])
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                              // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      DebugAITargetActor;                                        // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInputComponent*                             AIDebugViewInputComponent;                                 // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInputComponent*                             DebugCameraInputComponent;                                 // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZP99[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputChord                                 ActivationKey;                                             // 0x0110(0x0028) (Config)
	struct FInputChord                                 CategoryZeroBind;                                          // 0x0138(0x0028) (Config)
	struct FInputChord                                 CategoryOneBind;                                           // 0x0160(0x0028) (Config)
	struct FInputChord                                 CategoryTwoBind;                                           // 0x0188(0x0028) (Config)
	struct FInputChord                                 CategoryThreeBind;                                         // 0x01B0(0x0028) (Config)
	struct FInputChord                                 CategoryFourBind;                                          // 0x01D8(0x0028) (Config)
	struct FInputChord                                 CategoryFiveBind;                                          // 0x0200(0x0028) (Config)
	struct FInputChord                                 CategorySixBind;                                           // 0x0228(0x0028) (Config)
	struct FInputChord                                 CategorySevenBind;                                         // 0x0250(0x0028) (Config)
	struct FInputChord                                 CategoryEightBind;                                         // 0x0278(0x0028) (Config)
	struct FInputChord                                 CategoryNineBind;                                          // 0x02A0(0x0028) (Config)
	struct FInputChord                                 CycleDetailsViewBind;                                      // 0x02C8(0x0028) (Config)
	struct FInputChord                                 DebugCameraBind;                                           // 0x02F0(0x0028) (Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                 // 0x0318(0x0028) (Config)
	struct FInputChord                                 GameHUDBind;                                               // 0x0340(0x0028) (Config)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingControllerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (FullSize[0x04F8] - InheritedSize[0x04C8])
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData_GH0W[0x30];                                    // 0x04C8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GaneplayDebuggerProxyHUD");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00B0 (FullSize[0x0480] - InheritedSize[0x03D0])
class AGameplayDebuggingReplicator : public AActor
{
public:
	struct FString                                     DebugComponentClassName;                                   // 0x03D0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     DebugComponentHUDClassName;                                // 0x03E0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     DebugComponentControllerClassName;                         // 0x03F0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	int                                                MaxEQSQueries;                                             // 0x0400(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O4FN[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayDebuggingComponent*                 DebugComponent;                                            // 0x0408(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           LocalPlayerOwner;                                          // 0x0410(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastSelectedActorToDebug;                                  // 0x0418(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsGlobalInWorld;                                          // 0x0420(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bAutoActivate;                                             // 0x0421(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               OverHead;                                                  // 0x0422(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               Basic;                                                     // 0x0423(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               BehaviorTree;                                              // 0x0424(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               EQS;                                                       // 0x0425(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               EnableEQSOnHUD;                                            // 0x0426(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0VQM[0x1];                                     // 0x0427(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActiveEQSIndex;                                            // 0x0428(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Perception;                                                // 0x042C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView1;                                                 // 0x042D(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView2;                                                 // 0x042E(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView3;                                                 // 0x042F(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView4;                                                 // 0x0430(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView5;                                                 // 0x0431(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IVK3[0x4E];                                    // 0x0432(0x004E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingReplicator");
		return ptr;
	}



	void ServerSetActorToDebug(class AActor* InActor);
	void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void OnRep_AutoActivate();
	void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
	void ClientAutoActivate();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
