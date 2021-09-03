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

// Enum Tethering.ETetherConstrainMode
enum class Tethering_ETetherConstrainMode : uint8_t
{
	ETetherConstrainMode__ShrinkLength = 0,
	ETetherConstrainMode__ConstantLength = 1,
	ETetherConstrainMode__GrowLength = 2,
	ETetherConstrainMode__ETetherConstrainMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tethering.TetherProjectileImpact
// 0x0008
struct FTetherProjectileImpact
{
	class AActor*                                      HitActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
