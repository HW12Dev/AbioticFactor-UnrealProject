#pragma once
#include "CoreMinimal.h"
#include "PersonaStateChange.h"
#include "OnPersonaStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPersonaStateChange, const FPersonaStateChange&, Data);

