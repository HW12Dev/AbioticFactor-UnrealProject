#pragma once
#include "CoreMinimal.h"
#include "EncryptedAppTicketResponse.h"
#include "OnRequestEncryptedAppTicketResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestEncryptedAppTicketResponse, const FEncryptedAppTicketResponse&, Data);

