namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class ServerSpireInfo: public None
{
public:
	int                                                LevelId                                            // 0x0(0x4)
	Struct Vector                                      Location                                           // 0x4(0xc)
	Class Actor*                                       SpireActor                                         // 0x10(0x8)
};


// Size 0x8
class SpireInfo: public None
{
public:
	int                                                LevelId                                            // 0x0(0x4)
	bool                                               ShouldBeLoaded                                     // 0x4(0x1)
	bool                                               ShouldBeVisible                                    // 0x5(0x1)
};


// Size 0x14
class SpireEntry: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	struct FName                                       IslandName                                         // 0xc(0x8)
};


}