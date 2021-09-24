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

void UCursor_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_158, UImage);
}

void UCursor_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_158);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
