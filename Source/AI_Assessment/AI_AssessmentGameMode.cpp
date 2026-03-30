// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_AssessmentGameMode.h"
#include "AI_AssessmentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_AssessmentGameMode::AAI_AssessmentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
