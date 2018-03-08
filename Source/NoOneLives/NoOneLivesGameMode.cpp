// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NoOneLives.h"
#include "NoOneLivesGameMode.h"
#include "NoOneLivesHUD.h"
#include "NoOneLivesCharacter.h"

ANoOneLivesGameMode::ANoOneLivesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANoOneLivesHUD::StaticClass();
}
