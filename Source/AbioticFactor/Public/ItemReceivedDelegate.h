#pragma once
#include "CoreMinimal.h"
#include "ItemReceivedDelegate.generated.h"

class AAbioticCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemReceived, AAbioticCharacter*, Player, FName, ItemName, int32, Amount);

