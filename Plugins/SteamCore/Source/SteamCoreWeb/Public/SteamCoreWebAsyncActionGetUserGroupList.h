#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserGroupList.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUserGroupList;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserGroupList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

