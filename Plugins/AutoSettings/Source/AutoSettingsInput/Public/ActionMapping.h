#pragma once
#include "CoreMinimal.h"
#include "InputMapping.h"
#include "ActionMapping.generated.h"

class UActionLabel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UActionMapping : public UInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionLabel* ActionLabel;
    
public:
    UActionMapping();

};

