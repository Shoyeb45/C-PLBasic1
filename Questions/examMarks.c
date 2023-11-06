#include<stdio.h>

void main()
{
    printf("Please enter your marks:");
    int a;
    scanf("%d", & a);

    if( a >= 0 && a <= 5 ){
        printf("Need improvement");
    }
    else if(a >= 6 && a <= 10){
    	printf("You can do better");

    }
    else if(a >= 11 && a <= 15){
    	printf("good");

    }
    else if(a >=16 && a <=20){
    	printf("Very good");

    }
    else{
        printf("please enter valid marks.");
    }
}