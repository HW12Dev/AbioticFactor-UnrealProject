#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "TramMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABIOTICFACTOR_API UTramMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopped;
    
    UTramMovementComponent(const FObjectInitializer& ObjectInitializer);

};

