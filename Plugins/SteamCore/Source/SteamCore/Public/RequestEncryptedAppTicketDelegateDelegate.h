#pragma once
#include "CoreMinimal.h"
#include "EncryptedAppTicketResponse.h"
#include "RequestEncryptedAppTicketDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestEncryptedAppTicketDelegate, const FEncryptedAppTicketResponse&, Data, bool, bWasSuccessful);

