#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAuthenticateUserTicket.generated.h"

class UObject;
class USteamCoreWebAsyncActionAuthenticateUserTicket;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAuthenticateUserTicket();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Ticket);
    
};

