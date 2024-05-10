#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionStartTrade.generated.h"

class UObject;
class USteamCoreWebAsyncActionStartTrade;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionStartTrade();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionStartTrade* StartTradeAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamId1, const FString& SteamId2);
    
};

