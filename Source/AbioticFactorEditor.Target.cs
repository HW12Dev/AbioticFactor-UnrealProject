using UnrealBuildTool;

public class AbioticFactorEditorTarget : TargetRules {
	public AbioticFactorEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"AbioticFactor",
		});
	}
}
