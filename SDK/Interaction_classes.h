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
// Classes
//---------------------------------------------------------------------------

// Class Interaction.InteractableComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MS7V[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FeatureFlag;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FVector                                     BoxExtent;                                                 // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FVector                                     BoxOrigin;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FRotator                                    BoxRotation;                                               // 0x00F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      MayBeGrouped : 1;                                          // 0x00FC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected)
	unsigned char                                      ProxyForActorInteraction : 1;                              // 0x00FC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected)
	unsigned char                                      UnknownData_2GV4[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               RequiresFacingFront;                                       // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               RequiresNotAirborne;                                       // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               RequiresNotSwimming;                                       // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_Z7LU[0x1];                                     // 0x0103(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionRadius;                                         // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInteractableArea*                           InteractableArea;                                          // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EInteractableState>             CurrentInteractionState;                                   // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z037[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableComponent");
		return ptr;
	}



	void SetBoxOrigin(const struct FVector& IntBoxOrigin);
	void SetBoxExtent(const struct FVector& InBoxExtent);
	class UInteractableArea* GetInteractableArea();
	struct FVector GetBoxWorldOrigin();
	float GetBoxSphereRadius();
	struct FVector GetBoxOrigin();
	struct FVector GetBoxExtent();
	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractionValidatorSetterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractionValidatorSetterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractionValidatorSetterInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.CharacterInteractionComponent
// 0x00C8 (FullSize[0x0680] - InheritedSize[0x05B8])
class UCharacterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_PY5M[0x8];                                     // 0x05B8(0x0008) Fix Super Size
	class UInteractableArea*                           CurrentOptimalInteractable;                                // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UPPE[0xB8];                                    // 0x05C8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.CharacterInteractionComponent");
		return ptr;
	}



	bool IsInteractionValid(class UObject* InInteractable);
	void InvalidateOptimalObject();
	class UInteractableArea* GetOptimalFocusObject();
	void ClearAllPolicies();
	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.GroupedInteractableAreaComponent
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UGroupedInteractableAreaComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.GroupedInteractableAreaComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableArea
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UInteractableArea : public UObject
{
public:
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0028(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Name;                                                      // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NJNZ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Interactable;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Parent;                                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableArea");
		return ptr;
	}



	void SetParent(class AActor* InParent);
	void SetInteractable(class UObject* InInteractable);
	void SetAreaName(const struct FName& InName);
	void SetAreaBounds(const struct FBoxSphereBounds& InBounds);
	class AActor* GetParent();
	class UObject* GetInteractable();
	struct FName GetAreaName();
	struct FVector GetAreaLocation();
	struct FBoxSphereBounds GetAreaBounds();
	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableInterface");
		return ptr;
	}



	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	bool IsInteractableDisabled();
	void Interact(class AActor* InInteractor, class UClass* NotificationInputId);
	TEnumAsByte<Athena_EInteractableState> GetInteractionState();
	struct FVector GetFrontFacingVector();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore);
	class UActionRulesComponent* GetActionRulesComponent();
	bool DoesRequireNotSwimming();
	bool DoesRequireNotBeingAirborne();
	bool DoesRequireFacingFront();
	bool CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId);
	bool CanInteract(class AActor* InInteractor);
	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractableBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetInteractionState(class AActor* InteractableActor, TEnumAsByte<Athena_EInteractableState> NewInteractableState);
	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableIdentifierInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractableIdentifierInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableIdentifierInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractableServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractableService
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData_HLSF[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UInteractableArea*>                   InteractableAreas;                                         // 0x0038(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_UJ8B[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractableService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractionValidatorOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractionValidatorOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractionValidatorOwnerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.InteractorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractorInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.MockActorWithCharacterInteractionComponent
// 0x00B8 (FullSize[0x0690] - InheritedSize[0x05D8])
class AMockActorWithCharacterInteractionComponent : public ACharacter
{
public:
	unsigned char                                      UnknownData_VFKA[0x8];                                     // 0x05D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_1VSR[0x8];                                     // 0x05E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterInteractionComponent*              CharacterInteractionComponent;                             // 0x05E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_12YD[0xA0];                                    // 0x05F0(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.MockActorWithCharacterInteractionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.MockInteractableService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMockInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData_EXWA[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.MockInteractableService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.MockInteractorActor
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class AMockInteractorActor : public AActor
{
public:
	unsigned char                                      UnknownData_7RE3[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     FocusedInteractable;                                       // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     InteractedObject;                                          // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      InteractNotificationType;                                  // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IZO8[0x8];                                     // 0x03F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.MockInteractorActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Interaction.SelfInteractionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USelfInteractionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.SelfInteractionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
