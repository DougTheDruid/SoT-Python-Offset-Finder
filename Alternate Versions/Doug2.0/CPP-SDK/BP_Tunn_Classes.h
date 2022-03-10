namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class BP_TunnelOfTheDamnedPortalLocator_WSP_C: public PortalLocatorActor
{
public:
	Class SphereComponent*                             SeaRockBounds                                      // 0x408(0x8)
	Class ChildActorComponent*                         SignalAnchor                                       // 0x410(0x8)
	Class ChildActorComponent*                         CalmWater                                          // 0x418(0x8)
	Class ChildActorComponent*                         Visuals                                            // 0x420(0x8)
};


// Size 0x8
class BP_TunnelOfTheDamnedPortal_WSP_C: public BP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	Class ChildActorComponent*                         PortalEffects                                      // 0x650(0x8)
};


// Size 0x20
class BP_TunnelOfTheDamnedPortalLocator_WLD_C: public PortalLocatorActor
{
public:
	Class SphereComponent*                             SeaRockBounds                                      // 0x408(0x8)
	Class ChildActorComponent*                         SignalAnchor                                       // 0x410(0x8)
	Class ChildActorComponent*                         CalmWater                                          // 0x418(0x8)
	Class ChildActorComponent*                         Visuals                                            // 0x420(0x8)
};


// Size 0x8
class BP_TunnelOfTheDamnedPortal_WLD_C: public BP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	Class ChildActorComponent*                         PortalEffects                                      // 0x650(0x8)
};


// Size 0x20
class BP_TunnelOfTheDamnedPortalLocator_BSP_C: public PortalLocatorActor
{
public:
	Class SphereComponent*                             SeaRockBounds                                      // 0x408(0x8)
	Class ChildActorComponent*                         SignalAnchor                                       // 0x410(0x8)
	Class ChildActorComponent*                         CalmWater                                          // 0x418(0x8)
	Class ChildActorComponent*                         Visuals                                            // 0x420(0x8)
};


// Size 0x8
class BP_TunnelOfTheDamnedPortal_BSP_C: public BP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	Class ChildActorComponent*                         PortalEffects                                      // 0x650(0x8)
};


// Size 0x10
class BP_TunnelOfTheDamnedPortal_Ship_C: public TunnelOfTheDamnedPortal
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x640(0x8)
	Class SynchedMusicZoneComponent*                   SynchedMusicZone                                   // 0x648(0x8)
};


}