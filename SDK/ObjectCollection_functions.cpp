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

void UObjectCollectorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UObjectCollectorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTestCollector::AfterRead()
{
	UObject::AfterRead();

}

void UTestCollector::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTestObjectForCollection::AfterRead()
{
	UObject::AfterRead();

}

void UTestObjectForCollection::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
