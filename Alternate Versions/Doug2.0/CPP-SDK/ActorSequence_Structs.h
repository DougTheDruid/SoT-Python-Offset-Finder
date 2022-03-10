namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class ActorSequenceObjectReferenceMap: public None
{
public:
	TArray<Struct TestTextObject>                      BindingIds                                         // 0x0(0x10)
	TArray<Struct ActorSequenceObjectReferences>       References                                         // 0x10(0x10)
};


// Size 0x10
class ActorSequenceObjectReferences: public None
{
public:
	TArray<Struct ActorSequenceObjectReference>        Array                                              // 0x0(0x10)
};


// Size 0x28
class ActorSequenceObjectReference: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	Struct Guid                                        ActorId                                            // 0x4(0x10)
	Struct FString                                     PathToComponent                                    // 0x18(0x10)
};


}