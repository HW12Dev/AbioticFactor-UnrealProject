#pragma once
#include "CoreMinimal.h"
#include "ItemCraftedDelegate.generated.h"

class AAbioticCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemCrafted, AAbioticCharacter*, Player, FName, ItemName, int32, Amount);

