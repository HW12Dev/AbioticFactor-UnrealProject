#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionResetLeaderboard.generated.h"

class UObject;
class USteamCoreWebAsyncActionResetLeaderboard;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionResetLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 LeaderboardId);
    
};

