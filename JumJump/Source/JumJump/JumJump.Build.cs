// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JumJump : ModuleRules
{
	public JumJump(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
