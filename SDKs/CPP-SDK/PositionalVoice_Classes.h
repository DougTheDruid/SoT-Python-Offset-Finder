// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VoiceChatEmitterInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VoiceChatRendererInterface: public Interface
{
public:
};


// Size 0x158 (Full Size[0x180] - InheritedSize[0x28]
class VoiceChatRenderer: public Object
{
public:
	char                                                         pad0x10_4I180[0x10];                               // 0x28(0x10)
	class WwiseEvent*                                            AttenuatedVoiceEvent;                              // 0x38(0x8)
	class WwiseEvent*                                            AttenuatedAndSpatialisedVoiceEvent;                // 0x40(0x8)
	class WwiseEvent*                                            UnattenuatedVoiceEvent;                            // 0x48(0x8)
	int                                                          PreBufferInMilliseconds;                           // 0x50(0x4)
	int                                                          ChatRoutingListenerIndex;                          // 0x54(0x4)
	float                                                        EmitterHoldInSeconds;                              // 0x58(0x4)
	char                                                         pad0x124_AL3Y2[0x124];                             // 0x5c(0x124)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VoiceChatRendererRetreivalInterface: public Interface
{
public:
};


}