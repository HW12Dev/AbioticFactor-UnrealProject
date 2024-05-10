#pragma once
#include "CoreMinimal.h"
#include "ESteamValueType.h"
#include "SteamCoreJson.generated.h"

USTRUCT(BlueprintType)
struct FSteamCoreJson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bool_; // UHT generator named this variable "bool"
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamValueType Type;
    
    STEAMCOREWEB_API FSteamCoreJson();
};

