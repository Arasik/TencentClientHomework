// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework2_FPSGameMode.h"
#include "Homework2_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomework2_FPSGameMode::AHomework2_FPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
