#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFlushAssetAppearanceCache.generated.h"

class UObject;
class USteamCoreWebAsyncActionFlushAssetAppearanceCache;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFlushAssetAppearanceCache();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

