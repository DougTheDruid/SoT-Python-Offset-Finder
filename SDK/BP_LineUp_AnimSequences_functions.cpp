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

void FBP_LineUp_AnimSequences::AfterRead()
{
	READ_PTR_FULL(Idle_20_D6E79A8941796EB29DEB6D8F72BDBE18, UAnimSequence);
	READ_PTR_FULL(IntoHighlight_25_9F89CE1547E363203FDA03AE8E890EFB, UAnimSequence);
	READ_PTR_FULL(Highlight_26_4A9C91434CA251FF43480E9BEE08E1AA, UAnimSequence);
	READ_PTR_FULL(OutOfHighlight_27_6DC51007467FDD2221BED1B4FB14050D, UAnimSequence);
	READ_PTR_FULL(Select_28_81E03000493A6D31134D1D899E4E579E, UAnimSequence);
	READ_PTR_FULL(ShipSelect_34_6872D3C44673A46E3A6D4CABEB8428EC, UAnimSequence);
}

void FBP_LineUp_AnimSequences::BeforeDelete()
{
	DELE_PTR_FULL(Idle_20_D6E79A8941796EB29DEB6D8F72BDBE18);
	DELE_PTR_FULL(IntoHighlight_25_9F89CE1547E363203FDA03AE8E890EFB);
	DELE_PTR_FULL(Highlight_26_4A9C91434CA251FF43480E9BEE08E1AA);
	DELE_PTR_FULL(OutOfHighlight_27_6DC51007467FDD2221BED1B4FB14050D);
	DELE_PTR_FULL(Select_28_81E03000493A6D31134D1D899E4E579E);
	DELE_PTR_FULL(ShipSelect_34_6872D3C44673A46E3A6D4CABEB8428EC);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
