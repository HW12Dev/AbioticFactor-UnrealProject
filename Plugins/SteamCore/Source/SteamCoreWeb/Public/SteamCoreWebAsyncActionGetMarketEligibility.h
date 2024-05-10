#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetMarketEligibility.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetMarketEligibility;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetMarketEligibility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

