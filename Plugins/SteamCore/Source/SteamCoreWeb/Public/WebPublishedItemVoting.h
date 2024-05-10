#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebPublishedItemVoting.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebPublishedItemVoting : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebPublishedItemVoting();

    UFUNCTION(BlueprintCallable)
    void UserVoteSummary(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, TArray<FString> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void ItemVoteSummary(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> PublishedFileIDs);
    
};

