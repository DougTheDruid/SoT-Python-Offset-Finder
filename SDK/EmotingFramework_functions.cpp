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

void FEmoteId::AfterRead()
{
}

void FEmoteId::BeforeDelete()
{
}

void FEmoteData::AfterRead()
{
}

void FEmoteData::BeforeDelete()
{
}

void FEventEmoteEndRequested::AfterRead()
{
}

void FEventEmoteEndRequested::BeforeDelete()
{
}

void FEventEndEmoteAnimation::AfterRead()
{
}

void FEventEndEmoteAnimation::BeforeDelete()
{
}

void FEventEmoteSwapped::AfterRead()
{
}

void FEventEmoteSwapped::BeforeDelete()
{
}

void FEventEmoteCompleted::AfterRead()
{
}

void FEventEmoteCompleted::BeforeDelete()
{
}

void FEventEmoteStarted::AfterRead()
{
}

void FEventEmoteStarted::BeforeDelete()
{
}

void FEventEmoteRequested::AfterRead()
{
}

void FEventEmoteRequested::BeforeDelete()
{
}

void AEmoteCard::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DynamicCardSelectionMaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
}

void AEmoteCard::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DynamicCardSelectionMaterialInstance);
	DELE_PTR_FULL(MeshComponent);
}

void AEmoteCoin::AfterRead()
{
	AActor::AfterRead();

}

void AEmoteCoin::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UEmoteIdListingAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEmoteIdListingAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEmoteSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UEmoteSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
