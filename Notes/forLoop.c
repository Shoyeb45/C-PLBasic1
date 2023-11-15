#include<stdio.h>

void main()
{
	int n ;
	printf("Enter number till you want odd numbers:");
	scanf("%d", & n);
	
	for ( int i=1 ; i<=n ; i+=2){
		printf("%d ", i);
	}
	
	
}