#pragma once
#include "CoreMinimal.h"
#include "LicensesUpdated.h"
#include "OnLicensesUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLicensesUpdated, const FLicensesUpdated&, Data);

