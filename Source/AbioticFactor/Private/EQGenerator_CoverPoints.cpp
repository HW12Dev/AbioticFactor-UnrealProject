#include "EQGenerator_CoverPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEQGenerator_CoverPoints::UEQGenerator_CoverPoints() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


