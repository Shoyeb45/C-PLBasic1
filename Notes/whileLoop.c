#include<stdio.h>

void main()
{
	int n , count = 1;
	printf("Enter the number till you want number printed:");
	scanf("%d", & n);
	
	while ( n > 0){
		printf("%d\n", count);
		++count;
		--n;
	}
}
