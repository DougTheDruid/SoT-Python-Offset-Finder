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

void UCustomWeatherServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomWeatherServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCustomWeatherService::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(World, UWorld);
}

void UCustomWeatherService::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(World);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
