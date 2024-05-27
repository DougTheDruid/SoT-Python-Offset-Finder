#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x8
struct PromptsCounterIncrementEvent
{
public:
	class UClass*                                                AccessKey;                                         // 0x0(0x8)
};


// Size 0x70
struct PrioritisedPromptWithHandle
{
public:
	struct                                                       PromptHandle;                                      // 0x0(0x10)
	struct                                                       Prompt;                                            // 0x10(0x60)
};


// Size 0x60
struct PrioritisedPrompt
{
public:
	bool                                                         UsePopupMessageDescForText;                        // 0x0(0x1)
	struct FText                                                 Message;                                           // 0x8(0x38)
	struct FString                                               Key;                                               // 0x40(0x10)
	class PopUpMessageDesc*                                      PopUpMessageDesc;                                  // 0x50(0x8)
	char                                                         BasePriority;                                      // 0x58(0x1)
	char                                                         MenuNavigation;                                    // 0x59(0x1)
};


// Size 0x78
struct PromptEvaluation
{
public:
	char                                                         PromptType;                                        // 0x0(0x1)
	struct                                                       Prompt;                                            // 0x8(0x70)
};


// Size 0x20
struct PlayerPromptTelemetryEvent
{
public:
	struct FString                                               Message;                                           // 0x0(0x10)
	struct FString                                               Key;                                               // 0x10(0x10)
};


// Size 0x10
struct PrioritisedPromptHandle
{
public:
	struct                                                       Id;                                                // 0x0(0x10)
};


// Size 0x90
struct PermanentPromptNetworkEvent
{
public:
	struct                                                       Prompt;                                            // 0x18(0x70)
	char                                                         StartOrStop;                                       // 0x88(0x1)
};


