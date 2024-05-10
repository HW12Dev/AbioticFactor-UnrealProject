#pragma once
#include "CoreMinimal.h"
#include "SandboxData.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSandboxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FSandboxData();
};

