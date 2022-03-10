namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class EventOptimalInteractionObjectChanged: public None
{
public:
	Class Object*                                      PreviousFocusObject                                // 0x0(0x8)
	Class Object*                                      NewFocusObject                                     // 0x8(0x8)
};


// Size 0x2
class EventInteractionBlockingStateChanged: public None
{
public:
	bool                                               IsInteractionBlocked                               // 0x0(0x1)
	byte                                               InteractionBlockReason                             // 0x1(0x1)
};


}