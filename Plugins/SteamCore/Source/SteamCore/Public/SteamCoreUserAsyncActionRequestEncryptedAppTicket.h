#pragma once
#include "CoreMinimal.h"
#include "EncryptedAppTicketResponse.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamCoreUserAsyncActionRequestEncryptedAppTicket.generated.h"

class UObject;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketDelegate OnCallback;
    
    USteamCoreUserAsyncActionRequestEncryptedAppTicket();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> DataToInclude, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
    
};

