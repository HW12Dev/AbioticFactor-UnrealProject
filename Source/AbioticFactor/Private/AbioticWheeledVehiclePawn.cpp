#include "AbioticWheeledVehiclePawn.h"
#include "AbioticVehicleMovementComponent.h"

AAbioticWheeledVehiclePawn::AAbioticWheeledVehiclePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAbioticVehicleMovementComponent>(TEXT("VehicleMovementComp"))) {
    this->bUseClientAuth = true;
    this->ClientAuthFrequency = 30.00f;
}

/*void AAbioticWheeledVehiclePawn::ReplicatePhysicsToServer_Implementation(FRepMovement Physics) {
}*/

void AAbioticWheeledVehiclePawn::CheckClientVehiclePosition() {
}


