namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class InputChord: public None
{
public:
	Struct Key                                         Key                                                // 0x0(0x20)
	bool                                               bShift                                             // 0x20(0x1)
	bool                                               bCtrl                                              // 0x20(0x1)
	bool                                               bAlt                                               // 0x20(0x1)
	bool                                               bCmd                                               // 0x20(0x1)
};


// Size 0x10
class Anchors: public None
{
public:
	Struct Vector2D                                    Minimum                                            // 0x0(0x8)
	Struct Vector2D                                    Maximum                                            // 0x8(0x8)
};


}