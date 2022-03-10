namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class WorldRegionSetup: public None
{
public:
	Struct Vector2D                                    WorldBoundsOrigin                                  // 0x0(0x8)
	Struct Vector2D                                    RegionSize                                         // 0x8(0x8)
	Struct IntPoint                                    GridSize                                           // 0x10(0x8)
	TArray<Struct FName>                               RegionNames                                        // 0x18(0x10)
};


}