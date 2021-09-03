#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EditorStyle.EColorVisionDeficiency
enum class EditorStyle_EColorVisionDeficiency : uint8_t
{
	CVD_NormalVision               = 0,
	CVD_Deuteranomly               = 1,
	CVD_Deuteranopia               = 2,
	CVD_Protanomly                 = 3,
	CVD_Protanopia                 = 4,
	CVD_Tritanomaly                = 5,
	CVD_Tritanopia                 = 6,
	CVD_Achromatopsia              = 7,
	CVD_MAX                        = 8,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
