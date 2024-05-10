#include "BuffDebuffObject.h"

UBuffDebuffObject::UBuffDebuffObject() {
    this->BuffDuration = -1.00f;
    this->tickRate = 1.00f;
}

void UBuffDebuffObject::Server_UpdateRemainingTime(float NewRemainingTime, float& PreviousRemainingTime) {
}




void UBuffDebuffObject::Server_BeginBuffRemoval() {
}


