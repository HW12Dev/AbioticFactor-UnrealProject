#pragma once
#include "CoreMinimal.h"
#include "AttachLeaderboardUGCData.h"
#include "OnAttachLeaderboardUGCAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamUGCHandle.h"
#include "SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachLeaderboardUGCAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionAttachLeaderboardUGC();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout);
    
};

