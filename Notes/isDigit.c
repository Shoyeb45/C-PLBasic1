//isdigit() : Returns true value if the input is digit else false.

#include<stdio.h>
#include<ctype.h>

void main()
{
//let's take character input from user 
	
char Response;
printf("Please enter character:");
scanf("%c", & Response);

if(isdigit(Response))
printf("please enter character");
else
printf("\tThank you");

}