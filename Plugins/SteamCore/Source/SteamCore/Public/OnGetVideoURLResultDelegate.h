#pragma once
#include "CoreMinimal.h"
#include "GetVideoURLResult.h"
#include "OnGetVideoURLResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetVideoURLResult, const FGetVideoURLResult&, Data);

