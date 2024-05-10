#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionExchangeItem.generated.h"

class UObject;
class USteamCoreWebAsyncActionExchangeItem;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionExchangeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, const FString& OutputItemdefId);
    
};

