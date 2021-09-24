#pragma once

// Name: SoT, Version: 2.3.0


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

// Enum InputCore.ETouchIndex
enum class InputCore_ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__ETouchIndex_MAX   = 10,

};

// Enum InputCore.ETouchType
enum class InputCore_ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__Ended              = 3,
	ETouchType__NumTypes           = 4,
	ETouchType__ETouchType_MAX     = 5,

};

// Enum InputCore.EConsoleForGamepadLabels
enum class InputCore_EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3,

};

// Enum InputCore.EControllerHand
enum class InputCore_EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__EControllerHand_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0020
struct FKey
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L1ZV[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
