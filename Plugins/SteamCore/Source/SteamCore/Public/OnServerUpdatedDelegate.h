#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnServerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnServerUpdated, const FGameServerItem&, Data);

