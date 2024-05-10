#pragma once
#include "CoreMinimal.h"
#include "DLCInstalled.h"
#include "OnDLCInstalledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDLCInstalled, const FDLCInstalled&, Data);

