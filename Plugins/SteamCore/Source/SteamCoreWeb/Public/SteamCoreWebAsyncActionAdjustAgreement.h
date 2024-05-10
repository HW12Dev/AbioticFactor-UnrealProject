#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAdjustAgreement.generated.h"

class UObject;
class USteamCoreWebAsyncActionAdjustAgreement;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAdjustAgreement();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID, const FString& NextProcessDate);
    
};

