#pragma once
#include "CoreMinimal.h"
#include "LobbyMatchList.h"
#include "OnRequestLobbyListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestLobbyList, const FLobbyMatchList&, Data, bool, bWasSuccessful);

