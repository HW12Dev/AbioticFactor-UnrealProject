#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionHistoryExecuteCommand.generated.h"

class UObject;
class USteamCoreWebAsyncActionHistoryExecuteCommand;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionHistoryExecuteCommand();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextID, int32 ActorId);
    
};

