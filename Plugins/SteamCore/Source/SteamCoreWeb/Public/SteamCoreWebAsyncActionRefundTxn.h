#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRefundTxn.generated.h"

class UObject;
class USteamCoreWebAsyncActionRefundTxn;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRefundTxn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderID, int32 AppID);
    
};

