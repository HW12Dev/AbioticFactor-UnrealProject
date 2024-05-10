#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ErrorMessage.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FErrorMessage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    FErrorMessage();
};

