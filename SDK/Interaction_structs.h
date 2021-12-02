#pragma once

// Name: SoT, Version: 2.4.0


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

// Enum Interaction.EInteractionBlockReason
enum class Interaction_EInteractionBlockReason : uint8_t
{
	EInteractionBlockReason__None  = 0,
	EInteractionBlockReason__Radial = 1,
	EInteractionBlockReason__Other = 2,
	EInteractionBlockReason__EInteractionBlockReason_MAX = 3,

};

// Enum Interaction.EInteractableIdentifier
enum class Interaction_EInteractableIdentifier : uint8_t
{
	EInteractableIdentifier__None  = 0,
	EInteractableIdentifier__Capstan = 1,
	EInteractableIdentifier__Cannon = 2,
	EInteractableIdentifier__Harpoon = 3,
	EInteractableIdentifier__Sail  = 4,
	EInteractableIdentifier__Wheel = 5,
	EInteractableIdentifier__MAX   = 6,
	EInteractableIdentifier__EInteractableIdentifier_MAX = 7,

};

// Enum Interaction.EInteractionObject
enum class Interaction_EInteractionObject : uint8_t
{
	EInteractionObject__None       = 0,
	EInteractionObject__Shop       = 1,
	EInteractionObject__Chest      = 2,
	EInteractionObject__Barrel     = 3,
	EInteractionObject__EInteractionObject_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Interaction.EventOptimalInteractionObjectChanged
// 0x0010
struct FEventOptimalInteractionObjectChanged
{
	class UObject*                                     PreviousFocusObject;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NewFocusObject;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Interaction.EventInteractionBlockingStateChanged
// 0x0002
struct FEventInteractionBlockingStateChanged
{
	bool                                               IsInteractionBlocked;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Interaction_EInteractionBlockReason>   InteractionBlockReason;                                    // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
