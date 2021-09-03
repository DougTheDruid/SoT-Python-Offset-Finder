// Name: SoT, Version: 2.2.1.1

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

void UOcclusionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UOcclusionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOcclusionService::OnPrimaryActorEndPlay(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnPrimaryActorEndPlay");

	UOcclusionService_OnPrimaryActorEndPlay_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOcclusionService::OnIgnoredActorEndPlay(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnIgnoredActorEndPlay");

	UOcclusionService_OnIgnoredActorEndPlay_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOcclusionService::AfterRead()
{
	UObject::AfterRead();

}

void UOcclusionService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
