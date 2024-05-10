#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetHistoryCommandDetails.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetHistoryCommandDetails;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetHistoryCommandDetails();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
};

