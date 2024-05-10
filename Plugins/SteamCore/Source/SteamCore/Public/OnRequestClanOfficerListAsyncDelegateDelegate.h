#pragma once
#include "CoreMinimal.h"
#include "ClanOfficerListResponse.h"
#include "OnRequestClanOfficerListAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestClanOfficerListAsyncDelegate, const FClanOfficerListResponse&, Data, bool, bWasSuccessful);

