#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUGCFileDetails.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetUGCFileDetails;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUGCFileDetails();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID);
    
};

