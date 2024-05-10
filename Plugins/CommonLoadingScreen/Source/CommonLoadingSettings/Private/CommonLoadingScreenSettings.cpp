#include "CommonLoadingScreenSettings.h"

UCommonLoadingScreenSettings::UCommonLoadingScreenSettings() {
    this->LoadingScreenZOrder = 10000;
    this->SplashScreenType = ESplashScreenType::BLACK;
    this->bDisableSplashLoadingScreen = true;
    this->bForceTickLoadingScreenEvenInEditor = true;
    this->ShowLoadingScreenAdditionalSecs = 2.00f;
    this->ShowSplashScreenAdditionalSecs = 2.00f;
    this->LoadingScreenHeartbeatHangDuration = 0.00f;
    this->LogLoadingScreenHeartbeatInterval = 5.00f;
    this->SplashScreenStretch = EStretch::ScaleToFitX;
    this->SplashScreenStretchDirection = EStretchDirection::Both;
    this->SplashScreenLoadingText = FText::FromString(TEXT("LOADING..."));
    this->bLogLoadingScreenReasonEveryFrame = false;
    this->bForceLoadingScreenVisible = false;
    this->bShowLoadingScreenAdditionalSecsEvenInEditor = true;
}


