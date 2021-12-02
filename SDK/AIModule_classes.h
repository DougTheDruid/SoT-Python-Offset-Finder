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

// Class AIModule.BTNode
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData_PMY8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	class UBehaviorTree*                               TreeAsset;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBTCompositeNode*                            ParentNode;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R2XB[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTAuxiliaryNode
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData_C1N6[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData_KIK6 : 7;                                      // 0x0060(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bInverseCondition : 1;                                     // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_KO0R[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EBTFlowAbortMode>             FlowAbortMode;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4L7W[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTService
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              RandomDeviation;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      bCallTickOnSearchStart : 1;                                // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                         // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      UnknownData_1TD8[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTaskNode
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBTTaskNode : public UBTNode
{
public:
	unsigned char                                      UnknownData_GIIZ[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_BlackboardBase
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0060(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_RunEQSQuery
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x0090(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XY95[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RDT5[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryNode
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O4OD[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               NonShippingOnly;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9PTE[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest
// 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvTestPurpose>              TestPurpose;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvTestFilterOperator>       MultipleContextFilterOp;                                   // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvTestScoreOperator>        MultipleContextScoreOp;                                    // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvTestFilterType>           FilterType;                                                // 0x0037(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIDataProviderBoolValue                    BoolValue;                                                 // 0x0038(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                             // 0x0068(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                             // 0x0098(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	unsigned char                                      UnknownData_D9UE[0x1];                                     // 0x00C8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvTestScoreEquation>        ScoringEquation;                                           // 0x00C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMinType;                                              // 0x00CA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMaxType;                                              // 0x00CB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DUVA[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                             // 0x0100(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                             // 0x0130(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	unsigned char                                      UnknownData_X80H[0x8];                                     // 0x0160(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWorkOnFloatValues : 1;                                    // 0x0168(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_JZRW[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIResourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIResourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PathFollowingComponent
// 0x01F0 (FullSize[0x02B8] - InheritedSize[0x00C8])
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_J3B9[0x58];                                    // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovementComponent*                       MovementComp;                                              // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y3N1[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0CNE[0xBC];                                    // 0x0138(0x00BC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseVisibilityTestsSimplification : 1;                     // 0x01F4(0x0001) BIT_FIELD (Config, NoDestructor, Protected)
	unsigned char                                      UnknownData_L86Z[0xC3];                                    // 0x01F5(0x00C3) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}



	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<AIModule_EPathFollowingAction> GetPathActionType();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_B9XU[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}



	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}



	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnActionsComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                            // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FPawnActionStack>                    ActionStacks;                                              // 0x00D0(0x0010) (ZeroConstructor, Protected)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                              // 0x00E0(0x0010) (ZeroConstructor, Protected)
	class UPawnAction*                                 CurrentAction;                                             // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_USRB[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}



	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPerceptionListenerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData_8P8V[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BehaviorTreeTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBehaviorTreeTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGenericTeamAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIController
// 0x0090 (FullSize[0x04C0] - InheritedSize[0x0430])
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData_IVB7[0x28];                                    // 0x0430(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLOSflag : 1;                                              // 0x0458(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                   // 0x0458(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x0458(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bWantsPlayerState : 1;                                     // 0x0458(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDisableControlRotation : 1;                               // 0x0458(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_BUIY[0x7];                                     // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPathFollowingComponent*                     PathFollowingComponent;                                    // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBrainComponent*                             BrainComponent;                                            // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnActionsComponent*                       ActionsComp;                                               // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        Blackboard;                                                // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                              // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YD2L[0x10];                                    // 0x0490(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                      // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_BMYZ[0x10];                                    // 0x04B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}



	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<AIModule_EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.DetourCrowdAIController
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class ADetourCrowdAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIDataProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDataProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.CustomDataProviderObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomDataProviderObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CustomDataProviderObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAIDataProvider_QueryParamFromCustomObjectProperty : public UAIDataProvider
{
public:
	struct FCustomDataProviderObjectPropertySelector   ObjectProperty;                                            // 0x0028(0x0010) (Edit)
	float                                              FloatValue;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HCXW[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FH6J[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIHotSpotManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIHotSpotManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISystem
// 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
class UAISystem : public UAISystemBase
{
public:
	struct FStringClassReference                       PerceptionSystemClassName;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, Protected)
	struct FStringClassReference                       HotSpotManagerClassName;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, Protected)
	float                                              AcceptanceRadius;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFinishMoveOnGoalOverlap;                                  // 0x0064(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor)
	bool                                               bAcceptPartialPaths;                                       // 0x0065(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor)
	bool                                               bAllowStrafing;                                            // 0x0066(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor)
	bool                                               bEnableBTAITasks;                                          // 0x0067(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor)
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                       // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAIPerceptionSystem*                         PerceptionSystem;                                          // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                           // 0x0080(0x0010) (ZeroConstructor, Transient, Protected)
	class UAIHotSpotManager*                           HotSpotManager;                                            // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OYJZ[0x58];                                    // 0x0098(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}



	void AILoggingVerbose();
	void AIIgnorePlayers();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAISense : public UObject
{
public:
	struct FColor                                      DebugDrawColor;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_86AE[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DebugName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash)
	float                                              DefaultExpirationAge;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EAISenseNotifyType>           NotifyType;                                                // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQMK[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWantsNewPawnNotification : 1;                             // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                        // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      UnknownData_JNX2[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_388D[0x30];                                    // 0x0058(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIPerceptionSystem
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData_1Z1A[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISense*>                            Senses;                                                    // 0x0080(0x0010) (ZeroConstructor, Protected)
	float                                              PerceptionAgingRate;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WSIK[0x94];                                    // 0x0094(0x0094) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}



	void STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIPerceptionComponent
// 0x0100 (FullSize[0x01C8] - InheritedSize[0x00C8])
class UAIPerceptionComponent : public UActorComponent
{
public:
	float                                              HearingRange;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LoSHearingRange;                                           // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SightRadius;                                               // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LoseSightRadius;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              PeripheralVisionAngle;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2YFM[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISenseConfig*>                      SensesConfig;                                              // 0x00E0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected)
	class UClass*                                      DominantSense;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VEXO[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               AIOwner;                                                   // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H1ZZ[0x80];                                    // 0x0110(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                       // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                 // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_V4IO[0x18];                                    // 0x01B0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}



	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	bool IsIgnored(class AActor* Actor);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                 // 0x00C8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected)
	unsigned char                                      UnknownData_9ZXJ[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                 // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}



	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIResource_Movement
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Movement : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AIResource_Logic
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Logic : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Blueprint
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                         // 0x0090(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                         // 0x00A0(0x0010) (ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}



	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Damage
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                          // 0x0088(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}



	void STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Hearing
// 0x0098 (FullSize[0x0120] - InheritedSize[0x0088])
class UAISense_Hearing : public UAISense
{
public:
	int                                                MaxNoisesPerTick;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNoisesStored;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IHI7[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAINoiseEvent>                       NoiseEventsArrayA;                                         // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FAINoiseEvent>                       NoiseEventsArrayB;                                         // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_M1EI[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedOfSoundSq;                                            // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BXVQ[0x54];                                    // 0x00CC(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}



	void STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Prediction
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                          // 0x0088(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}



	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Sight
// 0x00C8 (FullSize[0x0150] - InheritedSize[0x0088])
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData_93EZ[0xB0];                                    // 0x0088(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTracesPerTick;                                          // 0x0138(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              HighImportanceQueryDistanceThreshold;                      // 0x013C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3GKM[0x4];                                     // 0x0140(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxQueryImportance;                                        // 0x0144(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SightLimitQueryImportance;                                 // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GS6V[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Team
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                          // 0x0088(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISense_Touch
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                          // 0x0088(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseBlueprintListener
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAISenseConfig : public UObject
{
public:
	float                                              MaxAge;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      bStartsEnabled : 1;                                        // 0x002C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      UnknownData_678I[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Damage
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Hearing
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              HearingRange;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoSHearingRange;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUseLoSHearing : 1;                                        // 0x0040(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_3IY2[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Prediction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Sight
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              SightRadius;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoseSightRadius;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PeripheralVisionAngleDegrees;                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RA6Q[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Team
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAISenseConfig_Team : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseConfig_Touch
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAISenseConfig_Touch : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISenseEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseEvent_Damage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISenseEvent_Hearing
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISightTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AITask
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.AITask_MoveTo
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected)
	struct FVector                                     MoveGoalLocation;                                          // 0x0080(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn)
	unsigned char                                      UnknownData_E6TP[0xC];                                     // 0x008C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      MoveGoalActor;                                             // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MoveAcceptanceRadius;                                      // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bShouldStopOnOverlap;                                      // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn)
	bool                                               bShouldAcceptPartialPath;                                  // 0x00A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn)
	bool                                               bShouldUsePathfinding;                                     // 0x00A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn)
	unsigned char                                      UnknownData_L1P1[0x9];                                     // 0x00A7(0x0009) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}



	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BrainComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9EOS[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlackboardComponent*                        BlackboardComp;                                            // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AAIController*                               AIOwner;                                                   // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7BP9[0x48];                                    // 0x00E0(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}



	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BehaviorTreeComponent
// 0x0160 (FullSize[0x0288] - InheritedSize[0x0128])
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData_GLGV[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBTNode*>                             NodeInstances;                                             // 0x0148(0x0010) (ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_BWGI[0x130];                                   // 0x0158(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}



	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CoolDownDuration, bool bAddToExistingDuration);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTCompositeNode
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                  // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                  // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_K69P[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BehaviorTree
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBTDecorator*>                        RootDecorators;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                          // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_40C7[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BehaviorTreeManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                          // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EIFX[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                           // 0x0030(0x0010) (ZeroConstructor, Protected)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                          // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     EnumName;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      bIsEnumNameValid : 1;                                      // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor)
	unsigned char                                      UnknownData_AWG7[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UEnum*                                       EnumType;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardData
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBlackboardEntry>                    Keys;                                                      // 0x0030(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      bHasSynchronizedKeys : 1;                                  // 0x0040(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_68BQ[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardComponent
// 0x0148 (FullSize[0x0210] - InheritedSize[0x00C8])
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                 // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4D3W[0x20];                                    // 0x00D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                              // 0x00F8(0x0010) (ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_N1VQ[0x108];                                   // 0x0108(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}



	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValueAsVector(const struct FName& KeyName);
	void ClearValueAsRotator(const struct FName& KeyName);
	void ClearValue(const struct FName& KeyName);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Class
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Float
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Int
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Name
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Object
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_String
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}



	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_Blackboard
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FString                                     StringValue;                                               // 0x0098(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash)
	struct FString                                     CachedDescription;                                         // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	unsigned char                                      OperationType;                                             // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KZGD[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_IsAtLocation
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseNavAgentGoalLocation;                                  // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RN4G[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      ActorOwner;                                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FName>                               ObservedKeyNames;                                          // 0x0078(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_EJ56[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      bIsObservingBB : 1;                                        // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_6DFX[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
	void FinishConditionCheck(bool bAllowExecution);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                              // 0x0068(0x0028) (Edit, Protected)
	TEnumAsByte<GameplayTags_EGameplayContainerMatchType> TagsToMatch;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NOZW[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0098(0x0028) (Edit, Protected)
	struct FString                                     CachedDescription;                                         // 0x00C0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<AIModule_EBlackBoardEntryComparison>   Operator;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZKD[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0070(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0098(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DLTD[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                             // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData_J6IB[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_Cooldown
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NSY2[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0068(0x0028) (Edit, Protected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0090(0x0028) (Edit, Protected)
	unsigned char                                      bUseSelf : 1;                                              // 0x00B8(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_74G6[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EPathExistanceQueryType>      PathQueryType;                                             // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IA4F[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W5W7[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                      // 0x00C0(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bUseSelfAsObserved : 1;                                    // 0x00C0(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_W3ZP[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_Loop
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInfiniteLoop;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RTQL[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit)
	float                                              CoolDownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JRAF[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit)
	float                                              CoolDownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bActivatesCooldown;                                        // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1K9[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_951M[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTService_BlackboardBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0070(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTService_DefaultFocus
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                             // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QV6E[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTService_BlueprintBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      ActorOwner;                                                // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QI8P[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected)
	unsigned char                                      bShowEventDetails : 1;                                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected)
	unsigned char                                      UnknownData_SMU4[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTComposite_Selector
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTComposite_Selector : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTComposite_Sequence
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTComposite_Sequence : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<AIModule_EBTParallelMode>              FinishMode;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZSYG[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;                // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                        // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_NAJ5[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_MoveTo
// 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TB8Q[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_EJ9B[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData_PNOF[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_BlueprintBase
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      ActorOwner;                                                // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_949V[0x18];                                    // 0x0070(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0088(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected)
	unsigned char                                      UnknownData_ASFU[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}



	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_MakeNoise
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_17YF[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                                 ParentAction;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnActionsComponent*                       OwnerComponent;                                            // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Instigator;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBrainComponent*                             BrainComp;                                                 // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_78S9[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAllowNewSameClassInstance : 1;                            // 0x0078(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                       // 0x0078(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      bShouldPauseMovement : 1;                                  // 0x0078(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected)
	unsigned char                                      UnknownData_QDEM[0x17];                                    // 0x0079(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}



	TEnumAsByte<AIModule_EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_PawnActionBase
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_PushPawnAction
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                    // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_PlayAnimation
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bLooping : 1;                                              // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNonBlocking : 1;                                          // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_UIRH[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeComponent*                      MyOwnerComp;                                               // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                            // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FDL8[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_PlaySound
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_RunBehavior
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                              // 0x0060(0x0008) (Edit, Protected)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0060(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7Y72[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoolDownDuration;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_Wait
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomDeviation;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.CrowdAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrowdAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.CrowdManager
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UCrowdManager : public UObject
{
public:
	class ANavigationData*                             MyNavData;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config, Protected)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, Protected)
	int                                                MaxAgents;                                                 // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxAgentRadius;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                MaxAvoidedAgents;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                MaxAvoidedWalls;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              NavmeshCheckInterval;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              PathOptimizationInterval;                                  // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0XJ5 : 3;                                      // 0x0068(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bResolveCollisions : 1;                                    // 0x0068(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected)
	unsigned char                                      UnknownData_57RM[0x77];                                    // 0x0069(0x0077) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQuery
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEnvQuery : public UObject
{
public:
	TArray<class UEnvQueryOption*>                     Options;                                                   // 0x0028(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_R5ZL[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}



	void ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryContext_Item
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.VisualLoggerExtension
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisualLoggerExtension : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryDebugHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEQSQueryResultSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_Q1O5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYRF[0x1C];                                    // 0x0034(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	int                                                OptionIndex;                                               // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZYPZ[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                      // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}



	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryManager
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData_3JW8[0x70];                                    // 0x0028(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                             // 0x0098(0x0010) (ZeroConstructor, Transient, Protected)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                             // 0x00A8(0x0010) (ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_E001[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}



	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0050(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      SearchedActorClass;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      SearchCenter;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                               // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_RSAE[0x20];                                    // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      Context;                                                   // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      GeneratedItemType;                                         // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A9NL[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}



	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_Composite
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bHasMatchingItemType;                                      // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4LK[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x0050(0x0040) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (FullSize[0x01B8] - InheritedSize[0x0090])
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x00C0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvDirection                               ArcDirection;                                              // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0170(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               RandomiseRadius;                                           // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q9J2[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Center;                                                    // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bDefineArc : 1;                                            // 0x01B0(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_VVPB[0x7];                                     // 0x01B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0108 (FullSize[0x0198] - InheritedSize[0x0090])
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvDirection                               ArcDirection;                                              // 0x00F0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	float                                              AngleRadians;                                              // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BYS3[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CircleCenter;                                              // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FEnvTraceData                               TraceData;                                                 // 0x0150(0x0040) (Edit)
	unsigned char                                      bDefineArc : 1;                                            // 0x0190(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FBRT[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                  // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      GenerateAround;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (FullSize[0x0160] - InheritedSize[0x00F8])
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                                // 0x00F8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      NavigationFilter;                                          // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0130(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_Distance
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestDistance>             TestMode;                                                  // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CMHQ[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DistanceTo;                                                // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_Dot
// 0x0048 (FullSize[0x01B8] - InheritedSize[0x0170])
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x0170(0x0020) (Edit, DisableEditOnInstance, Protected)
	struct FEnvDirection                               LineB;                                                     // 0x0190(0x0020) (Edit, DisableEditOnInstance, Protected)
	TEnumAsByte<AIModule_EEnvTestDot>                  TestMode;                                                  // 0x01B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bAbsoluteValue;                                            // 0x01B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_53LN[0x6];                                     // 0x01B2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_GameplayTags
// 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	TEnumAsByte<GameplayTags_EGameplayContainerMatchType> TagsToMatch;                                               // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A1HK[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0178(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_Pathfinding
// 0x00D8 (FullSize[0x0248] - InheritedSize[0x0170])
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestPathfinding>          TestMode;                                                  // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V7T0[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderBoolValue                    PathFromContext;                                           // 0x0180(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                           // 0x01B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FAIDataProviderIntValue                     MaxNumPathSegments;                                        // 0x01E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FAIDataProviderBoolValue                    PassThroughUnreachable;                                    // 0x0210(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UClass*                                      FilterClass;                                               // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0248(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_Random
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryTest_Trace
// 0x00D8 (FullSize[0x0248] - InheritedSize[0x0170])
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                 // 0x0170(0x0040) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                       // 0x0210(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UClass*                                      Context;                                                   // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EnvQueryOption
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UEnvQueryTest*>                       Tests;                                                     // 0x0030(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EQSRenderingComponent
// 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_MCGV[0x8];                                     // 0x0588(0x0008) Fix Super Size
	unsigned char                                      UnknownData_SHYL[0x10];                                    // 0x0590(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.EQSTestingPawn
// 0x0068 (FullSize[0x0640] - InheritedSize[0x05D8])
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData_ZENW[0x8];                                     // 0x05D8(0x0008) Fix Super Size
	class UEnvQuery*                                   QueryTemplate;                                             // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x05E8(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                          // 0x05F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StepToDebugDraw;                                           // 0x05FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryHightlightMode>      HighlightMode;                                             // 0x0600(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O50T[0x3];                                     // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDrawLabels : 1;                                           // 0x0604(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDrawFailedItems : 1;                                      // 0x0604(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                         // 0x0604(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x0604(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_2A9I[0x3];                                     // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             QueryingMode;                                              // 0x0608(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PH5Z[0x37];                                    // 0x0609(0x0037) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.CrowdFollowingComponent
// 0x0050 (FullSize[0x0308] - InheritedSize[0x02B8])
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData_BQTY[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CrowdAgentMoveDirection;                                   // 0x02C0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3I95[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 CharacterMovement;                                         // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                            // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                             // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      UnknownData_CCGJ[0x24];                                    // 0x02E4(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}



	void SuspendCrowdSteering(bool bSuspend);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UPawnAction_BlueprintBase : public UPawnAction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}



	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult);
	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction_Move
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FVector                                     GoalLocation;                                              // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	float                                              AcceptableRadius;                                          // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UClass*                                      FilterClass;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected)
	unsigned char                                      bFinishOnOverlap : 1;                                      // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bUsePathfinding : 1;                                       // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bProjectGoalToNavigation : 1;                              // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bUpdatePathToGoal : 1;                                     // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                         // 0x00B0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_OXRQ[0x2F];                                    // 0x00B1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction_Repeat
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2KKY[0xF];                                     // 0x00A1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction_Sequence
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                            // 0x0090(0x0010) (ZeroConstructor)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0KQI[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MXJZ[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnAction_Wait
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DBCO[0xC];                                     // 0x0094(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AIModule.PawnSensingComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LOSHearingThreshold;                                       // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SightRadius;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SensingInterval;                                           // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HearingMaxSoundAge;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bEnableSensingUpdates : 1;                                 // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bOnlySensePlayers : 1;                                     // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSeePawns : 1;                                             // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bHearNoises : 1;                                           // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_8DS9[0xB];                                     // 0x00DD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeePawn;                                                 // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                               // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              PeripheralVisionCosine;                                    // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}



	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
