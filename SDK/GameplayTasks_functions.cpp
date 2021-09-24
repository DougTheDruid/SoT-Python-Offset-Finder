// Name: SoT, Version: 2.3.0

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

void FGameplayResourceSet::AfterRead()
{
}

void FGameplayResourceSet::BeforeDelete()
{
}

void UGameplayTaskOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameplayTaskOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x02066060
//		Name   -> Function GameplayTasks.GameplayTask.ReadyForActivation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameplayTask::ReadyForActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	UGameplayTask_ReadyForActivation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02065CF0
//		Name   -> Function GameplayTasks.GameplayTask.EndTask
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameplayTask::EndTask()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	UGameplayTask_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayTask::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTask::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x02066080
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    SpawnRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               bSpawnOnlyOnAuthority                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
//		class UGameplayTask_SpawnActor*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::STATIC_SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	UGameplayTask_SpawnActor_SpawnActor_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02065D10
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	UGameplayTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02065C10
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	UGameplayTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


void UGameplayTask_SpawnActor::AfterRead()
{
	UGameplayTask::AfterRead();

	READ_PTR_FULL(ClassToSpawn, UClass);
}

void UGameplayTask_SpawnActor::BeforeDelete()
{
	UGameplayTask::BeforeDelete();

	DELE_PTR_FULL(ClassToSpawn);
}

// Function:
//		Offset -> 0x02066230
//		Name   -> Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGameplayTask_WaitDelay*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::STATIC_TaskWaitDelay(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	UGameplayTask_WaitDelay_TaskWaitDelay_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayTask_WaitDelay::AfterRead()
{
	UGameplayTask::AfterRead();

}

void UGameplayTask_WaitDelay::BeforeDelete()
{
	UGameplayTask::BeforeDelete();

}

void UGameplayTaskResource::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTaskResource::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x02066040
//		Name   -> Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
//		Flags  -> (Final, Native, Public)
void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	UGameplayTasksComponent_OnRep_SimulatedTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02065DE0
//		Name   -> Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGameplayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UClass*>                              AdditionalRequiredResources                                (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper)
//		TArray<class UClass*>                              AdditionalClaimedResources                                 (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper)
//		TEnumAsByte<GameplayTasks_EGameplayTaskRunResult>  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<GameplayTasks_EGameplayTaskRunResult> UGameplayTasksComponent::STATIC_K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	UGameplayTasksComponent_K2_RunGameplayTask_Params params;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameplayTasksComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UGameplayTasksComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
