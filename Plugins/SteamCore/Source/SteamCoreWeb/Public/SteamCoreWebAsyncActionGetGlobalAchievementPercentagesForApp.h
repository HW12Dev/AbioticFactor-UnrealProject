#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(UObject* WorldContextObject, const FString& GameID);
    
};

