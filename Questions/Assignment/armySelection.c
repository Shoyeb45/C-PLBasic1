//4.Army eligible

#include<stdio.h>

void main()
{
    int age ;
    float  height , weight ;
    
    printf("Enter your age:");
    scanf("%d", & age);
    printf("Enter your height(cm):");
    scanf("%f", & height);
    printf("Enter your weight(kg):");
    scanf("%f", & weight);
    
    if ( (age >= 21 && age <=27)&&(height >=157.5 && height<=195.3)&&(weight >=57.5 && weight<=86.6)){
           printf("\nYou are eligible for joining army.\nJai Hind");
    }else{
        printf("\nYou are not eligible for joining army.");
        printf("\nDon't lose hope, try again\n Jai Hind");
    }
}
