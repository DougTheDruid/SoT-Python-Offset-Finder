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

void FQuestVariableTradeRouteData::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableTradeRouteData::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FTradeRouteMapping::AfterRead()
{
	READ_PTR_FULL(DifficultyBand, UClass);
}

void FTradeRouteMapping::BeforeDelete()
{
	DELE_PTR_FULL(DifficultyBand);
}

void UTradeRouteDifficultyBand::AfterRead()
{
	UObject::AfterRead();

}

void UTradeRouteDifficultyBand::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTradeRouteData::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTradeRouteData::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UTaleQuestGetProjectionPointOnTradeRouteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGetProjectionPointOnTradeRouteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGetProjectionPointOnTradeRouteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestGetProjectionPointOnTradeRouteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSelectTradeRouteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestSelectTradeRouteStepDesc);
}

void UTaleQuestSelectTradeRouteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleQuestSelectTradeRouteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSelectTradeRouteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTradeRoutesDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTradeRoutesDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UWorldTradeRouteInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWorldTradeRouteInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
