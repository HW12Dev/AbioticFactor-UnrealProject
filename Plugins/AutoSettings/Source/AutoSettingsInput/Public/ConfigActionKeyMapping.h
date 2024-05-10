#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ConfigActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FConfigActionKeyMapping : public FInputActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    FConfigActionKeyMapping();
};

