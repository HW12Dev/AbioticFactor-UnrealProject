#pragma once
#include "CoreMinimal.h"
#include "SettingOption.generated.h"

USTRUCT(BlueprintType)
struct FSettingOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    AUTOSETTINGS_API FSettingOption();
};

