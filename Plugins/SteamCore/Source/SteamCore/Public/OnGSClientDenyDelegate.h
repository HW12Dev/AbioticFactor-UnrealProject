#pragma once
#include "CoreMinimal.h"
#include "GSClientDeny.h"
#include "OnGSClientDenyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientDeny, const FGSClientDeny&, Data);

