#pragma once
#include "CoreMinimal.h"
#include "GameServerRule.h"
#include "OnServerRuleAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreMatchmakingServersAsyncActionServerRules.generated.h"

class UObject;
class USteamCoreMatchmakingServersAsyncActionServerRules;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerRuleAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingServersAsyncActionServerRules();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, const FString& IP, int32 QueryPort, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelServerRulesQueries(UObject* WorldContextObject);
    
};

