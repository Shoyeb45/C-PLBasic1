#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the three number.:");
    scanf("%d %d %d",&a,&b,&c);
int min;

    if(a<b){
        if(a<c)
        min = a;
        else
        min = c;
    }else{
        if(b<c)
        min = b;
        else
        min = c;
    }
    printf("Minimum number is : %d",min);
}