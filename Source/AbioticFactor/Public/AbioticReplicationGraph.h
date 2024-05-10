#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "AbioticReplicationGraph.generated.h"

class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(Blueprintable, NonTransient)
class ABIOTICFACTOR_API UAbioticReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AlwaysRelevantClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UAbioticReplicationGraph();

};

