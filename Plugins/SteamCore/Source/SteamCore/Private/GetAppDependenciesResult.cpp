#include "GetAppDependenciesResult.h"

FGetAppDependenciesResult::FGetAppDependenciesResult() {
    this->Result = ESteamResult::None;
    this->NumAppDependencies = 0;
    this->TotalNumAppDependencies = 0;
}

