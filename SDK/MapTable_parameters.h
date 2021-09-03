#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Function MapTable.MapTable_C.UpdateBlurEffect
struct AMapTable_C_UpdateBlurEffect_Params
{
};

// Function MapTable.MapTable_C.GetClosestInteractionPoint
struct AMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.UserConstructionScript
struct AMapTable_C_UserConstructionScript_Params
{
};

// Function MapTable.MapTable_C.ReceiveBeginPlay
struct AMapTable_C_ReceiveBeginPlay_Params
{
};

// Function MapTable.MapTable_C.SetEffectActiveWhenClose
struct AMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function MapTable.MapTable_C.OnMapActivate
struct AMapTable_C_OnMapActivate_Params
{
	bool                                               IsMapActive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTextureRenderTarget2D*                      Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.OnMapMove
struct AMapTable_C_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ZoomLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
struct AMapTable_C_ExecuteUbergraph_MapTable_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
