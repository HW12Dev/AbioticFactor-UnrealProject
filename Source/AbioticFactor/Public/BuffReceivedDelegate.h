#pragma once
#include "CoreMinimal.h"
#include "BuffDebuffRowHandle.h"
#include "BuffReceivedDelegate.generated.h"

class AAbioticCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuffReceived, AAbioticCharacter*, Player, FBuffDebuffRowHandle, RowHandle);

