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

void FGDTCustomViewNames::AfterRead()
{
}

void FGDTCustomViewNames::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03E26630
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayDebuggingComponent::ServerReplicateData(uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData");

	UGameplayDebuggingComponent_ServerReplicateData_Params params {};
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E265E0
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData");

	UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26510
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FVector_NetQuantize10                       TargetLocation                                             (Parm)
void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData");

	UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params {};
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E264F0
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
//		Flags  -> (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh");

	UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E264D0
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
//		Flags  -> (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS");

	UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E264B0
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
//		Flags  -> (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard");

	UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26490
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
//		Flags  -> (Native, Public)
void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData");

	UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26450
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
//		Flags  -> (Native, Public)
void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView");

	UGameplayDebuggingComponent_OnCycleDetailsView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26260
//		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection");

	UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayDebuggingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(TargetActor, AActor);
}

void UGameplayDebuggingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(TargetActor);
}

void AGameplayDebuggingHUDComponent::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Canvas, UCanvas);
	READ_PTR_FULL(PlayerOwner, APlayerController);
}

void AGameplayDebuggingHUDComponent::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Canvas);
	DELE_PTR_FULL(PlayerOwner);
}

void UGameplayDebuggerSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayDebuggerSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayDebuggingControllerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(OnDebugAIHUD, AGameplayDebuggingHUDComponent);
	READ_PTR_FULL(DebugAITargetActor, AActor);
	READ_PTR_FULL(AIDebugViewInputComponent, UInputComponent);
	READ_PTR_FULL(DebugCameraInputComponent, UInputComponent);
}

void UGameplayDebuggingControllerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(OnDebugAIHUD);
	DELE_PTR_FULL(DebugAITargetActor);
	DELE_PTR_FULL(AIDebugViewInputComponent);
	DELE_PTR_FULL(DebugCameraInputComponent);
}

void AGaneplayDebuggerProxyHUD::AfterRead()
{
	AHUD::AfterRead();

}

void AGaneplayDebuggerProxyHUD::BeforeDelete()
{
	AHUD::BeforeDelete();

}

// Function:
//		Offset -> 0x03E26820
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug");

	AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params {};
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E266F0
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage");

	AGameplayDebuggingReplicator_ServerReplicateMessage_Params params {};
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26470
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
//		Flags  -> (Native, Public)
void AGameplayDebuggingReplicator::OnRep_AutoActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate");

	AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26320
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage");

	AGameplayDebuggingReplicator_ClientReplicateMessage_Params params {};
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26160
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class APlayerController*                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection");

	AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params {};
	params.bEnable = bEnable;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26140
//		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate");

	AGameplayDebuggingReplicator_ClientAutoActivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGameplayDebuggingReplicator::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DebugComponent, UGameplayDebuggingComponent);
	READ_PTR_FULL(LocalPlayerOwner, APlayerController);
	READ_PTR_FULL(LastSelectedActorToDebug, AActor);
}

void AGameplayDebuggingReplicator::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DebugComponent);
	DELE_PTR_FULL(LocalPlayerOwner);
	DELE_PTR_FULL(LastSelectedActorToDebug);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
