#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "BTComposite_SequenceLoop.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBTComposite_SequenceLoop : public UBTComposite_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLoopCount;
    
    UBTComposite_SequenceLoop();

};

