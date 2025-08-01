// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Base532 : ModuleRules
{
	public Base532(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
