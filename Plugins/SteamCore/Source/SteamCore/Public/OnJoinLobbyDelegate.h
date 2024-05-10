#pragma once
#include "CoreMinimal.h"
#include "JoinLobbyData.h"
#include "OnJoinLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinLobby, const FJoinLobbyData&, Data, bool, bWasSuccessful);

