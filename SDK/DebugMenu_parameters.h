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
// Parameters
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
struct UDebugMenuTestFunctions_IsDebugMenuReady_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
struct UDebugMenuTestFunctions_IsDebugMenuOpen_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
struct UDebugMenuTestFunctions_IsDebugMenuAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
