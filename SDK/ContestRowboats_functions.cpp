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

void FEventRowboatAddedToContestCrewRequiresLiveryData::AfterRead()
{
}

void FEventRowboatAddedToContestCrewRequiresLiveryData::BeforeDelete()
{
}

void UContestRowboatsServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UContestRowboatsServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AContestRowboatsService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RowboatClass, UClass);
}

void AContestRowboatsService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RowboatClass);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
