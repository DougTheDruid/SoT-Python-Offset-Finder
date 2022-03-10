namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class ReviveGhostAnimationData: public AnimationData
{
public:
	Class ReviveGhostAnimationDataAsset*               ReviveAnimationsDataAsset                          // 0x28(0x8)
};


// Size 0x28
class ReviveGhostAnimationDataAsset: public DataAsset
{
public:
	Struct ReviveGhostAnimations                       Animations                                         // 0x28(0x28)
};


// Size 0x50
class ReviveGhostAnimationInstance: public AnimInstance
{
public:
	Struct ReviveGhostAnimations                       ReviveAnimations                                   // 0x448(0x28)
	bool                                               FullyInitialised                                   // 0x470(0x1)
	bool                                               FullyRevived                                       // 0x471(0x1)
	bool                                               FromSwimming                                       // 0x472(0x1)
};


}