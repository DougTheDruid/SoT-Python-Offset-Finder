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

// Function:
//		Offset -> 0x03511920
//		Name   -> Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AShortRangeMarker::Multicast_OnCleanUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp");

	AShortRangeMarker_Multicast_OnCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AShortRangeMarker::AfterRead()
{
	AActor::AfterRead();

}

void AShortRangeMarker::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UShortRangeMarkerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UShortRangeMarkerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03511940
//		Name   -> Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      InMarker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              InActors                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UShortRangeMarkerBlueprintFunctionLibrary::STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker");

	UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InMarker = InMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InActors != nullptr)
		*InActors = params.InActors;

}


void UShortRangeMarkerBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UShortRangeMarkerBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UShortRangeMarkerDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(RewardMarker, UActorSpawnData);
}

void UShortRangeMarkerDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(RewardMarker);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
