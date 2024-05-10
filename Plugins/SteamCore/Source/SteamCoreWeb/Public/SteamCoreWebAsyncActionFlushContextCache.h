#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFlushContextCache.generated.h"

class UObject;
class USteamCoreWebAsyncActionFlushContextCache;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFlushContextCache();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

