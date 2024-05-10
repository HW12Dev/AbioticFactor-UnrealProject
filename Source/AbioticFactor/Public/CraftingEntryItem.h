#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ItemCount.h"
#include "CraftingEntryItem.generated.h"

class UCraftingEntryItem;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UCraftingEntryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RecipeRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecipeItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> BenchesRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> RecipeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> SubstituteItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RecipeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSoupRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResearched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBenchAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewRecipeHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverCrafted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFavorited;
    
    UCraftingEntryItem();

    UFUNCTION(BlueprintCallable)
    static void UpdateCraftingEntryStates(UPARAM(Ref) TArray<UCraftingEntryItem*>& CraftingEntries, const TArray<FName>& RecipesUnlocked, const TArray<FName>& RecipesRequiringResearch, bool bDebugFreeCrafting, bool bResearchEnabled, const TArray<FName>& NewestRecipes, const TArray<FName>& CraftedItems, const TArray<FName>& Favorites, const TArray<FDataTableRowHandle>& AvailableBenches);
    
    UFUNCTION(BlueprintCallable)
    static void GetCategoryFilterStates(UPARAM(Ref) TArray<UCraftingEntryItem*>& CraftingEntries, TArray<uint8>& OutNewItemCategories, TArray<uint8>& OutNewResearchCategories);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCraftingEntryForItem(UPARAM(Ref) TArray<UCraftingEntryItem*>& CraftingEntries, FName ItemRowName, UCraftingEntryItem*& OutCraftingEntry);
    
    UFUNCTION(BlueprintCallable)
    static void FilterCraftingEntries(const TArray<UCraftingEntryItem*>& CraftingEntries, bool bOnlyUnlocked, bool bOnlyFavorites, bool bFilterBench, bool bUseCategory, uint8 FilterCategory, FGameplayTag FilterTag, const FString& SearchString, TArray<UCraftingEntryItem*>& OutFilteredEntries, TArray<UCraftingEntryItem*>& OutFilteredBenchEntries);
    
};

