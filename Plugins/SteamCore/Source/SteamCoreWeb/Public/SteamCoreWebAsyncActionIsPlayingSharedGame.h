#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionIsPlayingSharedGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionIsPlayingSharedGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionIsPlayingSharedGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppIdPlaying);
    
};

