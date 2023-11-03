#include<stdio.h>

void main()
{
    int a;
    printf("Please enter the number:");
    scanf("%d", & a);

    if( a > 5 && a >10){
        printf("Entered number is greater than both 5 and 10\n");
    }else{
        printf("Entered number is less than 5\n");
    }
    if( a > 5 && a < 10){
            printf("Entered number is greater than 5 but less than 10");
    }else{
            printf("Entered number is greater than 10");
        }
}