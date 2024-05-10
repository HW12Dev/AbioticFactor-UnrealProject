#pragma once
#include "CoreMinimal.h"
#include "DeployablePlacedDelegate.generated.h"

class AAbioticCharacter;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeployablePlaced, AAbioticCharacter*, Player, AActor*, Deployable);

