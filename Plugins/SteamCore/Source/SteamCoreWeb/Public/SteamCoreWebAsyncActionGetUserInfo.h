#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserInfo.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUserInfo;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& Ipaddress);
    
};

