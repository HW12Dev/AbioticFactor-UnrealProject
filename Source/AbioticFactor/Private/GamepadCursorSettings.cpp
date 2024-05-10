#include "GamepadCursorSettings.h"

UGamepadCursorSettings::UGamepadCursorSettings() {
    this->bUseDPIScale = false;
    this->bAnalogCursorNoAcceleration = true;
    this->MaxAnalogCursorSpeed = 1600.00f;
    this->MaxAnalogCursorSpeedWhenHovered = 450.00f;
    this->AnalogCursorDragCoefficient = 8.00f;
    this->AnalogCursorDragCoefficientWhenHovered = 14.00f;
    this->MinAnalogCursorSpeed = 5.00f;
    this->AnalogCursorDeadZone = 0.15f;
    this->AnalogCursorAccelerationMultiplier = 9000.00f;
    this->AnalogCursorSize = 40.00f;
    this->ScrollDeadZone = 0.20f;
    this->ScrollMultiplier = 0.10f;
}


