#pragma once
#include "CoreMinimal.h"
#include "CreateBeaconData.h"
#include "OnCreateBeaconDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateBeaconDelegate, const FCreateBeaconData&, Data);

