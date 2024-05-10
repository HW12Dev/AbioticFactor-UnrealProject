#include "AbioticCharacter.h"
#include "AbioticCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

AAbioticCharacter::AAbioticCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAbioticCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bHasBeenRagdolling = false;
    this->TetheredBy = NULL;
    this->BuffComponent = NULL;
    this->bStatsLocked = false;
    this->CurrentHealth_Head = 0.00f;
    this->CurrentHealth_Torso = 0.00f;
    this->CurrentHealth_LeftArm = 0.00f;
    this->CurrentHealth_RightArm = 0.00f;
    this->CurrentHealth_LeftLeg = 0.00f;
    this->CurrentHealth_RightLeg = 0.00f;
    this->CurrentStamina = 50.00f;
    this->MaxStamina = 50.00f;
    this->StaminaRequiredToSprint = 10.00f;
    this->BaseWalkSpeed = 400.00f;
    this->BaseSprintSpeed = 650.00f;
    this->MinimumMovementSpeed = 80.00f;
    this->GlobalSpeedModifier = 1.00f;
    this->GlobalSprintSpeedModifier = 1.00f;
    this->GlobalSwimSpeedModifier = 1.00f;
    this->GlobalCrouchSpeedModifier = 1.00f;
    this->bIsSprinting = false;
    this->bIsAiming = false;
    this->JetpackTimestamp = 0.00f;
    this->bHasStaminaToSprint = true;
    this->ToggleSprintEnabledTimestamp = 0.00f;
}

void AAbioticCharacter::UpdateSkillStatLevel(FSkillRowHandle Skill, int32 Level) {
}

void AAbioticCharacter::ToggleSprint() {
}

void AAbioticCharacter::ToggleCrouch() {
}

void AAbioticCharacter::ToggleAim() {
}

void AAbioticCharacter::StopSprint(bool bClientSimulation) {
}

void AAbioticCharacter::StopAim(bool bClientSimulation) {
}

void AAbioticCharacter::Sprint(bool bClientSimulation) {
}

void AAbioticCharacter::SetStatUpdateLock(bool bLocked) {
}

void AAbioticCharacter::SetMaxStamina(float NewMaxStamina) {
}

void AAbioticCharacter::SetLimbHealth(EBodyLimbs Limb, float Health) {
}

void AAbioticCharacter::SetInternalStates(bool bDBNO, bool bDead, bool bSitting) {
}

void AAbioticCharacter::SetCurrentStamina(float NewCurrentStamina) {
}

void AAbioticCharacter::RemoveNearbyCharacter(AAbioticCharacter* Character, UPrimitiveComponent* OverlapPrimitive) {
}



void AAbioticCharacter::OnRep_StatModifiers() {
}

void AAbioticCharacter::OnRep_MaxStamina() {
}

void AAbioticCharacter::OnRep_IsSprinting() {
}

void AAbioticCharacter::OnRep_IsAiming() {
}

void AAbioticCharacter::OnRep_CurrentStamina() {
}

void AAbioticCharacter::OnRep_CurrentHealth() {
}




void AAbioticCharacter::NearbyCharacterTagsUpdated() {
}

bool AAbioticCharacter::IsSprinting() const {
    return false;
}

bool AAbioticCharacter::IsLocalAbioticCharacter() const {
    return false;
}

bool AAbioticCharacter::IsAlive_Implementation() const {
    return false;
}

bool AAbioticCharacter::IsAiming() const {
    return false;
}

bool AAbioticCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const {
    return false;
}

bool AAbioticCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool AAbioticCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

float AAbioticCharacter::GetTotalHealth() const {
    return 0.0f;
}

float AAbioticCharacter::GetStatModifierValue(float BaseValue, FStatModifierRowHandle Modifier) const {
    return 0.0f;
}

void AAbioticCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}


float AAbioticCharacter::GetMaxTotalHealth() const {
    return 0.0f;
}

float AAbioticCharacter::GetMaxLimbHealth(EBodyLimbs Limb) const {
    return 0.0f;
}

void AAbioticCharacter::GetMaxHealthMap(TMap<EBodyLimbs, float>& MaxHealthMap) {
}

float AAbioticCharacter::GetLimbPercentage(EBodyLimbs Limb) const {
    return 0.0f;
}

float AAbioticCharacter::GetLimbHealth(EBodyLimbs Limb) const {
    return 0.0f;
}

FVector AAbioticCharacter::GetJetpackVelocity_Implementation(const FVector& InitialVelocity, const FVector& FallingVelocity, const float JetpackStartTime, const float DeltaTime) {
    return FVector{};
}

void AAbioticCharacter::GetCurrentHealthMap(TMap<EBodyLimbs, float>& CurrentHealthMap) {
}

bool AAbioticCharacter::DoesNearbyCharacterMatchTagQuery(FGameplayTagQuery TagQuery) const {
    return false;
}

bool AAbioticCharacter::DoesNearbyCharacterHaveTag(FGameplayTag Tag) const {
    return false;
}

void AAbioticCharacter::ClearCheatStatModifiers() {
}

void AAbioticCharacter::CheckForStaminaEvents_Implementation() {
}

void AAbioticCharacter::Aim(bool bClientSimulation) {
}

void AAbioticCharacter::AddNearbyCharacter(AAbioticCharacter* Character, UPrimitiveComponent* OverlapPrimitive) {
}

void AAbioticCharacter::AddCheatStatModifier(FStatModifierRowHandle Modifier, int32 Value) {
}

void AAbioticCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbioticCharacter, TetheredBy);
    DOREPLIFETIME(AAbioticCharacter, GameplayTags);
    DOREPLIFETIME(AAbioticCharacter, StatModifiers);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_Head);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_Torso);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_LeftArm);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_RightArm);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_LeftLeg);
    DOREPLIFETIME(AAbioticCharacter, CurrentHealth_RightLeg);
    DOREPLIFETIME(AAbioticCharacter, CurrentStamina);
    DOREPLIFETIME(AAbioticCharacter, MaxStamina);
    DOREPLIFETIME(AAbioticCharacter, bIsSprinting);
    DOREPLIFETIME(AAbioticCharacter, bIsAiming);
}


