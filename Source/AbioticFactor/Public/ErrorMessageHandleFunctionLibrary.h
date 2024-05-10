#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "ErrorMessage.h"
#include "ErrorMessageRowHandle.h"
#include "ErrorMessageHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UErrorMessageHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UErrorMessageHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FErrorMessageRowHandle MakeLiteralErrorMessageRowHandle(FErrorMessageRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FErrorMessageRowHandle MakeErrorMessageRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetErrorMessageRow(FErrorMessageRowHandle RowHandle, FErrorMessage& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllErrorMessageRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllErrorMessageRowHandles(TArray<FErrorMessageRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_ErrorMessageRowHandle(FErrorMessageRowHandle A, FErrorMessageRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesErrorMessageRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakErrorMessageRowHandle(const FErrorMessageRowHandle RowHandle);
    
};

