#pragma once
#include "CoreMinimal.h"
#include "ESteamParentalFeature.h"
#include "SteamCoreSubsystem.h"
#include "ParentalSettings.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UParentalSettings : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UParentalSettings();

    UFUNCTION(BlueprintCallable)
    bool BIsParentalLockLocked();
    
    UFUNCTION(BlueprintCallable)
    bool BIsParentalLockEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    bool BIsFeatureBlocked(ESteamParentalFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    bool BIsAppInBlockList(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool BIsAppBlocked(int32 AppID);
    
};

