#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetLeaderboardEntries.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetLeaderboardEntries;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetLeaderboardEntries();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const FString& SteamID);
    
};

