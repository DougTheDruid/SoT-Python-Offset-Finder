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

void AVeilOfTheAncients::AfterRead()
{
	AInteractableBase::AfterRead();

	READ_PTR_FULL(LockComponent, ULockComponent);
	READ_PTR_FULL(StaticMeshComponent, UStaticMeshComponent);
}

void AVeilOfTheAncients::BeforeDelete()
{
	AInteractableBase::BeforeDelete();

	DELE_PTR_FULL(LockComponent);
	DELE_PTR_FULL(StaticMeshComponent);
}

void UVeilService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(World, UWorld);
	READ_PTR_FULL(GameState, AGameState);
	READ_PTR_FULL(TrackedVeil, AVeilOfTheAncients);
	READ_PTR_FULL(Ship, AShip);
}

void UVeilService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(World);
	DELE_PTR_FULL(GameState);
	DELE_PTR_FULL(TrackedVeil);
	DELE_PTR_FULL(Ship);
}

void UGetVeilOfTheAncientsStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UGetVeilOfTheAncientsStepDesc);
}

void UGetVeilOfTheAncientsStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UVeilOfTheAncientsServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UVeilOfTheAncientsServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UGetVeilOfTheAncientsStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UGetVeilOfTheAncientsStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
