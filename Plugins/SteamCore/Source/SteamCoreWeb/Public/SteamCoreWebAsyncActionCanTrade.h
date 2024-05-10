#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCanTrade.generated.h"

class UObject;
class USteamCoreWebAsyncActionCanTrade;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCanTrade();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionCanTrade* CanTradeAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& TargetId);
    
};

