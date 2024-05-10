#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamCoreAsyncAction.h"
#include "SteamSessionSearchSetting.h"
#include "SteamCoreUpdateSession.generated.h"

class UObject;
class USteamCoreUpdateSession;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUpdateSession : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnCallback;
    
    USteamCoreUpdateSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUpdateSession* UpdateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, const FString& SessionName, int32 MaxPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
};

