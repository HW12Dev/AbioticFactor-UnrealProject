#pragma once
#include "CoreMinimal.h"
#include "CreateBeaconData.h"
#include "OnCreateBeaconDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateBeacon, const FCreateBeaconData&, Data, bool, bWasSuccessful);

