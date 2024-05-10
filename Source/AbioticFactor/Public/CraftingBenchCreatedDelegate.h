#pragma once
#include "CoreMinimal.h"
#include "CraftingBenchCreatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftingBenchCreated, AActor*, CraftingBench);

