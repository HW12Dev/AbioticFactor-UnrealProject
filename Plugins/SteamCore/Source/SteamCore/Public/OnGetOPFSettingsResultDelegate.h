#pragma once
#include "CoreMinimal.h"
#include "GetOPFSettingsResult.h"
#include "OnGetOPFSettingsResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetOPFSettingsResult, const FGetOPFSettingsResult&, Data);

