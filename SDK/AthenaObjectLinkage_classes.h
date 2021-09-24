#pragma once

// Name: SoT, Version: 2.3.0


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

// Class AthenaObjectLinkage.EndPlayHandler
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEndPlayHandler : public UObject
{
public:
	unsigned char                                      UnknownData_LX3U[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaObjectLinkage.EndPlayHandler");
		return ptr;
	}



	void OnEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaObjectLinkage.LinkEndpointIdUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULinkEndpointIdUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkEndpointIdUtilities");
		return ptr;
	}



	bool STATIC_IsValid(const struct FLinkEndpointId& Id);
	bool STATIC_IsPathed(const struct FLinkEndpointId& Id);
	struct FLinkEndpointId STATIC_CreateEndpointId(const struct FString& String);
	struct FString STATIC_Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id);
	struct FLinkEndpointId STATIC_CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaObjectLinkage.LinkEndpointInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULinkEndpointInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkEndpointInterface");
		return ptr;
	}



	void ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance);
	void LoseLink(const struct FLinkEndpointId& Id);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaObjectLinkage.LinkerComponent
// 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
class ULinkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MC61[0xC8];                                    // 0x00C8(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UEndPlayHandler*>                     EndPlayHandlers;                                           // 0x0190(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkerComponent");
		return ptr;
	}



	void UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
	void UnregisterEndpoint(const struct FLinkEndpointId& Id);
	void SetParent(class AActor* Parent);
	TEnumAsByte<AthenaObjectLinkage_EAddLinkResult> RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
	TEnumAsByte<AthenaObjectLinkage_EAddEndpointResult> RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source);
	void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
	void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
	class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
	int GetNumSetLinks();
	int GetNumRegisteredLinks();
	int GetNumRegisteredEndpoints();
	int GetNumPendingLinks();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaObjectLinkage.LinkerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULinkerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkerInterface");
		return ptr;
	}



	void SetParent(class AActor* Parent);
	void RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
	void RemoveEndpoint(const struct FLinkEndpointId& Id);
	void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
	void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
	class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
	bool AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
	bool AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
