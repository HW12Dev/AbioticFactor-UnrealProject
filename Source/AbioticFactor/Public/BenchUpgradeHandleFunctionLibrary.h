#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BenchUpgrade.h"
#include "BenchUpgradeRowHandle.h"
#include "ERowValid.h"
#include "BenchUpgradeHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBenchUpgradeHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBenchUpgradeHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBenchUpgradeRowHandle MakeLiteralBenchUpgradeRowHandle(FBenchUpgradeRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBenchUpgradeRowHandle MakeBenchUpgradeRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetBenchUpgradeRow(FBenchUpgradeRowHandle RowHandle, FBenchUpgrade& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllBenchUpgradeRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllBenchUpgradeRowHandles(TArray<FBenchUpgradeRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_BenchUpgradeRowHandle(FBenchUpgradeRowHandle A, FBenchUpgradeRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesBenchUpgradeRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakBenchUpgradeRowHandle(const FBenchUpgradeRowHandle RowHandle);
    
};

