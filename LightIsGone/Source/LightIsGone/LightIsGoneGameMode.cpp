// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightIsGoneGameMode.h"
#include "LightIsGoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALightIsGoneGameMode::ALightIsGoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
