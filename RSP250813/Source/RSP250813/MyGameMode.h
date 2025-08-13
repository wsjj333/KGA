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
	int RPSResult(int32 PlayerIndex, int32 GPTIndex);

	UFUNCTION(BlueprintCallable)
	void RPSHPResult(int32 result, UPARAM(ref) int32& PlayerHp, UPARAM(ref) int32& GPTHp);

	UFUNCTION(BlueprintCallable)
	int RPSisEnd(int32 PlayerHp, int32 GPTHp);
};
