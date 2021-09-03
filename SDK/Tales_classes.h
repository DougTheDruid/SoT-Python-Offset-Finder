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

// Class Tales.TaleQuestStep
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData_JKTD[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestService
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData_CM9V[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestServiceDesc : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestStepDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0GCZ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleMigrationAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleMigrationAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleMigrationAction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestFramedStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_NT5X[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTaleQuestService*>                   Services;                                                  // 0x0090(0x0010) (ZeroConstructor, Protected)
	class UTaleQuestFramedStepDesc*                    FrameDesc;                                                 // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_269U[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScriptStruct*                               StructForCollector;                                        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JXRQ[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestFramedStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestFramedStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class UTaleQuestServiceDesc*>               Services;                                                  // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	class UScriptStruct*                               Variables;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestFramedStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.ContendedResourceServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UContendedResourceServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.ContendedResourceServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WorldResourceRegistryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWorldResourceRegistryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WorldResourceRegistryInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.ContendedResourceComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UContendedResourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_C4ZR[0x38];                                    // 0x00C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.ContendedResourceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.EnvQueryContext_TaleContextBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TaleContextBase : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.EnvQueryContext_TaleContextBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.IslandTypeWeightsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UIslandTypeWeightsDataAsset : public UDataAsset
{
public:
	TArray<struct FIslandTypeWeights>                  IslandTypeWeightsForDifficultyRanks;                       // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.IslandTypeWeightsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SplineFootprintPathComponent
// 0x0028 (FullSize[0x0630] - InheritedSize[0x0608])
class USplineFootprintPathComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData_R8HT[0x8];                                     // 0x0608(0x0008) Fix Super Size
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0610(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSplineFootprintPathTool                    PathTool;                                                  // 0x0618(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PNE6[0x3];                                     // 0x0619(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecalYaw;                                                  // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DecalUniformScale;                                         // 0x0620(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0CIV[0x4];                                     // 0x062C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SplineFootprintPathComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.StartTallTaleConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStartTallTaleConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.StartTallTaleConditionalStatTrigger");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestArrayEntrySelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestArrayEntrySelectionStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestArrayEntrySelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FixedArrayEntrySelectionStrategy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFixedArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	int                                                IndexToSelect;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4QYL[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FixedArrayEntrySelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.RandomArrayEntrySelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URandomArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.RandomArrayEntrySelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SequentialArrayEntrySelectionStrategy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USequentialArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	unsigned char                                      UnknownData_YF1X[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SequentialArrayEntrySelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestCargoRunContract
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UTaleQuestCargoRunContract : public UObject
{
public:
	unsigned char                                      UnknownData_XUI9[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FTaleQuestCargoRunContractItem>      ItemsToCollect;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData_GBN9[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      DeliverToNPC;                                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CollectFromNPC;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1AP3[0x18];                                    // 0x0098(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContract");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestCargoRunContractsService
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UTaleQuestCargoRunContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestCargoRunContract*>          Contracts;                                                 // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_VWWA[0x38];                                    // 0x0070(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsService");
		return ptr;
	}



	class UTaleQuestCargoRunContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes);
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestMerchantContract
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UTaleQuestMerchantContract : public UObject
{
public:
	unsigned char                                      UnknownData_W9NG[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExpired;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllocated;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContract");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestMerchantContractsService
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UTaleQuestMerchantContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestMerchantContract*>          Contracts;                                                 // 0x0060(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsService");
		return ptr;
	}



	class UTaleQuestMerchantContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit);
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestSelectorServiceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetDebugVoyageSeed(int Seed);
	void STATIC_ResetVoyageDebugSeed();
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.CutsceneResponsesTaleService
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UCutsceneResponsesTaleService : public UTaleQuestService
{
public:
	TArray<class UCutsceneResponseCoordinator*>        TrackedResponseCoordinators;                               // 0x0060(0x0010) (ZeroConstructor)
	TArray<class UCutsceneResponseComponent*>          TrackedResponseComponents;                                 // 0x0070(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<class AActor*>                              ResponseRelevantActors;                                    // 0x0080(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleService");
		return ptr;
	}



	void TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator);
	class UCutsceneResponseSheet* StartCutsceneResponseSheet(class AActor* TargetActor, class UClass* ResponseSheetClass);
	void ClearAllActiveResponseSheets();
	void AddResponseSheetRelevantActor(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.GameEventExclusionZoneTaleService
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UGameEventExclusionZoneTaleService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_DNK9[0x28];                                    // 0x0060(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestActorService
// 0x00D0 (FullSize[0x0130] - InheritedSize[0x0060])
class UTaleQuestActorService : public UTaleQuestService
{
public:
	TArray<struct FTrackedActorData>                   TrackedActors;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FCriticalActorDelegateData>          CriticalActors;                                            // 0x0070(0x0010) (ZeroConstructor)
	class UTaleQuestActorServiceDesc*                  Desc;                                                      // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APhasedClusterRoot*                          PhasedClusterRoot;                                         // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPhasedActor>                        PhasedActors;                                              // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FPhasedItem>                         PhasedItems;                                               // 0x00A0(0x0010) (ZeroConstructor)
	struct FText                                       CriticalActorHandedInByAnotherCrewFailureMessage;          // 0x00B0(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_WZ8P[0x20];                                    // 0x00B0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_ERCI[0x48];                                    // 0x00E8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestActorService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestEQSService
// 0x00C8 (FullSize[0x0128] - InheritedSize[0x0060])
class UTaleQuestEQSService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_A07D[0xC8];                                    // 0x0060(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestEQSService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestFlameOfFateService
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class UTaleQuestFlameOfFateService : public UTaleQuestService
{
public:
	class UTaleQuestFlameOfFateServiceDesc*            ServiceDesc;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XVYS[0x58];                                    // 0x0068(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectorService
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UTaleQuestSelectorService : public UTaleQuestService
{
public:
	class UTaleQuestSelectorServiceDesc*               Desc;                                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z6F1[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectorService");
		return ptr;
	}



	int GetRandomIntegerInRange(int Minimum, int Maximum);
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleResourceBrokerService
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UTaleResourceBrokerService : public UTaleQuestService
{
public:
	unsigned char                                      ContendedResourceService[0x10];                            // 0x0060(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleResourceBrokerService.ContendedResourceService
	unsigned char                                      ResourceRegistry[0x10];                                    // 0x0070(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleResourceBrokerService.ResourceRegistry
	TArray<struct FMigrationActionPair>                MigrationActions;                                          // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_A2WU[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleResourceBrokerService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.CutsceneResponsesTaleServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.GameEventExclusionZoneTaleServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameEventExclusionZoneTaleServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestActorServiceDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      ItemLostFailureRunnable;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestActorServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestCargoRunContractsServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestCargoRunContractsServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestEQSServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestEQSServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestEQSServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestFlameOfFateServiceDesc
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UTaleQuestFlameOfFateServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      LanternItemCategory;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EFlameOfFateType>               FlameOfFateTypeToSet;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetFlameOnStart;                                           // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BOO6[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestMerchantContractsServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestMerchantContractsServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectorServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestSelectorServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.AddGameEventExclusionZoneStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UAddGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class UAddGameEventExclusionZoneStepDesc*          Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DebugTaleAddInstancedLevelStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UDebugTaleAddInstancedLevelStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_MEOF[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDebugTaleAddInstancedLevelStepDesc*         StepDesc;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     InstancedLevelPath;                                        // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0DBM[0x18];                                    // 0x00A8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DebugTaleAddInstancedLevelStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UDebugTaleAddInstancedLevelStepDesc : public UTaleQuestStepDesc
{
public:
	struct FText                                       InstancedLevelKeyword;                                     // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_ODL0[0x20];                                    // 0x0030(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           InstancedLevelIndex;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IBL1[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DestroySpawnedActorStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UDestroySpawnedActorStep : public UTaleQuestStep
{
public:
	class UDestroySpawnedActorStepDesc*                Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DoEQSQueryStep
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UDoEQSQueryStep : public UTaleQuestStep
{
public:
	class UDoEQSQueryStepDesc*                         Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTaleQuestEQSService*                        CachedTaleEQSService;                                      // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DoEQSQueryStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UFindNamedPointStep : public UTaleQuestStep
{
public:
	class UFindNamedPointStepDesc*                     StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointAsVectorStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UFindNamedPointAsVectorStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsVectorStepDesc*             StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointAsTransformStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UFindNamedPointAsTransformStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsTransformStepDesc*          StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.GenerateDigLocationInRadiusStep
// 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_44MK[0x50];                                    // 0x0088(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.GetVoyageDifficultyFromRankStep
// 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_YT75[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.GetVoyageDifficultyFromRankStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.LinkEQSContextWithVariableStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class ULinkEQSContextWithVariableStep : public UTaleQuestStep
{
public:
	class ULinkEQSContextWithVariableStepDesc*         Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.LoadSequencerAnimationStep
// 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
class ULoadSequencerAnimationStep : public UTaleQuestStep
{
public:
	class ULoadSequencerAnimationStepDesc*             StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetToSpawnActor;                                        // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.ParticipantRadiusTrackerStep
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UParticipantRadiusTrackerStep : public UTaleQuestStep
{
public:
	class UParticipantRadiusTrackerStepDesc*           Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7PER[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStep
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UPlaySequencerAnimationOnCutsceneActorStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationOnCutsceneActorStepDesc* StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPossessableSequence>                PossessableSequences;                                      // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_6K2W[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.PlaySequencerAnimationStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UPlaySequencerAnimationStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationStepDesc*             StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PIBX[0x28];                                    // 0x0098(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.RemoveGameEventExclusionZoneStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class URemoveGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class URemoveGameEventExclusionZoneStepDesc*       Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SetEQSNamedContextStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class USetEQSNamedContextStep : public UTaleQuestStep
{
public:
	class USetEQSNamedContextStepDesc*                 Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SpawnPhasedActorWithTransformStep
// 0x00A8 (FullSize[0x0130] - InheritedSize[0x0088])
class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_5BSG[0xA8];                                    // 0x0088(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SpawnPhasedItemStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class USpawnPhasedItemStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.StartSuppressingCutsceneResponsesStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UStartSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.StopSuppressingCutsceneResponsesStep
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UStopSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestChooseIslandFromWeightsStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_F066[0x30];                                    // 0x0088(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                         // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestClearTaleProposalsStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
{
public:
	class UTaleQuestClearTaleProposalsStepDesc*        Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
{
public:
	class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestGrantRewardStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	class UTaleQuestGrantRewardStepDesc*               Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OXHM[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestPermanentPromptStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestPermanentPromptStep : public UTaleQuestStep
{
public:
	class UTaleQuestPermanentPromptStepDesc*           Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectEntryFromArrayStep
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R8WV[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestUpdateCheckpointStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateCheckpointStepDesc*          Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	class UTaleQuestWaitForHandInStepDesc*             Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ULMS[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TrackResponseCoordinatorStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTrackResponseCoordinatorStep : public UTaleQuestStep
{
public:
	class UTrackResponseCoordinatorStepDesc*           StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WaitForItemPickupStep
// 0x0090 (FullSize[0x0118] - InheritedSize[0x0088])
class UWaitForItemPickupStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_7EKA[0x90];                                    // 0x0088(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WaitForItemPickupStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.AddGameEventExclusionZoneStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAddGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AR1R[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DestroySpawnedActorStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                  // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.DoEQSQueryStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
{
public:
	class UEnvQuery*                                   EQSQuery;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableArray                         OutPoints;                                                 // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.DoEQSQueryStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointStepDescBase
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData_Y6JZ[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableActor                         ActorToSearch;                                             // 0x0050(0x0010) (Edit)
	struct FQuestVariableName                          GroupNamePin;                                              // 0x0060(0x0010) (Edit)
	struct FName                                       PointGroupName;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EPointSelectionMethod>          SearchMethod;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ESpaceType>                     ReturnInSpace;                                             // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W1D3[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointStepDescBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableOrientedPoint                 OutputOrientedPoint;                                       // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointAsVectorStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableVector                        OutputVectorLocation;                                      // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.FindNamedPointAsTransformStepDesc
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableTransform                     OutputTransform;                                           // 0x0080(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.GenerateDigLocationInRadiusStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        Center;                                                    // 0x0040(0x0010) (Edit)
	float                                              RadiusInCm;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CM9I[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        DigLocation;                                               // 0x0058(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.LinkEQSContextWithVariableStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Context;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestVariableSetEQSTaleContextValue        Variable;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.LoadSequencerAnimationStepDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULoadSequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class ULevelSequence*>                      LevelSequencesToLoad;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FQuestVariableActor                         TargetActorToSpawn;                                        // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                           // 0x0050(0x0010) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                    // 0x0060(0x0010) (Edit)
	bool                                               AttachToTargetActor;                                       // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WAK9[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocketName;                                          // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayGlobally;                                              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BKGI[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.ParticipantRadiusTrackerStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LW84[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)
	struct FQuestVariableFloat                         Radius;                                                    // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAllParticipantsEnterRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsEnterRadiusStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAllParticipantsLeaveRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsLeaveRadiusStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WaitUntilAnyParticipantEntersRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WaitUntilAnyParticipantEntersRadiusStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UPlaySequencerAnimationOnCutsceneActorStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequence;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MYW3[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableActor                         DockableBaseActor;                                         // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                    // 0x0050(0x0010) (Edit)
	struct FQuestVariableActor                         ActorToPossess;                                            // 0x0060(0x0010) (Edit)
	struct FQuestVariableArray                         AdditionalPossessables;                                    // 0x0070(0x0010) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                          // 0x0080(0x0010) (Edit)
	struct FString                                     PossessableName;                                           // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               LocalisableNames;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLevelSequenceActorAlwaysRelevant;                        // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLooping;                                                 // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z4O9[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SubtitleSphereRadiusInCm;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              FemaleLevelSequence;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.PlaySequencerAnimationStepDesc
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequenceToPlay;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableActor                         TargetActorToSpawn;                                        // 0x0038(0x0010) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                           // 0x0048(0x0010) (Edit)
	struct FQuestVariableActor                         DockableBaseActor;                                         // 0x0058(0x0010) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                          // 0x0068(0x0010) (Edit)
	bool                                               PlayGlobally;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLevelSequenceActorAlawaysRelevant;                       // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GNJ4[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneDialogueData*                          DialogueData;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               LocalisableNames;                                          // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLooping;                                                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7FAW[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SubtitleSphereRadiusInCm;                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              FemaleLevelSequenceToPlay;                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.RemoveGameEventExclusionZoneStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class URemoveGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8OW1[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SetEQSNamedContextStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Name;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableLinkEQSContext                Value;                                                     // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class UClass>                            Actor;                                                     // 0x0030(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LOR1[0x4];                                     // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               MarkAsCritical;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G2W7[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CriticalActorLostMessage;                                  // 0x0058(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_6ZKS[0x20];                                    // 0x0051(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FQuestVariableActor                         ActorVar;                                                  // 0x0090(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SpawnPhasedActorAtLocationStepDesc
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
{
public:
	struct FQuestVariableTransform                     Location;                                                  // 0x00A0(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SpawnPhasedActorAtLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.SpawnPhasedItemStepDesc
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               TrackItem;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MarkItemAsCritical;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KYN9[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CriticalActorLostMessage;                                  // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_FRBI[0x20];                                    // 0x0032(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SocketName;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableItemDescType                  Item;                                                      // 0x0078(0x0010) (Edit)
	struct FQuestVariableActor                         LocatorVar;                                                // 0x0088(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedItemVar;                                            // 0x0098(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStartSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.StopSuppressingCutsceneResponsesStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStopSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableNameArray                     IslandsToChooseFrom;                                       // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           DifficultyRank;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableName                          ChosenIsland;                                              // 0x0050(0x0010) (Edit)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestClearTaleProposalsStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       CampaignId;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ENM8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                  // 0x0030(0x0008) (Edit)
	class UClass*                                      Company;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       Id;                                                        // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldGrantToAlliedCrews;                                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P3FL[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Feature;                                                   // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1PBB[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestPermanentPromptStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariablePrioritisedPrompt             Prompt;                                                    // 0x0030(0x0010) (Edit)
	TEnumAsByte<PrioritisedPrompts_EPromptStartStop>   StartOrStop;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HF6H[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestVariableArray                         InputArray;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableAny                           OutputEntry;                                               // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestUpdateCheckpointStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardIdToAward;                                           // 0x0030(0x0008) (Edit)
	struct FName                                       CampaignIdToRemove;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Feature;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                               // 0x0030(0x0010) (Edit)
	class UClass*                                      SpecificItem;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestVariableItemDescType                  HandInItem;                                                // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TrackResponseCoordinatorStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTrackResponseCoordinatorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableUObject                       CutsceneResponseCoordinator;                               // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.WaitForItemPickupStepDesc
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Item;                                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         PickerUpper;                                               // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.WaitForItemPickupStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
// 0x0160 (FullSize[0x01E8] - InheritedSize[0x0088])
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O8R6[0x38];                                    // 0x0090(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTaleQuestSelectorService*                   CachedSelectorService;                                     // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QVPI[0x118];                                   // 0x00D0(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestVariableVectorArray                   InputArray;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        OutputEntry;                                               // 0x0048(0x0010) (Edit)
	struct FQuestVariableBool                          ShuffleLists;                                              // 0x0058(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddBountyMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddBountyMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddBountyMapStepDesc*              Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          Location;                                                  // 0x0048(0x0010) (Edit)
	struct FQuestVariableTextArray                     Description;                                               // 0x0058(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CaptainTargets;                                            // 0x0068(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CrewTargets;                                               // 0x0078(0x0010) (Edit)
	class UBountyMapLayout*                            CustomLayout;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      OverrideTreasureMapItemDesc;                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddCargoRunMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddCargoRunMapStepDesc*            Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddCircleMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddCircleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddCircleMapStepDesc*              Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddMerchantMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddMerchantMapStepDesc*            Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddRiddleMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddRiddleMapBaseStepDesc*          Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddXMarksMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddXMarksMapStepDesc*              Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAdvanceRiddleMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAdvanceRiddleMapStepDesc*          Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestMapService
// 0x0090 (FullSize[0x00F0] - InheritedSize[0x0060])
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_XF4F[0x90];                                    // 0x0060(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestMapService");
		return ptr;
	}



	void UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const struct FName& MapId);
	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestMapServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestMapServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestMapServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddCargoRunMapStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           NumItems;                                                  // 0x0048(0x0010) (Edit)
	struct FQuestVariableGuid                          NPCId;                                                     // 0x0058(0x0010) (Edit)
	class UCargoRunMapLayout*                          Layout;                                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddCircleMapStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestAddCircleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        Location;                                                  // 0x0048(0x0010) (Edit)
	float                                              CircleScale;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EQuestMapIcon>                  RadialMiniIcon;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E6P6[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddMerchantMapStepDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          DeliveryLocation;                                          // 0x0048(0x0010) (Edit)
	struct FQuestVariableText                          DeliverByTime;                                             // 0x0058(0x0010) (Edit)
	struct FQuestVariableMerchantItemArray             Items;                                                     // 0x0068(0x0010) (Edit)
	class UMerchantMapLayout*                          Layout;                                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapBaseStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddRiddleMapStepDesc
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<struct FText>                               Text;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	struct FQuestVariableTextArray                     TextVariable;                                              // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAddXMarksMapStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        Location;                                                  // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestRemoveMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestRemoveMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestRemoveMapStepDesc*                 StepDesc;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestUpdateMerchantMapStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateMerchantMapStepDesc*         Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableMerchantItem                  Item;                                                      // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           Index;                                                     // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
