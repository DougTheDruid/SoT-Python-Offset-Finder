namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1
class ShantyPuzzleUnlockCanceledEvent: public None
{
public:
};


// Size 0x10
class ShantyPuzzleSingleInteractionZoneStopInteractingEvent: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
	int                                                InteractionZoneIdx                                 // 0x8(0x4)
};


// Size 0x10
class ShantyPuzzleSingleInteractionZoneUnlockEvent: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
	int                                                InteractionZoneIdx                                 // 0x8(0x4)
};


// Size 0x8
class ShantyPuzzlePlayerExitInteractionZoneEvent: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x8
class ShantyPuzzlePlayerEnterInteractionZoneEvent: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x1
class ShantyPuzzleUnlockedCompleteEvent: public None
{
public:
};


// Size 0x18
class ShantyPuzzleInteractionZoneDefinition: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	float                                              Radius                                             // 0xc(0x4)
	byte                                               RequiredMusicalInstrumentType                      // 0x10(0x1)
	int                                                RequiredNumInteractors                             // 0x14(0x4)
};


}