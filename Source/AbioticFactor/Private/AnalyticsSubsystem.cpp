#include "AnalyticsSubsystem.h"
#include "Templates/SubclassOf.h"

UAnalyticsSubsystem::UAnalyticsSubsystem() {
    this->bAllowAnalytics = true;
}

void UAnalyticsSubsystem::TriggerTutorialState(const FString& State, int32 Minutes, bool bFirstPlaythrough, bool bPlayerQuit) {
}

void UAnalyticsSubsystem::TriggerTraitChosenEvent(const FName& TraitName, EAnalyticTraitType TraitType) {
}

void UAnalyticsSubsystem::TriggerPlayerDeathEvent(TSubclassOf<UDamageType> DamageType) {
}

void UAnalyticsSubsystem::TriggerMoneySpentEvent(const FName& ItemName, int32 MoneySpent) {
}

void UAnalyticsSubsystem::TriggerGenericEvent(const FString& Event, int32 Amount) {
}

void UAnalyticsSubsystem::TriggerEnemyKilled(const FName& NPCRow, TSubclassOf<UDamageType> DamageType, UObject* DamageCauser) {
}

void UAnalyticsSubsystem::TriggerCraftingEvent(const FName& ItemName, int32 Amount) {
}

void UAnalyticsSubsystem::TriggerBenchUpgradeEvent(const FName& UpgradeName, int32 Amount) {
}

void UAnalyticsSubsystem::SendAnalyticsDataToProvider() {
}

bool UAnalyticsSubsystem::InitializeAnalytics() {
    return false;
}


