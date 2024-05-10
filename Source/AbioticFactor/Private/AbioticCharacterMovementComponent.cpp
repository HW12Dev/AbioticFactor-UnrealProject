#include "AbioticCharacterMovementComponent.h"

UAbioticCharacterMovementComponent::UAbioticCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantsToSprint = false;
    this->bWantsToAim = false;
    this->bIsFrozen = false;
    this->MaxTetherDistance = 600.00f;
    this->TetherDistanceToAdjustMovement = 400.00f;
    this->JetpackAirControlMultiplier = 1.50f;
    this->BrakingDecelerationFrozen = 100.00f;
    this->BrakingFrictionFactorFrozen = 0.50f;
    this->GroundFrictionFrozen = 2.00f;
    this->bCanEverSprint = true;
    this->bCanEverAim = true;
    this->bAllowMovementDuringRootMotion = false;
}

void UAbioticCharacterMovementComponent::UpdateGravityScaleModifier(float NewScale) {
}

bool UAbioticCharacterMovementComponent::IsSprinting() const {
    return false;
}

bool UAbioticCharacterMovementComponent::IsAiming() const {
    return false;
}

float UAbioticCharacterMovementComponent::GetWaddingImmersionDepth() {
    return 0.0f;
}

float UAbioticCharacterMovementComponent::GetScaledGravity() {
    return 0.0f;
}

float UAbioticCharacterMovementComponent::GetImmersionDepth() {
    return 0.0f;
}


