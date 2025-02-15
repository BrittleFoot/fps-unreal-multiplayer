// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS(minimalapi)
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

    UPROPERTY(EditDefaultsOnly, Category = "Spectating")
    TSubclassOf<AActor> SpectatingViewpointClass;

public:
	AFPSGameMode();

	void CompleteMission(APawn* InstigatorPawn, bool bIsMissionSuccess);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void OnMissionCompleted(APawn* InstigatorPawn, bool bIsMissionSuccess);
};



