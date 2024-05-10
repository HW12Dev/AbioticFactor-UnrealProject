#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebGameInventory.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebGameInventory : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebGameInventory();

    UFUNCTION(BlueprintCallable)
    void UpdateItemDefs();
    
    UFUNCTION(BlueprintCallable)
    void SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& AssetId, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 ActorId);
    
    UFUNCTION(BlueprintCallable)
    void GetUserHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
};

