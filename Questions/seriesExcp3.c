#include<stdio.h>
void main()
{
    int n,sum=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1 ; i<=n ;i++){
        if(i%3!=0){
            printf("%d ",i);
        sum+=i;
        }
    }
    printf("sum= %d",sum);
}