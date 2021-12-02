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

void FCustomPlayerNoteList::AfterRead()
{
}

void FCustomPlayerNoteList::BeforeDelete()
{
}

void FDestroyMysteriousNoteData::AfterRead()
{
}

void FDestroyMysteriousNoteData::BeforeDelete()
{
}

void FCreateMysteriousNoteData::AfterRead()
{
}

void FCreateMysteriousNoteData::BeforeDelete()
{
}

void UCustomMysteriousNotesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomMysteriousNotesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ACustomMysteriousNotesService::AfterRead()
{
	AActor::AfterRead();

}

void ACustomMysteriousNotesService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
