//Finding largest number between number 
#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    int max = a>b? a:b;
    printf("Largetst number is: %d ",max);
}