#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x218 (Full Size[0x5e0] - InheritedSize[0x3c8]
class BP_wpn_shop_wsp_01_a_C: public Actor
{
public:
	class WorldLocationPopUpComponent*                           WorldLocationPopUp;                                // 0x3c8(0x8)
	class StaticMeshComponent*                                   cmn_ammo_crate_01_b_vc;                            // 0x3d0(0x8)
	class PetHangoutSpotComponent*                               PetHangoutSpot;                                    // 0x3d8(0x8)
	class StaticMeshComponent*                                   wsp_wpn_shop_dressing_01_c;                        // 0x3e0(0x8)
	class StaticMeshComponent*                                   wsp_wpn_shop_dressing_01_b;                        // 0x3e8(0x8)
	class StaticMeshComponent*                                   wsp_wpn_shop_dressing_01_a;                        // 0x3f0(0x8)
	class BoxComponent*                                          Collision_01;                                      // 0x3f8(0x8)
	class ParticleSystemComponent*                               vfx_dust_01_air;                                   // 0x400(0x8)
	class PointLightComponent*                                   PointLight1;                                       // 0x408(0x8)
	class SpotLightComponent*                                    SpotLight5;                                        // 0x410(0x8)
	class SpotLightComponent*                                    SpotLight1;                                        // 0x418(0x8)
	class ChildActorComponent*                                   BP_IslandWeaponsChest;                             // 0x420(0x8)
	class ChildActorComponent*                                   bp_lantern_hook_01_a;                              // 0x428(0x8)
	class ChildActorComponent*                                   wsp_light_plate_b;                                 // 0x430(0x8)
	class StaticMeshComponent*                                   StaticMesh14;                                      // 0x438(0x8)
	class StaticMeshComponent*                                   StaticMesh13;                                      // 0x440(0x8)
	class StaticMeshComponent*                                   StaticMesh12;                                      // 0x448(0x8)
	class StaticMeshComponent*                                   StaticMesh11;                                      // 0x450(0x8)
	class StaticMeshComponent*                                   StaticMesh9;                                       // 0x458(0x8)
	class StaticMeshComponent*                                   StaticMesh8;                                       // 0x460(0x8)
	class ChildActorComponent*                                   ChildActor2;                                       // 0x468(0x8)
	class ChildActorComponent*                                   ChildActor1;                                       // 0x470(0x8)
	class ChildActorComponent*                                   ChildActor;                                        // 0x478(0x8)
	class SpotLightComponent*                                    SpotLight7;                                        // 0x480(0x8)
	class SpotLightComponent*                                    SpotLight6;                                        // 0x488(0x8)
	class SpotLightComponent*                                    SpotLight4;                                        // 0x490(0x8)
	class SpotLightComponent*                                    SpotLight3;                                        // 0x498(0x8)
	class SpotLightComponent*                                    SpotLight2;                                        // 0x4a0(0x8)
	class PointLightComponent*                                   PointLight;                                        // 0x4a8(0x8)
	class ParticleSystemComponent*                               ParticleSystem1;                                   // 0x4b0(0x8)
	class ParticleSystemComponent*                               ParticleSystem;                                    // 0x4b8(0x8)
	class SpotLightComponent*                                    SpotLight;                                         // 0x4c0(0x8)
	class PostProcessComponent*                                  PostProcess;                                       // 0x4c8(0x8)
	class BoxComponent*                                          Box;                                               // 0x4d0(0x8)
	class StaticMeshComponent*                                   StaticMesh6;                                       // 0x4d8(0x8)
	class StaticMeshComponent*                                   StaticMesh5;                                       // 0x4e0(0x8)
	class StaticMeshComponent*                                   bld_cls_shop_hanging_cloth_03_a;                   // 0x4e8(0x8)
	class ChildActorComponent*                                   AudioSpace;                                        // 0x4f0(0x8)
	class StaticMeshComponent*                                   wsp_vine_01_c;                                     // 0x4f8(0x8)
	class StaticMeshComponent*                                   wsp_vine_01_b;                                     // 0x500(0x8)
	class StaticMeshComponent*                                   StaticMesh;                                        // 0x508(0x8)
	class StaticMeshComponent*                                   wsp_bush_fern_01_a;                                // 0x510(0x8)
	class StaticMeshComponent*                                   wsp_bush_08_c;                                     // 0x518(0x8)
	class StaticMeshComponent*                                   shp_pistol_rack_01_a;                              // 0x520(0x8)
	class StaticMeshComponent*                                   bld_int_small_sideboard_01_a;                      // 0x528(0x8)
	class StaticMeshComponent*                                   bld_shop_wood_box_02_a;                            // 0x530(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_hanging_target_broken_01_a;           // 0x538(0x8)
	class StaticMeshComponent*                                   bld_shop_drapes_01_a;                              // 0x540(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_furnace_01_a;                         // 0x548(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_table_01_a;                           // 0x550(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_doorframe_01_a;                       // 0x558(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_01_a;                                 // 0x560(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_hanging_target_01_a;                  // 0x568(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_b;                          // 0x570(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_a;                          // 0x578(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_c2;                         // 0x580(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_c;                          // 0x588(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_lantern_01_b;                         // 0x590(0x8)
	class StaticMeshComponent*                                   bld_wpn_roof_beam_01_a;                            // 0x598(0x8)
	class StaticMeshComponent*                                   bld_shop_small_balcony_01_a;                       // 0x5a0(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_c1;                         // 0x5a8(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_b1;                         // 0x5b0(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_window_01_a1;                         // 0x5b8(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_sign_01_a;                            // 0x5c0(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_pillars_01_a;                         // 0x5c8(0x8)
	class StaticMeshComponent*                                   bld_wpn_shop_door_01_a;                            // 0x5d0(0x8)
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x5d8(0x8)
};


