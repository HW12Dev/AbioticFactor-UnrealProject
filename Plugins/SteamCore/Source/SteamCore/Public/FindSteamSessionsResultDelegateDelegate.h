#pragma once
#include "CoreMinimal.h"
#include "SteamSessionResult.h"
#include "FindSteamSessionsResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindSteamSessionsResultDelegate, const TArray<FSteamSessionResult>&, Results);

