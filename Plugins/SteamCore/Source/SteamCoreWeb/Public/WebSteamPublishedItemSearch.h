#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamPublishedItemSearch.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamPublishedItemSearch();

    UFUNCTION(BlueprintCallable)
    void ResultSetSummary(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
    UFUNCTION(BlueprintCallable)
    void RankedByVote(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
    UFUNCTION(BlueprintCallable)
    void RankedByTrend(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
    
    UFUNCTION(BlueprintCallable)
    void RankedByPublicationOrder(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
};

