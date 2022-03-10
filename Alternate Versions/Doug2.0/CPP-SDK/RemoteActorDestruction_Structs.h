namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
class DestroyActorData: public None
{
public:
	int                                                ActorNetID                                         // 0x0(0x4)
};


// Size 0x10
class DestroyAllExistingActorsByClassData: public None
{
public:
	TArray<Str None>                                   ActorClassNames                                    // 0x0(0x10)
};


}