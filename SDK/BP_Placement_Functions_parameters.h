#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
struct UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params
{
	struct FVector                                     Centre;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Segments;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
struct UBP_Placement_Functions_C_Get_First_Valid_Hit_Params
{
	TArray<struct FHitResult>                          Hits;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Valid_Hit;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // 0x001C(0x0080)  (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Centre;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // 0x0044(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
struct UBP_Placement_Functions_C_Detonate_Charge_Params
{
	class AActor*                                      Spawn;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Position;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius_Overlap;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii_Out;                                           // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
struct UBP_Placement_Functions_C_Does_A_Delete_B_Params
{
	struct FString                                     A_String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	struct FString                                     B_String;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Return;                                                    // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
struct UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params
{
	class AActor*                                      Input_Actor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Returning_Tag;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Asset_Tag;                                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
struct UBP_Placement_Functions_C_Check_Actor_Overlap_Params
{
	class AActor*                                      Input_Actor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Delete_Actor;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              Overlaps_to_Delete;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
struct UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params
{
	struct FPlacementGardenSeed                        Selected_Mesh;                                             // 0x0000(0x0040)  (Parm)
	struct FRandomStream                               Random;                                                    // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Location;                                                  // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x0054(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
struct UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params
{
	TArray<struct FPlacementGardenSeed>                Charges;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
struct UBP_Placement_Functions_C_Set_Mesh_Params
{
	TArray<struct FPlacementGardenSeed>                Meshes;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Mesh_Probabilities;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Radius_Multiplier;                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UObject*>                             Physical_Materials;                                        // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Mesh_Radii;                                                // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               Random;                                                    // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                     // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Spawn_Permission;                                          // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x00A0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Mesh_Index;                                                // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlacementGardenSeed                        Mesh;                                                      // 0x00A8(0x0040)  (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
struct UBP_Placement_Functions_C_Set_Charge_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Box_Distribution;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UObject*>                             Physical_Materials;                                        // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               Random;                                                    // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                     // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Spawn_Permission;                                          // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Position;                                                  // 0x006C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlacementBombCharge                        Charge;                                                    // 0x0080(0x0030)  (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
struct UBP_Placement_Functions_C_Check_Surface_Materials_Params
{
	TArray<class UObject*>                             Physical_Materials;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Placement_Material;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
struct UBP_Placement_Functions_C_Check_Slope_Params
{
	struct FVector                                     Normal;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Slope_Range;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
struct UBP_Placement_Functions_C_Check_Height_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Height_Range;                                              // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
struct UBP_Placement_Functions_C_Check_Radius_Overlap_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius_Overlap;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
struct UBP_Placement_Functions_C_Set_Spawn_Properties_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Cast_Success;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Centre;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
struct UBP_Placement_Functions_C_Get_Box_Sample_Count_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Seed_Density;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Sample_Count;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
struct UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Centre;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Radius_Multiplier;                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Actor_Transform;                                           // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // 0x0058(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // 0x0064(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
struct UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params
{
	float                                              Random_Float;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      Charge_Probabilities;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
struct UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params
{
	float                                              Radius;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Sample_Density;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Sample_Count;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
struct UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
