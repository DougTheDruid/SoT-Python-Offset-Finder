namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class VoiceChatEmitterInterface: public Interface
{
public:
};


// Size 0x0
class VoiceChatRendererInterface: public Interface
{
public:
};


// Size 0x158
class VoiceChatRenderer: public Object
{
public:
	Class WwiseEvent*                                  AttenuatedVoiceEvent                               // 0x38(0x8)
	Class WwiseEvent*                                  AttenuatedAndSpatialisedVoiceEvent                 // 0x40(0x8)
	Class WwiseEvent*                                  UnattenuatedVoiceEvent                             // 0x48(0x8)
	int                                                PreBufferInMilliseconds                            // 0x50(0x4)
	int                                                ChatRoutingListenerIndex                           // 0x54(0x4)
	float                                              EmitterHoldInSeconds                               // 0x58(0x4)
};


// Size 0x0
class VoiceChatRendererRetreivalInterface: public Interface
{
public:
};


}