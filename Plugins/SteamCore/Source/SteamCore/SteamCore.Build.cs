using UnrealBuildTool;

public class SteamCore : ModuleRules {
    public SteamCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OnlineSubsystemUtils",

            "OnlineSubsystem",
            "AudioExtensions"
        });
    }
}
