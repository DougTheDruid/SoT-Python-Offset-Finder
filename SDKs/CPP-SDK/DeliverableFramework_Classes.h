// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DeliverableRequirementBase: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableRedirectionInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class DeliverableComponent: public ActorComponent
{
public:
	char                                                         pad0x10_LU181[0x10];                               // 0xc8(0x10)
	Class DeliverableRequirementsDataAsset*                      DeliveryRequirementsAsset;                         // 0xd8(0x8)
	char                                                         pad0x18_72F85[0x18];                               // 0xde(0x18)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class DeliverableRedirectionComponent: public ActorComponent
{
public:
	char                                                         pad0x8_1725Q[0x8];                                 // 0xc8(0x8)
	Class DeliverableRedirectionContextBase*                     Context;                                           // 0xd0(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableRedirectionContextBase: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableRedirectionNoContext: public DeliverableRedirectionContextBase
{
public:
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class DeliverableRedirectionCompositeContext: public DeliverableRedirectionContextBase
{
public:
	TArray<class DeliverableRedirectionContextBase*>             Contexts;                                          // 0x28(0x10)
	char                                                         pad0x38_SKPQ0[0x38];                               // 0x36(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableRedirectionDestinationDescriptorBase: public Object
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DeliverableRedirectionContextHandlerBase: public Object
{
public:
	Class DeliverableRedirectionDestinationDescriptorBase*       DestinationDescriptor;                             // 0x28(0x8)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class DeliverableRedirectionLiteralDestinationDescriptor: public DeliverableRedirectionDestinationDescriptorBase
{
public:
	Struct FText                                                 Destination;                                       // 0x28(0x38)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class DeliverableRequirementsDataAsset: public DataAsset
{
public:
	TArray<class DeliverableRequirementBase*>                    Requirements;                                      // 0x28(0x10)
	Struct DeliverableRequirementFeatureOverride                 FeatureOverrideRequirements;                       // 0x38(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DeliverableTooltipCustomizerInterface: public Interface
{
public:
};


}