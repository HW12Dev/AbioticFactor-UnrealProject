#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRequestVacStatusForUser.generated.h"

class UObject;
class USteamCoreWebAsyncActionRequestVacStatusForUser;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRequestVacStatusForUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

