#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "ItemAction.h"
#include "ItemActionRowHandle.h"
#include "ItemActionHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UItemActionHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemActionHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemActionRowHandle MakeLiteralItemActionRowHandle(FItemActionRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemActionRowHandle MakeItemActionRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemActionRow(FItemActionRowHandle RowHandle, FItemAction& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllItemActionRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllItemActionRowHandles(TArray<FItemActionRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_ItemActionRowHandle(FItemActionRowHandle A, FItemActionRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesItemActionRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakItemActionRowHandle(const FItemActionRowHandle RowHandle);
    
};

