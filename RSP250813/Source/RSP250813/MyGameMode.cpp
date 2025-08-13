// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

int AMyGameMode::RPSResult(int PlayerIndex, int GPTIndex)
{
	int result = 0;
	result = (PlayerIndex - GPTIndex + 3) %3 ;
	return result;
}