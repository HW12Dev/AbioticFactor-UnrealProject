#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebAppListCallbackDelegate.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebApps.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebApps : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebApps();

    UFUNCTION(BlueprintCallable)
    void UpToDateCheck(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void SetAppBuildLive(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void GetServersAtAddress(const FOnSteamCoreWebCallback& Callback, const FString& Addr);
    
    UFUNCTION(BlueprintCallable)
    void GetServerList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Filter, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersBanned(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
    
    UFUNCTION(BlueprintCallable)
    void GetAppList(const FOnSteamCoreWebAppListCallback& Callback, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void GetAppDepotVersions(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetAppBuilds(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetAppBetas(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
};

