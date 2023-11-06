#include<stdio.h>

void main()
{
    char s  ;
    printf("Please enter your sex:");
    scanf("%c", & s);
    
    int money = 780 ;
    
    if( s == 'm' || s == 'f' || s == 't' || s == 'M' || s == 'F' || s == 'T') {
    	int age;
    printf("Please enter your age:");
    scanf("%d", & age);
        
        if( age >= 58) {
            printf("You are senior citizen so you have 10 percent discount on ticket.\n");
            printf("So you have to pay : %d",((money)-(money/10)));
        }
        else{
            printf("You have to pay %d" , money);
        }
        
    }
    else{
        printf("Please type valid gender");
    }
}