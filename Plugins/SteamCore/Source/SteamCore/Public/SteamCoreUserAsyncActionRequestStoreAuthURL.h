#pragma once
#include "CoreMinimal.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "StoreAuthURLResponse.h"
#include "SteamCoreUserAsyncActionRequestStoreAuthURL.generated.h"

class UObject;
class USteamCoreUserAsyncActionRequestStoreAuthURL;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLDelegate OnCallback;
    
    USteamCoreUserAsyncActionRequestStoreAuthURL();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(UObject* WorldContextObject, const FString& RedirectURL, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStoreAuthURLResponse& Data, bool bWasSuccessful);
    
};

