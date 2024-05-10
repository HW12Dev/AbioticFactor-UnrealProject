#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "PaintedDeployable.h"
#include "PaintedDeployableRowHandle.h"
#include "PaintedDeployableHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UPaintedDeployableHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPaintedDeployableHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPaintedDeployableRowHandle MakePaintedDeployableRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPaintedDeployableRowHandle MakeLiteralPaintedDeployableRowHandle(FPaintedDeployableRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetPaintedDeployableRow(FPaintedDeployableRowHandle RowHandle, FPaintedDeployable& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPaintedDeployableRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPaintedDeployableRowHandles(TArray<FPaintedDeployableRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_PaintedDeployableRowHandle(FPaintedDeployableRowHandle A, FPaintedDeployableRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPaintedDeployableRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakPaintedDeployableRowHandle(const FPaintedDeployableRowHandle RowHandle);
    
};

