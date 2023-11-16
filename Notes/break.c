#include<stdio.h>

void main()
{
	int counter;
	
	while(1){
		printf("\nEnter a number:");
		scanf("%d", & counter);
		
		if( counter < 0){
			printf("I am not positive");
			break;
		} else{
			printf("I am positive");
		}
	}
}