#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebCheatReporting.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebCheatReporting : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebCheatReporting();

    UFUNCTION(BlueprintCallable)
    void StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& SteamIdReporter, const FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    
    UFUNCTION(BlueprintCallable)
    void ReportCheatData(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const FString& CheatParam1, const FString& CheatParam2);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

