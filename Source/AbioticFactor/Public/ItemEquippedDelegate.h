#pragma once
#include "CoreMinimal.h"
#include "ItemEquippedDelegate.generated.h"

class AAbioticCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemEquipped, AAbioticCharacter*, Player, FName, ItemName, int32, Slot);

