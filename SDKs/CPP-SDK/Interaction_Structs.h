#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x2
struct EventInteractionBlockingStateChanged
{
public:
	bool                                                         IsInteractionBlocked;                              // 0x0(0x1)
	char                                                         InteractionBlockReason;                            // 0x1(0x1)
};


// Size 0x48
struct IsNewInteractingPlayerCondition
{
public:
	struct ConditionContextPayloadSelectorInstance               PlayerPayloadSelector;                             // 0x8(0x20)
	struct ConditionContextPayloadSelectorInstance               InteractablePayloadSelector;                       // 0x28(0x20)
};


// Size 0x10
struct EventOptimalInteractionObjectChanged
{
public:
	class Object*                                                PreviousFocusObject;                               // 0x0(0x8)
	class Object*                                                NewFocusObject;                                    // 0x8(0x8)
};


