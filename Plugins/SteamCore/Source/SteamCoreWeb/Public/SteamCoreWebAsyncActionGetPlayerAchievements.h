#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPlayerAchievements.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPlayerAchievements;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPlayerAchievements();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language);
    
};

