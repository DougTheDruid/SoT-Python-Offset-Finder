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

void FScalarParamInfo::AfterRead()
{
}

void FScalarParamInfo::BeforeDelete()
{
}

void UStatusResponseApplyOneShotStatus::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseApplyOneShotStatus::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseApplyPersistentStatus::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseApplyPersistentStatus::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseCancelStatus::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseCancelStatus::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseCook::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseCook::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseHealthRegenerationPoolChange::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseHealthRegenerationPoolChange::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseReportNoiseEvent::AfterRead()
{
	UStatusResponse::AfterRead();

	READ_PTR_FULL(NoiseInstigator, UClass);
}

void UStatusResponseReportNoiseEvent::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

	DELE_PTR_FULL(NoiseInstigator);
}

void UStatusResponseSetScalarParamOnCharacter::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseSetScalarParamOnCharacter::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseSuspendStatus::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseSuspendStatus::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
