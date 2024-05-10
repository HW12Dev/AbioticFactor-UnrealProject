#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetFriendList.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetFriendList;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetFriendList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& Relationship);
    
};

