#pragma once
#include "CoreMinimal.h"
#include "OnControllerChangedCallbackDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreAsyncActionListenForControllerChange.generated.h"

class UObject;
class USteamCoreAsyncActionListenForControllerChange;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreAsyncActionListenForControllerChange : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerChangedCallback OnControllerChanged;
    
    USteamCoreAsyncActionListenForControllerChange();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAsyncActionListenForControllerChange* ListenForControllerChange(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId);
    
};

