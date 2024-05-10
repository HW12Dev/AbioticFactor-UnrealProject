#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAuthenticateUser.generated.h"

class UObject;
class USteamCoreWebAsyncActionAuthenticateUser;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAuthenticateUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(UObject* WorldContextObject, const FString& SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
};

