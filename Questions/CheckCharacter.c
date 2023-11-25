#include<stdio.h>

void main()
{
    char x;
    printf("Enter a character:");
    scanf("%c", & x);

    if( x == 'a')
    printf("You entered small %c",x);
    else
    printf("You did not entered small 'a' ");
}