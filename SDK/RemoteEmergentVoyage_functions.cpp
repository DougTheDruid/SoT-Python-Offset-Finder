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

void FGiveEmergentVoyageData::AfterRead()
{
}

void FGiveEmergentVoyageData::BeforeDelete()
{
}

void URemoteEmergentVoyageInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URemoteEmergentVoyageInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URemoteEmergentVoyageService::AfterRead()
{
	UObject::AfterRead();

}

void URemoteEmergentVoyageService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
