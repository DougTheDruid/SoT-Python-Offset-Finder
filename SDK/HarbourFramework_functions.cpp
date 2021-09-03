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

void UHarbourInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHarbourInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UHarbourComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UHarbourComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UHarbourServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHarbourServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UHarbourService::AfterRead()
{
	UObject::AfterRead();

}

void UHarbourService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
