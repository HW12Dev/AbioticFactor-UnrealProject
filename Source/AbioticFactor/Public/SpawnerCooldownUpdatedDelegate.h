#pragma once
#include "CoreMinimal.h"
#include "SpawnerCooldownUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerCooldownUpdated, TSoftObjectPtr<AActor>, Spawner);

