#pragma once
#include "CoreMinimal.h"
#include "ValidateAuthTicketResponse.h"
#include "OnValidateAuthTicketResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValidateAuthTicketResponse, const FValidateAuthTicketResponse&, Data);

