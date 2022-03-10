namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class DebugTeleportDestinationEntry: public None
{
public:
	Struct FString                                     DebugMenuSubPath                                   // 0x0(0x10)
	Struct Vector                                      Destination                                        // 0x10(0xc)
	Struct Guid                                        AssociatedCrew                                     // 0x1c(0x10)
	Struct Guid                                        Id                                                 // 0x2c(0x10)
};


}