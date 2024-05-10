#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerDeathDelegate.generated.h"

class AAbioticCharacter;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerDeath, AAbioticCharacter*, Player, TSubclassOf<UDamageType>, DamageType);

