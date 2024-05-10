#pragma once
#include "CoreMinimal.h"
#include "NumberOfCurrentPlayers.h"
#include "OnGetNumberOfCurrentPlayersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetNumberOfCurrentPlayers, const FNumberOfCurrentPlayers&, Data, bool, bWasSuccessful);

