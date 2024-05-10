#pragma once
#include "CoreMinimal.h"
#include "BuffDebuffRowHandle.h"
#include "BuffRemovedDelegate.generated.h"

class AAbioticCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuffRemoved, AAbioticCharacter*, Player, FBuffDebuffRowHandle, RowHandle);

