#include "AbioticWorldSettings.h"
#include "Net/UnrealNetwork.h"

AAbioticWorldSettings::AAbioticWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModifiedRuleset = EModifiedRuleset::Normal;
}

void AAbioticWorldSettings::OnRep_SandboxValues() {
}

TMap<FName, FString> AAbioticWorldSettings::GetSandboxValues() {
    return TMap<FName, FString>();
}

void AAbioticWorldSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbioticWorldSettings, SandboxValues);
    DOREPLIFETIME(AAbioticWorldSettings, ModifiedRuleset);
}


