#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "DeliverableFramework_Structs.h"


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class DeliverableRequirementsDataAsset: public DataAsset
{
public:
	TArray<class DeliverableRequirementBase*>                    Requirements;                                      // 0x28(0x10)
	struct                                                       FeatureOverrideRequirements;                       // 0x38(0x18)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class DeliverableRedirectionCompositeContext: public DeliverableRedirectionContextBase
{
public:
	TArray<class DeliverableRedirectionContextBase*>             Contexts;                                          // 0x28(0x10)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class DeliverableRedirectionComponent: public ActorComponent
{
public:
	class DeliverableRedirectionContextBase*                     Context;                                           // 0xd0(0x8)
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class DeliverableComponent: public ActorComponent
{
public:
	class DeliverableRequirementsDataAsset*                      DeliveryRequirementsAsset;                         // 0xd8(0x8)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DeliverableRedirectionContextHandlerBase: public Object
{
public:
	class DeliverableRedirectionDestinationDescriptorBase*       DestinationDescriptor;                             // 0x28(0x8)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class DeliverableRedirectionLiteralDestinationDescriptor: public DeliverableRedirectionDestinationDescriptorBase
{
public:
	struct FText                                                 Destination;                                       // 0x28(0x38)
};


