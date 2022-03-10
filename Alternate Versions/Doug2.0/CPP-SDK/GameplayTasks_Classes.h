namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class GameplayTaskOwnerInterface: public Interface
{
public:
};


// Size 0x30
class GameplayTask: public Object
{
public:
	struct FName                                       InstanceName                                       // 0x28(0x8)
};


// Size 0x40
class GameplayTask_SpawnActor: public GameplayTask
{
public:
	class                                              ClassToSpawn                                       // 0x90(0x8)
};


// Size 0x18
class GameplayTask_WaitDelay: public GameplayTask
{
public:
};


// Size 0x10
class GameplayTaskResource: public Object
{
public:
	int                                                ManualResourceID                                   // 0x28(0x4)
	bool                                               bManuallySetID                                     // 0x30(0x1)
};


// Size 0x60
class GameplayTasksComponent: public ActorComponent
{
public:
	TArray<class SimulatedTasks*>                      SimulatedTasks                                     // 0xd0(0x10)
	TArray<class TaskPriorityQueue*>                   TaskPriorityQueue                                  // 0xe0(0x10)
};


}