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

void FPlayerTrackedObjective::AfterRead()
{
}

void FPlayerTrackedObjective::BeforeDelete()
{
}

void FSeasonReward::AfterRead()
{
}

void FSeasonReward::BeforeDelete()
{
}

void FSeasonServiceDataUpdatedEvent::AfterRead()
{
}

void FSeasonServiceDataUpdatedEvent::BeforeDelete()
{
}

void FSeasonRewardEarnedEvent::AfterRead()
{
}

void FSeasonRewardEarnedEvent::BeforeDelete()
{
}

void FLevelCompletionEvent::AfterRead()
{
}

void FLevelCompletionEvent::BeforeDelete()
{
}

void FLevelProgressionEvent::AfterRead()
{
}

void FLevelProgressionEvent::BeforeDelete()
{
}

void FSeasonGoalCompletionEvent::AfterRead()
{
}

void FSeasonGoalCompletionEvent::BeforeDelete()
{
}

void FSeasonGoalProgressionEvent::AfterRead()
{
}

void FSeasonGoalProgressionEvent::BeforeDelete()
{
}

void FTrackedObjectiveCompletionMessage::AfterRead()
{
}

void FTrackedObjectiveCompletionMessage::BeforeDelete()
{
}

void FTrackedObjectiveProgressUpdateMessage::AfterRead()
{
}

void FTrackedObjectiveProgressUpdateMessage::BeforeDelete()
{
}

void FTrackedObjectiveEvent::AfterRead()
{
}

void FTrackedObjectiveEvent::BeforeDelete()
{
}

void USeasonProgressionExclusionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USeasonProgressionExclusionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USeasonProgressionExclusionComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void USeasonProgressionExclusionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
