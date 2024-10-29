// Copyright Epic Games, Inc. All Rights Reserved.

#include "eipGameMode.h"
#include "eipCharacter.h"
#include "UObject/ConstructorHelpers.h"

AeipGameMode::AeipGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
