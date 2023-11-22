//5.contset in c

#include<stdio.h>

void main()
{
    
    printf("Please enter your booking price:");
    int price;
    scanf("%d", & price);
    printf("\nPlease enter your card character:");
    char Card;
    scanf(" %c", & Card);

    if(price == 20000 && Card == 'A' ){
        printf("VVIP");
    }
    else if(price == 10000 && Card == 'B' ){
        printf("VIP");
    }
    else if(price == 5000 && Card == 'C' ){
        printf("Special County");
    }
    else if(price == 2000 && Card == 'D' ){
        printf("General County");
    }
    else{
        printf("\nplease enter valid booking price.");
    }
}