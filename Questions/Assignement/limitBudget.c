//Q 8

#include<stdio.h>

void main()
{
    int item ,response,totalMoney=0;

    printf("\tHere's a menu:\nItem 1:100\nItem 2:200\nItem 3:300\nItem 4:350\nItem 5:400\nItem 6:450\n\t***");
    do
    {
      printf("\nPlease choose item from menu:");
      scanf("%d", & item);  
     switch(item){
        case 1:  totalMoney += 100;
        break;
        case 2:  totalMoney += 200;
        break;
        case 3:  totalMoney += 300;
        break;
        case 4:  totalMoney += 350;
        break;
        case 5:  totalMoney += 400;
        break;
        case 6:  totalMoney += 450;
        break;
        default:
        printf("\nPlease choose valid item.\n");
     }
      printf("Do you wish to order any other item(Press 1 for yes and 0 for no):");
      scanf("%d",& response);
      
      
    } 
    while (response==1);
    printf("\nTotal payable amount:%d",totalMoney);

        if(totalMoney>2000){
            printf("\nYou don't have budget.\n Unsafe \nYour friend has to pay extra %d",totalMoney-2000);
        }else{
            printf("\nYou have budget.\nYou are safe");
        } 
    }
