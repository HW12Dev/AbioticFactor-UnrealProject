#pragma once
#include "CoreMinimal.h"
#include "ConfigActionKeyMapping.h"
#include "ConfigAxisKeyMapping.h"
#include "InputMappingGroup.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FInputMappingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConfigActionKeyMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConfigAxisKeyMapping> AxisMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConfigActionKeyMapping> UnboundActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConfigAxisKeyMapping> UnboundAxisMappings;
    
    FInputMappingGroup();
};

