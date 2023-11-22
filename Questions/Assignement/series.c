//Q 6. Series

#include<stdio.h>

void main()
{
    int n;
    printf("Enter number of terms:");
    scanf("%d", &n);

    int sum = 0;
    printf("\tSeries 1:\n");
for(int i=2 ; i<=2*n ; i=i+2){
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe sum is %d.\n",sum);

    printf("\tSeries 2:\n");

for(int i=11 ; i<=(10*n+1) ; i=i+10){
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe sum is %d.\n",sum);

    printf("\tSeries 3:\n");

for(int i=101 ; i<=(100*n+1) ; i=i+100){
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe sum is %d.\n",sum);    

}