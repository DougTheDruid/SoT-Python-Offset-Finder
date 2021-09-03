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

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
{
	struct FName                                       Identifier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URenderToTextureSceneDetails*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
{
	struct FName                                       Identifier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClassToSpawn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   Resolution;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bForceLinearGamma;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCaptureAlpha;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class URenderToTextureSceneDetails*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
struct URenderToTextureSceneDetails_GetTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
struct URenderToTextureSceneDetails_GetInstance_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
struct URenderToTextureSceneDetails_DestroyTexture_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
