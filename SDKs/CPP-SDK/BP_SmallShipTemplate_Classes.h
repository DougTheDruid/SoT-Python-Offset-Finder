// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x3d0 (Full Size[0x1c50] - InheritedSize[0x1880]
class BP_SmallShipTemplate_C: public Ship
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x1880(0x8)
	class TeleportLocationComponent*                             TeleportLocation_WakeUp;                           // 0x1888(0x8)
	class ShipRowboatPersistenceComponent*                       ShipRowboatPersistence;                            // 0x1890(0x8)
	class HarpoonItemLocationComponent*                          HarpoonItemLocation1;                              // 0x1898(0x8)
	class HarpoonItemLocationComponent*                          HarpoonItemLocation;                               // 0x18a0(0x8)
	class FactionParticleComponent*                              FactionGBowParticles;                              // 0x18a8(0x8)
	class FactionParticleComponent*                              FactionBBowParticles;                              // 0x18b0(0x8)
	class SplashProbeVFXComponent*                               VFX_SplashProbe_Both_Splashes_Details;             // 0x18b8(0x8)
	class SplashProbeVFXComponent*                               VFX_SplashProbe_Both_Splashes_Second;              // 0x18c0(0x8)
	class SplashProbeVFXComponent*                               VFX_SplashProbe_OnShip_Splashes;                   // 0x18c8(0x8)
	class SplashProbeVFXComponent*                               VFX_SplashProbe_Offship_Splashes;                  // 0x18d0(0x8)
	class SplashProbeVFXComponent*                               VFX_SplashProbe_Underwater;                        // 0x18d8(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_cannon_Local2;             // 0x18e0(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_captain_Local1;            // 0x18e8(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_cannon_Local1;             // 0x18f0(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_captain_Local2;            // 0x18f8(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_rectangle_surface_Huge_Top; // 0x1900(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_rectangle_Local_VS;        // 0x1908(0x8)
	class ParticleSystemComponent*                               vfx_playerships_bubbles_rectangle_surface_Huge_Bottom; // 0x1910(0x8)
	class SceneComponent*                                        VFX_Scene;                                         // 0x1918(0x8)
	class ShipFactionCustomisation*                              ShipFactionCustomisation;                          // 0x1920(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1928(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1930(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1938(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1940(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1948(0x8)
	class TeleportLocationComponent*                             TeleportLocation;                                  // 0x1950(0x8)
	class TeleportLocationComponent*                             TeleportLocation_09;                               // 0x1958(0x8)
	class TeleportLocationComponent*                             TeleportLocation_08;                               // 0x1960(0x8)
	class TeleportLocationComponent*                             TeleportLocation_07;                               // 0x1968(0x8)
	class TeleportLocationComponent*                             TeleportLocation_06;                               // 0x1970(0x8)
	class TeleportLocationComponent*                             TeleportLocation_05;                               // 0x1978(0x8)
	blueprintgeneratedclass BP_ShipTrinketMountpointManagerComponent_Small_C* ShipTrinketMountpointManagerComponent_Small;       // 0x1980(0x8)
	class ChildActorComponent*                                   CaptainsLog;                                       // 0x1988(0x8)
	class ChildActorComponent*                                   ShipsCrest;                                        // 0x1990(0x8)
	class ChildActorComponent*                                   Rugs;                                              // 0x1998(0x8)
	class ChildActorComponent*                                   Drapes;                                            // 0x19a0(0x8)
	class ChildActorComponent*                                   Bed;                                               // 0x19a8(0x8)
	class ShipStorageJettisonComponent*                          ShipStorageJettison;                               // 0x19b0(0x8)
	class ChildActorComponent*                                   VoyageTable;                                       // 0x19b8(0x8)
	blueprintgeneratedclass BP_BedComponent_C*                   BP_BedComponent;                                   // 0x19c0(0x8)
	class StaticMeshComponent*                                   Rat3;                                              // 0x19c8(0x8)
	class StaticMeshComponent*                                   Rat2;                                              // 0x19d0(0x8)
	class StaticMeshComponent*                                   Rat1;                                              // 0x19d8(0x8)
	class RatManagerComponent*                                   RatManager;                                        // 0x19e0(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_MapTable;                                     // 0x19e8(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_MapTable;                                     // 0x19f0(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Barrel_Top;                                   // 0x19f8(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Front_Starboard;                              // 0x1a00(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Front_Port;                                   // 0x1a08(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Side_Starboard;                               // 0x1a10(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Side_Port;                                    // 0x1a18(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Bottom_Barrel;                                // 0x1a20(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Bottom_Port;                                  // 0x1a28(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Bottom_Starboard;                             // 0x1a30(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Top_Rear;                                     // 0x1a38(0x8)
	class ArrowComponent*                                        Arrow;                                             // 0x1a40(0x8)
	blueprintgeneratedclass BP_SeatComponent_C*                  Seat_Top_Rear;                                     // 0x1a48(0x8)
	class AIRegionComponent*                                     AIRegion;                                          // 0x1a50(0x8)
	class NamedPointsComponent*                                  NamedPoints;                                       // 0x1a58(0x8)
	class StaticMeshComponent*                                   shp_small_ladder_gap_hits_01_a;                    // 0x1a60(0x8)
	class StaticMeshComponent*                                   shp_flag_hole_01_a;                                // 0x1a68(0x8)
	class ChildActorComponent*                                   BP_EmissaryFlag;                                   // 0x1a70(0x8)
	class EmissaryFlotsamItemSpawnComponent*                     EmissaryFlotsamItemSpawner;                        // 0x1a78(0x8)
	class ChildActorComponent*                                   BP_LargeShip_CageLatch_03_b;                       // 0x1a80(0x8)
	class ChildActorComponent*                                   BP_SmallShip_WindowHatchRight;                     // 0x1a88(0x8)
	class ChildActorComponent*                                   BP_SmallShip_WindowHatchLeft;                      // 0x1a90(0x8)
	class ChildActorComponent*                                   BP_WaterBarrel;                                    // 0x1a98(0x8)
	class ChildActorComponent*                                   BP_Shroudbreaker;                                  // 0x1aa0(0x8)
	class ChildActorComponent*                                   BP_ShipPetChest;                                   // 0x1aa8(0x8)
	class PetHangoutSpotComponent*                               PetHangoutSpot;                                    // 0x1ab0(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_Food;                            // 0x1ab8(0x8)
	class ChildActorComponent*                                   BP_HarpoonLauncher1;                               // 0x1ac0(0x8)
	class ChildActorComponent*                                   BP_HarpoonLauncher;                                // 0x1ac8(0x8)
	class ChildActorComponent*                                   RowboatMountpoint;                                 // 0x1ad0(0x8)
	class ShipTelemetryComponent*                                ShipTelemetry;                                     // 0x1ad8(0x8)
	class RiggingSystemComponent*                                ControlsRigging;                                   // 0x1ae0(0x8)
	class ChildActorComponent*                                   BP_ShipVanityChest;                                // 0x1ae8(0x8)
	class ChildActorComponent*                                   BP_SmallShipLadder_02;                             // 0x1af0(0x8)
	class ChildActorComponent*                                   Lanterns;                                          // 0x1af8(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck10;                     // 0x1b00(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck8;                      // 0x1b08(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck7;                      // 0x1b10(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_Food;                            // 0x1b18(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_Cannonball2;                     // 0x1b20(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_Cannonball1;                     // 0x1b28(0x8)
	class ChildActorComponent*                                   BP_EquipmentChest;                                 // 0x1b30(0x8)
	class ChildActorComponent*                                   BP_ClothingChest;                                  // 0x1b38(0x8)
	class ChildActorComponent*                                   BP_WeaponsChest;                                   // 0x1b40(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck3;                      // 0x1b48(0x8)
	class ChildActorComponent*                                   BP_SmallMapTable;                                  // 0x1b50(0x8)
	class ChildActorComponent*                                   Capstan;                                           // 0x1b58(0x8)
	class ChildActorComponent*                                   GrogBarrel;                                        // 0x1b60(0x8)
	class ChildActorComponent*                                   MastMainSailAngleLeft;                             // 0x1b68(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck1;                      // 0x1b70(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_LowerDeck11;                     // 0x1b78(0x8)
	class ChildActorComponent*                                   ShipStorageBarrel_Wood;                            // 0x1b80(0x8)
	class BoxComponent*                                          RammingSpurZone;                                   // 0x1b88(0x8)
	class StaticMeshComponent*                                   shp_shark_hits_01_a;                               // 0x1b90(0x8)
	class ChildActorComponent*                                   BP_AmmoChest;                                      // 0x1b98(0x8)
	class TeleportLocationComponent*                             TeleportLocation_04;                               // 0x1ba0(0x8)
	class TeleportLocationComponent*                             TeleportLocation_03;                               // 0x1ba8(0x8)
	class TeleportLocationComponent*                             TeleportLocation_02;                               // 0x1bb0(0x8)
	class RiggingSystemComponent*                                MainRigging;                                       // 0x1bb8(0x8)
	class ChildActorComponent*                                   ShipsCompass;                                      // 0x1bc0(0x8)
	class ChildActorComponent*                                   Figurehead;                                        // 0x1bc8(0x8)
	class ChildActorComponent*                                   CannonRight1;                                      // 0x1bd0(0x8)
	class ChildActorComponent*                                   CannonLeft1;                                       // 0x1bd8(0x8)
	class ChildActorComponent*                                   LadderStbd;                                        // 0x1be0(0x8)
	class ChildActorComponent*                                   Hull;                                              // 0x1be8(0x8)
	class ChildActorComponent*                                   MastMainSailAngleRight;                            // 0x1bf0(0x8)
	class ChildActorComponent*                                   MastMainSailHoistRight;                            // 0x1bf8(0x8)
	class ChildActorComponent*                                   MastMainSailHoistLeft;                             // 0x1c00(0x8)
	class ChildActorComponent*                                   MastMain;                                          // 0x1c08(0x8)
	class ChildActorComponent*                                   Anchor;                                            // 0x1c10(0x8)
	class ChildActorComponent*                                   Rudder;                                            // 0x1c18(0x8)
	class ChildActorComponent*                                   Wheel;                                             // 0x1c20(0x8)
	class ChildActorComponent*                                   AudioBoat;                                         // 0x1c28(0x8)
	byte                                                         Timeline_Disable_Secondary__Direction_3A9DF63A47F1548F84D99BAAF45F186E; // 0x1c30(0x1)
	char                                                         pad0x7_JOM41[0x7];                                 // 0x1c31(0x7)
	class TimelineComponent*                                     Timeline_Disable_Secondary;                        // 0x1c38(0x8)
	byte                                                         Timeline_DisableSplash__Direction_F5D6E1F54BED8D1B7D088AB524334C7B; // 0x1c40(0x1)
	char                                                         pad0x7_O673H[0x7];                                 // 0x1c41(0x7)
	class TimelineComponent*                                     Timeline_DisableSplash;                            // 0x1c48(0x8)
};


}