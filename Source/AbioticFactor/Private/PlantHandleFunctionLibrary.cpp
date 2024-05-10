#include "PlantHandleFunctionLibrary.h"

UPlantHandleFunctionLibrary::UPlantHandleFunctionLibrary() {
}

FPlantRowHandle UPlantHandleFunctionLibrary::MakePlantRowHandle(const FName RowName) {
    return FPlantRowHandle{};
}

FPlantRowHandle UPlantHandleFunctionLibrary::MakeLiteralPlantRowHandle(FPlantRowHandle RowHandle) {
    return FPlantRowHandle{};
}

void UPlantHandleFunctionLibrary::GetPlantRow(FPlantRowHandle RowHandle, FPlantData& Data, ERowValid& ReturnPath) {
}

void UPlantHandleFunctionLibrary::GetAllPlantRowNames(TArray<FName>& OutRowNames) {
}

void UPlantHandleFunctionLibrary::GetAllPlantRowHandles(TArray<FPlantRowHandle>& OutRowHandles) {
}

bool UPlantHandleFunctionLibrary::Equal_PlantRowHandle(FPlantRowHandle A, FPlantRowHandle B) {
    return false;
}

bool UPlantHandleFunctionLibrary::DoesPlantRowExist(FName RowName) {
    return false;
}

FName UPlantHandleFunctionLibrary::BreakPlantRowHandle(const FPlantRowHandle RowHandle) {
    return NAME_None;
}


