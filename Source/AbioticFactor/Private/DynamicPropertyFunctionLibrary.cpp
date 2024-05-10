#include "DynamicPropertyFunctionLibrary.h"

UDynamicPropertyFunctionLibrary::UDynamicPropertyFunctionLibrary() {
}

TArray<FDynamicProperty> UDynamicPropertyFunctionLibrary::SetDynamicProperty(TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32 Value) {
    return TArray<FDynamicProperty>();
}

bool UDynamicPropertyFunctionLibrary::GetDynamicProperty(const TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32& Value) {
    return false;
}


