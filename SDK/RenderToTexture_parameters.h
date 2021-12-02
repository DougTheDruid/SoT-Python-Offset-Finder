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

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
{
	struct FName                                       Identifier;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URenderToTextureSceneDetails*                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
{
	struct FName                                       Identifier;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClassToSpawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   Resolution;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bForceLinearGamma;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCaptureAlpha;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URenderToTextureSceneDetails*                ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
struct URenderToTextureSceneDetails_GetTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
struct URenderToTextureSceneDetails_GetInstance_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
struct URenderToTextureSceneDetails_DestroyTexture_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
