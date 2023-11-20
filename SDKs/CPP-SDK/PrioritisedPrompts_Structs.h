// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
struct PrioritisedPromptWithHandle
{
public:
	struct PrioritisedPromptHandle                               PromptHandle;                                      // 0x0(0x10)
	struct PrioritisedPrompt                                     Prompt;                                            // 0x10(0x60)
};


// Size 0x60
struct PrioritisedPrompt
{
public:
	bool                                                         UsePopupMessageDescForText;                        // 0x0(0x1)
	char                                                         pad0x7_YIVS0[0x7];                                 // 0x1(0x7)
	struct FText                                                 Message;                                           // 0x8(0x38)
	struct FString                                               Key;                                               // 0x40(0x10)
	class PopUpMessageDesc*                                      PopUpMessageDesc;                                  // 0x50(0x8)
	byte                                                         BasePriority;                                      // 0x58(0x1)
	byte                                                         MenuNavigation;                                    // 0x59(0x1)
	char                                                         pad0x6_45YSW[0x6];                                 // 0x5a(0x6)
};


// Size 0x10
struct PrioritisedPromptHandle
{
public:
	struct Guid                                                  Id;                                                // 0x0(0x10)
};


// Size 0x78
struct PromptEvaluation
{
public:
	byte                                                         PromptType;                                        // 0x0(0x1)
	char                                                         pad0x7_16UTB[0x7];                                 // 0x1(0x7)
	struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x8(0x70)
};


// Size 0x88
struct PermanentPromptNetworkEvent
{
public:
	char                                                         pad0x10_2D9GB[0x10];                               // 0x0(0x10)
	struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x10(0x70)
	byte                                                         StartOrStop;                                       // 0x80(0x1)
	char                                                         pad0x7_VMR1A[0x7];                                 // 0x81(0x7)
};


// Size 0x8
struct PromptsCounterIncrementEvent
{
public:
	class UClass*                                                AccessKey;                                         // 0x0(0x8)
};


// Size 0x1
struct PromptsServiceSetupEvent
{
public:
	char                                                         pad0x1_NGKHQ[0x1];                                 // 0x0(0x1)
};


// Size 0x20
struct PlayerPromptTelemetryEvent
{
public:
	struct FString                                               Message;                                           // 0x0(0x10)
	struct FString                                               Key;                                               // 0x10(0x10)
};


}