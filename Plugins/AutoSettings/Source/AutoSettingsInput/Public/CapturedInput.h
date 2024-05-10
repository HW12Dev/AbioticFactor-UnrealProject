#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "CapturedInput.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FCapturedInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord Chord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClear;
    
    FCapturedInput();
};

