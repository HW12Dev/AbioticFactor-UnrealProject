#include "CraftingEntryItem.h"

UCraftingEntryItem::UCraftingEntryItem() {
    this->CountToCreate = 0;
    this->Category = 0;
    this->bIsSoupRecipe = false;
    this->bUnlocked = false;
    this->bResearched = false;
    this->bBenchAvailable = false;
    this->bNewRecipeHighlight = false;
    this->bNeverCrafted = false;
    this->bFavorited = false;
}

void UCraftingEntryItem::UpdateCraftingEntryStates(TArray<UCraftingEntryItem*>& CraftingEntries, const TArray<FName>& RecipesUnlocked, const TArray<FName>& RecipesRequiringResearch, bool bDebugFreeCrafting, bool bResearchEnabled, const TArray<FName>& NewestRecipes, const TArray<FName>& CraftedItems, const TArray<FName>& Favorites, const TArray<FDataTableRowHandle>& AvailableBenches) {
}

void UCraftingEntryItem::GetCategoryFilterStates(TArray<UCraftingEntryItem*>& CraftingEntries, TArray<uint8>& OutNewItemCategories, TArray<uint8>& OutNewResearchCategories) {
}

bool UCraftingEntryItem::FindCraftingEntryForItem(TArray<UCraftingEntryItem*>& CraftingEntries, FName ItemRowName, UCraftingEntryItem*& OutCraftingEntry) {
    return false;
}

void UCraftingEntryItem::FilterCraftingEntries(const TArray<UCraftingEntryItem*>& CraftingEntries, bool bOnlyUnlocked, bool bOnlyFavorites, bool bFilterBench, bool bUseCategory, uint8 FilterCategory, FGameplayTag FilterTag, const FString& SearchString, TArray<UCraftingEntryItem*>& OutFilteredEntries, TArray<UCraftingEntryItem*>& OutFilteredBenchEntries) {
}


