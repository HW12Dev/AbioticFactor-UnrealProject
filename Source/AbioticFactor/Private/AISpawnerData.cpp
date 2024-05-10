#include "AISpawnerData.h"

FAISpawnerData::FAISpawnerData() {
    this->LastTotalCooldown = 0.00f;
    this->TimeLastCooldownStarted = 0.00f;
    this->bShouldOnlySpawnOnce = false;
}

