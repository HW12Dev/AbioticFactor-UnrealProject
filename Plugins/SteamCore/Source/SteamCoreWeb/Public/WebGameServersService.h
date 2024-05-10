#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebGameServersService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebGameServersService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebGameServersService();

    UFUNCTION(BlueprintCallable)
    void SetMemo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void SetBanStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, bool bBanned, int32 banSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ResetLoginToken(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void QueryLoginToken(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void GetServerSteamIDsByIP(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& ServerIP);
    
    UFUNCTION(BlueprintCallable)
    void GetServerIPsBySteamID(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& ServerSteamId);
    
    UFUNCTION(BlueprintCallable)
    void GetAccountPublicInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetAccountList(const FOnSteamCoreWebCallback& Callback, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAccount(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void CreateAccount(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Memo);
    
};

