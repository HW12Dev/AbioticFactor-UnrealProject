#pragma once
#include "CoreMinimal.h"
#include "InputMapping.h"
#include "AxisMapping.generated.h"

class UAxisLabel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UAxisMapping : public UInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAxisLabel* AxisLabel;
    
public:
    UAxisMapping();

};

