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

void FDebugTeleportDestinationEntry::AfterRead()
{
}

void FDebugTeleportDestinationEntry::BeforeDelete()
{
}

void UDebugTeleportationLookupInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDebugTeleportationLookupInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDebugTeleportationPresentationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDebugTeleportationPresentationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDebugTeleportationRegistrationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDebugTeleportationRegistrationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ADebugTeleportationDestinationService::AfterRead()
{
	AActor::AfterRead();

}

void ADebugTeleportationDestinationService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
