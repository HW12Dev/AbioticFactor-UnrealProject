#pragma once
#include "CoreMinimal.h"
#include "ClanOfficerListResponse.h"
#include "OnClanOfficerListResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClanOfficerListResponse, const FClanOfficerListResponse&, Data);

