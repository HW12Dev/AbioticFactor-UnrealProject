#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionQueryTxn.generated.h"

class UObject;
class USteamCoreWebAsyncActionQueryTxn;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionQueryTxn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& OrderID, const FString& TransId);
    
};

