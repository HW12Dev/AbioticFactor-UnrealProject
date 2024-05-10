#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ConfigAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FConfigAxisKeyMapping : public FInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    FConfigAxisKeyMapping();
};

