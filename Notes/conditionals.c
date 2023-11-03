#include<stdio.h>

void main()
{
    printf("Enter number a:");
    int a;
    scanf("%d", & a );

    if( a > 0 )
    printf("%d is greater than 1", a);

    if ( a < 1)
    printf("%d is lesser than 1", a);
}