// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_Assessment : ModuleRules
{
	public AI_Assessment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
