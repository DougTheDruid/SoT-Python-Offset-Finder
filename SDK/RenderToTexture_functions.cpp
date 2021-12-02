// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x02F45730
//		Name   -> Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Identifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class URenderToTextureSceneDetails*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_GetRenderToTexture(const struct FName& Identifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture");

	URenderToTextureFunctionLibrary_GetRenderToTexture_Params params {};
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F45560
//		Name   -> Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       Identifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ClassToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FIntPoint                                   Resolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bForceLinearGamma                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bCaptureAlpha                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class URenderToTextureSceneDetails*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture");

	URenderToTextureFunctionLibrary_CreateRenderToTexture_Params params {};
	params.Identifier = Identifier;
	params.ClassToSpawn = ClassToSpawn;
	params.Resolution = Resolution;
	params.bForceLinearGamma = bForceLinearGamma;
	params.bCaptureAlpha = bCaptureAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URenderToTextureFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void URenderToTextureFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x02F457B0
//		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture");

	URenderToTextureSceneDetails_GetTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F45700
//		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* URenderToTextureSceneDetails::GetInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance");

	URenderToTextureSceneDetails_GetInstance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F456E0
//		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void URenderToTextureSceneDetails::DestroyTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture");

	URenderToTextureSceneDetails_DestroyTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URenderToTextureSceneDetails::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ClassToSpawn, UClass);
	READ_PTR_FULL(World, UWorld);
	READ_PTR_FULL(RenderTarget, UTextureRenderTarget2D);
}

void URenderToTextureSceneDetails::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ClassToSpawn);
	DELE_PTR_FULL(World);
	DELE_PTR_FULL(RenderTarget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
