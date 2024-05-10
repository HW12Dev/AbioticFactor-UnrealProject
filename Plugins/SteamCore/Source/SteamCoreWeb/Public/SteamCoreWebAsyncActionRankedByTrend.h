#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRankedByTrend.generated.h"

class UObject;
class USteamCoreWebAsyncActionRankedByTrend;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRankedByTrend();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
    
};

