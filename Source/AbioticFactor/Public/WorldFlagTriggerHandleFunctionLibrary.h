#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "WorldFlagTrigger.h"
#include "WorldFlagTriggerRowHandle.h"
#include "WorldFlagTriggerHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UWorldFlagTriggerHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldFlagTriggerHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldFlagTriggerRowHandle MakeWorldFlagTriggerRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldFlagTriggerRowHandle MakeLiteralWorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetWorldFlagTriggerRow(FWorldFlagTriggerRowHandle RowHandle, FWorldFlagTrigger& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllWorldFlagTriggerRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllWorldFlagTriggerRowHandles(TArray<FWorldFlagTriggerRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_WorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle A, FWorldFlagTriggerRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesWorldFlagTriggerRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakWorldFlagTriggerRowHandle(const FWorldFlagTriggerRowHandle RowHandle);
    
};

