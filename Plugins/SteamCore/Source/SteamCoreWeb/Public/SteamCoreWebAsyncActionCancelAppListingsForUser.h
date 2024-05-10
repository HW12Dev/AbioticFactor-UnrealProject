#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCancelAppListingsForUser.generated.h"

class UObject;
class USteamCoreWebAsyncActionCancelAppListingsForUser;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCancelAppListingsForUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, bool bSynchronous);
    
};

