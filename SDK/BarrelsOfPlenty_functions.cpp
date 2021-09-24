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

void FBarrelsOfPlentyDebugLocationEntry::AfterRead()
{
}

void FBarrelsOfPlentyDebugLocationEntry::BeforeDelete()
{
}

void ABarrelsOfPlentyDebugSpawnLocation::AfterRead()
{
	AActor::AfterRead();

}

void ABarrelsOfPlentyDebugSpawnLocation::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ABarrelsOfPlentySpawnProxy::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Ship, AShip);
	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void ABarrelsOfPlentySpawnProxy::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Ship);
	DELE_PTR_FULL(SceneComponent);
}

void USpawnBarrelsOfPlentyStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, USpawnBarrelsOfPlentyStepDesc);
}

void USpawnBarrelsOfPlentyStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void USpawnBarrelsOfPlentyStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void USpawnBarrelsOfPlentyStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
