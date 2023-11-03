#include<stdio.h>

void main()
{
    printf("Enter number a:");
    int a;
    scanf("%d",&a);

    if( (a % 5 == 0)  &&  (a % 10 == 0) ){
        printf("The number %d is divisible by both 5 and 10",a);
    } else{
        printf("The number %d is not divisible by both 5 and 10", a);
    }

    if ( a % 5 == 0)
    printf("The number is divisible by 5");
    if( a % 10 == 0)
    printf("The number is divisible by 10");
}