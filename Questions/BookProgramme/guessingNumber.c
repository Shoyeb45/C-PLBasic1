#include<stdio.h>

void main()
{
	int Number ;
	
	printf("Please guess the number between 1 to 10: ");
	scanf("%d", & Number);
	int Random = 0;
		Random = (srand() % 10)+1;
	if(isdigit(Number)){
				printf("Please enter number.");
	}else{
		if(Random == Number){
			printf("\nYou guessed the correct number.");
		}else{
			printf("\nYou guessed the incorrect number.");
		}

	}
}