using UnrealBuildTool;

public class AbioticFactorGameTarget : TargetRules {
	public AbioticFactorGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"AbioticFactor",
		});
	}
}
