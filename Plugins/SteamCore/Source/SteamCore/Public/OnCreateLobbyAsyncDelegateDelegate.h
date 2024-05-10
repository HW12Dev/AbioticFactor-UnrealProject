#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyData.h"
#include "OnCreateLobbyAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateLobbyAsyncDelegate, const FCreateLobbyData&, Data, bool, bWasSuccessful);

