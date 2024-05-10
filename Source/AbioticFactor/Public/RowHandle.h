#pragma once
#include "CoreMinimal.h"
#include "RowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DataTablePath;
    
    FRowHandle();
};

