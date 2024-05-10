#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebGameNotificationsService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebGameNotificationsService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebGameNotificationsService();

    UFUNCTION(BlueprintCallable)
    void UpdateSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID, const FString& Title, const FString& Users, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void RequestNotifications(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetSessionDetailsForApp(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Sessions, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void EnumerateSessionsForApp(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSessionBatch(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SessionID, int32 AppID, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void CreateSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Context, const FString& Title, const FString& Users, const FString& SteamID);
    
};

