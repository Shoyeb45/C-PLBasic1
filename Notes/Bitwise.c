#include<stdio.h>

void main()
{
    int a = 6 ; //bit-1001
    int b = 8 ;  //bit- 1000

    //1.Bitwise and (&) : 1 if both are 1
      
printf("%d %d", a & b);

    //2.Bitwise or(|): 1 if any one of is 1
    int c = a | b ;
printf("%d", c);

    //3.Bitwise not(~) 
 a = ~a;
printf("%d",a);

    //4.Bitwise shift

    //we can't perform binary shift for negative integers
    b = b >> 1 ;
    printf("%d\n",b);

    c = 12 << 2 ;
    printf("%d", c);
}