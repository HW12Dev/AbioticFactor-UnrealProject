#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionProcessAgreement.generated.h"

class UObject;
class USteamCoreWebAsyncActionProcessAgreement;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionProcessAgreement();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderID, const FString& SteamID, const FString& AgreementId, int32 AppID, int32 Amount, const FString& Currency);
    
};

