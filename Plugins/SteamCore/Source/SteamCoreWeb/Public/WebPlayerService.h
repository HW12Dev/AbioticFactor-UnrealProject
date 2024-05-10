#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebPlayerService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebPlayerService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebPlayerService();

    UFUNCTION(BlueprintCallable)
    void IsPlayingSharedGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppIdPlaying);
    
    UFUNCTION(BlueprintCallable)
    void GetSteamLevel(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetRecentlyPlayedGames(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGames(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);
    
    UFUNCTION(BlueprintCallable)
    void GetCommunityBadgeProgress(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 BadgeId);
    
    UFUNCTION(BlueprintCallable)
    void GetBadges(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
};

