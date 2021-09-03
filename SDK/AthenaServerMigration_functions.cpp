// Name: SoT, Version: 2.2.1.1

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

void FIncomingMigrationPreventionZone::AfterRead()
{
}

void FIncomingMigrationPreventionZone::BeforeDelete()
{
}

void FServerMigrationSetupCompleteEvent::AfterRead()
{
}

void FServerMigrationSetupCompleteEvent::BeforeDelete()
{
}

void FServerMigrationSetupRequestEvent::AfterRead()
{
}

void FServerMigrationSetupRequestEvent::BeforeDelete()
{
}

void FServerMigrationReadyToTransferActors::AfterRead()
{
}

void FServerMigrationReadyToTransferActors::BeforeDelete()
{
}

void FPrepareForWorldSwitchRpc::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FPrepareForWorldSwitchRpc::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void FServerMigrationAboutToStartEvent::AfterRead()
{
}

void FServerMigrationAboutToStartEvent::BeforeDelete()
{
}

void FServerMigrationConfigChangedEvent::AfterRead()
{
}

void FServerMigrationConfigChangedEvent::BeforeDelete()
{
}

void FServerMigrationAbortEvent::AfterRead()
{
}

void FServerMigrationAbortEvent::BeforeDelete()
{
}

void FServerMigrationCompleteEvent::AfterRead()
{
}

void FServerMigrationCompleteEvent::BeforeDelete()
{
}

void FServerMigrationHeartbeatEvent::AfterRead()
{
}

void FServerMigrationHeartbeatEvent::BeforeDelete()
{
}

void FServerMigrationRefusedEvent::AfterRead()
{
}

void FServerMigrationRefusedEvent::BeforeDelete()
{
}

void FServerMigrationInstanceEventBase::AfterRead()
{
}

void FServerMigrationInstanceEventBase::BeforeDelete()
{
}

void FOutgoingServerMigrationAbortedEvent::AfterRead()
{
	FServerMigrationInstanceEventBase::AfterRead();

}

void FOutgoingServerMigrationAbortedEvent::BeforeDelete()
{
	FServerMigrationInstanceEventBase::BeforeDelete();

}

void FOutgoingServerMigrationCompletedEvent::AfterRead()
{
	FServerMigrationInstanceEventBase::AfterRead();

}

void FOutgoingServerMigrationCompletedEvent::BeforeDelete()
{
	FServerMigrationInstanceEventBase::BeforeDelete();

}

void FOutgoingServerMigrationStartedEvent::AfterRead()
{
	FServerMigrationInstanceEventBase::AfterRead();

}

void FOutgoingServerMigrationStartedEvent::BeforeDelete()
{
	FServerMigrationInstanceEventBase::BeforeDelete();

}

void FServerMigrationSetServerConfigMessage::AfterRead()
{
}

void FServerMigrationSetServerConfigMessage::BeforeDelete()
{
}

void FServerMigrationRequestEvent::AfterRead()
{
}

void FServerMigrationRequestEvent::BeforeDelete()
{
}

void UAthenaServerMigrationGameAuthorityProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaServerMigrationGameAuthorityProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMigrationServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMigrationServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void URegisterServerMigrationPointOfInterestComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void URegisterServerMigrationPointOfInterestComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UServerMigrationGatherableActorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServerMigrationGatherableActorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
