namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x118
class BP_Prompt_RepairShip_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_ShipDamaged                                  // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnShipDamaged                               // 0x128(0x48)
	bool                                               State_Complete                                     // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_RepairShip                                  // 0x178(0x68)
	Struct ObjectMessagingHandle                       Handle_CurrentShipChanged                          // 0x1e0(0x48)
	Class Ship*                                        CurrentShip                                        // 0x228(0x8)
};


// Size 0x118
class BP_Prompt_RepairShipCapstan_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_CapstanDamaged                               // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnCapstanDamaged                            // 0x128(0x48)
	bool                                               State_Complete                                     // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_RepairShip                                  // 0x178(0x68)
	Struct ObjectMessagingHandle                       Handle_CurrentShipChanged                          // 0x1e0(0x48)
	Class Ship*                                        CurrentShip                                        // 0x228(0x8)
};


// Size 0x1b0
class BP_Prompt_RepairShipMast_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_ShipMastDamaged                              // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnMastDamaged1                              // 0x128(0x48)
	bool                                               State_Complete                                     // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_RepairShip                                  // 0x178(0x68)
	Struct ObjectMessagingHandle                       Handle_CurrentShipChanged                          // 0x1e0(0x48)
	Class Ship*                                        CurrentShip                                        // 0x228(0x8)
	Struct ObjectMessagingHandle                       Handle_OnMastDamaged2                              // 0x230(0x48)
	Struct ObjectMessagingHandle                       Handle_OnMastDamaged3                              // 0x278(0x48)
	int                                                NumMastsRegistered                                 // 0x2c0(0x4)
	int                                                MastIndex                                          // 0x2c4(0x4)
};


// Size 0x118
class BP_Prompt_RepairShipWheel_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_ShipWheelDamaged                             // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnWheelDamaged                              // 0x128(0x48)
	bool                                               State_Complete                                     // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_RepairShip                                  // 0x178(0x68)
	Struct ObjectMessagingHandle                       Handle_CurrentShipChanged                          // 0x1e0(0x48)
	Class Ship*                                        CurrentShip                                        // 0x228(0x8)
};


}