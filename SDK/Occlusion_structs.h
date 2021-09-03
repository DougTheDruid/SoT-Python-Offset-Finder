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

// Enum Occlusion.EOcclusionTypes
enum class Occlusion_EOcclusionTypes : uint8_t
{
	EOcclusionTypes__Visible       = 0,
	EOcclusionTypes__Occluded      = 1,
	EOcclusionTypes__Unknown       = 2,
	EOcclusionTypes__MAX           = 3,
	EOcclusionTypes__EOcclusionTypes_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
