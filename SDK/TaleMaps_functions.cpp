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

void FTaleQuestVariableMapMarkType::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FTaleQuestVariableMapMarkType::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void UAddMarkToTornMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(MapMark, UClass);
}

void UAddMarkToTornMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(MapMark);
}

void UAddMarkToTornMapStepDescBase::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UAddMarkToTornMapStepDescBase::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UAddMarkToTornMapAtLocationStepDesc::AfterRead()
{
	UAddMarkToTornMapStepDescBase::AfterRead();

}

void UAddMarkToTornMapAtLocationStepDesc::BeforeDelete()
{
	UAddMarkToTornMapStepDescBase::BeforeDelete();

}

void UAddMarkToTornMapAtActorLocationStepDesc::AfterRead()
{
	UAddMarkToTornMapStepDescBase::AfterRead();

}

void UAddMarkToTornMapAtActorLocationStepDesc::BeforeDelete()
{
	UAddMarkToTornMapStepDescBase::BeforeDelete();

}

void UGetNumberOfCollectedTornMapPiecesStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UGetNumberOfCollectedTornMapPiecesStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UGetNumberOfCollectedTornMapPiecesStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UGetNumberOfCollectedTornMapPiecesStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void URegionIslandSelectionStrategyBase::AfterRead()
{
	UObject::AfterRead();

}

void URegionIslandSelectionStrategyBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void URegionIslandFilteredSelectionStrategy::AfterRead()
{
	URegionIslandSelectionStrategyBase::AfterRead();

}

void URegionIslandFilteredSelectionStrategy::BeforeDelete()
{
	URegionIslandSelectionStrategyBase::BeforeDelete();

}

void URegionIslandRandomSelectionStrategy::AfterRead()
{
	URegionIslandSelectionStrategyBase::AfterRead();

}

void URegionIslandRandomSelectionStrategy::BeforeDelete()
{
	URegionIslandSelectionStrategyBase::BeforeDelete();

}

void USelectIslandsFromRegionStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(RegionData, URegionMapDataAsset);
	READ_PTR_FULL(SelectionStrategy, URegionIslandSelectionStrategyBase);
}

void USelectIslandsFromRegionStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(RegionData);
	DELE_PTR_FULL(SelectionStrategy);
}

void USelectIslandsFromRegionStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SelectionStrategy, URegionIslandSelectionStrategyBase);
}

void USelectIslandsFromRegionStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SelectionStrategy);
}

void UTaleQuestAddLocationMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddLocationMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddTornMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddTornMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddTradeRouteMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddTradeRouteMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestLocationMapChestFoundStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestLocationMapChestFoundStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestMapStepDescBase::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestMapStepDescBase::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestAddLocationMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAddLocationMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestAddTornMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAddTornMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestAddTradeRouteMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

	READ_PTR_FULL(ClueSiteToMapMarkIdMap, UClueSiteTypeToMapMarkIdDataAsset);
}

void UTaleQuestAddTradeRouteMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

	DELE_PTR_FULL(ClueSiteToMapMarkIdMap);
}

void UTaleQuestLocationMapChestFoundStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestLocationMapChestFoundStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
