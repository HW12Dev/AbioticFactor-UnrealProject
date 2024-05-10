#include "AppList.h"

UAppList::UAppList() {
}

int32 UAppList::GetNumInstalledApps() {
    return 0;
}

int32 UAppList::GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs) {
    return 0;
}

int32 UAppList::GetAppName(int32 AppID, FString& Name) {
    return 0;
}

int32 UAppList::GetAppInstallDir(int32 AppID, FString& Directory) {
    return 0;
}

int32 UAppList::GetAppBuildId(int32 AppID) {
    return 0;
}


