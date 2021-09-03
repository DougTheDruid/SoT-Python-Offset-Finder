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

void UIsExcludedFromSeasonProgressionStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UIsExcludedFromSeasonProgressionStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UPlayerSeasonProgressionComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPlayerSeasonProgressionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
