#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuffDebuff.h"
#include "BuffDebuffRowHandle.h"
#include "ERowValid.h"
#include "BuffDebuffHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UBuffDebuffHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuffDebuffHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuffDebuffRowHandle MakeLiteralBuffDebuffRowHandle(FBuffDebuffRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuffDebuffRowHandle MakeBuffDebuffRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetBuffDebuffRow(FBuffDebuffRowHandle RowHandle, FBuffDebuff& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllBuffDebuffRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllBuffDebuffRowHandles(TArray<FBuffDebuffRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_BuffDebuffRowHandle(FBuffDebuffRowHandle A, FBuffDebuffRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesBuffDebuffRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakBuffDebuffRowHandle(const FBuffDebuffRowHandle RowHandle);
    
};

