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

void FSpireInfo::AfterRead()
{
}

void FSpireInfo::BeforeDelete()
{
}

void FServerSpireInfo::AfterRead()
{
	READ_PTR_FULL(SpireActor, AActor);
}

void FServerSpireInfo::BeforeDelete()
{
	DELE_PTR_FULL(SpireActor);
}

void FSpireEntry::AfterRead()
{
}

void FSpireEntry::BeforeDelete()
{
}

void UHeightTriggerableAudioComponentParams::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(Pool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(RisingOneShot, UWwiseEvent);
	READ_PTR_FULL(RisingStart, UWwiseEvent);
	READ_PTR_FULL(RisingStop, UWwiseEvent);
	READ_PTR_FULL(LoweringStart, UWwiseEvent);
	READ_PTR_FULL(LoweringStop, UWwiseEvent);
}

void UHeightTriggerableAudioComponentParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(Pool);
	DELE_PTR_FULL(RisingOneShot);
	DELE_PTR_FULL(RisingStart);
	DELE_PTR_FULL(RisingStop);
	DELE_PTR_FULL(LoweringStart);
	DELE_PTR_FULL(LoweringStop);
}

// Function:
//		Offset -> 0x03B54C80
//		Name   -> Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
//		Flags  -> (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SpireFramework_EDirectionOfMovement>   InMovement                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHeightTriggerableEffectsComponent::SetMovementDirection(TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection");

	UHeightTriggerableEffectsComponent_SetMovementDirection_Params params;
	params.InMovement = InMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UHeightTriggerableEffectsComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AudioParams, UHeightTriggerableAudioComponentParams);
	READ_PTR_FULL(CameraShake, UClass);
}

void UHeightTriggerableEffectsComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AudioParams);
	DELE_PTR_FULL(CameraShake);
}

void ASpireResource::AfterRead()
{
	AActor::AfterRead();

}

void ASpireResource::BeforeDelete()
{
	AActor::BeforeDelete();

}

void USpireServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USpireServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USpireServiceParams::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(OnCancelFakeSpire, UActorSpawnData);
}

void USpireServiceParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(OnCancelFakeSpire);
}

// Function:
//		Offset -> 0x03B54B50
//		Name   -> Function SpireFramework.SpireService.OnRep_SpireLevels
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		TArray<struct FSpireInfo>                          InPreviousSpireLevels                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASpireService::OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpireFramework.SpireService.OnRep_SpireLevels");

	ASpireService_OnRep_SpireLevels_Params params;
	params.InPreviousSpireLevels = InPreviousSpireLevels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ASpireService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Params, USpireServiceParams);
}

void ASpireService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Params);
}

void USpireStreamedLevelDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(StreamedLevel, UAthenaStreamedLevelDataAsset);
}

void USpireStreamedLevelDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(StreamedLevel);
}

void USpireSettingsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USpireSettingsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ASpireShippingDrawDebugActorSphereCollection::AfterRead()
{
	AShippingDebugActorSphereCollection::AfterRead();

}

void ASpireShippingDrawDebugActorSphereCollection::BeforeDelete()
{
	AShippingDebugActorSphereCollection::BeforeDelete();

}

void UTaleLoadSpireStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleLoadSpireStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

// Function:
//		Offset -> 0x03B54C00
//		Name   -> Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InMechanismResetInterface                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTaleSpireService::RegisterResetMechanismInterface(class AActor* InMechanismResetInterface)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface");

	UTaleSpireService_RegisterResetMechanismInterface_Params params;
	params.InMechanismResetInterface = InMechanismResetInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B54B20
//		Name   -> Function SpireFramework.TaleSpireService.IsSpireVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTaleSpireService::IsSpireVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpireFramework.TaleSpireService.IsSpireVisible");

	UTaleSpireService_IsSpireVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleSpireService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleSpireService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UTaleSpireServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleSpireServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleLoadSpireStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleLoadSpireStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleMakeSpireVisibleStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleMakeSpireVisibleStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleMakeSpireVisibleStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleMakeSpireVisibleStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleRegisterSpireStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UTaleRegisterSpireStepDesc);
}

void UTaleRegisterSpireStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UTaleRegisterSpireStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleRegisterSpireStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleReleaseSpireStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleReleaseSpireStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleReleaseSpireStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleReleaseSpireStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleUnloadSpireStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleUnloadSpireStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleUnloadSpireStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleUnloadSpireStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleWaitForSpireToLoadStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleWaitForSpireToLoadStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleWaitForSpireToLoadStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleWaitForSpireToLoadStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
