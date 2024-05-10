#pragma once
#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Engine/ReplicatedState.h"
#include "AbioticWheeledVehiclePawn.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API AAbioticWheeledVehiclePawn : public AWheeledVehiclePawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClientAuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientAuthFrequency;
    
    AAbioticWheeledVehiclePawn(const FObjectInitializer& ObjectInitializer);

    //UFUNCTION(BlueprintCallable, Server, Unreliable)
    //void ReplicatePhysicsToServer(FRepMovement Physics);
    
    UFUNCTION(BlueprintCallable)
    void CheckClientVehiclePosition();
    
};

