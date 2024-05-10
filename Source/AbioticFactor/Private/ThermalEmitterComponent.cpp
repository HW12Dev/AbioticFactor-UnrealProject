#include "ThermalEmitterComponent.h"
#include "Net/UnrealNetwork.h"

UThermalEmitterComponent::UThermalEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThermalTemperature = 50.00f;
    this->ThermalTemperatureFalloffCurve = NULL;
    this->bStartActive = false;
    this->bEmitterActive = false;
}

void UThermalEmitterComponent::SetEmitterActive(bool bNewActive) {
}

void UThermalEmitterComponent::OnRep_EmitterActive() {
}

void UThermalEmitterComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UThermalEmitterComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UThermalEmitterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UThermalEmitterComponent, bEmitterActive);
    DOREPLIFETIME(UThermalEmitterComponent, OverlapPrimitives);
}


