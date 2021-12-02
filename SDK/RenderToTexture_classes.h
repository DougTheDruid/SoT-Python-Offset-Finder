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
// Classes
//---------------------------------------------------------------------------

// Class RenderToTexture.RenderToTextureFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URenderToTextureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RenderToTexture.RenderToTextureFunctionLibrary");
		return ptr;
	}



	class URenderToTextureSceneDetails* STATIC_GetRenderToTexture(const struct FName& Identifier);
	class URenderToTextureSceneDetails* STATIC_CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha);
	void AfterRead();
	void BeforeDelete();

};

// Class RenderToTexture.RenderToTextureSceneDetails
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class URenderToTextureSceneDetails : public UObject
{
public:
	class UClass*                                      ClassToSpawn;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   Resolution;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class UWorld*                                      World;                                                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TWeakObjectPtr<class UWorld>                       ParentWorld;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class AActor>                       SpawnedActor;                                              // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C5ON[0x50];                                    // 0x0058(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RenderToTexture.RenderToTextureSceneDetails");
		return ptr;
	}



	class UTextureRenderTarget2D* GetTexture();
	class AActor* GetInstance();
	void DestroyTexture();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
