#pragma once
#include "CoreMinimal.h"
#include "DeployablePluggedInDelegate.generated.h"

class AAbioticCharacter;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeployablePluggedIn, AAbioticCharacter*, Player, AActor*, Deployable);

