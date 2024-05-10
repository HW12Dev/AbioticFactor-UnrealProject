#pragma once
#include "CoreMinimal.h"
#include "CreateBeaconData.h"
#include "OnCreateBeaconCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateBeaconCallback, const FCreateBeaconData&, Data, bool, bWasSuccessful);

