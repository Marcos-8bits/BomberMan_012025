// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberMan_012025_ : ModuleRules
{
	public BomberMan_012025_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
