#include "AIFunctionLibrary.h"

UAIFunctionLibrary::UAIFunctionLibrary() {
}

void UAIFunctionLibrary::SetValueAsVector(UBlackboardComponent* Blackboard, FBlackboardName Key, FVector VectorValue) {
}

void UAIFunctionLibrary::SetValueAsString(UBlackboardComponent* Blackboard, FBlackboardName Key, const FString& StringValue) {
}

void UAIFunctionLibrary::SetValueAsRotator(UBlackboardComponent* Blackboard, FBlackboardName Key, FRotator VectorValue) {
}

void UAIFunctionLibrary::SetValueAsObject(UBlackboardComponent* Blackboard, FBlackboardName Key, UObject* ObjectValue) {
}

void UAIFunctionLibrary::SetValueAsName(UBlackboardComponent* Blackboard, FBlackboardName Key, FName NameValue) {
}

void UAIFunctionLibrary::SetValueAsInt(UBlackboardComponent* Blackboard, FBlackboardName Key, int32 IntValue) {
}

void UAIFunctionLibrary::SetValueAsFloat(UBlackboardComponent* Blackboard, FBlackboardName Key, float FloatValue) {
}

void UAIFunctionLibrary::SetValueAsEnum(UBlackboardComponent* Blackboard, FBlackboardName Key, uint8 EnumValue) {
}

void UAIFunctionLibrary::SetValueAsClass(UBlackboardComponent* Blackboard, FBlackboardName Key, UClass* ClassValue) {
}

void UAIFunctionLibrary::SetValueAsBool(UBlackboardComponent* Blackboard, FBlackboardName Key, bool BoolValue) {
}

FVector UAIFunctionLibrary::GetValueAsVector(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return FVector{};
}

FString UAIFunctionLibrary::GetValueAsString(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return TEXT("");
}

FRotator UAIFunctionLibrary::GetValueAsRotator(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return FRotator{};
}

UObject* UAIFunctionLibrary::GetValueAsObject(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return NULL;
}

FName UAIFunctionLibrary::GetValueAsName(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return NAME_None;
}

int32 UAIFunctionLibrary::GetValueAsInt(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return 0;
}

float UAIFunctionLibrary::GetValueAsFloat(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return 0.0f;
}

uint8 UAIFunctionLibrary::GetValueAsEnum(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return 0;
}

UClass* UAIFunctionLibrary::GetValueAsClass(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return NULL;
}

bool UAIFunctionLibrary::GetValueAsBool(const UBlackboardComponent* Blackboard, FBlackboardName Key) {
    return false;
}


