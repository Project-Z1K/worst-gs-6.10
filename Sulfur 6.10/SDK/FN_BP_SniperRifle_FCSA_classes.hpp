#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
// 0x00E8 (0x0458 - 0x0370)
class UBP_SniperRifle_FCSA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_146699F448DB1AAB26EC9F814C49D1D1;      // 0x0378(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F7DD3CBC4CA03D5C78826D9E409ECCA2;      // 0x03B8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7C8D051E4A0B249DA61DCAA86177450B;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_SniperRifle_FCSA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
