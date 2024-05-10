#pragma once
#include "CoreMinimal.h"
#include "WebAppsGetAppList.generated.h"

USTRUCT(BlueprintType)
struct FWebAppsGetAppList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    STEAMCOREWEB_API FWebAppsGetAppList();
};

