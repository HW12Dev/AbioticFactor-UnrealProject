#pragma once
#include "CoreMinimal.h"
#include "InputLabel.h"
#include "AxisLabel.generated.h"

class UKeyLabel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UAxisLabel : public UInputLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyLabel* KeyLabel;
    
public:
    UAxisLabel();

};

