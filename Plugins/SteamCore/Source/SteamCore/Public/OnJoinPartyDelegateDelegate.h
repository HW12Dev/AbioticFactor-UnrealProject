#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "OnJoinPartyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinPartyDelegate, const FJoinPartyData&, Data);

