#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetServerList.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetServerList;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetServerList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(UObject* WorldContextObject, const FString& Key, const FString& Filter, int32 Limit);
    
};

