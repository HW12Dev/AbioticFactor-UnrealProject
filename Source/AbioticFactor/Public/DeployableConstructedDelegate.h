#pragma once
#include "CoreMinimal.h"
#include "DeployableConstructedDelegate.generated.h"

class AAbioticCharacter;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeployableConstructed, AAbioticCharacter*, Player, AActor*, Deployable);

