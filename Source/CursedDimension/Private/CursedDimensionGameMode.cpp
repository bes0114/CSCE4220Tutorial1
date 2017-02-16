// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "CursedDimension.h"
#include "CursedDimensionGameMode.h"
#include "CursedDimensionHUD.h"
#include "CursedDimensionCharacter.h"

ACursedDimensionGameMode::ACursedDimensionGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACursedDimensionHUD::StaticClass();
}
