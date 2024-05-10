#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebUserStats.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebUserStats : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebUserStats();

    UFUNCTION(BlueprintCallable)
    void SetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values);
    
    UFUNCTION(BlueprintCallable)
    void GetUserStatsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetSchemaForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerAchievements(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetNumberOfCurrentPlayers(const FOnSteamCoreWebCallback& Callback, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetGlobalStatsForGame(const FOnSteamCoreWebCallback& Callback, int32 AppID, TArray<FString> Names, int32 StartDate, int32 EndDate);
    
    UFUNCTION(BlueprintCallable)
    void GetGlobalAchievementPercentagesForApp(const FOnSteamCoreWebCallback& Callback, const FString& GameID);
    
};

