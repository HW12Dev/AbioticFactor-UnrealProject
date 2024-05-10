#include "EnvQueryTest_Tether.h"

UEnvQueryTest_Tether::UEnvQueryTest_Tether() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TetherContext = NULL;
}


