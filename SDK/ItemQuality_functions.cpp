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

void FPerComanyItemQualityEntry::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
}

void FPerComanyItemQualityEntry::BeforeDelete()
{
	DELE_PTR_FULL(Company);
}

void FComplexItemQualityEntry::AfterRead()
{
}

void FComplexItemQualityEntry::BeforeDelete()
{
}

void FPerComanyComplexItemQualityEntry::AfterRead()
{
	READ_PTR_FULL(Company, UClass);
}

void FPerComanyComplexItemQualityEntry::BeforeDelete()
{
	DELE_PTR_FULL(Company);
}

void UItemQualityInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UItemQualityInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UItemQualityComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UItemQualityComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
