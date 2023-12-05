//C program that prompts a user to guess a number from 1 to 10

#include<stdio.h>


void main()
{
	int iResponse, iRandom = 0 ;
	
	
	iRandom = srand() % 10 + 1 ;  //Taking number from 1 to 10
	
	printf("Guess the number between 1 to 10:");
	scanf("%d", & iResponse);

	if( iRandom == iResponse){
	printf("You guessed correct number");
	}
	else{
		printf("You guessed incorrect number, the correct number is %d", iRandom);
	}

	
}