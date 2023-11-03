#include<stdio.h>

void main()
{
    int a ;
    printf("Enter number which you want to check divisibility by 5:");
    scanf("%d", & a);

    if (a % 5 == 0)
    printf("The number is divisible by 5");

    if ( a % 5 != 0)
    printf("The number is not divisible by 5");
}