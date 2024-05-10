#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "SandboxOption.h"
#include "SandboxOptionRowHandle.h"
#include "SandboxOptionHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USandboxOptionHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USandboxOptionHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSandboxOptionRowHandle MakeSandboxOptionRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSandboxOptionRowHandle MakeLiteralSandboxOptionRowHandle(FSandboxOptionRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetSandboxOptionRow(FSandboxOptionRowHandle RowHandle, FSandboxOption& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSandboxOptionRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSandboxOptionRowHandles(TArray<FSandboxOptionRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_SandboxOptionRowHandle(FSandboxOptionRowHandle A, FSandboxOptionRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSandboxOptionRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakSandboxOptionRowHandle(const FSandboxOptionRowHandle RowHandle);
    
};

