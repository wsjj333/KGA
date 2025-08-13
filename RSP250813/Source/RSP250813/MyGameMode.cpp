// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

int AMyGameMode::RPSResult(int32 PlayerIndex, int32 GPTIndex)
{
	int result = 0;
	result = (PlayerIndex - GPTIndex + 3) %3 ;
	return result;
}

int AMyGameMode::RPSisEnd(int32 PlayerHp, int32 GPTHp)
{
	int result = 0;
	if (PlayerHp == 0) {
		return 1;
	}
	else if (GPTHp == 0) {
		return 2;
	}
	return 0;
}

void AMyGameMode::RPSHPResult(int32 result, int32& PlayerHp, int32& GPTHp)
{
	if (result == 1) { --GPTHp; }
	else if (result == 2) { --PlayerHp; } 
}