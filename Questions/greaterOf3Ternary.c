#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter the three number:");
scanf("%d %d %d", &a, &b,&c);

int max = a >= b ? a : b>=c? b: c ;
printf("Maximum number is %d.", max);

}