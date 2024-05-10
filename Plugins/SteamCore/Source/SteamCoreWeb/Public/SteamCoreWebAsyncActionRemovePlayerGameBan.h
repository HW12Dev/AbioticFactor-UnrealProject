#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRemovePlayerGameBan.generated.h"

class UObject;
class USteamCoreWebAsyncActionRemovePlayerGameBan;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRemovePlayerGameBan();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

