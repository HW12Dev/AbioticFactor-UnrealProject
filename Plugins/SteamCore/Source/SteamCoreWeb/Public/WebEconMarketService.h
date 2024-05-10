#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebEconMarketService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebEconMarketService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebEconMarketService();

    UFUNCTION(BlueprintCallable)
    void GetPopular(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetMarketEligibility(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetAssetID(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ListingId);
    
    UFUNCTION(BlueprintCallable)
    void CancelAppListingsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, bool bSynchronous);
    
};

