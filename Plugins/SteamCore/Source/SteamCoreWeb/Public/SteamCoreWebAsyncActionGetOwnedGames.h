#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetOwnedGames.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetOwnedGames;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetOwnedGames();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);
    
};

