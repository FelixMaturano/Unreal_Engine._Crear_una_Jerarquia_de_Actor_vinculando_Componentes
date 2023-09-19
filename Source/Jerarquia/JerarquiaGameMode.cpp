// Copyright Epic Games, Inc. All Rights Reserved.

#include "JerarquiaGameMode.h"
#include "JerarquiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJerarquiaGameMode::AJerarquiaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
