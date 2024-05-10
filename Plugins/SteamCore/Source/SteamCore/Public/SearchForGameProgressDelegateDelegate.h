#pragma once
#include "CoreMinimal.h"
#include "SearchForGameProgressCallback.h"
#include "SearchForGameProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSearchForGameProgressDelegate, const FSearchForGameProgressCallback&, Data);

