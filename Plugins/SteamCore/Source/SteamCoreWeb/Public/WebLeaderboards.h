#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebLeaderboards.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebLeaderboards : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebLeaderboards();

    UFUNCTION(BlueprintCallable)
    void SetLeaderboardScore(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 LeaderbordId, const FString& SteamID, int32 Score, TArray<uint8> Details, const FString& ScoreMethod);
    
    UFUNCTION(BlueprintCallable)
    void ResetLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 LeaderboardId);
    
    UFUNCTION(BlueprintCallable)
    void GetLeaderboardsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetLeaderboardEntries(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void FindOrCreateLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    
    UFUNCTION(BlueprintCallable)
    void DeleteLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Name);
    
};

