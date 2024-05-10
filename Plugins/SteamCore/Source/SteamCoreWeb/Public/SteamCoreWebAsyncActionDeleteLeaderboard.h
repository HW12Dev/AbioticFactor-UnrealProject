#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionDeleteLeaderboard.generated.h"

class UObject;
class USteamCoreWebAsyncActionDeleteLeaderboard;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionDeleteLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Name);
    
};

