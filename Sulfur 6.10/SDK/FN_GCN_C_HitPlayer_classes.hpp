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

// BlueprintGeneratedClass GCN_C_HitPlayer.GCN_C_HitPlayer_C
// 0x0000 (0x01A8 - 0x01A8)
class UGCN_C_HitPlayer_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_C_HitPlayer.GCN_C_HitPlayer_C");
		return ptr;
	}


	void OnBurst(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
