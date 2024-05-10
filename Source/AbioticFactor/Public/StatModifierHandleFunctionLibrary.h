#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "StatModifier.h"
#include "StatModifierRowHandle.h"
#include "StatModifierHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UStatModifierHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatModifierHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStatModifierRowHandle MakeStatModifierRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStatModifierRowHandle MakeLiteralStatModifierRowHandle(FStatModifierRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetStatModifierRow(FStatModifierRowHandle RowHandle, FStatModifier& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllStatModifierRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllStatModifierRowHandles(TArray<FStatModifierRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_StatModifierRowHandle(FStatModifierRowHandle A, FStatModifierRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesStatModifierRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakStatModifierRowHandle(const FStatModifierRowHandle RowHandle);
    
};

