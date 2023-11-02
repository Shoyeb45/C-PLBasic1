

#include<stdio.h>

void main()
{
    char s  ;
    printf("Please enter your sex:");
    scanf("%c", & s);
    int age;
    printf("Please enter your age:");
    scanf("%d", & age);
    
    if( s == "m" || s == "f" || s == "t"){
        
        if( age >= 18) {
            printf("You are eligible for vote");
        }
        else{
            printf("You are not eligible for vote");
        }
        
    }
    if(s ){
        printf("Please type valid gender");
    }
}