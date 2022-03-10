namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
class GameServiceMap: public None
{
public:
};


// Size 0x20
class GameServiceCoordinator: public None
{
public:
	TArray<Struct GameServiceCoordinatorUnit>          Services                                           // 0x0(0x10)
};


// Size 0x18
class GameServiceCoordinatorUnit: public None
{
public:
	Class Object*                                      Service                                            // 0x0(0x8)
};


}