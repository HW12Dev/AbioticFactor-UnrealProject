#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "AbioticLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API UAbioticLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UAbioticLocalPlayer();

};

