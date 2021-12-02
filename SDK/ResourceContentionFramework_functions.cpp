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

void FPoolableCollectionMapConfigurationEntry::AfterRead()
{
}

void FPoolableCollectionMapConfigurationEntry::BeforeDelete()
{
}

void FPoolableCollectionMapConfiguration::AfterRead()
{
}

void FPoolableCollectionMapConfiguration::BeforeDelete()
{
}

void UPoolableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPoolableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
