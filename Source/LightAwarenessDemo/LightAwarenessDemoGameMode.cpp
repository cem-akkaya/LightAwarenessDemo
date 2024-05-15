// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightAwarenessDemoGameMode.h"
#include "LightAwarenessDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALightAwarenessDemoGameMode::ALightAwarenessDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
