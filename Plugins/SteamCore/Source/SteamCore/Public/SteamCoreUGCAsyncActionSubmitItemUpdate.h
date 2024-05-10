#pragma once
#include "CoreMinimal.h"
#include "OnSubmitItemUpdateAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SubmitItemUpdateResult.h"
#include "UGCUpdateHandle.h"
#include "SteamCoreUGCAsyncActionSubmitItemUpdate.generated.h"

class UObject;
class USteamCoreUGCAsyncActionSubmitItemUpdate;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmitItemUpdateAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSubmitItemUpdate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle Handle, const FString& ChangeNote, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);
    
};

