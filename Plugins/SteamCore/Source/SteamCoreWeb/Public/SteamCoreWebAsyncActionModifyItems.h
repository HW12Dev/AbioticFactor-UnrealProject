#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionModifyItems.generated.h"

class UObject;
class USteamCoreWebAsyncActionModifyItems;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionModifyItems();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& InputJson, const FString& SteamID, int32 Timestamp, const FString& Updates);
    
};

