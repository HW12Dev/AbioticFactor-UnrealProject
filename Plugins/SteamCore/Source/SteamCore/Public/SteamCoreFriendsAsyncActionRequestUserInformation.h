#pragma once
#include "CoreMinimal.h"
#include "OnRequestUserInformationAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionRequestUserInformation.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionRequestUserInformation;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUserInformationAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionRequestUserInformation();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback();
    
};

