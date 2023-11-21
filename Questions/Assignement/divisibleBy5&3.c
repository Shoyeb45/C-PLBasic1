//3.number divisible by both 5 and 3.

#include<stdio.h>

int main()
{
    printf("Enter number a:");
    int a;
    scanf("%d",& a);

    if( (a % 3 == 0)  &&  (a % 5 == 0) ){
        printf("The number %d is divisible by both 5 and 3\n",a);
    } else{
        printf("The number %d is not divisible by both 5 and 3\n", a);
    }

    if ( a % 3 == 0){
    printf("The number %d is divisible by 3\n",a);
    }
    if( a % 5 == 0){
    printf("The number %d is divisible by 5",a);
    }
}