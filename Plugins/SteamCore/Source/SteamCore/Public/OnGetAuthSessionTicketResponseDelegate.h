#pragma once
#include "CoreMinimal.h"
#include "GetAuthSessionTicketResponse.h"
#include "OnGetAuthSessionTicketResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetAuthSessionTicketResponse, const FGetAuthSessionTicketResponse&, Data);

