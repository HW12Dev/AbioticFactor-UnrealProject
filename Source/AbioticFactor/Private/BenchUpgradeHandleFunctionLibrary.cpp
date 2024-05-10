#include "BenchUpgradeHandleFunctionLibrary.h"

UBenchUpgradeHandleFunctionLibrary::UBenchUpgradeHandleFunctionLibrary() {
}

FBenchUpgradeRowHandle UBenchUpgradeHandleFunctionLibrary::MakeLiteralBenchUpgradeRowHandle(FBenchUpgradeRowHandle RowHandle) {
    return FBenchUpgradeRowHandle{};
}

FBenchUpgradeRowHandle UBenchUpgradeHandleFunctionLibrary::MakeBenchUpgradeRowHandle(const FName RowName) {
    return FBenchUpgradeRowHandle{};
}

void UBenchUpgradeHandleFunctionLibrary::GetBenchUpgradeRow(FBenchUpgradeRowHandle RowHandle, FBenchUpgrade& Data, ERowValid& ReturnPath) {
}

void UBenchUpgradeHandleFunctionLibrary::GetAllBenchUpgradeRowNames(TArray<FName>& OutRowNames) {
}

void UBenchUpgradeHandleFunctionLibrary::GetAllBenchUpgradeRowHandles(TArray<FBenchUpgradeRowHandle>& OutRowHandles) {
}

bool UBenchUpgradeHandleFunctionLibrary::Equal_BenchUpgradeRowHandle(FBenchUpgradeRowHandle A, FBenchUpgradeRowHandle B) {
    return false;
}

bool UBenchUpgradeHandleFunctionLibrary::DoesBenchUpgradeRowExist(FName RowName) {
    return false;
}

FName UBenchUpgradeHandleFunctionLibrary::BreakBenchUpgradeRowHandle(const FBenchUpgradeRowHandle RowHandle) {
    return NAME_None;
}


