#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFindOrCreateLeaderboard.generated.h"

class UObject;
class USteamCoreWebAsyncActionFindOrCreateLeaderboard;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFindOrCreateLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    
};

