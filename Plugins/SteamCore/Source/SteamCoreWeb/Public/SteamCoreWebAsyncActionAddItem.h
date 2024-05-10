#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAddItem.generated.h"

class UObject;
class USteamCoreWebAsyncActionAddItem;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAddItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionAddItem* AddItemAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, TArray<int32> ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID, bool bTradeRestriction);
    
};

