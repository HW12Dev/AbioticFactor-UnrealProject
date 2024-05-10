#pragma once
#include "CoreMinimal.h"
#include "FileDetailsResult.h"
#include "OnFileDetailsResultAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetFileDetails.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetFileDetails;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileDetailsResultAsyncDelegate OnCallback;
    
    USteamCoreAppsAsyncActionGetFileDetails();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, const FString& Filename, float Timeout);
    
};

