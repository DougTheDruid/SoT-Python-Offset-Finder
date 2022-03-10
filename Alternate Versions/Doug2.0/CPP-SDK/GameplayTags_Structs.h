namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class GameplayTagContainer: public None
{
public:
	TArray<Struct GameplayTag>                         GameplayTags                                       // 0x8(0x10)
	TArray<Struct FName>                               Tags                                               // 0x18(0x10)
};


// Size 0x8
class GameplayTag: public None
{
public:
	struct FName                                       TagName                                            // 0x0(0x8)
};


// Size 0x48
class GameplayTagQuery: public None
{
public:
	int                                                TokenStreamVersion                                 // 0x0(0x4)
	TArray<Struct TokenStreamVersion>                  TagDictionary                                      // 0x8(0x10)
	TArray<Byte TagDictionary>                         QueryTokenStream                                   // 0x18(0x10)
	Struct FString                                     UserDescription                                    // 0x28(0x10)
	Struct FString                                     AutoDescription                                    // 0x38(0x10)
};


// Size 0x78
class GameplayTagNode: public None
{
public:
};


// Size 0x48
class GameplayTagTableRow: public None
{
public:
	Struct FString                                     Tag                                                // 0x0(0x10)
	Struct FText                                       CategoryText                                       // 0x10(0x38)
};


}