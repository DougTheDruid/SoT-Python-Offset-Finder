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

void FStoryInfo::AfterRead()
{
}

void FStoryInfo::BeforeDelete()
{
}

void UStoryServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UStoryServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AStoryService::AfterRead()
{
	AActor::AfterRead();

}

void AStoryService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
