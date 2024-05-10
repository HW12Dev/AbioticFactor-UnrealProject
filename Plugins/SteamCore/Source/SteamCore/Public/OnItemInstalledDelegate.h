#pragma once
#include "CoreMinimal.h"
#include "ItemInstalled.h"
#include "OnItemInstalledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemInstalled, const FItemInstalled&, Data);

