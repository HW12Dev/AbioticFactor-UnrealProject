#pragma once
#include "CoreMinimal.h"
#include "ClanOfficerListResponse.h"
#include "OnRequestClanOfficerListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestClanOfficerList, const FClanOfficerListResponse&, Data, bool, bWasSuccessful);

