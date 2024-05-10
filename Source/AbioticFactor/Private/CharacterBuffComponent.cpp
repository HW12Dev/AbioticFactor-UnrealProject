#include "CharacterBuffComponent.h"
#include "Net/UnrealNetwork.h"

UCharacterBuffComponent::UCharacterBuffComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UCharacterBuffComponent::Server_RemoveTraitBuff(FBuffDebuffRowHandle BuffRow) {
}

void UCharacterBuffComponent::Server_RemoveSpecificBuffs(TArray<FBuffDebuffRowHandle> BuffRows, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs) {
}

void UCharacterBuffComponent::Server_RemoveFullHealthBuffsOnLimb(EBodyLimbs Limb) {
}

bool UCharacterBuffComponent::Server_RemoveBuff(FBuffDebuffRowHandle BuffRow, bool bRemoveEntireStack, EBodyLimbs Limb, bool bExpiredByTime) {
    return false;
}

bool UCharacterBuffComponent::Server_ApplyBuff(FBuffDebuffRowHandle BuffRow, bool bOverrideDefaultDuration, float NewDuration, EBodyLimbs Limb, AActor* LinkedActor, bool bSkipDialog) {
    return false;
}

void UCharacterBuffComponent::Server_AddTraitBuff(FBuffDebuffRowHandle BuffRow) {
}



void UCharacterBuffComponent::OnRep_CurrentBuffs() {
}

void UCharacterBuffComponent::OnRep_BuffTagContainer() {
}

void UCharacterBuffComponent::OnRep_BuffParticles() {
}

void UCharacterBuffComponent::OnRep_BuffMaterials() {
}

bool UCharacterBuffComponent::HasBuffTag(FGameplayTag Tag) const {
    return false;
}

TArray<EBodyLimbs> UCharacterBuffComponent::HasBuff(FBuffDebuffRowHandle BuffRow, bool bMustBeOnSameLimb, EBodyLimbs Limb) {
    return TArray<EBodyLimbs>();
}

bool UCharacterBuffComponent::GetBuffExpireTime(FBuffDebuffRowHandle BuffRow, float& ExpireTime) {
    return false;
}

void UCharacterBuffComponent::GetBuffCountMap(bool bIgnoreSilent, TMap<FBuffDebuffRowHandle, int32>& OutBuffCountMap) {
}

bool UCharacterBuffComponent::FindBuffInArray(TArray<FBuffDebuffEntry> BuffArray, FBuffDebuffEntry& OutBuffEntry) {
    return false;
}

bool UCharacterBuffComponent::DoesBuffTagQueryMatch(FGameplayTagQuery TagQuery) const {
    return false;
}




void UCharacterBuffComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterBuffComponent, CurrentBuffs);
    DOREPLIFETIME(UCharacterBuffComponent, BuffParticles);
    DOREPLIFETIME(UCharacterBuffComponent, BuffMaterials);
    DOREPLIFETIME(UCharacterBuffComponent, TraitBuffRows);
    DOREPLIFETIME(UCharacterBuffComponent, BuffTagContainer);
}


