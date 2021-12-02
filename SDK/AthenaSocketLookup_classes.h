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

// Class AthenaSocketLookup.SocketIdTestFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USocketIdTestFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaSocketLookup.SocketIdTestFunctions");
		return ptr;
	}



	struct FSocketId STATIC_MakeSocketIdWithInvalidName(const struct FString& InPath);
	struct FSocketId STATIC_MakeSocketIdWithEmptyPath(const struct FName& InSocketName);
	struct FSocketId STATIC_MakeSocketId(const struct FString& InPath, const struct FName& InSocketName);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaSocketLookup.SocketLookupCacheTestFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USocketLookupCacheTestFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupCacheTestFunctions");
		return ptr;
	}



	bool STATIC_IsInCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId);
	bool STATIC_AddToCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaSocketLookup.SocketLookupFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USocketLookupFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupFunctions");
		return ptr;
	}



	bool STATIC_TryGetSocketTransformWithCache(struct FSocketLookupCache* Cache, class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform);
	bool STATIC_TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform, TEnumAsByte<Engine_ERelativeTransformSpace> Space);
	bool STATIC_TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform);
	class USceneComponent* STATIC_TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaSocketLookup.SocketLookupInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USocketLookupInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupInterface");
		return ptr;
	}



	bool FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
