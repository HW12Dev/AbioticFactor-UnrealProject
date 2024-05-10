#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "AbioticReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAbioticReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection {
    GENERATED_BODY()
public:
    UAbioticReplicationGraphNode_AlwaysRelevant_ForConnection();

};

