// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Centre                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Segments                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FVector>                             Positions                                                  (Parm, OutParm, ZeroConstructor)
void UBP_Placement_Functions_C::STATIC_GenerateRadialXYPositionsAroundPoint(const struct FVector& Centre, float Radius, int Segments, class UObject* __WorldContext, TArray<struct FVector>* Positions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint");

	UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params params;
	params.Centre = Centre;
	params.Radius = Radius;
	params.Segments = Segments;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FHitResult>                          Hits                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Is_Valid_Hit                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  Hit                                                        (Parm, OutParm)
void UBP_Placement_Functions_C::STATIC_Get_First_Valid_Hit(TArray<struct FHitResult>* Hits, class UObject* __WorldContext, bool* Is_Valid_Hit, struct FHitResult* Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit");

	UBP_Placement_Functions_C_Get_First_Valid_Hit_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (Is_Valid_Hit != nullptr)
		*Is_Valid_Hit = params.Is_Valid_Hit;
	if (Hit != nullptr)
		*Hit = params.Hit;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     Centre                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_Start                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_End                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Generate_Random_Rotated_Box_Raycast(struct FRandomStream* Random, const struct FVector& Centre, const struct FVector& Extent, const struct FRotator& Rotation, class UObject* __WorldContext, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast");

	UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Spawn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius_Overlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FLinearColor>                        Blast_Radii                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FLinearColor>                        Blast_Radii_Out                                            (Parm, OutParm, ZeroConstructor)
void UBP_Placement_Functions_C::STATIC_Detonate_Charge(class AActor* Spawn, const struct FVector& Position, float Radius, float Radius_Overlap, int Seed, TArray<struct FLinearColor>* Blast_Radii, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii_Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge");

	UBP_Placement_Functions_C_Detonate_Charge_Params params;
	params.Spawn = Spawn;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.Seed = Seed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Blast_Radii_Out != nullptr)
		*Blast_Radii_Out = params.Blast_Radii_Out;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     A_String                                                   (Parm, ZeroConstructor)
//		struct FString                                     B_String                                                   (Parm, ZeroConstructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Does_A_Delete_B(const struct FString& A_String, const struct FString& B_String, class UObject* __WorldContext, bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B");

	UBP_Placement_Functions_C_Does_A_Delete_B_Params params;
	params.A_String = A_String;
	params.B_String = B_String;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Input_Actor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Returning_Tag                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Asset_Tag                                                  (Parm, OutParm, ZeroConstructor)
void UBP_Placement_Functions_C::STATIC_Get_Actor_Placement_Asset_Type(class AActor* Input_Actor, class UObject* __WorldContext, bool* Returning_Tag, struct FString* Asset_Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type");

	UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Returning_Tag != nullptr)
		*Returning_Tag = params.Returning_Tag;
	if (Asset_Tag != nullptr)
		*Asset_Tag = params.Asset_Tag;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Input_Actor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Delete_Actor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class AActor*>                              Overlaps_to_Delete                                         (Parm, OutParm, ZeroConstructor)
void UBP_Placement_Functions_C::STATIC_Check_Actor_Overlap(class AActor* Input_Actor, class UObject* __WorldContext, bool* Delete_Actor, TArray<class AActor*>* Overlaps_to_Delete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap");

	UBP_Placement_Functions_C_Check_Actor_Overlap_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Delete_Actor != nullptr)
		*Delete_Actor = params.Delete_Actor;
	if (Overlaps_to_Delete != nullptr)
		*Overlaps_to_Delete = params.Overlaps_to_Delete;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlacementGardenSeed                        Selected_Mesh                                              (Parm)
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Get_Mesh_Instance_Transform(const struct FPlacementGardenSeed& Selected_Mesh, struct FRandomStream* Random, const struct FVector& Location, const struct FVector& Normal, class UObject* __WorldContext, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform");

	UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params params;
	params.Selected_Mesh = Selected_Mesh;
	params.Location = Location;
	params.Normal = Normal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlacementGardenSeed>                Charges                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      Charge_Probabilities                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Normalise_Mesh_Probabilities(TArray<struct FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities");

	UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlacementGardenSeed>                Meshes                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      Mesh_Probabilities                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              Generator_Radius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Clustering                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Radius_Multiplier                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UObject*>                             Physical_Materials                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FLinearColor>                        Mesh_Radii                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Spawn_Permission                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Mesh_Index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FPlacementGardenSeed                        Mesh                                                       (Parm, OutParm)
void UBP_Placement_Functions_C::STATIC_Set_Mesh(TArray<struct FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Mesh_Radii, struct FRandomStream* Random, class AActor* Actor, class UObject* __WorldContext, bool* Spawn_Permission, struct FTransform* Transform, float* Radius, int* Mesh_Index, struct FPlacementGardenSeed* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh");

	UBP_Placement_Functions_C_Set_Mesh_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Mesh_Probabilities != nullptr)
		*Mesh_Probabilities = params.Mesh_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Mesh_Radii != nullptr)
		*Mesh_Radii = params.Mesh_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Mesh_Index != nullptr)
		*Mesh_Index = params.Mesh_Index;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlacementBombCharge>                Charges                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      Charge_Probabilities                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              Generator_Radius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Clustering                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Box_Distribution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UObject*>                             Physical_Materials                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FLinearColor>                        Blast_Radii                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Spawn_Permission                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FPlacementBombCharge                        Charge                                                     (Parm, OutParm)
void UBP_Placement_Functions_C::STATIC_Set_Charge(TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Blast_Radii, struct FRandomStream* Random, class AActor* Actor, class UObject* __WorldContext, bool* Spawn_Permission, struct FVector* Position, float* Radius, struct FPlacementBombCharge* Charge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge");

	UBP_Placement_Functions_C_Set_Charge_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Box_Distribution = Box_Distribution;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Position != nullptr)
		*Position = params.Position;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Charge != nullptr)
		*Charge = params.Charge;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UObject*>                             Physical_Materials                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     Placement_Material                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Placement_Permission                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Check_Surface_Materials(TArray<class UObject*>* Physical_Materials, class UObject* Placement_Material, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials");

	UBP_Placement_Functions_C_Check_Surface_Materials_Params params;
	params.Placement_Material = Placement_Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   Slope_Range                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Placement_Permission                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Check_Slope(const struct FVector& Normal, const struct FVector2D& Slope_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope");

	UBP_Placement_Functions_C_Check_Slope_Params params;
	params.Normal = Normal;
	params.Slope_Range = Slope_Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   Height_Range                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Placement_Permission                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Check_Height(const struct FVector& Position, const struct FVector2D& Height_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height");

	UBP_Placement_Functions_C_Check_Height_Params params;
	params.Position = Position;
	params.Height_Range = Height_Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius_Overlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FLinearColor>                        Blast_Radii                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Placement_Permission                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Check_Radius_Overlap(const struct FVector& Position, float Radius, float Radius_Overlap, TArray<struct FLinearColor>* Blast_Radii, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap");

	UBP_Placement_Functions_C_Check_Radius_Overlap_Params params;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Cast_Success                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Set_Spawn_Properties(class UObject* Object, int Seed, float Radius, class UObject* __WorldContext, bool* Cast_Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties");

	UBP_Placement_Functions_C_Set_Spawn_Properties_Params params;
	params.Object = Object;
	params.Seed = Seed;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cast_Success != nullptr)
		*Cast_Success = params.Cast_Success;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     Centre                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_Start                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_End                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Generate_Random_Box_Raycast(struct FRandomStream* Random, const struct FVector& Centre, const struct FVector& Extent, class UObject* __WorldContext, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast");

	UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Seed_Density                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Sample_Count                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Get_Box_Sample_Count(class AActor* Actor, float Seed_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count");

	UBP_Placement_Functions_C_Get_Box_Sample_Count_Params params;
	params.Actor = Actor;
	params.Seed_Density = Seed_Density;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRandomStream                               Random                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Centre                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Clustering                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Radius_Multiplier                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Actor_Transform                                            (Parm, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_Start                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Raycast_End                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Generate_Random_Radial_Raycast(struct FRandomStream* Random, float Radius, const struct FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const struct FTransform& Actor_Transform, class UObject* __WorldContext, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast");

	UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params params;
	params.Radius = Radius;
	params.Centre = Centre;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor_Transform = Actor_Transform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Random_Float                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<float>                                      Charge_Probabilities                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Calculate_Index_from_Probabilities(float Random_Float, TArray<float>* Charge_Probabilities, class UObject* __WorldContext, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities");

	UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params params;
	params.Random_Float = Random_Float;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Spawn_Sample_Density                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Sample_Count                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count");

	UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params params;
	params.Radius = Radius;
	params.Spawn_Sample_Density = Spawn_Sample_Density;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlacementBombCharge>                Charges                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<float>                                      Charge_Probabilities                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Placement_Functions_C::STATIC_Normalise_Charge_Probabilities(TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities");

	UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;

}


void UBP_Placement_Functions_C::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBP_Placement_Functions_C::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
