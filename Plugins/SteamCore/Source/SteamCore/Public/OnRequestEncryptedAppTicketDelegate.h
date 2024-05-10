#pragma once
#include "CoreMinimal.h"
#include "EncryptedAppTicketResponse.h"
#include "OnRequestEncryptedAppTicketDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestEncryptedAppTicket, const FEncryptedAppTicketResponse&, Data, bool, bWasSuccessful);

