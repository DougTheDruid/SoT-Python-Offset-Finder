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

// Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers
struct ABP_CliffGenerator_C_Draw_Debug_Numbers_Params
{
	int                                                CurrentIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextIndex;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartLocation;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndLocation;                                               // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartTangent;                                              // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
struct ABP_CliffGenerator_C_Deform_Terrain_Params
{
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
struct ABP_CliffGenerator_C_Build_Element_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 ElementMesh;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
struct ABP_CliffGenerator_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
