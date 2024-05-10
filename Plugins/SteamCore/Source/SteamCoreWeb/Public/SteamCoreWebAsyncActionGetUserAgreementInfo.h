#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserAgreementInfo.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUserAgreementInfo;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserAgreementInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

