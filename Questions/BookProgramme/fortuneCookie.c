/*This is simple yet interesting program which use random function to generate random number and  
then predict your fortune , which is set up in switch.*/

#include<stdio.h>

void main()
{
    int Fortune_Number;
        Fortune_Number = (srand() % 4) + 1 ;
     
    switch(Fortune_Number){
        case 1: printf("\nYou will meet a new friend today.\n");
        break;
        case 2: printf("\nYou will enjoy a long and happy life.\n");
        break;
        case 3: printf("\nOpportunity knocks softly. Can you hear it?\n");
        break;
        case 4: printf("\nYou'll be financially rewarded for your good deeds.\n");
        break;
    } 

        pritnf("\nLucky lotto numbers: ");
                int Lucky_Number = (srand() % 49)+1 ;
         
            for( int i=1 ; i<=6 ; i++){
                printf("%d ",Lucky_Number);
            }


       
}
