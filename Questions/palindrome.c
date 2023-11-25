#include<stdio.h>

void main()
{
    int n,remainder , rev=0 ;
    printf("Please enter number:");
    scanf("%d", &n);

    for(int i=n ; i>1 ;i=i/10){
        remainder = i % 10;
        printf("%d",remainder);
    }

    printf("%d",  rev);



}