#include "BTDecorator_AbioticIsAtLocation.h"

UBTDecorator_AbioticIsAtLocation::UBTDecorator_AbioticIsAtLocation() {
    this->NodeName = TEXT("Abiotic Is At Location");
    this->AcceptableRadiusOffset = 25.00f;
    this->GeometricDistanceType = FAIDistanceType::Distance3D;
    this->bUseNavAgentGoalLocation = true;
    this->bPathFindingBasedTest = true;
}


