#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamEconomy.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamEconomy : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamEconomy();

    UFUNCTION(BlueprintCallable)
    void StartTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamIDd, const FString& SteamId2);
    
    UFUNCTION(BlueprintCallable)
    void StartAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& AssetId, int32 AssetQuantity, const FString& Currency, const FString& Language, const FString& Ipaddress, const FString& Referer, bool bClientAuth);
    
    UFUNCTION(BlueprintCallable)
    void GetMarketPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetExportedAssetsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetAssetPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetAssetClassInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Language, int32 ClassCount, const FString& ClassID, const FString& InstanceId);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TxnId, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void CanTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TargetId);
    
};

