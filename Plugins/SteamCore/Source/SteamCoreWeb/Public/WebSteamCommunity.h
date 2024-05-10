#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamCommunity.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamCommunity : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamCommunity();

    UFUNCTION(BlueprintCallable)
    void ReportAbuse(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamIdActor, const FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const FString& Description, const FString& Gid);
    
};

