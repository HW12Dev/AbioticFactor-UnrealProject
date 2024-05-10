#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSupportGetAssetHistory.generated.h"

class UObject;
class USteamCoreWebAsyncActionSupportGetAssetHistory;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSupportGetAssetHistory();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& AssetId, const FString& ContextID);
    
};

