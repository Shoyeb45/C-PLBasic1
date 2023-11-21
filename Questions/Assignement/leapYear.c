//1.birth year is Leap Year or not

#include<stdio.h>

void main()
{
    int age;
    printf("Enter your birth year:");
    scanf("%d", & age);

    if( age % 4==0 && age % 400==0){
        printf("Your birth year is leap year.");
    }
    else if(age % 4==0){
        if(age % 400  != 0)
        printf("Your birth year is not leap year.");
        else
        printf("Your birth year is leap year.");
    }
    else{
        printf("Your birth year is not leap year.");
    }
}
