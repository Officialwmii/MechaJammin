// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechaJamGameMode.h"
#include "MechaJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechaJamGameMode::AMechaJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
