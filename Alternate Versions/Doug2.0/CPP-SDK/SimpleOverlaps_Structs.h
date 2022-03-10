namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class SimpleOverlapEnd: public None
{
public:
	Struct SimpleOverlapInfo                           OverlapInfo                                        // 0x0(0x10)
};


// Size 0x10
class SimpleOverlapInfo: public None
{
public:
	Class Actor*                                       OtherActor                                         // 0x0(0x8)
	Class PrimitiveComponent*                          OtherComponent                                     // 0x8(0x8)
};


// Size 0x10
class SimpleOverlapBegin: public None
{
public:
	Struct SimpleOverlapInfo                           OverlapInfo                                        // 0x0(0x10)
};


}