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

void FTetherProjectileImpact::AfterRead()
{
	READ_PTR_FULL(HitActor, AActor);
}

void FTetherProjectileImpact::BeforeDelete()
{
	DELE_PTR_FULL(HitActor);
}

void UCordRenderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCordRenderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCordRenderComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UCordRenderComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x03682B70
//		Name   -> Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             EndPointB                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDynamicCordRenderComponent::SetCordEndPointB(class USceneComponent* EndPointB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointB");

	UDynamicCordRenderComponent_SetCordEndPointB_Params params;
	params.EndPointB = EndPointB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03682AF0
//		Name   -> Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             EndPointA                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDynamicCordRenderComponent::SetCordEndPointA(class USceneComponent* EndPointA)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointA");

	UDynamicCordRenderComponent_SetCordEndPointA_Params params;
	params.EndPointA = EndPointA;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDynamicCordRenderComponent::AfterRead()
{
	UCordRenderComponent::AfterRead();

	READ_PTR_FULL(EndPointA, USceneComponent);
	READ_PTR_FULL(EndPointB, USceneComponent);
}

void UDynamicCordRenderComponent::BeforeDelete()
{
	UCordRenderComponent::BeforeDelete();

	DELE_PTR_FULL(EndPointA);
	DELE_PTR_FULL(EndPointB);
}

void UHarpoonRenderComponent::AfterRead()
{
	UCordRenderComponent::AfterRead();

}

void UHarpoonRenderComponent::BeforeDelete()
{
	UCordRenderComponent::BeforeDelete();

}

void UTetherConstraintInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherConstraintInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDistanceJointComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UDistanceJointComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UShouldTetherInWorldSpaceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UShouldTetherInWorldSpaceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTetherQueriableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherQueriableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTetherCustomisationInterface::AfterRead()
{
	UTetherQueriableInterface::AfterRead();

}

void UTetherCustomisationInterface::BeforeDelete()
{
	UTetherQueriableInterface::BeforeDelete();

}

void UTetherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ATether::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TetherPositionAnchorComponent, USceneComponent);
	READ_PTR_FULL(SourcePhysicsHandle, USphereComponent);
	READ_PTR_FULL(TargetPhysicsHandle, USphereComponent);
	READ_PTR_FULL(JointComponent, UDistanceJointComponent);
	READ_PTR_FULL(SourceActor, AActor);
	READ_PTR_FULL(TargetActor, AActor);
}

void ATether::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TetherPositionAnchorComponent);
	DELE_PTR_FULL(SourcePhysicsHandle);
	DELE_PTR_FULL(TargetPhysicsHandle);
	DELE_PTR_FULL(JointComponent);
	DELE_PTR_FULL(SourceActor);
	DELE_PTR_FULL(TargetActor);
}

void UTetherCustomisationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ComponentToTetherTo, USceneComponent);
}

void UTetherCustomisationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ComponentToTetherTo);
}

void UTetherInWorldSpaceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTetherInWorldSpaceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
