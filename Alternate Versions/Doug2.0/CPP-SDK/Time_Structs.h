namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class GameTime: public None
{
public:
	Struct DateTime                                    DateTimeRepresentation                             // 0x0(0x8)
};


// Size 0x10
class GameTimeRange: public None
{
public:
	Struct GameTime                                    Start                                              // 0x0(0x8)
	Struct GameTime                                    End                                                // 0x8(0x8)
};


// Size 0x8
class ReplicatedDateTime: public None
{
public:
};


// Size 0x10
class ReplicatedAuthoritativeTime: public None
{
public:
	Struct ReplicatedDateTime                          WorldTime                                          // 0x0(0x8)
	Struct ReplicatedDateTime                          SyncTime                                           // 0x8(0x8)
};


// Size 0x8
class ReplicatedTimespan: public None
{
public:
};


// Size 0x14
class EventSetDateTime: public None
{
public:
	int                                                Year                                               // 0x0(0x4)
	int                                                Month                                              // 0x4(0x4)
	int                                                Day                                                // 0x8(0x4)
	int                                                Hour                                               // 0xc(0x4)
	int                                                Minute                                             // 0x10(0x4)
};


}