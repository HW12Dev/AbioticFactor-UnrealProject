#pragma once
#include "CoreMinimal.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "AbioticVehicleMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABIOTICFACTOR_API UAbioticVehicleMovementComponent : public UChaosWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDriver;
    
    UAbioticVehicleMovementComponent(const FObjectInitializer& ObjectInitializer);

};

