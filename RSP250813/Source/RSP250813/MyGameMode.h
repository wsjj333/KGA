// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RSP250813_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	int RPSResult(int PlayerIndex, int GPTIndex);
};
