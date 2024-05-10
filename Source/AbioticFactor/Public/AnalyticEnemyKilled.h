#pragma once
#include "CoreMinimal.h"
#include "AnalyticEnemyKilled.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticEnemyKilled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> DamageTypeMap;
    
    ABIOTICFACTOR_API FAnalyticEnemyKilled();
};

