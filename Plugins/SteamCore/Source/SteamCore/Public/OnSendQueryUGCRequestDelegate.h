#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryCompleted.h"
#include "OnSendQueryUGCRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSendQueryUGCRequest, const FSteamUGCQueryCompleted&, Data, bool, bWasSuccessful);

