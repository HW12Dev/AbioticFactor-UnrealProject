#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "AbioticGameSession.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AAbioticGameSession(const FObjectInitializer& ObjectInitializer);

};

