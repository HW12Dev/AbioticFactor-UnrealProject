#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_SelectRandom.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBTComposite_SelectRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyRan;
    
    UBTComposite_SelectRandom();

};

