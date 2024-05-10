#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_AbioticMoveDirectlyToward.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBTTask_AbioticMoveDirectlyToward : public UBTTask_MoveDirectlyToward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlackboardDefinedAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInvalidRadiusValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AcceptableRadiusKey;
    
public:
    UBTTask_AbioticMoveDirectlyToward();

};

