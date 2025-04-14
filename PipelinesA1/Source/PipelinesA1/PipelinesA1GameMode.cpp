// Copyright Epic Games, Inc. All Rights Reserved.

#include "PipelinesA1GameMode.h"
#include "PipelinesA1Character.h"
#include "UObject/ConstructorHelpers.h"

APipelinesA1GameMode::APipelinesA1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
