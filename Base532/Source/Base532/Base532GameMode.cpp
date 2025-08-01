// Copyright Epic Games, Inc. All Rights Reserved.

#include "Base532GameMode.h"
#include "Base532Character.h"
#include "UObject/ConstructorHelpers.h"

ABase532GameMode::ABase532GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
