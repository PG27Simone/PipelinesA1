// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PipelinesA1 : ModuleRules
{
	public PipelinesA1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
