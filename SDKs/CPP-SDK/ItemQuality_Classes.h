// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ItemQualityInterface: public Interface
{
public:
};


// Size 0x40
class ItemQualityComponent: public ActorComponent
{
public:
	byte                                                         ItemQualityLevel;                                  // 0xd0(0x1)
	TArray<Struct PerComanyItemQualityEntry>                     CompanySpecificItemQualityLevels;                  // 0xd8(0x10)
	TArray<Struct PerComanyComplexItemQualityEntry>              CompanySpecificComplexItemQualityLevels;           // 0xe8(0x10)
	TArray<Struct PerComanyComplexItemQualityEntry>              CompanySpecificComplexItemQualityLevelsHandin;     // 0xf8(0x10)
};


}