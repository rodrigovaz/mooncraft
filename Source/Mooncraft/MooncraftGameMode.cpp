// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MooncraftGameMode.h"
#include "MooncraftPlayerController.h"
#include "MooncraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMooncraftGameMode::AMooncraftGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMooncraftPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}