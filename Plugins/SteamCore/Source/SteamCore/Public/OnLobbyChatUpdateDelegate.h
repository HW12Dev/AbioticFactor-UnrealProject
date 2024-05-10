#pragma once
#include "CoreMinimal.h"
#include "LobbyChatUpdate.h"
#include "OnLobbyChatUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatUpdate, const FLobbyChatUpdate&, Data);

