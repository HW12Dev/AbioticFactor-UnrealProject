#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionConsumeItem.generated.h"

class UObject;
class USteamCoreWebAsyncActionConsumeItem;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionConsumeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& ItemId, const FString& Quantity, const FString& SteamID, const FString& RequestID);
    
};

