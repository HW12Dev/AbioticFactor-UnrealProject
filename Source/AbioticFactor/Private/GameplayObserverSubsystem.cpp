#include "GameplayObserverSubsystem.h"
#include "Templates/SubclassOf.h"

UGameplayObserverSubsystem::UGameplayObserverSubsystem() {
}

void UGameplayObserverSubsystem::TriggerPlayerDeath(AAbioticCharacter* Player, TSubclassOf<UDamageType> DamageType) {
}

void UGameplayObserverSubsystem::TriggerItemReceived(AAbioticCharacter* Player, FName ItemName, int32 Amount) {
}

void UGameplayObserverSubsystem::TriggerItemEquipped(AAbioticCharacter* Player, FName ItemName, int32 Slot) {
}

void UGameplayObserverSubsystem::TriggerItemCrafted(AAbioticCharacter* Player, FName ItemName, int32 Amount) {
}

void UGameplayObserverSubsystem::TriggerDeployablePluggedIn(AAbioticCharacter* Player, AActor* Deployable) {
}

void UGameplayObserverSubsystem::TriggerDeployablePlaced(AAbioticCharacter* Player, AActor* Deployable) {
}

void UGameplayObserverSubsystem::TriggerDeployableConstructed(AAbioticCharacter* Player, AActor* Deployable) {
}

void UGameplayObserverSubsystem::TriggerCraftingBenchDestroyed(AActor* CraftingBench) {
}

void UGameplayObserverSubsystem::TriggerCraftingBenchCreated(AActor* CraftingBench) {
}

void UGameplayObserverSubsystem::TriggerBuffRemoved(AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle) {
}

void UGameplayObserverSubsystem::TriggerBuffReceived(AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle) {
}


