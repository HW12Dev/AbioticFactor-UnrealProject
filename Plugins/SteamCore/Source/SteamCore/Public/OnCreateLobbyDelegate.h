#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyData.h"
#include "OnCreateLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateLobby, const FCreateLobbyData&, Data, bool, bWasSuccessful);

