//5.contset in c

#include<stdio.h>

void main()
{
    
    printf("Please enter your score:");
    int a;
    scanf("%d", & a);

    if( a >= 90 && a <= 100 ){
        printf("A+");
    }
    else if(a >= 80 && a <= 89){
    	printf("A");
    }
    else if(a >= 70 && a <= 79){
    	printf("B+");
    }
    else if(a >=60 && a <=69){
    	printf("B");
    }
    else if(a >=50 && a <=59){
    	printf("C+");
    }   
    else if(a >=40 && a <=49){
    	printf("C");
    }
    else if(a<39){
    	printf("Not qualified for test.");
    }
    else{
        printf("please enter valid marks.");
    }
}