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

// BlueprintGeneratedClass GCN_Player_KnockedBack.GCN_Player_KnockedBack_C
// 0x0000 (0x01A8 - 0x01A8)
class UGCN_Player_KnockedBack_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Player_KnockedBack.GCN_Player_KnockedBack_C");
		return ptr;
	}


	void OnBurst(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
