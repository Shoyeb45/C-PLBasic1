#include<stdio.h>

void main()
{
    int item ,response;;
    printf("\tHere's a menu:\nItem1:100\nItem2:200\nItem3:300\nItem4:350\nItem5:400\nItem6:450\n\t***");
    do
    {
      printf("\nPlease choose item from menu:");
      scanf("%d", & item);  
     
      printf("Do you wish to order any other item(Press 1 for yes and 0 for no):");
      scanf("%d", response);
      
      
    } 
    while (response>0);
  
  int a,b,c,d,e;
    switch(item){
        case 1:  a = 100;
        break;
        case 2:  b = 200;
        break;
        case 3:  c = 300;
        break;
        case 4:  c = 350;
        break;
        case 5:  d = 400;
        break;
        case 6:  e = 450;
        break;
        default:
        printf("\nPlease choose valid item.");

        if((a+b+c+d+e)>2000){
            printf("You don't have budget./n Unsafe");
        }else{
            printf("You have budget.\nYou are safe");
        }
    }
}