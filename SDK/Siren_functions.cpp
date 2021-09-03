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

void USirenTeleportAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void USirenTeleportAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UDistantIdleAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void UDistantIdleAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void UDistantIdleAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

}

void UDistantIdleAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

}

void UDistantIdleAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UDistantIdleAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UScratchAIAbility::AfterRead()
{
	UMeleeAIAbility::AfterRead();

}

void UScratchAIAbility::BeforeDelete()
{
	UMeleeAIAbility::BeforeDelete();

}

void UScratchAIAbilityParams::AfterRead()
{
	UMeleeAIAbilityParams::AfterRead();

}

void UScratchAIAbilityParams::BeforeDelete()
{
	UMeleeAIAbilityParams::BeforeDelete();

}

void UScratchAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UScratchAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void USirenCalmHealStrategyId::AfterRead()
{
	UAIStrategyId::AfterRead();

}

void USirenCalmHealStrategyId::BeforeDelete()
{
	UAIStrategyId::BeforeDelete();

}

void ASirenController::AfterRead()
{
	AAthenaSwimmingAIController::AfterRead();

}

void ASirenController::BeforeDelete()
{
	AAthenaSwimmingAIController::BeforeDelete();

}

void USirenEmeraldHealStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void USirenEmeraldHealStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void USirenPartsDesc::AfterRead()
{
	UMeshMemoryConstraintsAIPartsDesc::AfterRead();

	READ_PTR_FULL(AnimationID, UClass);
}

void USirenPartsDesc::BeforeDelete()
{
	UMeshMemoryConstraintsAIPartsDesc::BeforeDelete();

	DELE_PTR_FULL(AnimationID);
}

void USirenRubyHealStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void USirenRubyHealStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void USirenSapphireHealStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void USirenSapphireHealStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void USirenScratchRespiteStrategyId::AfterRead()
{
	UAIStrategyId::AfterRead();

}

void USirenScratchRespiteStrategyId::BeforeDelete()
{
	UAIStrategyId::BeforeDelete();

}

void USirenScratchStrategyId::AfterRead()
{
	UAIStrategyId::AfterRead();

}

void USirenScratchStrategyId::BeforeDelete()
{
	UAIStrategyId::BeforeDelete();

}

void USirenSongAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void USirenSongAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void USirenSongAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

}

void USirenSongAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

}

void USirenSongAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void USirenSongAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void USirenTeleportAIAbility::AfterRead()
{
	UTeleportAIAbility::AfterRead();

}

void USirenTeleportAIAbility::BeforeDelete()
{
	UTeleportAIAbility::BeforeDelete();

}

void USirenTeleportAIAbilityParams::AfterRead()
{
	UTeleportAIAbilityParams::AfterRead();

}

void USirenTeleportAIAbilityParams::BeforeDelete()
{
	UTeleportAIAbilityParams::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
