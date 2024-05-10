#include "PaintedDeployableHandleFunctionLibrary.h"

UPaintedDeployableHandleFunctionLibrary::UPaintedDeployableHandleFunctionLibrary() {
}

FPaintedDeployableRowHandle UPaintedDeployableHandleFunctionLibrary::MakePaintedDeployableRowHandle(const FName RowName) {
    return FPaintedDeployableRowHandle{};
}

FPaintedDeployableRowHandle UPaintedDeployableHandleFunctionLibrary::MakeLiteralPaintedDeployableRowHandle(FPaintedDeployableRowHandle RowHandle) {
    return FPaintedDeployableRowHandle{};
}

void UPaintedDeployableHandleFunctionLibrary::GetPaintedDeployableRow(FPaintedDeployableRowHandle RowHandle, FPaintedDeployable& Data, ERowValid& ReturnPath) {
}

void UPaintedDeployableHandleFunctionLibrary::GetAllPaintedDeployableRowNames(TArray<FName>& OutRowNames) {
}

void UPaintedDeployableHandleFunctionLibrary::GetAllPaintedDeployableRowHandles(TArray<FPaintedDeployableRowHandle>& OutRowHandles) {
}

bool UPaintedDeployableHandleFunctionLibrary::Equal_PaintedDeployableRowHandle(FPaintedDeployableRowHandle A, FPaintedDeployableRowHandle B) {
    return false;
}

bool UPaintedDeployableHandleFunctionLibrary::DoesPaintedDeployableRowExist(FName RowName) {
    return false;
}

FName UPaintedDeployableHandleFunctionLibrary::BreakPaintedDeployableRowHandle(const FPaintedDeployableRowHandle RowHandle) {
    return NAME_None;
}


