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

void FWaterSlideParams::AfterRead()
{
	READ_PTR_FULL(PlayerSplashingVFXOverride, UParticleSystem);
}

void FWaterSlideParams::BeforeDelete()
{
	DELE_PTR_FULL(PlayerSplashingVFXOverride);
}

void FWaterSlideActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void FWaterSlideActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
}

void FWaterSlideActionStateParams::AfterRead()
{
}

void FWaterSlideActionStateParams::BeforeDelete()
{
}

void FOnPlayerSpeedOnWaterSlideChangedActionStateEvent::AfterRead()
{
}

void FOnPlayerSpeedOnWaterSlideChangedActionStateEvent::BeforeDelete()
{
}

void FOnPlayerChangedWaterSlideRouteActionStateEvent::AfterRead()
{
	READ_PTR_FULL(WaterSlideChangeForkOneShot, UWwiseEvent);
}

void FOnPlayerChangedWaterSlideRouteActionStateEvent::BeforeDelete()
{
	DELE_PTR_FULL(WaterSlideChangeForkOneShot);
}

void FOnEndWaterSlideActionStateEvent::AfterRead()
{
	READ_PTR_FULL(WaterSlideEnd, UWwiseEvent);
	READ_PTR_FULL(WaterSlideIsEndOneShot, UWwiseEvent);
}

void FOnEndWaterSlideActionStateEvent::BeforeDelete()
{
	DELE_PTR_FULL(WaterSlideEnd);
	DELE_PTR_FULL(WaterSlideIsEndOneShot);
}

void FOnStartWaterSlideActionStateEvent::AfterRead()
{
	READ_PTR_FULL(WaterSlideStart, UWwiseEvent);
	READ_PTR_FULL(WaterSlideVfxOverride, UParticleSystem);
}

void FOnStartWaterSlideActionStateEvent::BeforeDelete()
{
	DELE_PTR_FULL(WaterSlideStart);
	DELE_PTR_FULL(WaterSlideVfxOverride);
}

void FOnExitedWaterSlideEvent::AfterRead()
{
}

void FOnExitedWaterSlideEvent::BeforeDelete()
{
}

void UWaterSlideParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWaterSlideParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x03E790A0
//		Name   -> Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         InEntranceCollisionComponent                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent");

	AWaterSlide_SetEntranceCollisionComponent_Params params {};
	params.InEntranceCollisionComponent = InEntranceCollisionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E78ED0
//		Name   -> Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class AActor*                                      InOtherActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InOtherComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InFromSweep                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWaterSlide::ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack");

	AWaterSlide_ComponentBeginOverlapCallBack_Params params {};
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWaterSlide::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SlideSpline, USplineComponent);
	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(WaterSlideParamsDataAsset, UWaterSlideParamsDataAsset);
	READ_PTR_FULL(EntranceCollisionComponent, UPrimitiveComponent);
	READ_PTR_FULL(ContinuedWaterSlideRoute, AWaterSlide);
	READ_PTR_FULL(LeftWaterSlideRoute, AWaterSlide);
	READ_PTR_FULL(RightWaterSlideRoute, AWaterSlide);
	READ_PTR_FULL(WaterSlideAudioParams, UWaterSlideAudioParams);
}

void AWaterSlide::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SlideSpline);
	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(WaterSlideParamsDataAsset);
	DELE_PTR_FULL(EntranceCollisionComponent);
	DELE_PTR_FULL(ContinuedWaterSlideRoute);
	DELE_PTR_FULL(LeftWaterSlideRoute);
	DELE_PTR_FULL(RightWaterSlideRoute);
	DELE_PTR_FULL(WaterSlideAudioParams);
}

void UWaterSlideActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UWaterSlideActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UWaterSlideAudioParams::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(WaterSlideStart, UWwiseEvent);
	READ_PTR_FULL(WaterSlideEnd, UWwiseEvent);
	READ_PTR_FULL(WaterSlideIsEndOneShot, UWwiseEvent);
	READ_PTR_FULL(WaterSlideChangeForkOneShot, UWwiseEvent);
}

void UWaterSlideAudioParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(WaterSlideStart);
	DELE_PTR_FULL(WaterSlideEnd);
	DELE_PTR_FULL(WaterSlideIsEndOneShot);
	DELE_PTR_FULL(WaterSlideChangeForkOneShot);
}

void UWaterSlideInputComponent::AfterRead()
{
	ULookAtOffsetInputComponent::AfterRead();

}

void UWaterSlideInputComponent::BeforeDelete()
{
	ULookAtOffsetInputComponent::BeforeDelete();

}

void UWaterSlidePlayerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterSlidePlayerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWaterSlidePlayerComponent::AfterRead()
{
	UDoubleIntentComponent::AfterRead();

	READ_PTR_FULL(PlayerWaterSlideSplashingVFXComponent, UParticleSystemComponent);
	READ_PTR_FULL(PlayerWaterSlideSplashingVFX, UParticleSystem);
	READ_PTR_FULL(CurrentWaterSlide, AWaterSlide);
}

void UWaterSlidePlayerComponent::BeforeDelete()
{
	UDoubleIntentComponent::BeforeDelete();

	DELE_PTR_FULL(PlayerWaterSlideSplashingVFXComponent);
	DELE_PTR_FULL(PlayerWaterSlideSplashingVFX);
	DELE_PTR_FULL(CurrentWaterSlide);
}

void UWaterSlideVeeringAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UWaterSlideVeeringAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
