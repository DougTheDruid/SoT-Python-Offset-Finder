// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct MMICategoryData
{
public:
	struct FName                                                 CategoryName;                                      // 0x0(0x8)
	TArray<struct MMIItemData>                                   CategoryItemDataArray;                             // 0x8(0x10)
};


// Size 0x18
struct MMIItemData
{
public:
	int                                                          ExclusiveMemorySize;                               // 0x0(0x4)
	char                                                         pad0x4_9X22N[0x4];                                 // 0x4(0x4)
	struct FString                                               ItemData;                                          // 0x8(0x10)
};


}