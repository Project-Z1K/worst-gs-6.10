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

// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// 0x00E8 (0x0458 - 0x0370)
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD;      // 0x0378(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E;      // 0x03B8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
