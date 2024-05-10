#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "AbioticReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAbioticReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UAbioticReplicationGraphNode_PlayerStateFrequencyLimiter();

};

