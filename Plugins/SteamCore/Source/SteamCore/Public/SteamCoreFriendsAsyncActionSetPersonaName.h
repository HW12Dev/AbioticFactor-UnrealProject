#pragma once
#include "CoreMinimal.h"
#include "OnSetPersonaNameAsyncDelegateDelegate.h"
#include "SetPersonaNameResponse.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreFriendsAsyncActionSetPersonaName.generated.h"

class UObject;
class USteamCoreFriendsAsyncActionSetPersonaName;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPersonaNameAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionSetPersonaName();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, const FString& Name, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful);
    
};

