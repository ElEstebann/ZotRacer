using UnrealBuildTool;

public class ZotRacerTarget : TargetRules
{
	public ZotRacerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("ZotRacer");
	}
}
