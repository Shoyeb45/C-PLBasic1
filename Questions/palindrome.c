#include<stdio.h>

void main()
{
    int n,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=n ;i>0 ; i/=10 ){
        r=i%10;
        sum=(sum*10)+r;
    }
    printf("%d",sum);
}