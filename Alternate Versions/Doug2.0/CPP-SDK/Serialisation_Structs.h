namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class SerialisedTestStruct: public None
{
public:
	int                                                Int                                                // 0x0(0x4)
	float                                              Float                                              // 0x4(0x4)
	Struct FString                                     String                                             // 0x8(0x10)
	TArray<Int >                                       IntArray                                           // 0x18(0x10)
	TArray<Struct IntArray>                            StructArray                                        // 0x28(0x10)
	Struct SerialisedNestedStruct                      NestedStruct                                       // 0x38(0x28)
};


// Size 0x28
class SerialisedNestedStruct: public None
{
public:
	Struct FString                                     String                                             // 0x0(0x10)
	TArray<Int >                                       IntArray                                           // 0x10(0x10)
	int                                                Int                                                // 0x20(0x4)
	float                                              Float                                              // 0x24(0x4)
};


}