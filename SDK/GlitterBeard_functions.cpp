// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FFinaleReplicationState::AfterRead()
{
	READ_PTR_FULL(TargetEnsemble, UObject);
}

void FFinaleReplicationState::BeforeDelete()
{
	DELE_PTR_FULL(TargetEnsemble);
}

void FUnlockEventData::AfterRead()
{
}

void FUnlockEventData::BeforeDelete()
{
}

void FGlitterBeardVFXTransitionCompletedEvent::AfterRead()
{
}

void FGlitterBeardVFXTransitionCompletedEvent::BeforeDelete()
{
}

void FChangeGlitterBeardVFXStateEvent::AfterRead()
{
}

void FChangeGlitterBeardVFXStateEvent::BeforeDelete()
{
}

void FGlitterbeardPuzzleCancelTelemetryEvent::AfterRead()
{
}

void FGlitterbeardPuzzleCancelTelemetryEvent::BeforeDelete()
{
}

void FGlitterbeardPuzzleUnlockTelemetryEvent::AfterRead()
{
}

void FGlitterbeardPuzzleUnlockTelemetryEvent::BeforeDelete()
{
}

void FGlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent::AfterRead()
{
}

void FGlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent::BeforeDelete()
{
}

void FGlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent::AfterRead()
{
}

void FGlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent::BeforeDelete()
{
}

void FGlitterbeardSessionEndTelemetryEvent::AfterRead()
{
}

void FGlitterbeardSessionEndTelemetryEvent::BeforeDelete()
{
}

void FGlitterbeardSessionBeginTelemetryEvent::AfterRead()
{
}

void FGlitterbeardSessionBeginTelemetryEvent::BeforeDelete()
{
}

void UGlitterBeardEntitlementDesc::AfterRead()
{
	UEntitlementDesc::AfterRead();

}

void UGlitterBeardEntitlementDesc::BeforeDelete()
{
	UEntitlementDesc::BeforeDelete();

}

// Function:
//		Offset -> 0x0393D1C0
//		Name   -> Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
//		Flags  -> (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
//		struct FFinaleReplicationState                     OldState                                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UGlitterBeardFinaleCoordinatorComponent::OnRep_ReplicationState(const struct FFinaleReplicationState& OldState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState");

	UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params params {};
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGlitterBeardFinaleCoordinatorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AudioEventToSynchronise, UWwiseEvent);
}

void UGlitterBeardFinaleCoordinatorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AudioEventToSynchronise);
}

void UGlitterBeardIsHideoutOpenConditional::AfterRead()
{
	UNPCDialogConditional::AfterRead();

}

void UGlitterBeardIsHideoutOpenConditional::BeforeDelete()
{
	UNPCDialogConditional::BeforeDelete();

}

void UGlitterBeardLanternSoundEffect::AfterRead()
{
	UEffectBlendObjectBase::AfterRead();

	READ_PTR_FULL(WWisePool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(WwiseEvent, UWwiseEvent);
}

void UGlitterBeardLanternSoundEffect::BeforeDelete()
{
	UEffectBlendObjectBase::BeforeDelete();

	DELE_PTR_FULL(WWisePool);
	DELE_PTR_FULL(WwiseEvent);
}

void AGlitterbeardSlidingDoor::AfterRead()
{
	ASlidingDoor::AfterRead();

	READ_PTR_FULL(DecalBlendComponent, UEffectBlendControllerComponent);
}

void AGlitterbeardSlidingDoor::BeforeDelete()
{
	ASlidingDoor::BeforeDelete();

	DELE_PTR_FULL(DecalBlendComponent);
}

void UGlitterBeardTelemetryComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UGlitterBeardTelemetryComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UGlitterBeardTrustedTreeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGlitterBeardTrustedTreeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x0393D300
//		Name   -> Function GlitterBeard.GlitterBeardTree.StopVocals
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGlitterBeardTree::StopVocals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopVocals");

	AGlitterBeardTree_StopVocals_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0393D2C0
//		Name   -> Function GlitterBeard.GlitterBeardTree.StopReaction
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGlitterBeardTree::StopReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopReaction");

	AGlitterBeardTree_StopReaction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0393D2A0
//		Name   -> Function GlitterBeard.GlitterBeardTree.StartVocals
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGlitterBeardTree::StartVocals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartVocals");

	AGlitterBeardTree_StartVocals_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0393D260
//		Name   -> Function GlitterBeard.GlitterBeardTree.StartReaction
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGlitterBeardTree::StartReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartReaction");

	AGlitterBeardTree_StartReaction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function GlitterBeard.GlitterBeardTree.Reset_Impl
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGlitterBeardTree::Reset_Impl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.Reset_Impl");

	AGlitterBeardTree_Reset_Impl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGlitterBeardTree::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ActionRulesComponent, UActionRulesComponent);
	READ_PTR_FULL(InteractableComponent, UActionRulesInteractableComponent);
	READ_PTR_FULL(UnlockVFXCoordinatorComponent, UGlitterBeardUnlockVFXCoordinatorComponent);
	READ_PTR_FULL(TelemetryComponent, UGlitterBeardTelemetryComponent);
	READ_PTR_FULL(VocalShanty, UClass);
	READ_PTR_FULL(VocalsFadeEvent, UWwiseEvent);
	READ_PTR_FULL(FinaleCoordinator, UGlitterBeardFinaleCoordinatorComponent);
	READ_PTR_FULL(LandmarkReactionTrigger, ULandmarkReactionTriggerComponent);
	READ_PTR_FULL(HideoutDoor, ASlidingDoor);
}

void AGlitterBeardTree::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ActionRulesComponent);
	DELE_PTR_FULL(InteractableComponent);
	DELE_PTR_FULL(UnlockVFXCoordinatorComponent);
	DELE_PTR_FULL(TelemetryComponent);
	DELE_PTR_FULL(VocalShanty);
	DELE_PTR_FULL(VocalsFadeEvent);
	DELE_PTR_FULL(FinaleCoordinator);
	DELE_PTR_FULL(LandmarkReactionTrigger);
	DELE_PTR_FULL(HideoutDoor);
}

// Function:
//		Offset -> 0x0393D110
//		Name   -> Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
//		Flags  -> (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
//		TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> OldStates                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent(TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> OldStates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent");

	UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params params {};
	params.OldStates = OldStates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGlitterBeardTreeVisualFeedbackComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UGlitterBeardTreeVisualFeedbackComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UGlitterBeardUnlockVFXCoordinatorComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(TreeMaterialInstanceDynamic, UMaterialInstanceDynamic);
}

void UGlitterBeardUnlockVFXCoordinatorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(TreeMaterialInstanceDynamic);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
