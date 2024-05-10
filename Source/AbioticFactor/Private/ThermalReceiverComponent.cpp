#include "ThermalReceiverComponent.h"
#include "Net/UnrealNetwork.h"

UThermalReceiverComponent::UThermalReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartActive = true;
    this->AmbientTemperature = 68.00f;
    this->AdditionalTemperature = 0.00f;
    this->CurrentTemperature = 68.00f;
    this->TargetTemperature = 68.00f;
    this->TemperatureTickRate = 0.25f;
    this->TemperatureAdjustScale = 0.10f;
    this->MinimumTempSpeed = 1.00f;
}

void UThermalReceiverComponent::UpdateTemperature() {
}

void UThermalReceiverComponent::SetReceiverActive(bool bNewActive) {
}

void UThermalReceiverComponent::SanitizeOverlappingEmitters() {
}

void UThermalReceiverComponent::OnRep_CurrentTemperature() {
}

void UThermalReceiverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UThermalReceiverComponent, CurrentTemperature);
    DOREPLIFETIME(UThermalReceiverComponent, TargetTemperature);
}


