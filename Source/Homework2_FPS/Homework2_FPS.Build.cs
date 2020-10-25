// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework2_FPS : ModuleRules
{
	public Homework2_FPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
