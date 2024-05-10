#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetCommunityBadgeProgress.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetCommunityBadgeProgress;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetCommunityBadgeProgress();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 BadgeId);
    
};

