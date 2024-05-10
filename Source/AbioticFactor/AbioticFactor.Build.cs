using UnrealBuildTool;

public class AbioticFactor : ModuleRules {
    public AbioticFactor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AdvancedSessions",
            "AutoSettings",
            "ChaosVehicles",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "InputCore",
            "Niagara",
            "OnlineSubsystemUtils",
            "ReplicationGraph",
            "SlateCore",
            "SteamCore",
            "UMG",

            "OnlineSubsystem"
        });
    }
}
