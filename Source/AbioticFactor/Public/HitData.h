#pragma once
#include "CoreMinimal.h"
#include "HitData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HitIndexes;
    
    ABIOTICFACTOR_API FHitData();
};

