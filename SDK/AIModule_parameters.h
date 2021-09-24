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
// Parameters
//---------------------------------------------------------------------------

// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
	class AActor*                                      SelfActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // 0x001C(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<AIModule_EPathFollowingAction>         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                 // 0x0000(0x0004)  (Parm)
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUnlockMovement;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UnlockAILogic;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PawnClass;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bNoCollisionFail;                                          // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
	class APawn*                                       Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Message;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     MessageSource;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSuccess;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockMovement;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LockAILogic;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	struct FVector                                     DirectionVector;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
	class AActor*                                      ControlledActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      TargetActor;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AcceptanceRadius;                                          // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopOnOverlap;                                            // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAIAsyncTaskBlueprintProxy*                  ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
	class UPawnAction*                                 NewAction;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EAIRequestPriority>           Priority;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Instigator;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                                 Action;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EAIRequestPriority>           Priority;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EPawnActionAbortState>        ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EPawnActionAbortState>        ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        BlackboardComponent;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.OnPossess
struct AAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                              // 0x0000(0x0002)  (Parm)
	struct FGameplayResourceSet                        FreshlyReleased;                                           // 0x0002(0x0002)  (Parm)
};

// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              AcceptanceRadius;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopOnOverlap;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               bUsePathfinding;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bProjectDestinationToNavigation;                           // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCanStrafe;                                                // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UClass*                                      FilterClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bAllowPartialPath;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<AIModule_EPathFollowingRequestResult>  ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AcceptanceRadius;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopOnOverlap;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               bUsePathfinding;                                           // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCanStrafe;                                                // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UClass*                                      FilterClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bAllowPartialPath;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<AIModule_EPathFollowingRequestResult>  ReturnValue;                                               // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.K2_ClearFocus
struct AAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
	TEnumAsByte<AIModule_EPathFollowingStatus>         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISenseEvent*                               PerceptionEvent;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
	class UAISenseEvent*                               PerceptionEvent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Sense;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // 0x0008(0x003C)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
struct UAIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionComponent.IsIgnored
struct UAIPerceptionComponent_IsIgnored_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class AActor*>                              OutActors;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                              OutActors;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorPerceptionBlueprintInfo               Info;                                                      // 0x0008(0x0020)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<class UAISenseEvent*>                       EventsToProcess;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
	class AActor*                                      ActorListener;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	class AActor*                                      ActorListener;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
	class AActor*                                      ActorListener;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	class APawn*                                       NewPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAIPerceptionComponent*>              ListenerComponents;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class AActor*>                              ListenerActors;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamagedActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Instigator;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmount;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EventLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NoiseLocation;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Loudness;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Instigator;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRange;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tag;                                                       // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	class APawn*                                       Requestor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PredictedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PredictionTime;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	class AAIController*                               Requestor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PredictedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PredictionTime;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
	class AAIController*                               Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     GoalLocation;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      GoalActor;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AcceptanceRadius;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EAIOptionFlag>                StopOnOverlap;                                             // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EAIOptionFlag>                AcceptPartialPath;                                         // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bUsePathfinding;                                           // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               bLockAILogic;                                              // 0x0027(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAITask_MoveTo*                              ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIModule.BrainComponent.RestartLogic
struct UBrainComponent_RestartLogic_Params
{
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FGameplayTag                                InjectTag;                                                 // 0x0000(0x0008)  (Parm)
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FGameplayTag                                CooldownTag;                                               // 0x0000(0x0008)  (Parm)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FGameplayTag                                CooldownTag;                                               // 0x0000(0x0008)  (Parm)
	float                                              CoolDownDuration;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAddToExistingDuration;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     VectorValue;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     StringValue;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    VectorValue;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ObjectValue;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NameValue;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      EnumValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClassValue;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ResultRotation;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ResultLocation;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BlackboardComponent.ClearValueAsVector
struct UBlackboardComponent_ClearValueAsVector_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.ClearValueAsRotator
struct UBlackboardComponent_ClearValueAsRotator_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwningActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Value;                                                     // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Value;                                                     // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    Value;                                                     // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Value;                                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Value;                                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      Value;                                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Value;                                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Value;                                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTreeComponent*                      ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                               // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                               // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EBTNodeResult>                NodeResult;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EBTNodeResult>                NodeResult;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
{
	bool                                               bAllowExecution;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UBTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<AIModule_EAIRequestPriority>           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
	TEnumAsByte<AIModule_EPawnActionResult>            WithResult;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActionClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPawnAction*                                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	class AActor*                                      QuerierActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ResultingLocation;                                         // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	class AActor*                                      QuerierActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ResultingActor;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	class AActor*                                      QuerierActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             ResultingLocationSet;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	class AActor*                                      QuerierActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ResultingActorsSet;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryStatus>              QueryStatus;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Querier;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WrapperClass;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct FVector>                             ContextLocations;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct FVector                                     GeneratedVector;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class AActor*                                      GeneratedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
	class APawn*                                       ControlledPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
	class APawn*                                       ControlledPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
	class APawn*                                       ControlledPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
	class APawn*                                       ControlledPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
	class APawn*                                       ControlledPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EPawnActionResult>            WithResult;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Volume;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
