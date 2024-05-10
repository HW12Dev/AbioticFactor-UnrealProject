#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AnalyticsData.h"
#include "EAnalyticTraitType.h"
#include "Templates/SubclassOf.h"
#include "AnalyticsSubsystem.generated.h"

class UDamageType;
class UObject;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAnalyticsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAnalytics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnalyticsData AnalyticsData;
    
public:
    UAnalyticsSubsystem();

    UFUNCTION(BlueprintCallable)
    void TriggerTutorialState(const FString& State, int32 Minutes, bool bFirstPlaythrough, bool bPlayerQuit);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTraitChosenEvent(const FName& TraitName, EAnalyticTraitType TraitType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPlayerDeathEvent(TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerMoneySpentEvent(const FName& ItemName, int32 MoneySpent);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGenericEvent(const FString& Event, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEnemyKilled(const FName& NPCRow, TSubclassOf<UDamageType> DamageType, UObject* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCraftingEvent(const FName& ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBenchUpgradeEvent(const FName& UpgradeName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SendAnalyticsDataToProvider();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeAnalytics();
    
};

