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

void FDestroyActorData::AfterRead()
{
}

void FDestroyActorData::BeforeDelete()
{
}

void FDestroyAllExistingActorsByClassData::AfterRead()
{
}

void FDestroyAllExistingActorsByClassData::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03E39E80
//		Name   -> Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		TArray<class UClass*>                              ClassesToDestroy                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
void URemoteActorDestructionInterface::DestroyExistingActors(TArray<class UClass*> ClassesToDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors");

	URemoteActorDestructionInterface_DestroyExistingActors_Params params {};
	params.ClassesToDestroy = ClassesToDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E39DF0
//		Name   -> Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FDestroyActorData                           DestroyActorData                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void URemoteActorDestructionInterface::DestroyActor(const struct FDestroyActorData& DestroyActorData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor");

	URemoteActorDestructionInterface_DestroyActor_Params params {};
	params.DestroyActorData = DestroyActorData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URemoteActorDestructionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URemoteActorDestructionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ARemoteActorDestructionService::AfterRead()
{
	AActor::AfterRead();

}

void ARemoteActorDestructionService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
