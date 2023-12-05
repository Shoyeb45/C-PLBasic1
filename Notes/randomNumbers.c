//C program that prompts a user to guess a number from 1 to 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
	int iResponse, iRandom ;
	float y=1.2;
	double x = abs(y);
	printf("%lf",x);
	
 srand(time(NULL)) ;  //Taking number from 1 to 10
	iRandom=rand()%10+1;
	printf("Guess the number between 1 to 10:");
	scanf("%d", & iResponse);

	if( iRandom == iResponse){
	printf("You guessed correct number");
	}
	else{
		printf("You guessed incorrect number, the correct number is %d", iRandom);
	}

	
}