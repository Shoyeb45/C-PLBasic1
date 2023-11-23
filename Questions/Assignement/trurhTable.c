//Q 9

#include<stdio.h>

void main()
{
    int a,b,operation;
    printf("Enter number a(1 or 0):");
    scanf("%d",&a);
    printf("\nEnter number b(1 or 0):");
    scanf("%d",&b);
    printf("\n\tChoice of operation\nChoice 1: AND\nChoice 2: OR\nChoice 3: NOT\nChoice 4: NAND\nChoice 5: NOR.\nEnter operation you want to perform:");
    scanf(" %d",&operation);

    switch (operation)
    {
    case 1: printf("\nYou have chosen AND operation.\nSo a AND b = %d ",a & b);
    break;
    case 2: printf("\nYou have chosen OR operation.\nSo a OR b = %d ",a | b);
    break;
    case 3: printf("\nYou have chosen NOT operation.\nSo NOT a = %d ,NOT b = %d ",!a , !b);
    break;
    case 4: printf("\nYou have chosen NAND operation.\nSo a NAND b =%d ",!(a&b));
    break;    
    case 5: printf("\nYou have chosen NOR operation.\nSo a NOR b =%d ",!(a|b));
    break;
    default:printf("\nPlease choose valid operation number.");
    
        
    }


}