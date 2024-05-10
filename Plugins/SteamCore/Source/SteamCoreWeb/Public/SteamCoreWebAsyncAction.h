#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSteamCoreWebAsyncCallbackDelegate.h"
#include "SteamCoreWebAsyncAction.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamCoreWebAsyncCallback OnCallback;
    
    USteamCoreWebAsyncAction();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FString& Data, bool bWasSuccessful);
    
};

