// Name: SoT, Version: 2.3.0.Brig

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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_MediumShipStorageBarrel_Grog_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.GetClosestInteractionPoint");

	ABP_MediumShipStorageBarrel_Grog_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     DesiredTooltipWorldPosition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MediumShipStorageBarrel_Grog_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace");

	ABP_MediumShipStorageBarrel_Grog_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShipStorageBarrel_Grog_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.UserConstructionScript");

	ABP_MediumShipStorageBarrel_Grog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShipStorageBarrel_Grog_C::AfterRead()
{
	AInteractableBase::AfterRead();

	READ_PTR_FULL(TankardRefiller, UTankardRefillerComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_MediumShipStorageBarrel_Grog_C::BeforeDelete()
{
	AInteractableBase::BeforeDelete();

	DELE_PTR_FULL(TankardRefiller);
	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
