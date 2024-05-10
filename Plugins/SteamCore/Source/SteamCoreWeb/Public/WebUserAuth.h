#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebUserAuth.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebUserAuth : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebUserAuth();

    UFUNCTION(BlueprintCallable)
    void AuthenticateUserTicket(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void AuthenticateUser(const FOnSteamCoreWebCallback& Callback, const FString& SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
};

