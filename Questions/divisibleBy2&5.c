#include<stdio.h>

int main()
{
    printf("Enter number a:");
    int a;
    scanf("%d",&a);

    if( (a % 5 == 0)  &&  (a % 2 == 0) ){
        printf("The number %d is divisible by both 5 and 2\n",a);
    } else{
        printf("The number %d is not divisible by both 5 and 2\n", a);
    }

    
}