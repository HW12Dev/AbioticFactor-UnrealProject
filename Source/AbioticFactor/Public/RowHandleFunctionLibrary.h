#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RowHandle.h"
#include "RowHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API URowHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URowHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRowHandleValid(const FRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRowHandleNull(const FRowHandle& RowHandle);
    
};

