#include "AbioticReplicationGraphSettings.h"

UAbioticReplicationGraphSettings::UAbioticReplicationGraphSettings() {
    this->bDisableReplicationGraph = false;
    this->bEnableFastSharedPath = true;
    this->TargetKBytesSecFastSharedPath = 10;
    this->FastSharedPathCullDistPct = 0.80f;
    this->DestructionInfoMaxDist = 30000.00f;
    this->SpatialGridCellSize = 10000.00f;
    this->SpatialBiasX = -200000.00f;
    this->SpatialBiasY = -200000.00f;
    this->bDisableSpatialRebuilds = true;
    this->DynamicActorFrequencyBuckets = 3;
    this->ClassSettings.AddDefaulted(6);
}


