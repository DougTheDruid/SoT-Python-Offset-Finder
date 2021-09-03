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

void FEmissaryGlobalActionRewardBoostServiceEvent::AfterRead()
{
	READ_PTR_FULL(FinishedEventType, UClass);
}

void FEmissaryGlobalActionRewardBoostServiceEvent::BeforeDelete()
{
	DELE_PTR_FULL(FinishedEventType);
}

void FEmissaryCompanyActionRewardBoostServiceEvent::AfterRead()
{
}

void FEmissaryCompanyActionRewardBoostServiceEvent::BeforeDelete()
{
}

void FEmissaryGlobalActionRewardBoostEvent::AfterRead()
{
	READ_PTR_FULL(GameEventType, UClass);
}

void FEmissaryGlobalActionRewardBoostEvent::BeforeDelete()
{
	DELE_PTR_FULL(GameEventType);
}

void FEmissaryNonQuestCompanyActionRewardBoostEvent::AfterRead()
{
}

void FEmissaryNonQuestCompanyActionRewardBoostEvent::BeforeDelete()
{
}

void FEmissaryQuestCompanyActionRewardBoostEvent::AfterRead()
{
}

void FEmissaryQuestCompanyActionRewardBoostEvent::BeforeDelete()
{
}

void FEmissaryCompanyChangedEvent::AfterRead()
{
}

void FEmissaryCompanyChangedEvent::BeforeDelete()
{
}

void FEmissaryLedgerVisited::AfterRead()
{
}

void FEmissaryLedgerVisited::BeforeDelete()
{
}

void UEmissaryLevelServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEmissaryLevelServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UEmissaryParticipantInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEmissaryParticipantInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
