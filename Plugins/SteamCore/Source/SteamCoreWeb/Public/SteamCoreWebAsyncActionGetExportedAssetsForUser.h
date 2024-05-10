#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetExportedAssetsForUser.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetExportedAssetsForUser;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetExportedAssetsForUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& ContextID);
    
};

