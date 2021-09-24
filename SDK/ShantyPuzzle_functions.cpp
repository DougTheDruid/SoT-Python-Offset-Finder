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

void FShantyPuzzleInteractionZoneDefinition::AfterRead()
{
}

void FShantyPuzzleInteractionZoneDefinition::BeforeDelete()
{
}

void FShantyPuzzleUnlockCanceledEvent::AfterRead()
{
}

void FShantyPuzzleUnlockCanceledEvent::BeforeDelete()
{
}

void FShantyPuzzleSingleInteractionZoneStopInteractingEvent::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FShantyPuzzleSingleInteractionZoneStopInteractingEvent::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FShantyPuzzleSingleInteractionZoneUnlockEvent::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FShantyPuzzleSingleInteractionZoneUnlockEvent::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FShantyPuzzlePlayerExitInteractionZoneEvent::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FShantyPuzzlePlayerExitInteractionZoneEvent::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FShantyPuzzlePlayerEnterInteractionZoneEvent::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FShantyPuzzlePlayerEnterInteractionZoneEvent::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FShantyPuzzleUnlockedCompleteEvent::AfterRead()
{
}

void FShantyPuzzleUnlockedCompleteEvent::BeforeDelete()
{
}

void UShantyPuzzleInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UShantyPuzzleInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03A3D700
//		Name   -> Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShantyPuzzleComponent::OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap");

	UShantyPuzzleComponent_OnEndOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A3D530
//		Name   -> Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UShantyPuzzleComponent::OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap");

	UShantyPuzzleComponent_OnBeginOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UShantyPuzzleComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(RequiredShantyItemDesc, UClass);
	READ_PTR_FULL(CurrentlyPlayingShantyPuzzleEnsemble, AEnsemble);
}

void UShantyPuzzleComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(RequiredShantyItemDesc);
	DELE_PTR_FULL(CurrentlyPlayingShantyPuzzleEnsemble);
}

void UShantyPuzzleInteractionZoneComponent::AfterRead()
{
	USphereComponent::AfterRead();

}

void UShantyPuzzleInteractionZoneComponent::BeforeDelete()
{
	USphereComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
