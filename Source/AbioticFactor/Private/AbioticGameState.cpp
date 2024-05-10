#include "AbioticGameState.h"
#include "LevelManagerComponent.h"
#include "Net/UnrealNetwork.h"

AAbioticGameState::AAbioticGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SavedElapsedMinutes = 0;
    this->LevelManager = CreateDefaultSubobject<ULevelManagerComponent>(TEXT("LevelManager"));
}

void AAbioticGameState::SetTeleporterFrequency(AActor* Teleporter, int32 Frequency, bool bSkipBroadcast) {
}

void AAbioticGameState::RemoveTeleporterFrequency(AActor* Teleporter) {
}

void AAbioticGameState::OnRep_WorldFlags() {
}

int32 AAbioticGameState::GetElapsedMinutes() const {
    return 0;
}

bool AAbioticGameState::DoesFrequencyHaveMatchingTeleporter(int32 Frequency, AActor* Teleporter) {
    return false;
}

void AAbioticGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbioticGameState, SavedElapsedMinutes);
    DOREPLIFETIME(AAbioticGameState, WorldFlags);
}


