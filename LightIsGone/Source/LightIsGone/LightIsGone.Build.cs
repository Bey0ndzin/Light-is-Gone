// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LightIsGone : ModuleRules
{
	public LightIsGone(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Gameplay Abilities", "GameplayTags", "GameplayTasks", "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
