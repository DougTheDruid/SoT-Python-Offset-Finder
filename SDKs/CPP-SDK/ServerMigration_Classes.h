// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48 (Full Size[0xb0] - InheritedSize[0x68]
class MigrationControlChannel: public Channel
{
public:
	char                                                         pad0x48_ZNFVZ[0x48];                               // 0x68(0x48)
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class MigrationRelevancyClusterActor: public Actor
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NetworkTestingBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ServerMigrationBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ServerMigrationSerialisationDetailsTestsActorRef: public Object
{
public:
	class Actor*                                                 ActorReferenceWithMigrationMarkup;                 // 0x28(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay: public Actor
{
public:
	class PrimitiveComponent*                                    PrimitiveComponent;                                // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorWithChild: public Actor
{
public:
	class ChildActorComponent*                                   ChildActorComponent;                               // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorWithReplicatedChild: public Actor
{
public:
	class ChildActorComponent*                                   ChildActorComponent;                               // 0x3c8(0x8)
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent: public Actor
{
public:
	class ServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject;                                         // 0x3c8(0x8)
	class ServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent;                                    // 0x3d0(0x8)
	class ServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2;                                        // 0x3d8(0x8)
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr: public Actor
{
public:
	struct NetActorPtr                                           ActorPtr;                                          // 0x3c8(0x14)
	char                                                         pad0x4_R3E6F[0x4];                                 // 0x3dc(0x4)
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId: public Actor
{
public:
	struct UniqueNetIdRepl                                       UniqueId;                                          // 0x3c8(0x18)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class ServerMigrationSerialisationDetailsTestsMigratableComponent: public ActorComponent
{
public:
	float                                                        FloatWithMigrationMarkup;                          // 0xc8(0x4)
	int                                                          IntWithNoMarkup;                                   // 0xcc(0x4)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigratableComponentActor: public Actor
{
public:
	class ServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                      // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor: public Actor
{
public:
	class ServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                      // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor: public Actor
{
public:
	char                                                         pad0x8_T8JAV[0x8];                                 // 0x3c8(0x8)
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault: public Actor
{
public:
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor: public Actor
{
public:
	class ChildActorComponent*                                   Component;                                         // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor: public Actor
{
public:
	struct ServerMigrationCustomMigrationSerialisationStruct     TestStruct;                                        // 0x3c8(0x4)
	char                                                         pad0x4_6FYG7[0x4];                                 // 0x3cc(0x4)
};


// Size 0x0 (Full Size[0x3d0] - InheritedSize[0x3d0]
class ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor: public ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
{
public:
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor: public Actor
{
public:
	class Actor*                                                 DependentActor;                                    // 0x3c8(0x8)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class ServerMigrationSerialisationDetailsTestsMigrationReferenceActor: public Actor
{
public:
	class Actor*                                                 ActorReferenceWithMigrationMarkup;                 // 0x3c8(0x8)
	char                                                         pad0x8_DEBP8[0x8];                                 // 0x3d0(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class ServerMigrationSerialisationDetailsTestsPropertyMarkup: public Object
{
public:
	int                                                          Int32NoMarkup;                                     // 0x28(0x4)
	bool                                                         BoolWithMigrationMarkup;                           // 0x2c(0x1)
	char                                                         pad0x3_T6HM0[0x3];                                 // 0x2d(0x3)
	struct FString                                               StringWithSaveGameMarkup;                          // 0x30(0x10)
	float                                                        FloatWithMigrationAndReplicationMarkup;            // 0x40(0x4)
	char                                                         pad0x4_NLT3L[0x4];                                 // 0x44(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ServerMigrationSerialisationDetailsTestsTArrayProperty: public Object
{
public:
	TArray<Int IntegerArrayWithMigrationMarkup>                  IntegerArrayWithMigrationMarkup;                   // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ServerMigrationSerialisationDetailsTestsUStructProperty: public Object
{
public:
	struct ServerMigrationSerialisationDetailsTestsUStruct       SubStructWithMigrationMarkup;                      // 0x28(0xc)
	char                                                         pad0x4_P8GEH[0x4];                                 // 0x34(0x4)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class ServerMigrationSettings: public Object
{
public:
	int                                                          MaxSimultaneousMigrations;                         // 0x28(0x4)
	char                                                         pad0x4_6268G[0x4];                                 // 0x2c(0x4)
	struct FString                                               TransportImplementation;                           // 0x30(0x10)
	int                                                          ServerDefaultListenPort;                           // 0x40(0x4)
	int                                                          ServerListenPortRangeSize;                         // 0x44(0x4)
	int                                                          AutomationServerDefaultListenPort;                 // 0x48(0x4)
	char                                                         pad0x4_TQG3G[0x4];                                 // 0x4c(0x4)
	struct FString                                               InstanceImplementation;                            // 0x50(0x10)
	float                                                        MigrationConnectionTimeoutSeconds;                 // 0x60(0x4)
	float                                                        WaitForClientActorRemappingTimeoutLength;          // 0x64(0x4)
	float                                                        WaitForTransferOwnershipAcknowledgementTimeoutLength; // 0x68(0x4)
	float                                                        DeserialisationTimeSliceLength;                    // 0x6c(0x4)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class TestActorWithUObjectProperty: public Actor
{
public:
	class Object*                                                ObjectProperty;                                    // 0x3c8(0x8)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class TestUObjectWithObjectProperty: public Object
{
public:
	class Object*                                                ObjectProperty;                                    // 0x28(0x8)
};


}