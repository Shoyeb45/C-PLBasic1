//isdigit() : Returns true value if the input is digit(num values) else false.

#include<stdio.h>
#include<ctype.h>

void main()
{
//let's take character input from user 
	
char Response;
printf("Please enter character:");
scanf("%c", & Response);
int d=isdigit(Response);
if(isdigit(Response))
printf("please enter character");
else
printf("\tThank you");

printf("\n%d",d);

}