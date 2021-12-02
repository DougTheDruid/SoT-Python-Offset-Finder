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

void UEntityEnumerationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEntityEnumerationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UEntityEnumerationService::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(World, UWorld);
}

void UEntityEnumerationService::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(World);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
