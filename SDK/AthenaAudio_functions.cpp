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

void UAthenaAudioConfig::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ItemProxyPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(AnimNotifyPool, UWwiseObjectPoolWrapper);
}

void UAthenaAudioConfig::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ItemProxyPool);
	DELE_PTR_FULL(AnimNotifyPool);
}

void UAthenaAudioModuleSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UAthenaAudioModuleSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
