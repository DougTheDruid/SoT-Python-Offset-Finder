namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class BP_VotableVoyageProposal_C: public VotableObjectView
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x4e8(0x8)
	Class StaticMeshComponent*                         Token 1                                            // 0x4f0(0x8)
	Class StaticMeshComponent*                         Token 4                                            // 0x4f8(0x8)
	Class StaticMeshComponent*                         Token 3                                            // 0x500(0x8)
	Class StaticMeshComponent*                         Token 2                                            // 0x508(0x8)
	TArray<class Tokens*>                              Tokens                                             // 0x510(0x10)
	Class StaticMesh*                                  Token Asset                                        // 0x520(0x8)
	int                                                VoteCount                                          // 0x528(0x4)
	float                                              Show Token Animation Time                          // 0x52c(0x4)
	Class MaterialInterface*                           Token Material                                     // 0x530(0x8)
};


}