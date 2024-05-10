#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetSchemaForGame.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetSchemaForGame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetSchemaForGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language);
    
};

