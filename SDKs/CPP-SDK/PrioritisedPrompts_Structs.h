// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
struct PrioritisedPromptWithHandle
{
public:
	Struct PrioritisedPromptHandle                               PromptHandle;                                      // 0x0(0x10)
	Struct PrioritisedPrompt                                     Prompt;                                            // 0x10(0x58)
};


// Size 0x58
struct PrioritisedPrompt
{
public:
	Struct FText                                                 Message;                                           // 0x0(0x38)
	Struct FString                                               Key;                                               // 0x38(0x10)
	Class PopUpMessageDesc*                                      PopUpMessageDesc;                                  // 0x48(0x8)
	byte                                                         BasePriority;                                      // 0x50(0x1)
	byte                                                         MenuNavigation;                                    // 0x51(0x1)
};


// Size 0x10
struct PrioritisedPromptHandle
{
public:
	Struct Guid                                                  Id;                                                // 0x0(0x10)
};


// Size 0x70
struct PromptEvaluation
{
public:
	byte                                                         PromptType;                                        // 0x0(0x1)
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x8(0x68)
};


// Size 0x80
struct PermanentPromptNetworkEvent
{
public:
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x10(0x68)
	byte                                                         StartOrStop;                                       // 0x78(0x1)
};


// Size 0x8
struct PromptsCounterIncrementEvent
{
public:
	class                                                        AccessKey;                                         // 0x0(0x8)
};


// Size 0x20
struct PlayerPromptTelemetryEvent
{
public:
	Struct FString                                               Message;                                           // 0x0(0x10)
	Struct FString                                               Key;                                               // 0x10(0x10)
};


}